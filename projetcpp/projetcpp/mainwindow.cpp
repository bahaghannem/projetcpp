#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlQuery>
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QGraphicsPixmapItem>
#include <QProcess>
#include <QDebug>
#include <QtWidgets>
#include <QPrinter>
#include <QPainter>
#include <QMovie>
#include <cstdlib>
#include <ctime>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QGraphicsRectItem>
#include <QGraphicsDropShadowEffect>
#include <QPropertyAnimation>
#include <QSqlQuery>
#include <QFont>
#include"form.h"
#include <QSqlQueryModel>
#include <QPieSeries>
#include <QPieSlice>
#include <QChart>
#include <QChartView>
#include <QSqlQuery>
#include"formation.h"
#include <QImage>
#include <QPixmap>
#include <QMessageBox>
#include <QFileDialog>

#include "qr.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    // Connexion du signal currentIndexChanged du comboBoxTri à la méthode de tri appropriée
        ui->tableView_6->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tableView_6->setSelectionMode(QAbstractItemView::ExtendedSelection);

        model = new QSqlQueryModel();


           // Connexion du changement de sélection du QComboBox au slot sortFormations
          // connect(ui->sortComboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(sortFormations(int)));
          // connect(ui->comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(sortFormations(int)));

        connect(ui->pushButtonSend, &QPushButton::clicked, this, &MainWindow::handleChat);




}

MainWindow::~MainWindow()
{
    delete ui;
}

//#########################################AJOUTER FORMATEUR ######################################################################

void MainWindow::on_add_clicked()
{
    QString nom = ui->nom->text();
    QString prenom = ui->prenom->text();
    QString email = ui->email->text();
    QString telephone = ui->tel->text();
    QString domaine = ui->domaine->text();
    QString description = ui->desc->text(); // Si description est QTextEdit

    // Vérification que tous les champs sont remplis
    if (nom.isEmpty() || prenom.isEmpty() || email.isEmpty() || telephone.isEmpty() || domaine.isEmpty() || description.isEmpty()) {
        QMessageBox::warning(this, "Champs manquants", "Veuillez remplir tous les champs.");
        return;
    }

    // Vérification du numéro de téléphone
    if (telephone.length() != 8 || !telephone.toLongLong()) {
        QMessageBox::warning(this, "Numéro de téléphone invalide", "Le numéro de téléphone doit comporter 8 chiffres.");
        return;
    }

    Formateur formateur(nom, prenom, email, telephone, domaine, description);
    bool success = formateur.ajouter();
    if (success) {
        // Réinitialiser les champs après l'ajout
        ui->nom->clear();
        ui->prenom->clear();
        ui->email->clear();
        ui->tel->clear();
        ui->domaine->clear();
        ui->desc->clear();

        ui->stackedWidget->setCurrentIndex(1);

        // Rafraîchir la vue pour afficher le formateur ajouté
        ui->tableView_6->setModel(formateur.afficher());
        QMessageBox::information(this, "Succès", "Formateur ajouté avec succès.");
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de l'ajout du formateur.");
    }
}


void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

}

void MainWindow::on_upp_clicked()
{
    Formateur formateur;
    ui->stackedWidget->setCurrentIndex(2);
    ui->tableView_17->setModel(formateur.afficher());

}

//#############################################MODIFIER FORMATEUR ###############################################################################
void MainWindow::on_tableView_17_doubleClicked(const QModelIndex &index)
{

        if (!index.isValid()) {
            return;
        }

        // Exemple de colonnes
        const int ID_COLUMN = 0;
        const int NOM_COLUMN = 1;
        const int PRENOM_COLUMN = 2;
        const int EMAIL_COLUMN = 3;
        const int TELEPHONE_COLUMN =4;
        const int DOMAINE_COLUMN = 5;
        const int DESCRIPTION_COLUMN = 6;

        // Récupération des données
        int idFormateur = index.sibling(index.row(), ID_COLUMN).data().toInt();
        QString nom = index.sibling(index.row(), NOM_COLUMN).data().toString();
        QString prenom = index.sibling(index.row(), PRENOM_COLUMN).data().toString();
        QString email = index.sibling(index.row(), EMAIL_COLUMN).data().toString();
        QString telephone = index.sibling(index.row(), TELEPHONE_COLUMN).data().toString();
        QString domaine = index.sibling(index.row(), DOMAINE_COLUMN).data().toString();
        QString description = index.sibling(index.row(), DESCRIPTION_COLUMN).data().toString();

        // Affichage des données dans les champs de saisie
        ui->idInput->setEnabled(false);
        ui->idInput->setText(QString::number(idFormateur)); // Convertit int en QString et l'affiche

        ui->lineEdit->setText(nom);
        ui->lineEdit_2->setText(prenom);
        ui->lineEdit_3->setText(email);
        ui->lineEdit_4->setText(telephone);
        ui->lineEdit_5->setText(domaine);
        ui->lineEdit_6->setText(description);


}

void MainWindow::on_saveFormateur_clicked()
{

    int idFormateur = ui->idInput->text().toInt();  // Suppose you have an input field for the ID
        QString nom = ui->lineEdit->text();
        QString prenom = ui->lineEdit_2->text();
        QString email = ui->lineEdit_3->text();
        QString telephone = ui->lineEdit_4->text();
        QString domaine = ui->lineEdit_5->text();
        QString description = ui->lineEdit_6->text();


        if (nom.isEmpty() || prenom.isEmpty() || email.isEmpty() || telephone.isEmpty() || domaine.isEmpty() || description.isEmpty()) {
            QMessageBox::critical(this, "Erreur", "Veuillez remplir tous les champs.");
            return;
        }
        if (telephone.length() != 8 || !telephone.toLongLong()) {
            QMessageBox::warning(this, "Numéro de téléphone invalide", "Le numéro de téléphone doit comporter 8 chiffres.");
            return;
        }

        Formateur formateur;
        bool success = formateur.modifier(idFormateur, nom, prenom, email, telephone, domaine, description);

        if (success) {

            QMessageBox::information(this, "Succès", "Formateur modifié avec succès.");
            ui->tableView_17->setModel(formateur.afficher()); // Refresh the model
            ui->idInput->clear();
             ui->lineEdit->clear();
                    ui->lineEdit_2->clear();
                    ui->lineEdit_3->clear();
                    ui->lineEdit_4->clear();
                    ui->lineEdit_5->clear();
                    ui->lineEdit_6->clear();
        } else {
            QMessageBox::critical(this, "Erreur", "Erreur lors de la modification du formateur.");
        }
}




//########################################supprimer#########################################################################

void MainWindow::on_pushButton_2_clicked()
{
        Formateur formateur;
        QModelIndexList selectedIndexes = ui->tableView_6->selectionModel()->selectedIndexes();
        if (selectedIndexes.isEmpty()) {
            qDebug() << "Button clicked";
            QMessageBox::warning(this, "Avertissement", "Veuillez sélectionner au moins un formateur à supprimer.");
            return;
        }

        int count = selectedIndexes.count() / 7;  // Ajustez '7' au nombre de colonnes par formateur
        QMessageBox::StandardButton reply = QMessageBox::question(this, "Confirmation", "Êtes-vous sûr de vouloir supprimer " + QString::number(count) + " formateur(s) sélectionné(s)?", QMessageBox::Yes|QMessageBox::No);
        if (reply == QMessageBox::No)
            return;

        QSet<int> formateursToDelete;
        foreach(const QModelIndex &index, selectedIndexes) {
            int idFormateur = index.sibling(index.row(), 0).data(Qt::DisplayRole).toInt();
            formateursToDelete.insert(idFormateur);
        }

        int successfulDeletions = 0;
        foreach(int idFormateur, formateursToDelete) {
            bool suppressionReussie = formateur.supprimer(idFormateur);
            if (suppressionReussie) {
                successfulDeletions++;
            }
        }

        if (successfulDeletions > 0) {
            qDebug() << "Button clicked";

            ui->tableView_6->setModel(formateur.afficher());
            QMessageBox::information(this, "Succès", QString::number(successfulDeletions) + " formateur(s) supprimé(s) avec succès.");
        } else {
            QMessageBox::critical(this, "Erreur", "Échec de la suppression des formateurs sélectionnés.");
        }


}
//################################################FORMATION#############################################



void MainWindow::on_pushButton_3_clicked()
{
    ui->Glob->setCurrentIndex(1);
    ui->stackedWidget_2->setCurrentIndex(0);

}

void MainWindow::on_pushButton_4_clicked()
{
    ui->Glob->setCurrentIndex(0);
    ui->stackedWidget->setCurrentIndex(0);



}

void MainWindow::on_add_2_clicked()
{
    QString nomFormation = ui->nom1->text();
    QString description = ui->desc1->text();  // Utilisez toPlainText() si c'est un QTextEdit
    QString prixStr = ui->prix1->text();
    QString lieu = ui->lieu1->text();
    QString idFormateurStr = ui->id->text();

    // Vérification que tous les champs sont remplis
    if (nomFormation.isEmpty() || description.isEmpty() || prixStr.isEmpty() || lieu.isEmpty() || idFormateurStr.isEmpty()) {
        QMessageBox::warning(this, "Champs manquants", "Veuillez remplir tous les champs.");
        return;
    }

    // Vérification que le prix est un nombre valide
    bool prixValid;
    int prix = prixStr.toInt(&prixValid);
    if (!prixValid || prix <= 0) {
        QMessageBox::warning(this, "Prix invalide", "Le prix doit être un nombre positif.");
        return;
    }

    // Vérification que l'ID du formateur est un nombre valide
    bool idFormateurValid;
    int idFormateur = idFormateurStr.toInt(&idFormateurValid);
    if (!idFormateurValid) {
        QMessageBox::warning(this, "ID Formateur invalide", "L'ID du formateur doit être un nombre.");
        return;
    }

    // Si toutes les validations sont correctes, ajouter la formation
    Formation formation(idFormateur, nomFormation, description, prix, lieu);
    bool success = formation.ajouter();
    if (success) {
        ui->stackedWidget_2->setCurrentIndex(2);

        // Rafraîchir la vue pour afficher la formation ajoutée
        ui->tableView_7->setModel(formation.afficher());
        QMessageBox::information(this, "Succès", "Formation ajoutée avec succès.");

        // Effacer les champs après ajout
        ui->nom1->clear();
        ui->desc1->clear();
        ui->prix1->clear();
        ui->lieu1->clear();
        ui->id->clear();
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de l'ajout de la formation.");
    }
}

void MainWindow::on_pushButton_5_clicked()
{

        Formation formation;
        QModelIndexList selectedIndexes = ui->tableView_7->selectionModel()->selectedIndexes();
        if (selectedIndexes.isEmpty()) {
            qDebug() << "Button clicked";
            QMessageBox::warning(this, "Avertissement", "Veuillez sélectionner au moins une formation à supprimer.");
            return;
        }

        int count = selectedIndexes.count() / 5;  // Ajustez '5' au nombre de colonnes par formation
        QMessageBox::StandardButton reply = QMessageBox::question(this, "Confirmation", "Êtes-vous sûr de vouloir supprimer " + QString::number(count) + " formation(s) sélectionnée(s)?", QMessageBox::Yes|QMessageBox::No);
        if (reply == QMessageBox::No)
            return;

        QSet<int> formationsToDelete;
        foreach(const QModelIndex &index, selectedIndexes) {
            int idFormation = index.sibling(index.row(), 0).data(Qt::DisplayRole).toInt();
            formationsToDelete.insert(idFormation);
        }

        int successfulDeletions = 0;
        foreach(int idFormation, formationsToDelete) {
            bool suppressionReussie = Formation::supprimer(idFormation);
            if (suppressionReussie) {
                successfulDeletions++;
            }
        }

        if (successfulDeletions > 0) {
            qDebug() << "Formations successfully deleted";

            ui->tableView_7->setModel(Formation::afficher()); // Assurez-vous que le modèle affiche les données correctes
            QMessageBox::information(this, "Succès", QString::number(successfulDeletions) + " formation(s) supprimée(s) avec succès.");
        } else {
            QMessageBox::critical(this, "Erreur", "Échec de la suppression des formations sélectionnées.");
        }


}






void MainWindow::on_modifierformation_clicked()
{

        int idFormation = ui->lineEdit_9->text().toInt();
        int idFormateur = ui->lineEdit_8->text().toInt();
        QString nomFormation = ui->lineEdit_10->text();
        QString description = ui->lineEdit_11->text();
        int prix = ui->lineEdit_12->text().toInt();
        QString lieu = ui->lineEdit_13->text();

        if (nomFormation.isEmpty() || description.isEmpty() || lieu.isEmpty()) {
            QMessageBox::critical(this, "Erreur", "Veuillez remplir tous les champs nécessaires.");
            return;
        }

        Formation formation;
        bool success = formation.modifier(idFormation, idFormateur, nomFormation, description, prix, lieu);
        if (success) {
            QMessageBox::information(this, "Succès", "Formation modifiée avec succès.");
            ui->tableView_18->setModel(formation.afficher());
            ui->lineEdit_9->clear();
            ui->lineEdit_8->clear();
            ui->lineEdit_10->clear();
            ui->lineEdit_11->clear();
            ui->lineEdit_12->clear();
            ui->lineEdit_13->clear();

        } else {
            QMessageBox::critical(this, "Erreur", "Erreur lors de la modification de la formation.");
        }


}

void MainWindow::on_tableView_18_doubleClicked(const QModelIndex &index)
{
    if (!index.isValid()) {
        return;
    }

    // Define column indices based on how they appear in your TableView
    const int ID_FORMATION_COLUMN = 0;
    const int ID_FORMATEUR_COLUMN = 1;
    const int NOM_FORMATION_COLUMN = 2;
    const int DESCRIPTION_COLUMN = 3;
    const int PRIX_COLUMN = 4;
    const int LIEU_COLUMN = 5;

    // Retrieve the data
    int idFormation = index.sibling(index.row(), ID_FORMATION_COLUMN).data().toInt();
    int idFormateur = index.sibling(index.row(), ID_FORMATEUR_COLUMN).data().toInt();
    QString nomFormation = index.sibling(index.row(), NOM_FORMATION_COLUMN).data().toString();
    QString description = index.sibling(index.row(), DESCRIPTION_COLUMN).data().toString();
    int prix = index.sibling(index.row(), PRIX_COLUMN).data().toInt();
    QString lieu = index.sibling(index.row(), LIEU_COLUMN).data().toString();


    ui->lineEdit_9->setEnabled(false);
    ui->lineEdit_8->setEnabled(false);
    // Display the data in the input fields
    ui->lineEdit_9->setText(QString::number(idFormation));
    ui->lineEdit_8->setText(QString::number(idFormateur));
    ui->lineEdit_10->setText(nomFormation);
    ui->lineEdit_11->setText(description);
    ui->lineEdit_12->setText(QString::number(prix));
    ui->lineEdit_13->setText(lieu);
}

//FORMATEUR
void MainWindow::on_upp_2_clicked()
{
    Formation formation;

  ui->stackedWidget_2->setCurrentIndex(1);
  ui->tableView_18->setModel(formation.afficher()); // Make sure this is the correct tableView name

}

void MainWindow::on_pushButton_6_clicked()
{
    Formateur formateur;
    ui->stackedWidget->setCurrentIndex(1);
    ui->tableView_6->setModel(formateur.afficher());


}

void MainWindow::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    Formateur formateur;
    ui->tableView_17->setModel(formateur.afficher());

}



//FORMATION

void MainWindow::on_pushButton_8_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(0);

}

void MainWindow::on_pushButton_9_clicked()
{
    Formation form;
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->tableView_7->setModel(form.afficher());


}

void MainWindow::on_pushButton_10_clicked()
{
    Formation form;
    ui->stackedWidget_2->setCurrentIndex(1);
    ui->tableView_18->setModel(form.afficher());


}





void MainWindow::on_sortComboBox_currentIndexChanged(int index)
{
    QSqlQuery query;
        if (index == 0) { // Croissant
            query.prepare("SELECT * FROM formations ORDER BY ID_FORMATION ASC");
        } else if (index == 1) { // Décroissant
            query.prepare("SELECT * FROM formations ORDER BY ID_FORMATION DESC");
        }

        if (query.exec()) {
            model->setQuery(query);
            ui->tableView_7->setModel(model);
        } else {
            QMessageBox::critical(this, "Erreur", "Erreur lors du tri des formations.");
        }
}

void MainWindow::on_pushButton_11_clicked()
{
    qDebug() << "Generating price distribution chart";

        QSqlQueryModel *model = new QSqlQueryModel();
        model->setQuery("SELECT PRIX_FORMATION FROM FORMATIONS"); // Remplacer 'FORMATIONS' par le nom de votre table

        QMap<QString, int> priceCategories;
        priceCategories["0-100"] = 0;
        priceCategories["101-200"] = 0;
        priceCategories["201-300"] = 0;
        priceCategories["301-400"] = 0;
        priceCategories["401-500"] = 0;

        for (int i = 0; i < model->rowCount(); ++i) {
            int price = model->record(i).value("prix").toInt();
            if (price <= 100) {
                priceCategories["0-100"]++;
            } else if (price <= 200) {
                priceCategories["101-200"]++;
            } else if (price <= 300) {
                priceCategories["201-300"]++;
            } else if (price <= 400) {
                priceCategories["301-400"]++;
            } else if (price <= 500) {
                priceCategories["401-500"]++;
            }
        }

        // Créer la série pour le graphique
        QPieSeries *series = new QPieSeries();
        for (auto &category : priceCategories.keys()) {
            if (priceCategories[category] > 0)
                series->append(category, priceCategories[category]);
        }

        // Configurer les labels des portions
        for (QPieSlice *slice : series->slices()) {
            double percentage = (slice->percentage() * 100.0);
            slice->setLabel(QString("%1 %2%").arg(slice->label()).arg(percentage, 0, 'f', 1));
            slice->setLabelVisible();
        }

        // Configurer et afficher le graphique
        QChart *chart = new QChart();
        chart->addSeries(series);
        chart->setTitle("Répartition des Formations par Prix");

        QChartView *chartView = new QChartView(chart);
        chartView->setRenderHint(QPainter::Antialiasing);
        chartView->resize(1000, 500);

        chart->legend()->hide();
        chartView->show();
}

void MainWindow::on_pushButton_12_clicked()
{
    // Sélectionner le fichier de destination
        QString fileName = QFileDialog::getSaveFileName(this, "Save PDF", "", "*.pdf");
        if (fileName.isEmpty()) return;

        // Configurer l'imprimante pour le format PDF
        QPrinter printer(QPrinter::PrinterResolution);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setPaperSize(QPrinter::A4);
        printer.setOutputFileName(fileName);

        // Récupérer le modèle de données de la table
        QAbstractItemModel *model = ui->tableView_7->model();
        if (!model) {
            QMessageBox::warning(this, "Erreur", "Aucune donnée à exporter.");
            return;
        }

        QTextDocument doc;
        QString htmlContent = "<h1 align='center'>Liste des Formations</h1><br><table border='1' cellspacing='0' cellpadding='4'>";

        htmlContent += "<tr>";
        for (int col = 0; col < model->columnCount(); ++col) {
            htmlContent += "<th>" + model->headerData(col, Qt::Horizontal).toString() + "</th>";
        }
        htmlContent += "</tr>";

        for (int row = 0; row < model->rowCount(); ++row) {
            htmlContent += "<tr>";
            for (int col = 0; col < model->columnCount(); ++col) {
                htmlContent += "<td>" + model->data(model->index(row, col)).toString() + "</td>";
            }
            htmlContent += "</tr>";
        }

        htmlContent += "</table>";
        doc.setHtml(htmlContent);

        // Imprimer le document dans le fichier PDF
        doc.print(&printer);

        QMessageBox::information(this, "Succès", "PDF généré avec succès.");
}

void MainWindow::on_pushButton_13_clicked()
{
    // Sélectionner le fichier de destination
        QString fileName = QFileDialog::getSaveFileName(this, "Save PDF", "", "*.pdf");
        if (fileName.isEmpty()) return;

        // Configurer l'imprimante pour le format PDF
        QPrinter printer(QPrinter::PrinterResolution);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setPaperSize(QPrinter::A4);
        printer.setOutputFileName(fileName);

        // Récupérer le modèle de données de la table
        QAbstractItemModel *model = ui->tableView_6->model();
        if (!model) {
            QMessageBox::warning(this, "Erreur", "Aucune donnée à exporter.");
            return;
        }

        QTextDocument doc;
        QString htmlContent = "<h1 align='center'>Liste des Formations</h1><br><table border='1' cellspacing='0' cellpadding='4'>";

        htmlContent += "<tr>";
        for (int col = 0; col < model->columnCount(); ++col) {
            htmlContent += "<th>" + model->headerData(col, Qt::Horizontal).toString() + "</th>";
        }
        htmlContent += "</tr>";

        for (int row = 0; row < model->rowCount(); ++row) {
            htmlContent += "<tr>";
            for (int col = 0; col < model->columnCount(); ++col) {
                htmlContent += "<td>" + model->data(model->index(row, col)).toString() + "</td>";
            }
            htmlContent += "</tr>";
        }

        htmlContent += "</table>";
        doc.setHtml(htmlContent);

        // Imprimer le document dans le fichier PDF
        doc.print(&printer);

        QMessageBox::information(this, "Succès", "PDF généré avec succès.");
}

void MainWindow::on_pushButton_14_clicked()
{
    qDebug() << "Generating formateur statistics based on phone numbers";

        // Créer le modèle pour récupérer les numéros de téléphone
        QSqlQueryModel *model = new QSqlQueryModel();
        model->setQuery("SELECT TELEPHONE_FORMATEUR FROM FORMATEUR"); // Remplacer 'FORMATEUR' par le nom de votre table

        // Définir les catégories de numéros de téléphone
        QMap<QString, int> phoneCategories;
        phoneCategories["Orange"] = 0;
        phoneCategories["Ooredoo"] = 0;
        phoneCategories["Autre"] = 0;

        // Compter les formateurs dans chaque catégorie
        for (int i = 0; i < model->rowCount(); ++i) {
            QString phone = model->record(i).value("telephone").toString();
            if (phone.startsWith("50")) {
                phoneCategories["Orange"]++;
            } else if (phone.startsWith("20")) {
                phoneCategories["Ooredoo"]++;
            } else {
                phoneCategories["Autre"]++;
            }
        }

        // Créer la série pour le graphique
        QPieSeries *series = new QPieSeries();
        for (auto &category : phoneCategories.keys()) {
            if (phoneCategories[category] > 0)
                series->append(category, phoneCategories[category]);
        }

        // Configurer les labels des portions
        for (QPieSlice *slice : series->slices()) {
            double percentage = (slice->percentage() * 100.0);
            slice->setLabel(QString("%1 %2%").arg(slice->label()).arg(percentage, 0, 'f', 1));
            slice->setLabelVisible();
        }

        // Configurer et afficher le graphique
        QChart *chart = new QChart();
        chart->addSeries(series);
        chart->setTitle("Répartition des Formateurs par Numéro de Téléphone");

        QChartView *chartView = new QChartView(chart);
        chartView->setRenderHint(QPainter::Antialiasing);
        chartView->resize(1000, 500);

        chart->legend()->hide();
        chartView->show();
}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    QSqlQuery query;
        if (index == 0) { // Croissant
            query.prepare("SELECT * FROM FORMATEUR ORDER BY ID_FORMATEUR ASC");
        } else if (index == 1) { // Décroissant
            query.prepare("SELECT * FROM FORMATEUR ORDER BY ID_FORMATEUR DESC");
        }

        if (query.exec()) {
            model->setQuery(query);
            ui->tableView_6->setModel(model);
        } else {
            QMessageBox::critical(this, "Erreur", "Erreur lors du tri des formations.");
        }
}


void MainWindow::on_pushButton_16_clicked()
{
    // Retrieve the text from each QLineEdit
        QString idFormateur = ui->lineEdit_14->text();
        QString idFormation = ui->lineEdit_16->text();
        QString prix = ui->lineEdit_18->text();


        // Combine the values into a single string
        QString combinedText = QString("ID Formateur: %1\nID Formation: %2\nPrix: %3")
            .arg(idFormateur)
            .arg(idFormation)
            .arg(prix);

        // Check if the combined text is empty
        if (combinedText.isEmpty()) {
            QMessageBox::warning(this, "Input Error", "Please enter data to generate QR Code.");
            return;
        }

        try {
            // Encode the combined text into a QR code
            qrcodegen::QrCode qr = qrcodegen::QrCode::encodeText(combinedText.toStdString().c_str(), qrcodegen::QrCode::Ecc::MEDIUM);

            // Set a scaling factor to make the QR code larger
            int scaleFactor = 6; // Increase this value to make the QR code larger
            int qrSize = qr.getSize();
            int imageSize = qrSize * scaleFactor;

            // Create a QImage to display the QR code
            QImage image(imageSize, imageSize, QImage::Format_RGB888);
            image.fill(qRgb(255, 255, 255)); // Fill the background with white

            for (int y = 0; y < qrSize; ++y) {
                for (int x = 0; x < qrSize; ++x) {
                    bool isBlack = qr.getModule(x, y);
                    int xStart = x * scaleFactor;
                    int yStart = y * scaleFactor;
                    QColor color = isBlack ? Qt::black : Qt::white;
                    for (int dy = 0; dy < scaleFactor; ++dy) {
                        for (int dx = 0; dx < scaleFactor; ++dx) {
                            image.setPixel(xStart + dx, yStart + dy, color.rgb());
                        }
                    }
                }

              }

            // Display the QR code in the QLabel
            ui->qr->setPixmap(QPixmap::fromImage(image));
        } catch (const std::exception &e) {
            QMessageBox::critical(this, "Error", e.what());
        }
}


void MainWindow::on_tableView_19_doubleClicked(const QModelIndex &index)
{
    if (!index.isValid()) {
        return;
    }

    // Define column indices based on how they appear in your TableView
    const int ID_FORMATION_COLUMN = 0;
    const int ID_FORMATEUR_COLUMN = 1;
    const int NOM_FORMATION_COLUMN = 2;
    const int DESCRIPTION_COLUMN = 3;
    const int PRIX_COLUMN = 4;
    const int LIEU_COLUMN = 5;

    // Retrieve the data
    int idFormation = index.sibling(index.row(), ID_FORMATION_COLUMN).data().toInt();
    int idFormateur = index.sibling(index.row(), ID_FORMATEUR_COLUMN).data().toInt();
    QString nomFormation = index.sibling(index.row(), NOM_FORMATION_COLUMN).data().toString();
    QString description = index.sibling(index.row(), DESCRIPTION_COLUMN).data().toString();
    int prix = index.sibling(index.row(), PRIX_COLUMN).data().toInt();
    QString lieu = index.sibling(index.row(), LIEU_COLUMN).data().toString();



    // Display the data in the input fields
    ui->lineEdit_16->setText(QString::number(idFormation));
    ui->lineEdit_14->setText(QString::number(idFormateur));
    ui->lineEdit_15->setText(nomFormation);
    ui->lineEdit_17->setText(description);
    ui->lineEdit_18->setText(QString::number(prix));
    ui->lineEdit_19->setText(lieu);

}

void MainWindow::on_pushButton_17_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(3);
    Formation formation;
  ui->tableView_19->setModel(formation.afficher()); // Make sure this is the correct tableView name

}








void MainWindow::handleChat()
{
    QString userInput = ui->lineEditChatInput->text();

    if (userInput.isEmpty()) {
        return;
    }

    // Afficher le message de l'utilisateur dans le QTextEdit
    ui->textEditChatHistory->append("Vous: " + userInput);

    // Logique simple du chatbot
    std::string response;
    std::string lowerInput = userInput.toLower().toStdString();

    if (lowerInput == "bonjour") {
        response = "Bonjour ! Comment puis-je vous aider ?";
    } else if (lowerInput == "aide") {
        response = "Vous pouvez me demander de l'aide pour naviguer dans l'application.";
    } else if (lowerInput == "merci") {
        response = "De rien ! Si vous avez d'autres questions, n'hésitez pas.";
    }
    else if (lowerInput == "connecter") {
    response = " Vous pouvez vous connecter en utilisant votre identifiant et mot de passe dans la page de connexion.";
}
    else if (lowerInput == "ajouter") {
       response = " Accédez à la section Gestion des formateur et cliquez sur Ajouter un formateur. Remplissez les informations requises et sauvegardez..";
   }

    else {
        response = "Je ne comprends pas cette demande.";
    }

    // Afficher la réponse du chatbot dans le QTextEdit
    ui->textEditChatHistory->append("ChatBot: " + QString::fromStdString(response));

    // Effacer le QLineEdit
    ui->lineEditChatInput->clear();
}

void MainWindow::on_pushButton_18_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);

}

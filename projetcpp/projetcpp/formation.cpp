#include "formation.h"

// Constructor implementation without date
Formation::Formation(int idFormateur, const QString &nomFormation, const QString &description,
                     int prix, const QString &lieu)
    : idFormateur(idFormateur), nomFormation(nomFormation), description(description),
      prix(prix), lieu(lieu) {}

bool Formation::ajouter() {
    QSqlQuery query;
    query.prepare("INSERT INTO Formations (id_formateur, nom_formation, description_formation, prix_formation, lieu_formation) "
                  "VALUES (:idFormateur, :nom, :description, :prix, :lieu)");
    query.bindValue(":idFormateur", idFormateur);
    query.bindValue(":nom", nomFormation);
    query.bindValue(":description", description);
    query.bindValue(":prix", prix);
    query.bindValue(":lieu", lieu);

    if (!query.exec()) {
        qDebug() << "Error adding formation:" << query.lastError().text();
        return false;
    }
    return true;
}

QSqlQueryModel * Formation::afficher() {
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM Formations");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom de la Formation"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Description"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Prix"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Lieu"));

    return model;
}
bool Formation::supprimer(int idFormation) {
    QSqlQuery query;
    query.prepare("DELETE FROM FORMATIONS WHERE id_formation = :id_formation");
    query.bindValue(":id_formation", idFormation);

    if (!query.exec()) {
        qDebug() << "delete formation failed: " << query.lastError();
        return false;
    }
    return true;
}


bool Formation::modifier(int idFormation, int idFormateur, const QString& nom, const QString& description,
                         int prix, const QString& lieu) {
    QSqlQuery query;
    query.prepare("UPDATE Formations SET id_formateur = :idFormateur, nom_formation = :nom, description_formation = :description, "
                  "prix_formation = :prix, lieu_formation = :lieu WHERE id_formation = :idFormation");

    query.bindValue(":idFormation", idFormation);
    query.bindValue(":idFormateur", idFormateur);
    query.bindValue(":nom", nom);
    query.bindValue(":description", description);
    query.bindValue(":prix", prix);
    query.bindValue(":lieu", lieu);

    return query.exec();
}

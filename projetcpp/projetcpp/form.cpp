#include "form.h"
#include <QSqlQuery>
#include <QDebug>

Formateur::Formateur(QString nom_formateur, QString prenom_formateur, QString email_formateur, QString telephone_formateur, QString domaine_expertise, QString description)
{
    this->nom_formateur = nom_formateur;
    this->prenom_formateur = prenom_formateur;
    this->email_formateur = email_formateur;
    this->telephone_formateur = telephone_formateur;
    this->domaine_expertise = domaine_expertise;
    this->description = description;
}

bool Formateur::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO FORMATEUR (nom_formateur, prenom_formateur, email_formateur, telephone_formateur, domaine_expertise, description) "
                  "VALUES (:nom_formateur, :prenom_formateur, :email_formateur, :telephone_formateur, :domaine_expertise, :description)");
    query.bindValue(":nom_formateur", nom_formateur);
    query.bindValue(":prenom_formateur", prenom_formateur);
    query.bindValue(":email_formateur", email_formateur);
    query.bindValue(":telephone_formateur", telephone_formateur);
    query.bindValue(":domaine_expertise", domaine_expertise);
    query.bindValue(":description", description);

    return query.exec();
}

QSqlQueryModel * Formateur::afficher()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM FORMATEUR");
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prénom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Email"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Téléphone"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Domaine d'Expertise"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Description"));

    return model;
}

bool Formateur::supprimer(int id_formateur)
{
    QSqlQuery query;
    query.prepare("DELETE FROM FORMATEUR WHERE id_formateur = :id_formateur");
    query.bindValue(":id_formateur", id_formateur);
    return query.exec();
}

bool Formateur::modifier(int id, QString nom, QString prenom, QString email, QString telephone, QString domaine, QString desc)
{
    QSqlQuery query;
    query.prepare("UPDATE FORMATEUR SET nom_formateur = :nom, prenom_formateur = :prenom, email_formateur = :email, telephone_formateur = :telephone, domaine_expertise = :domaine, description = :desc WHERE id_formateur = :id");
    query.bindValue(":id", id);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":email", email);
    query.bindValue(":telephone", telephone);
    query.bindValue(":domaine", domaine);
    query.bindValue(":desc", desc);

    return query.exec();
}

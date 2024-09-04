#ifndef FORMATEUR_H
#define FORMATEUR_H

#include <QString>
#include <QMainWindow>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlRecord>

class Formateur
{
    int id_formateur;
    QString nom_formateur;
    QString prenom_formateur;
    QString email_formateur;
    QString telephone_formateur;
    QString domaine_expertise;
    QString description;

public:
    Formateur() {}
    Formateur(QString, QString, QString, QString, QString, QString);

    // Getters
    int getIdFormateur() const { return id_formateur; }
    QString getNomFormateur() const { return nom_formateur; }
    QString getPrenomFormateur() const { return prenom_formateur; }
    QString getEmailFormateur() const { return email_formateur; }
    QString getTelephoneFormateur() const { return telephone_formateur; }
    QString getDomaineExpertise() const { return domaine_expertise; }
    QString getDescription() const { return description; }

    // Setters
    void setIdFormateur(int id) { id_formateur = id; }
    void setNomFormateur(QString nom) { nom_formateur = nom; }
    void setPrenomFormateur(QString prenom) { prenom_formateur = prenom; }
    void setEmailFormateur(QString email) { email_formateur = email; }
    void setTelephoneFormateur(QString telephone) { telephone_formateur = telephone; }
    void setDomaineExpertise(QString domaine) { domaine_expertise = domaine; }
    void setDescription(QString desc) { description = desc; }

    // Database methods
    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int id);
    bool modifier(int, QString, QString, QString, QString, QString, QString);


};

#endif // FORMATEUR_H

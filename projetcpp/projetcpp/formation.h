#ifndef FORMATION_H
#define FORMATION_H

#include <QString>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QString>
#include <QMainWindow>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlRecord>

class Formation {
public:
    // Constructor without date
    Formation(int idFormateur, const QString &nomFormation, const QString &description,
              int prix, const QString &lieu);
    Formation(){};
    // Method to add formation to database
    bool ajouter();
    static QSqlQueryModel * afficher();
    // Method to delete a formation
      static bool supprimer(int idFormation);
      bool modifier(int idFormation, int idFormateur, const QString& nom, const QString& description,
                     int prix, const QString& lieu);


private:
    int idFormateur;
    QString nomFormation;
    QString description;
    int prix;
    QString lieu;
};

#endif // FORMATION_H

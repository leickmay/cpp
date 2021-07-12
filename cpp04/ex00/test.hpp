#ifndef TEST_HPP
# define TEST_HPP

class Vehicule
{
    public:
	Vehicule(int prix);
    virtual void affiche() const;  //Affiche une description du Vehicule
	virtual ~Vehicule();

    protected:
    int m_prix;  //Chaque véhicule a un prix
};

class Voiture : public Vehicule //Une Voiture EST UN Vehicule
{
    public:
	Voiture(int prix, int portes);
    virtual void affiche() const;
	virtual ~Voiture();

    private:
    int m_portes;  //Le nombre de portes de la voiture
};

class Moto : public Vehicule  //Une Moto EST UN Vehicule
{
    public:
	Moto(int prix, double vitesse);
    virtual void affiche() const;
	virtual ~Moto();
 
    private:
    double m_vitesse;  //La vitesse maximale de la moto
};
Vehicule::Vehicule(int prix)
    :m_prix(prix)
{}

void Vehicule::affiche() const
//J'en profite pour modifier un peu les fonctions d'affichage
{
    std::cout << "Ceci est un vehicule coutant " << m_prix << " euros." << std::endl;
}

Vehicule::~Vehicule() //Même si le destructeur ne fait rien, on doit le mettre !
{}

Voiture::Voiture(int prix, int portes)
    :Vehicule(prix), m_portes(portes)   
{}

void Voiture::affiche() const
{
    std::cout << "Ceci est une voiture avec " << m_portes << " portes et coutant " << m_prix << " euros." << std::endl;
}

Voiture::~Voiture()
{}

Moto::Moto(int prix, double vitesseMax)
    :Vehicule(prix), m_vitesse(vitesseMax)
{}

void Moto::affiche() const
{
    std::cout << "Ceci est une moto allant a " << m_vitesse << " km/h et coutant " << m_prix << " euros." << std::endl;
}

Moto::~Moto()
{}

#endif
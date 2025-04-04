#pragma once

# include <iostream>
# include <string.h>
# include <ctype.h>

class Sitio
{
	private:
		bool ocupado;
	
	public:
		Sitio(void);
		~Sitio(void);
		void set_bool(void);
};

class Cluster
{
	private:
		int		size;
		Sitio	*seat;

	public:
		void printCluster(void);
		Cluster(void);
		Cluster(int size);
		~Cluster(void);
};

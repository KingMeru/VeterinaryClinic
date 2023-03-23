OPT = -Wall

a04: Identifiable.o Customer.o Animal.o  Clinic.o Collection.o IdArray.o IdList.o Control.o main.o View.o
	g++ $(OPT) -o a04 Identifiable.o Customer.o Animal.o Clinic.o Collection.o IdArray.o IdList.o Control.o main.o View.o

main.o:	main.cc
	g++ $(OPT) -c main.cc

View.o:	View.cc View.h
	g++ $(OPT) -c View.cc

Control.o: Control.cc Control.h
	g++ $(OPT) -c Control.cc

Identifiable.o: Identifiable.cc Identifiable.h
	g++ $(OPT) -c Identifiable.cc

Clinic.o: Clinic.cc Clinic.h
	g++ $(OPT) -c Clinic.cc

Collection.o: Collection.cc Collection.h
	g++ $(OPT) -c Collection.cc

Customer.o: Customer.cc Customer.h
	g++ $(OPT) -c Customer.cc

Animal.o:  Animal.cc Animal.h
	g++ $(OPT) -c Animal.cc

IdArray.o: IdArray.cc IdArray.h
	g++ $(OPT) -c IdArray.cc

IdList.o: IdList.cc IdList.h
	g++ $(OPT) -c IdList.cc

clean:
	rm -f *.o a04

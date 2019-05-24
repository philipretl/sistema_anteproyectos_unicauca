/*Declaracion de datos a transferir entre el cliente y el servidor*/
/*Declaracion de constantes*/

const MAXMOD = 12;
const MAXTITULO = 40;
const MAXCODIGO = 3;
const MAXANT = 30;
const MAXCONC = 20;
const MAXUSUARIO = 10;
const MAXNOM = 40;


typedef struct anteproyecto *proxAnteproyecto;
typedef struct evaluador *proxEvaluador;

struct anteproyecto{
	char modalidad[MAXMOD];
	char titulo[MAXTITULO];
	int codigo_anteproyecto;
	char estudiante1[MAXNOM];
	char estudiante2[MAXNOM];
	char director[MAXNOM];
	char codirector[MAXNOM];
	char fecha_registro[MAXUSUARIO];
	char fecha_aprovacion[MAXUSUARIO];
	int concepto;
	int estado;
	int numRevision;
	proxAnteproyecto nodoSiguiente;
};
struct evaluador{
	char codigo_anteproyecto[MAXMOD];
	char evaluador1[MAXANT];
	char evaluador2[MAXANT];
};
struct modConceptoEvaluadores{
	char codigo_anteproyecto[MAXMOD];
	char concepto1[MAXCONC];
	char evaluador1[MAXANT];
	char concepto2[MAXCONC];
	char evaluador2[MAXANT];
	char fechaMod[MAXUSUARIO];
};

struct ingConcepto{
	int codigoAnteproyecto;
	char concepto[MAXCONC];
	char usuario[MAXUSUARIO];
};

program controlAnteproyectos{
	version controlAnteproyectos_version{
		bool registrar(anteproyecto objanteproyecto)=1;
		bool asignar(evaluador objevaluador)=2;
		anteproyecto consultarAnteproyecto(int codigo_anteproyecto)=3;
		proxAnteproyecto listarAnteproyectos(void)=4;
		bool modificarConceptoJefe(ingConcepto nuevoConcepto)=5;
		bool modificarConceptoEvaluador(ingConcepto nuevoConcepto)=6;
	
	}=1;
}=0x20000002;

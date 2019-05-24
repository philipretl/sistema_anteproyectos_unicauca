/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _CONTROLANTEPROYECTOS_H_RPCGEN
#define _CONTROLANTEPROYECTOS_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

#define MAXMOD 12
#define MAXTITULO 40
#define MAXCODIGO 3
#define MAXANT 30
#define MAXCONC 20
#define MAXUSUARIO 10
#define MAXNOM 40

typedef struct anteproyecto *proxAnteproyecto;

typedef struct evaluador *proxEvaluador;

struct anteproyecto {
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
typedef struct anteproyecto anteproyecto;

struct evaluador {
	char codigo_anteproyecto[MAXMOD];
	char evaluador1[MAXANT];
	char evaluador2[MAXANT];
};
typedef struct evaluador evaluador;

struct modConceptoEvaluadores {
	char codigo_anteproyecto[MAXMOD];
	char concepto1[MAXCONC];
	char evaluador1[MAXANT];
	char concepto2[MAXCONC];
	char evaluador2[MAXANT];
	char fechaMod[MAXUSUARIO];
};
typedef struct modConceptoEvaluadores modConceptoEvaluadores;

struct ingConcepto {
	int codigoAnteproyecto;
	char concepto[MAXCONC];
	char usuario[MAXUSUARIO];
};
typedef struct ingConcepto ingConcepto;

#define controlAnteproyectos 0x20000002
#define controlAnteproyectos_version 1

#if defined(__STDC__) || defined(__cplusplus)
#define registrar 1
extern  bool_t * registrar_1(anteproyecto *, CLIENT *);
extern  bool_t * registrar_1_svc(anteproyecto *, struct svc_req *);
#define asignar 2
extern  bool_t * asignar_1(evaluador *, CLIENT *);
extern  bool_t * asignar_1_svc(evaluador *, struct svc_req *);
#define consultarAnteproyecto 3
extern  anteproyecto * consultaranteproyecto_1(int *, CLIENT *);
extern  anteproyecto * consultaranteproyecto_1_svc(int *, struct svc_req *);
#define listarAnteproyectos 4
extern  proxAnteproyecto * listaranteproyectos_1(void *, CLIENT *);
extern  proxAnteproyecto * listaranteproyectos_1_svc(void *, struct svc_req *);
#define modificarConceptoJefe 5
extern  bool_t * modificarconceptojefe_1(ingConcepto *, CLIENT *);
extern  bool_t * modificarconceptojefe_1_svc(ingConcepto *, struct svc_req *);
#define modificarConceptoEvaluador 6
extern  bool_t * modificarconceptoevaluador_1(ingConcepto *, CLIENT *);
extern  bool_t * modificarconceptoevaluador_1_svc(ingConcepto *, struct svc_req *);
extern int controlanteproyectos_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define registrar 1
extern  bool_t * registrar_1();
extern  bool_t * registrar_1_svc();
#define asignar 2
extern  bool_t * asignar_1();
extern  bool_t * asignar_1_svc();
#define consultarAnteproyecto 3
extern  anteproyecto * consultaranteproyecto_1();
extern  anteproyecto * consultaranteproyecto_1_svc();
#define listarAnteproyectos 4
extern  proxAnteproyecto * listaranteproyectos_1();
extern  proxAnteproyecto * listaranteproyectos_1_svc();
#define modificarConceptoJefe 5
extern  bool_t * modificarconceptojefe_1();
extern  bool_t * modificarconceptojefe_1_svc();
#define modificarConceptoEvaluador 6
extern  bool_t * modificarconceptoevaluador_1();
extern  bool_t * modificarconceptoevaluador_1_svc();
extern int controlanteproyectos_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_proxAnteproyecto (XDR *, proxAnteproyecto*);
extern  bool_t xdr_proxEvaluador (XDR *, proxEvaluador*);
extern  bool_t xdr_anteproyecto (XDR *, anteproyecto*);
extern  bool_t xdr_evaluador (XDR *, evaluador*);
extern  bool_t xdr_modConceptoEvaluadores (XDR *, modConceptoEvaluadores*);
extern  bool_t xdr_ingConcepto (XDR *, ingConcepto*);

#else /* K&R C */
extern bool_t xdr_proxAnteproyecto ();
extern bool_t xdr_proxEvaluador ();
extern bool_t xdr_anteproyecto ();
extern bool_t xdr_evaluador ();
extern bool_t xdr_modConceptoEvaluadores ();
extern bool_t xdr_ingConcepto ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_CONTROLANTEPROYECTOS_H_RPCGEN */
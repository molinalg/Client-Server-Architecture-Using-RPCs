/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _EJEV3_H_RPCGEN
#define _EJEV3_H_RPCGEN

#include <rpc/rpc.h>

#include <pthread.h>

#ifdef __cplusplus
extern "C" {
#endif


struct tuple {
	int key;
	char *value1;
	int value2;
	double value3;
};
typedef struct tuple tuple;

typedef tuple t_tuple;

struct service {
	int status;
	t_tuple content;
};
typedef struct service service;

typedef service t_service;

struct set_value_tuples_1_argument {
	int key;
	char *value1;
	int value2;
	double value3;
};
typedef struct set_value_tuples_1_argument set_value_tuples_1_argument;

struct modify_value_tuples_1_argument {
	int key;
	char *value1;
	int value2;
	double value3;
};
typedef struct modify_value_tuples_1_argument modify_value_tuples_1_argument;

struct copy_key_tuples_1_argument {
	int key1;
	int key2;
};
typedef struct copy_key_tuples_1_argument copy_key_tuples_1_argument;

#define TUPLAS 99
#define TUPLASVER 1

#if defined(__STDC__) || defined(__cplusplus)
#define init_tuples 1
extern  enum clnt_stat init_tuples_1(int *, CLIENT *);
extern  bool_t init_tuples_1_svc(int *, struct svc_req *);
#define set_value_tuples 2
extern  enum clnt_stat set_value_tuples_1(int , char *, int , double , int *, CLIENT *);
extern  bool_t set_value_tuples_1_svc(int , char *, int , double , int *, struct svc_req *);
#define get_value_tuples 3
extern  enum clnt_stat get_value_tuples_1(int , t_service *, CLIENT *);
extern  bool_t get_value_tuples_1_svc(int , t_service *, struct svc_req *);
#define modify_value_tuples 4
extern  enum clnt_stat modify_value_tuples_1(int , char *, int , double , int *, CLIENT *);
extern  bool_t modify_value_tuples_1_svc(int , char *, int , double , int *, struct svc_req *);
#define delete_key_tuples 5
extern  enum clnt_stat delete_key_tuples_1(int , int *, CLIENT *);
extern  bool_t delete_key_tuples_1_svc(int , int *, struct svc_req *);
#define exist_tuples 6
extern  enum clnt_stat exist_tuples_1(int , int *, CLIENT *);
extern  bool_t exist_tuples_1_svc(int , int *, struct svc_req *);
#define copy_key_tuples 7
extern  enum clnt_stat copy_key_tuples_1(int , int , int *, CLIENT *);
extern  bool_t copy_key_tuples_1_svc(int , int , int *, struct svc_req *);
extern int tuplas_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define init_tuples 1
extern  enum clnt_stat init_tuples_1();
extern  bool_t init_tuples_1_svc();
#define set_value_tuples 2
extern  enum clnt_stat set_value_tuples_1();
extern  bool_t set_value_tuples_1_svc();
#define get_value_tuples 3
extern  enum clnt_stat get_value_tuples_1();
extern  bool_t get_value_tuples_1_svc();
#define modify_value_tuples 4
extern  enum clnt_stat modify_value_tuples_1();
extern  bool_t modify_value_tuples_1_svc();
#define delete_key_tuples 5
extern  enum clnt_stat delete_key_tuples_1();
extern  bool_t delete_key_tuples_1_svc();
#define exist_tuples 6
extern  enum clnt_stat exist_tuples_1();
extern  bool_t exist_tuples_1_svc();
#define copy_key_tuples 7
extern  enum clnt_stat copy_key_tuples_1();
extern  bool_t copy_key_tuples_1_svc();
extern int tuplas_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_tuple (XDR *, tuple*);
extern  bool_t xdr_t_tuple (XDR *, t_tuple*);
extern  bool_t xdr_service (XDR *, service*);
extern  bool_t xdr_t_service (XDR *, t_service*);
extern  bool_t xdr_set_value_tuples_1_argument (XDR *, set_value_tuples_1_argument*);
extern  bool_t xdr_modify_value_tuples_1_argument (XDR *, modify_value_tuples_1_argument*);
extern  bool_t xdr_copy_key_tuples_1_argument (XDR *, copy_key_tuples_1_argument*);

#else /* K&R C */
extern bool_t xdr_tuple ();
extern bool_t xdr_t_tuple ();
extern bool_t xdr_service ();
extern bool_t xdr_t_service ();
extern bool_t xdr_set_value_tuples_1_argument ();
extern bool_t xdr_modify_value_tuples_1_argument ();
extern bool_t xdr_copy_key_tuples_1_argument ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_EJEV3_H_RPCGEN */
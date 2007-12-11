#include "gec.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SPECIAL [XM_NAMESPACE].make */
T0* T1432c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T1432)+a1*sizeof(T0*));
	*(T1432*)C = GE_default1432;
	((T1432*)(C))->z1 = a1;
	return C;
}

/* KL_SPECIAL_ROUTINES [XM_NAMESPACE].default_create */
T0* T1435c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T1435));
	*(T1435*)C = GE_default1435;
	return C;
}

/* XM_DOCUMENT.make */
T0* T99c15(void)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T99));
	*(T99*)C = GE_default99;
	t1 = (T99f7(C));
	T99f16(C, ge1226ov10442, t1);
	return C;
}

/* XM_DOCUMENT.make_with_root_named */
void T99f16(T0* C, T0* a1, T0* a2)
{
	((T99*)(C))->a1 = T100c29(C, a1, a2);
	T99f17(C);
	T99f18(C, ((T99*)(C))->a1);
}

/* XM_DOCUMENT.force_last */
void T99f18(T0* C, T0* a1)
{
	T99f19(C, a1);
	T99f18p1(C, a1);
}

/* XM_DOCUMENT.force_last */
void T99f18p1(T0* C, T0* a1)
{
	T0* l1 = 0;
	T1 t1;
	t1 = (T99f13(C));
	if (t1) {
		((T99*)(C))->a3 = T1406c3(a1);
		((T99*)(C))->a4 = ((T99*)(C))->a3;
		((T99*)(C))->a5 = (T6)(GE_int32(1));
	} else {
		l1 = ((T99*)(C))->a4;
		((T99*)(C))->a4 = T1406c3(a1);
		T1406f4(GE_void(l1), ((T99*)(C))->a4);
		((T99*)(C))->a5 = ((T6)((((T99*)(C))->a5)+((T6)(GE_int32(1)))));
	}
}

/* DS_LINKABLE [XM_NODE].make */
T0* T1406c3(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T1406));
	*(T1406*)C = GE_default1406;
	((T1406*)(C))->a2 = a1;
	return C;
}

/* XM_DOCUMENT.is_empty */
T1 T99f13(T0* C)
{
	T1 R = 0;
	R = ((((T99*)(C))->a5)==((T6)(GE_int32(0))));
	return R;
}

/* XM_DOCUMENT.before_addition */
void T99f19(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		t2 = (T289x10467(GE_void(a1)));
		t1 = ((t2)!=(EIF_VOID));
		if (t1) {
			t2 = (T289x10467(GE_void(a1)));
			if (((T0*)(GE_void(t2)))->id==99) {
				T99f21(t2, a1);
			} else {
				T100f39(t2, a1);
			}
		}
		T289x10475T0(GE_void(a1), C);
	}
}

/* XM_ELEMENT.equality_delete */
void T100f39(T0* C, T0* a1)
{
	T0* l1 = 0;
	T1 t1;
	T0* t2;
	l1 = (T100f8(C));
	T288f10(GE_void(l1));
	t1 = (((T288*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T288f8(GE_void(l1)));
		t1 = ((t2)==(a1));
		if (t1) {
			T288f14(GE_void(l1));
		} else {
			T288f11(GE_void(l1));
		}
		t1 = (((T288*)(GE_void(l1)))->a1);
	}
}

/* DS_LINKED_LIST_CURSOR [XM_NODE].remove */
void T288f14(T0* C)
{
	if (((T0*)(GE_void(((T288*)(C))->a4)))->id==100) {
		T100f31(((T288*)(C))->a4, C);
	} else {
		T99f26(((T288*)(C))->a4, C);
	}
}

/* XM_DOCUMENT.remove_at_cursor */
void T99f26(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	t1 = (T288f6(a1));
	if (t1) {
		T99f30(C);
	} else {
		t1 = (T288f7(a1));
		if (t1) {
			T99f31(C);
		} else {
			l1 = (((T288*)(a1))->a2);
			l2 = (((T1406*)(GE_void(l1)))->a1);
			t1 = ((l2)==(((T99*)(C))->a4));
			if (t1) {
				T99f32(C, l1);
			} else {
				t2 = (((T1406*)(GE_void(l2)))->a1);
				T1406f4(GE_void(l1), t2);
			}
			t2 = (((T1406*)(GE_void(l2)))->a2);
			T1406f6(GE_void(l1), t2);
			((T99*)(C))->a5 = ((T6)((((T99*)(C))->a5)-((T6)(GE_int32(1)))));
			T99f33(C, l2, l1);
		}
	}
}

/* XM_DOCUMENT.move_all_cursors */
void T99f33(T0* C, T0* a1, T0* a2)
{
	T0* l1 = 0;
	T1 t1;
	T0* t2;
	l1 = ((T99*)(C))->a2;
	t1 = ((l1)==(EIF_VOID));
	while (!(t1)) {
		t2 = (((T288*)(GE_void(l1)))->a2);
		t1 = ((t2)==(a1));
		if (t1) {
			T288f13(GE_void(l1), a2);
		}
		l1 = (((T288*)(GE_void(l1)))->a3);
		t1 = ((l1)==(EIF_VOID));
	}
}

/* XM_DOCUMENT.set_last_cell */
void T99f32(T0* C, T0* a1)
{
	T1406f5(GE_void(a1));
	((T99*)(C))->a4 = a1;
}

/* XM_DOCUMENT.remove_last */
void T99f31(T0* C)
{
	T0* l1 = 0;
	T6 l2 = 0;
	T1 t1;
	t1 = ((((T99*)(C))->a5)==((T6)(GE_int32(1))));
	if (t1) {
		T99f34(C);
	} else {
		T99f36(C);
		l1 = ((T99*)(C))->a3;
		l2 = ((T99*)(C))->a5;
		t1 = ((l2)==((T6)(GE_int32(2))));
		while (!(t1)) {
			l1 = (((T1406*)(GE_void(l1)))->a1);
			l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
			t1 = ((l2)==((T6)(GE_int32(2))));
		}
		T99f32(C, l1);
		((T99*)(C))->a5 = ((T6)((((T99*)(C))->a5)-((T6)(GE_int32(1)))));
	}
}

/* XM_DOCUMENT.move_last_cursors_after */
void T99f36(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* t1;
	T1 t2;
	l1 = ((T99*)(C))->a2;
	l4 = ((T99*)(C))->a4;
	t1 = (((T288*)(GE_void(l1)))->a2);
	t2 = ((t1)==(l4));
	if (t2) {
		T288f15(GE_void(l1));
	}
	l2 = l1;
	l1 = (((T288*)(GE_void(l1)))->a3);
	t2 = ((l1)==(EIF_VOID));
	while (!(t2)) {
		t1 = (((T288*)(GE_void(l1)))->a2);
		t2 = ((t1)==(l4));
		if (t2) {
			T288f15(GE_void(l1));
			l3 = (((T288*)(GE_void(l1)))->a3);
			T288f16(GE_void(l2), l3);
			T288f16(GE_void(l1), EIF_VOID);
			l1 = l3;
		} else {
			l2 = l1;
			l1 = (((T288*)(GE_void(l1)))->a3);
		}
		t2 = ((l1)==(EIF_VOID));
	}
}

/* XM_DOCUMENT.wipe_out */
void T99f34(T0* C)
{
	T99f37(C);
	((T99*)(C))->a3 = EIF_VOID;
	((T99*)(C))->a4 = EIF_VOID;
	((T99*)(C))->a5 = (T6)(GE_int32(0));
}

/* XM_DOCUMENT.move_all_cursors_after */
void T99f37(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	l1 = ((T99*)(C))->a2;
	t1 = ((l1)==(EIF_VOID));
	while (!(t1)) {
		T288f15(GE_void(l1));
		l2 = (((T288*)(GE_void(l1)))->a3);
		T288f16(GE_void(l1), EIF_VOID);
		l1 = l2;
		t1 = ((l1)==(EIF_VOID));
	}
}

/* XM_DOCUMENT.remove_first */
void T99f30(T0* C)
{
	T0* l1 = 0;
	T1 t1;
	t1 = ((((T99*)(C))->a5)==((T6)(GE_int32(1))));
	if (t1) {
		T99f34(C);
	} else {
		l1 = (((T1406*)(GE_void(((T99*)(C))->a3)))->a1);
		T99f33(C, ((T99*)(C))->a3, l1);
		T99f35(C, l1);
		((T99*)(C))->a5 = ((T6)((((T99*)(C))->a5)-((T6)(GE_int32(1)))));
	}
}

/* XM_DOCUMENT.set_first_cell */
void T99f35(T0* C, T0* a1)
{
	((T99*)(C))->a3 = a1;
}

/* XM_DOCUMENT.equality_delete */
void T99f21(T0* C, T0* a1)
{
	T0* l1 = 0;
	T1 t1;
	T0* t2;
	l1 = (T99f9(C));
	T288f10(GE_void(l1));
	t1 = (((T288*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T288f8(GE_void(l1)));
		t1 = ((t2)==(a1));
		if (t1) {
			T288f14(GE_void(l1));
		} else {
			T288f11(GE_void(l1));
		}
		t1 = (((T288*)(GE_void(l1)))->a1);
	}
}

/* XM_DOCUMENT.new_cursor */
T0* T99f9(T0* C)
{
	T0* R = 0;
	R = T288c9(C);
	return R;
}

/* XM_DOCUMENT.list_make */
void T99f17(T0* C)
{
	((T99*)(C))->a2 = (T99f9(C));
}

/* XM_ELEMENT.make */
T0* T100c29(T0* a1, T0* a2, T0* a3)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T100));
	*(T100*)C = GE_default100;
	((T100*)(C))->a1 = a1;
	((T100*)(C))->a2 = a2;
	((T100*)(C))->a3 = a3;
	T100f33(C);
	return C;
}

/* XM_ELEMENT.list_make */
void T100f33(T0* C)
{
	((T100*)(C))->a7 = (T100f8(C));
}

/* XM_DOCUMENT.default_ns */
unsigned char ge1234os10476 = '\0';
T0* ge1234ov10476;
T0* T99f7(T0* C)
{
	T0* R = 0;
	if (ge1234os10476) {
		return ge1234ov10476;
	} else {
		ge1234os10476 = '\1';
	}
	R = T1307c9();
	ge1234ov10476 = R;
	return R;
}

/* XM_NAMESPACE.make_default */
T0* T1307c9(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T1307));
	*(T1307*)C = GE_default1307;
	T1307f8(C, GE_ms("", 0), GE_ms("", 0));
	return C;
}

/* XM_NAMESPACE.make */
void T1307f8(T0* C, T0* a1, T0* a2)
{
	((T1307*)(C))->a2 = a1;
	((T1307*)(C))->a1 = a2;
}

/* XM_NAMESPACE.make */
T0* T1307c8(T0* a1, T0* a2)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T1307));
	*(T1307*)C = GE_default1307;
	((T1307*)(C))->a2 = a1;
	((T1307*)(C))->a1 = a2;
	return C;
}

/* XM_STOP_ON_ERROR_FILTER.on_start */
void T104f6(T0* C)
{
	((T104*)(C))->a1 = EIF_FALSE;
	((T104*)(C))->a2 = EIF_VOID;
	T104f6p1(C);
}

/* XM_STOP_ON_ERROR_FILTER.on_start */
void T104f6p1(T0* C)
{
	T1 t1;
	t1 = ((((T104*)(C))->a3)==(EIF_VOID));
	if (t1) {
		((T104*)(C))->a3 = T348c1();
	}
	T113x10805(GE_void(((T104*)(C))->a3));
}

/* XM_CALLBACKS_NULL.on_comment */
void T348f4(T0* C, T0* a1)
{
}

/* XM_NAMESPACE_RESOLVER.on_comment */
void T345f28(T0* C, T0* a1)
{
	T113x10810T0(GE_void(((T345*)(C))->a1), a1);
}

/* XM_CALLBACKS_TO_TREE_FILTER.on_comment */
void T105f14(T0* C, T0* a1)
{
	T0* l1 = 0;
	T1 t1;
	t1 = ((((T105*)(C))->a5)==(EIF_VOID));
	if (t1) {
		l1 = T1304c3(((T105*)(C))->a2, a1);
	} else {
		l1 = T1304c4(((T105*)(C))->a5, a1);
	}
	T105f22(C, l1);
}

/* XM_CALLBACKS_TO_TREE_FILTER.handle_position */
void T105f22(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	t1 = (T105f8(C));
	if (t1) {
		t2 = (T111f128(GE_void(((T105*)(C))->a4)));
		T101f4(GE_void(((T105*)(C))->a1), t2, a1);
	}
}

/* XM_POSITION_TABLE.put */
void T101f4(T0* C, T0* a1, T0* a2)
{
	T0* l1 = 0;
	l1 = T947c3(a1, a2);
	T946f14(GE_void(((T101*)(C))->a1), l1);
}

/* DS_LINKED_LIST [DS_PAIR [XM_POSITION, XM_NODE]].put_last */
void T946f14(T0* C, T0* a1)
{
	T0* l1 = 0;
	T1 t1;
	t1 = (T946f5(C));
	if (t1) {
		((T946*)(C))->a2 = T1328c3(a1);
		((T946*)(C))->a3 = ((T946*)(C))->a2;
		((T946*)(C))->a4 = (T6)(GE_int32(1));
	} else {
		l1 = ((T946*)(C))->a3;
		((T946*)(C))->a3 = T1328c3(a1);
		T1328f4(GE_void(l1), ((T946*)(C))->a3);
		((T946*)(C))->a4 = ((T6)((((T946*)(C))->a4)+((T6)(GE_int32(1)))));
	}
}

/* DS_LINKABLE [DS_PAIR [XM_POSITION, XM_NODE]].put_right */
void T1328f4(T0* C, T0* a1)
{
	((T1328*)(C))->a2 = a1;
}

/* DS_LINKABLE [DS_PAIR [XM_POSITION, XM_NODE]].make */
T0* T1328c3(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T1328));
	*(T1328*)C = GE_default1328;
	((T1328*)(C))->a1 = a1;
	return C;
}

/* DS_LINKED_LIST [DS_PAIR [XM_POSITION, XM_NODE]].is_empty */
T1 T946f5(T0* C)
{
	T1 R = 0;
	R = ((((T946*)(C))->a4)==((T6)(GE_int32(0))));
	return R;
}

/* DS_PAIR [XM_POSITION, XM_NODE].make */
T0* T947c3(T0* a1, T0* a2)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T947));
	*(T947*)C = GE_default947;
	((T947*)(C))->a1 = a1;
	((T947*)(C))->a2 = a2;
	return C;
}

/* XM_CALLBACKS_TO_TREE_FILTER.is_position_table_enabled */
T1 T105f8(T0* C)
{
	T1 R = 0;
	R = ((((T105*)(C))->a1)!=(EIF_VOID));
	return R;
}

/* XM_COMMENT.make_last */
T0* T1304c4(T0* a1, T0* a2)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T1304));
	*(T1304*)C = GE_default1304;
	((T1304*)(C))->a1 = a2;
	T100f28(GE_void(a1), C);
	return C;
}

/* XM_ELEMENT.force_last */
void T100f28(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	t1 = (T100f16(C));
	if (!(t1)) {
		t2 = (T100f17(C));
		t1 = ((t2)!=(a1));
	}
	if (t1) {
		T100f28p1(C, a1);
	}
}

/* XM_ELEMENT.force_last */
void T100f28p1(T0* C, T0* a1)
{
	T100f34(C, a1);
	T100f28p0(C, a1);
}

/* XM_ELEMENT.force_last */
void T100f28p0(T0* C, T0* a1)
{
	T0* l1 = 0;
	T1 t1;
	t1 = (T100f16(C));
	if (t1) {
		((T100*)(C))->a4 = T1406c3(a1);
		((T100*)(C))->a5 = ((T100*)(C))->a4;
		((T100*)(C))->a6 = (T6)(GE_int32(1));
	} else {
		l1 = ((T100*)(C))->a5;
		((T100*)(C))->a5 = T1406c3(a1);
		T1406f4(GE_void(l1), ((T100*)(C))->a5);
		((T100*)(C))->a6 = ((T6)((((T100*)(C))->a6)+((T6)(GE_int32(1)))));
	}
}

/* XM_ELEMENT.before_addition */
void T100f34(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		t2 = (T289x10467(a1));
		t1 = ((t2)!=(EIF_VOID));
		if (t1) {
			t2 = (T289x10467(a1));
			if (((T0*)(GE_void(t2)))->id==99) {
				T99f21(t2, a1);
			} else {
				T100f39(t2, a1);
			}
		}
		T289x10475T0(a1, C);
	}
}

/* XM_ELEMENT.last */
T0* T100f17(T0* C)
{
	T0* R = 0;
	R = (((T1406*)(GE_void(((T100*)(C))->a5)))->a2);
	return R;
}

/* XM_ELEMENT.is_empty */
T1 T100f16(T0* C)
{
	T1 R = 0;
	R = ((((T100*)(C))->a6)==((T6)(GE_int32(0))));
	return R;
}

/* XM_COMMENT.make_last_in_document */
T0* T1304c3(T0* a1, T0* a2)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T1304));
	*(T1304*)C = GE_default1304;
	((T1304*)(C))->a1 = a2;
	T99f18(GE_void(a1), C);
	return C;
}

/* XM_STOP_ON_ERROR_FILTER.on_comment */
void T104f8(T0* C, T0* a1)
{
	T1 t1;
	t1 = ((T1)(!(((T104*)(C))->a1)));
	if (t1) {
		T104f8p1(C, a1);
	}
}

/* XM_STOP_ON_ERROR_FILTER.on_comment */
void T104f8p1(T0* C, T0* a1)
{
	T113x10810T0(GE_void(((T104*)(C))->a3), a1);
}

/* XM_CALLBACKS_NULL.on_processing_instruction */
void T348f5(T0* C, T0* a1, T0* a2)
{
}

/* XM_NAMESPACE_RESOLVER.on_processing_instruction */
void T345f29(T0* C, T0* a1, T0* a2)
{
	T113x10809T0T0(GE_void(((T345*)(C))->a1), a1, a2);
}

/* XM_CALLBACKS_TO_TREE_FILTER.on_processing_instruction */
void T105f15(T0* C, T0* a1, T0* a2)
{
	T0* l1 = 0;
	T1 t1;
	t1 = ((((T105*)(C))->a5)==(EIF_VOID));
	if (t1) {
		l1 = T1305c4(((T105*)(C))->a2, a1, a2);
	} else {
		l1 = T1305c5(((T105*)(C))->a5, a1, a2);
	}
	T105f22(C, l1);
}

/* XM_PROCESSING_INSTRUCTION.make_last */
T0* T1305c5(T0* a1, T0* a2, T0* a3)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T1305));
	*(T1305*)C = GE_default1305;
	((T1305*)(C))->a1 = a2;
	((T1305*)(C))->a2 = a3;
	T100f28(GE_void(a1), C);
	return C;
}

/* XM_PROCESSING_INSTRUCTION.make_last_in_document */
T0* T1305c4(T0* a1, T0* a2, T0* a3)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T1305));
	*(T1305*)C = GE_default1305;
	((T1305*)(C))->a1 = a2;
	((T1305*)(C))->a2 = a3;
	T99f18(GE_void(a1), C);
	return C;
}

/* XM_STOP_ON_ERROR_FILTER.on_processing_instruction */
void T104f9(T0* C, T0* a1, T0* a2)
{
	T1 t1;
	t1 = ((T1)(!(((T104*)(C))->a1)));
	if (t1) {
		T104f9p1(C, a1, a2);
	}
}

/* XM_STOP_ON_ERROR_FILTER.on_processing_instruction */
void T104f9p1(T0* C, T0* a1, T0* a2)
{
	T113x10809T0T0(GE_void(((T104*)(C))->a3), a1, a2);
}

/* XM_CALLBACKS_NULL.on_content */
void T348f6(T0* C, T0* a1)
{
}

/* XM_NAMESPACE_RESOLVER.on_content */
void T345f30(T0* C, T0* a1)
{
	T113x10815T0(GE_void(((T345*)(C))->a1), a1);
}

/* XM_CALLBACKS_TO_TREE_FILTER.on_content */
void T105f16(T0* C, T0* a1)
{
	T0* l1 = 0;
	l1 = T1306c3(((T105*)(C))->a5, a1);
	T105f22(C, l1);
}

/* XM_CHARACTER_DATA.make_last */
T0* T1306c3(T0* a1, T0* a2)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T1306));
	*(T1306*)C = GE_default1306;
	((T1306*)(C))->a1 = a2;
	T100f28(GE_void(a1), C);
	return C;
}

/* XM_STOP_ON_ERROR_FILTER.on_content */
void T104f10(T0* C, T0* a1)
{
	T1 t1;
	t1 = ((T1)(!(((T104*)(C))->a1)));
	if (t1) {
		T104f10p1(C, a1);
	}
}

/* XM_STOP_ON_ERROR_FILTER.on_content */
void T104f10p1(T0* C, T0* a1)
{
	T113x10815T0(GE_void(((T104*)(C))->a3), a1);
}

/* XM_CALLBACKS_NULL.on_start_tag */
void T348f9(T0* C, T0* a1, T0* a2, T0* a3)
{
}

/* XM_NAMESPACE_RESOLVER.on_start_tag */
void T345f33(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1014f12(GE_void(((T345*)(C))->a2));
	((T345*)(C))->a3 = a2;
	((T345*)(C))->a4 = a3;
}

/* XM_NAMESPACE_RESOLVER_CONTEXT.push */
void T1014f12(T0* C)
{
	T0* t1;
	t1 = (T1014f8(C));
	T1281f11(GE_void(((T1014*)(C))->a1), t1);
}

/* DS_BILINKED_LIST [DS_HASH_TABLE [STRING_8, STRING_8]].force_last */
void T1281f11(T0* C, T0* a1)
{
	T0* l1 = 0;
	T1 t1;
	t1 = (T1281f6(C));
	if (t1) {
		((T1281*)(C))->a4 = T1388c4(a1);
		((T1281*)(C))->a2 = ((T1281*)(C))->a4;
		((T1281*)(C))->a1 = (T6)(GE_int32(1));
	} else {
		l1 = ((T1281*)(C))->a2;
		((T1281*)(C))->a2 = T1388c4(a1);
		T1388f5(GE_void(l1), ((T1281*)(C))->a2);
		((T1281*)(C))->a1 = ((T6)((((T1281*)(C))->a1)+((T6)(GE_int32(1)))));
	}
}

/* DS_BILINKABLE [DS_HASH_TABLE [STRING_8, STRING_8]].put_right */
void T1388f5(T0* C, T0* a1)
{
	((T1388*)(C))->a3 = a1;
	T1388f6(GE_void(a1), C);
}

/* DS_BILINKABLE [DS_HASH_TABLE [STRING_8, STRING_8]].attach_left */
void T1388f6(T0* C, T0* a1)
{
	((T1388*)(C))->a2 = a1;
}

/* DS_BILINKABLE [DS_HASH_TABLE [STRING_8, STRING_8]].make */
T0* T1388c4(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T1388));
	*(T1388*)C = GE_default1388;
	((T1388*)(C))->a1 = a1;
	return C;
}

/* DS_BILINKED_LIST [DS_HASH_TABLE [STRING_8, STRING_8]].is_empty */
T1 T1281f6(T0* C)
{
	T1 R = 0;
	R = ((((T1281*)(C))->a1)==((T6)(GE_int32(0))));
	return R;
}

/* XM_NAMESPACE_RESOLVER_CONTEXT.new_string_string_table */
T0* T1014f8(T0* C)
{
	T0* R = 0;
	T0* t1;
	R = T45c101();
	t1 = (T1014f9(C));
	T45f53(GE_void(R), t1);
	t1 = (T1014f9(C));
	T45f102(GE_void(R), t1);
	return R;
}

/* DS_HASH_TABLE [STRING_8, STRING_8].set_equality_tester */
void T45f102(T0* C, T0* a1)
{
	((T45*)(C))->a8 = a1;
}

/* XM_NAMESPACE_RESOLVER_CONTEXT.string_equality_tester */
T0* T1014f9(T0* C)
{
	T0* R = 0;
	if (ge341os1730) {
		return ge341ov1730;
	} else {
		ge341os1730 = '\1';
	}
	R = T48c3();
	ge341ov1730 = R;
	return R;
}

/* DS_HASH_TABLE [STRING_8, STRING_8].make_map_default */
T0* T45c101(void)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T45));
	*(T45*)C = GE_default45;
	t1 = (T45f51(C));
	T45f52(C, t1);
	return C;
}

/* DS_HASH_TABLE [STRING_8, STRING_8].default_capacity */
T6 T45f51(T0* C)
{
	T6 R = 0;
	R = (T6)(GE_int32(10));
	return R;
}

/* XM_CALLBACKS_TO_TREE_FILTER.on_start_tag */
void T105f17(T0* C, T0* a1, T0* a2, T0* a3)
{
	T0* l1 = 0;
	T1 t1;
	T0* t2;
	t1 = ((((T105*)(C))->a5)==(EIF_VOID));
	if (t1) {
		t2 = (T105f7(C, a1, a2));
		l1 = T100c26(((T105*)(C))->a2, a3, t2);
	} else {
		t2 = (T105f7(C, a1, a2));
		l1 = T100c27(((T105*)(C))->a5, a3, t2);
	}
	((T105*)(C))->a5 = l1;
	T105f22(C, ((T105*)(C))->a5);
}

/* XM_ELEMENT.make_last */
T0* T100c27(T0* a1, T0* a2, T0* a3)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T100));
	*(T100*)C = GE_default100;
	((T100*)(C))->a2 = a2;
	((T100*)(C))->a3 = a3;
	T100f33(C);
	T100f28(GE_void(a1), C);
	return C;
}

/* XM_ELEMENT.make_root */
T0* T100c26(T0* a1, T0* a2, T0* a3)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T100));
	*(T100*)C = GE_default100;
	((T100*)(C))->a2 = a2;
	((T100*)(C))->a3 = a3;
	T100f33(C);
	T99f20(GE_void(a1), C);
	return C;
}

/* XM_DOCUMENT.set_root_element */
void T99f20(T0* C, T0* a1)
{
	T99f27(C);
	((T99*)(C))->a1 = a1;
	T99f18(C, a1);
}

/* XM_DOCUMENT.remove_previous_root_element */
void T99f27(T0* C)
{
	T0* l1 = 0;
	T1 t1;
	T0* t2;
	l1 = (T99f9(C));
	T288f10(GE_void(l1));
	t1 = (((T288*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T288f8(GE_void(l1)));
		t1 = ((t2)==(((T99*)(C))->a1));
		if (t1) {
			T288f14(GE_void(l1));
			T288f12(GE_void(l1));
		} else {
			T288f11(GE_void(l1));
		}
		t1 = (((T288*)(GE_void(l1)))->a1);
	}
}

/* XM_CALLBACKS_TO_TREE_FILTER.new_namespace */
T0* T105f7(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T1 t1;
	T0* t2;
	R = T1307c8(a2, a1);
	t1 = (T1303f27(GE_void(((T105*)(C))->a6), R));
	if (t1) {
		t2 = (T1303f24(GE_void(((T105*)(C))->a6), R));
		t1 = (T1307f7(GE_void(t2), R));
	}
	if (t1) {
		R = (T1303f24(GE_void(((T105*)(C))->a6), R));
	} else {
		T1303f32(GE_void(((T105*)(C))->a6), R);
	}
	return R;
}

/* DS_HASH_SET [XM_NAMESPACE].force_last */
void T1303f32(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	T1303f35(C);
	T1303f33(C, a1);
	t1 = ((((T1303*)(C))->a1)!=((T6)(GE_int32(0))));
	if (t1) {
		T1303f36(C, a1, ((T1303*)(C))->a1);
	} else {
		l1 = ((T6)((((T1303*)(C))->a4)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, ((T1303*)(C))->a5));
		if (t1) {
			t2 = (T1303f21(C, l1));
			T1303f37(C, t2);
			l2 = (T1303f22(C, a1));
		} else {
			l2 = ((T1303*)(C))->a6;
		}
		t2 = (T1303f26(C, l2));
		T1303f38(C, t2, l1);
		T1303f39(C, l1, l2);
		T1303f36(C, a1, l1);
		((T1303*)(C))->a4 = l1;
		((T1303*)(C))->a7 = ((T6)((((T1303*)(C))->a7)+((T6)(GE_int32(1)))));
	}
}

/* DS_HASH_SET [XM_NAMESPACE].slots_put */
void T1303f39(T0* C, T6 a1, T6 a2)
{
	((T117*)(GE_void(((T1303*)(C))->a14)))->z2[a2] = (a1);
}

/* DS_HASH_SET [XM_NAMESPACE].clashes_put */
void T1303f38(T0* C, T6 a1, T6 a2)
{
	((T117*)(GE_void(((T1303*)(C))->a13)))->z2[a2] = (a1);
}

/* DS_HASH_SET [XM_NAMESPACE].slots_item */
T6 T1303f26(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T117*)(GE_void(((T1303*)(C))->a14)))->z2[a1]);
	return R;
}

/* DS_HASH_SET [XM_NAMESPACE].hash_position */
T6 T1303f22(T0* C, T0* a1)
{
	T6 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		t2 = (T1307f5(GE_void(a1)));
		R = ((T6)((t2)%(((T1303*)(C))->a8)));
	} else {
		R = ((T1303*)(C))->a8;
	}
	return R;
}

/* XM_NAMESPACE.hash_code */
T6 T1307f5(T0* C)
{
	T6 R = 0;
	T1 t1;
	t1 = ((((T1307*)(C))->a1)!=(EIF_VOID));
	if (t1) {
		R = (((((T0*)(GE_void(((T1307*)(C))->a1)))->id==17)?T17f15(((T1307*)(C))->a1):T949f13(((T1307*)(C))->a1)));
	}
	return R;
}

/* DS_HASH_SET [XM_NAMESPACE].resize */
void T1303f37(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	T1303f35(C);
	l1 = (T1303f20(C, a1));
	t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	T1303f44(C, t1);
	l2 = ((T1303*)(C))->a8;
	t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		T1303f39(C, (T6)(GE_int32(0)), l2);
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	}
	((T1303*)(C))->a8 = l1;
	l2 = ((T1303*)(C))->a4;
	t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	while (!(t2)) {
		t1 = (T1303f19(C, l2));
		t2 = (T6f1(&t1, (T6)(GE_int32(-1))));
		if (t2) {
			t3 = (T1303f18(C, l2));
			l3 = (T1303f22(C, t3));
			t1 = (T1303f26(C, l3));
			T1303f38(C, t1, l2);
			T1303f39(C, l2, l3);
		}
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	}
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T1303f45(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T1303f46(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T1303f47(C, t1);
	((T1303*)(C))->a5 = a1;
	((T1303*)(C))->a1 = (T6)(GE_int32(0));
}

/* DS_HASH_SET [XM_NAMESPACE].clashes_resize */
void T1303f47(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T1303f29(C));
	((T1303*)(C))->a13 = (T119f1(GE_void(t1), ((T1303*)(C))->a13, a1));
}

/* DS_HASH_SET [XM_NAMESPACE].key_storage_resize */
void T1303f46(T0* C, T6 a1)
{
}

/* DS_HASH_SET [XM_NAMESPACE].item_storage_resize */
void T1303f45(T0* C, T6 a1)
{
	((T1303*)(C))->a2 = (T1435f2(GE_void(((T1303*)(C))->a15), ((T1303*)(C))->a2, a1));
}

/* KL_SPECIAL_ROUTINES [XM_NAMESPACE].resize */
T0* T1435f2(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T1432*)(GE_void(a1)))->z1);
	t2 = (T6f1(&a2, t1));
	if (t2) {
		R = (T1432f3(GE_void(a1), a2));
	} else {
		R = a1;
	}
	return R;
}

/* SPECIAL [XM_NAMESPACE].resized_area */
T0* T1432f3(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	R = T1432c4(a1);
	t1 = (((T1432*)(C))->z1);
	T1432f6(GE_void(R), C, (T6)(GE_int32(0)), (T6)(GE_int32(0)), t1);
	return R;
}

/* SPECIAL [XM_NAMESPACE].copy_data */
void T1432f6(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		T1432f7(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T1432*)(a1))->z2[l1]);
			((T1432*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [XM_NAMESPACE].move_data */
void T1432f7(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T1432f8(C, a1, a2, a3);
			} else {
				T1432f9(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T1432f8(C, a1, a2, a3);
			} else {
				T1432f9(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [XM_NAMESPACE].overlapping_move */
void T1432f9(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T1432*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T1432*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T1432*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			((T1432*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [XM_NAMESPACE].non_overlapping_move */
void T1432f8(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T1432*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T1432*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* DS_HASH_SET [XM_NAMESPACE].key_storage_item */
T0* T1303f18(T0* C, T6 a1)
{
	T0* R = 0;
	R = (T1303f16(C, a1));
	return R;
}

/* DS_HASH_SET [XM_NAMESPACE].item_storage_item */
T0* T1303f16(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T1432*)(GE_void(((T1303*)(C))->a2)))->z2[a1]);
	return R;
}

/* DS_HASH_SET [XM_NAMESPACE].clashes_item */
T6 T1303f19(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T117*)(GE_void(((T1303*)(C))->a13)))->z2[a1]);
	return R;
}

/* DS_HASH_SET [XM_NAMESPACE].slots_resize */
void T1303f44(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T1303f29(C));
	((T1303*)(C))->a14 = (T119f1(GE_void(t1), ((T1303*)(C))->a14, a1));
}

/* DS_HASH_SET [XM_NAMESPACE].new_capacity */
T6 T1303f21(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = (T6)(GE_int32(2));
	R = ((T6)((t1)*(a1)));
	return R;
}

/* DS_HASH_SET [XM_NAMESPACE].item_storage_put */
void T1303f36(T0* C, T0* a1, T6 a2)
{
	((T1432*)(GE_void(((T1303*)(C))->a2)))->z2[a2] = (a1);
}

/* DS_HASH_SET [XM_NAMESPACE].search_position */
void T1303f33(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T1 t3;
	t1 = ((a1)==(EIF_VOID));
	if (t1) {
		((T1303*)(C))->a1 = (T1303f26(C, ((T1303*)(C))->a8));
		((T1303*)(C))->a6 = ((T1303*)(C))->a8;
		((T1303*)(C))->a9 = (T6)(GE_int32(0));
	} else {
		l4 = (T1303f17(C));
		t1 = ((l4)!=(EIF_VOID));
		if (t1) {
			t1 = ((((T1303*)(C))->a1)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T1303f18(C, ((T1303*)(C))->a1));
				t3 = (T1433f1(GE_void(l4), a1, t2));
				t1 = ((T1)(!(t3)));
			}
			if (!(t1)) {
				t1 = (T1433f1(GE_void(l4), a1, l3));
			}
			if (t1) {
				((T1303*)(C))->a6 = (T1303f22(C, a1));
				l1 = (T1303f26(C, ((T1303*)(C))->a6));
				((T1303*)(C))->a1 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T1303f18(C, l1));
					t1 = (T1433f1(GE_void(l4), a1, t2));
					if (t1) {
						((T1303*)(C))->a1 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T1303f19(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T1303*)(C))->a9 = l2;
			}
		} else {
			t1 = ((((T1303*)(C))->a1)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T1303f18(C, ((T1303*)(C))->a1));
				t1 = ((a1)!=(t2));
			}
			if (!(t1)) {
				t1 = ((a1)==(l3));
			}
			if (t1) {
				((T1303*)(C))->a6 = (T1303f22(C, a1));
				l1 = (T1303f26(C, ((T1303*)(C))->a6));
				((T1303*)(C))->a1 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T1303f18(C, l1));
					t1 = ((a1)==(t2));
					if (t1) {
						((T1303*)(C))->a1 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T1303f19(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T1303*)(C))->a9 = l2;
			}
		}
	}
}

/* KL_EQUALITY_TESTER [XM_NAMESPACE].test */
T1 T1433f1(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(a2));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t1 = ((a1)==(EIF_VOID));
		if (t1) {
			R = EIF_FALSE;
		} else {
			t1 = ((a2)==(EIF_VOID));
			if (t1) {
				R = EIF_FALSE;
			} else {
				t2 = (T1433f2(C));
				R = (T79f2(GE_void(t2), a1, a2));
			}
		}
	}
	return R;
}

/* KL_EQUALITY_TESTER [XM_NAMESPACE].any_ */
T0* T1433f2(T0* C)
{
	T0* R = 0;
	if (ge270os1804) {
		return ge270ov1804;
	} else {
		ge270os1804 = '\1';
	}
	R = T79c5();
	ge270ov1804 = R;
	return R;
}

/* DS_HASH_SET [XM_NAMESPACE].key_equality_tester */
T0* T1303f17(T0* C)
{
	T0* R = 0;
	R = ((T1303*)(C))->a3;
	return R;
}

/* XM_NAMESPACE.same_prefix */
T1 T1307f7(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = (T1307f4(C, a1));
	if (t1) {
		t2 = (((T1307*)(GE_void(a1)))->a2);
		t1 = ((((T1307*)(C))->a2)==(t2));
		if (!(t1)) {
			t1 = ((((T1307*)(C))->a2)!=(EIF_VOID));
			if (t1) {
				t2 = (((T1307*)(GE_void(a1)))->a2);
				t1 = ((t2)!=(EIF_VOID));
			}
			if (t1) {
				t2 = (T1307f3(C));
				t3 = (((T1307*)(GE_void(a1)))->a2);
				R = (T26f1(GE_void(t2), ((T1307*)(C))->a2, t3));
			} else {
				R = EIF_FALSE;
			}
		} else {
			R = EIF_TRUE;
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* XM_NAMESPACE.string_ */
T0* T1307f3(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* DS_HASH_SET [XM_NAMESPACE].item */
T0* T1303f24(T0* C, T0* a1)
{
	T0* R = 0;
	T1303f33(C, a1);
	R = (T1303f16(C, ((T1303*)(C))->a1));
	return R;
}

/* DS_HASH_SET [XM_NAMESPACE].has */
T1 T1303f27(T0* C, T0* a1)
{
	T1 R = 0;
	T1303f33(C, a1);
	R = ((((T1303*)(C))->a1)!=((T6)(GE_int32(0))));
	return R;
}

/* XM_STOP_ON_ERROR_FILTER.on_start_tag */
void T104f11(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 t1;
	t1 = ((T1)(!(((T104*)(C))->a1)));
	if (t1) {
		T104f11p1(C, a1, a2, a3);
	}
}

/* XM_STOP_ON_ERROR_FILTER.on_start_tag */
void T104f11p1(T0* C, T0* a1, T0* a2, T0* a3)
{
	T113x10811T0T0T0(GE_void(((T104*)(C))->a3), a1, a2, a3);
}

/* XM_CALLBACKS_NULL.on_end_tag */
void T348f8(T0* C, T0* a1, T0* a2, T0* a3)
{
}

/* XM_NAMESPACE_RESOLVER.on_end_tag */
void T345f32(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 t1;
	T0* t2;
	t1 = (T345f9(C, a2));
	if (t1) {
		t2 = (T1014f2(GE_void(((T345*)(C))->a2), a2));
		T345f32p1(C, t2, a2, a3);
	} else {
		t2 = (T1014f3(GE_void(((T345*)(C))->a2)));
		T345f32p1(C, t2, a2, a3);
	}
	T1014f11(GE_void(((T345*)(C))->a2));
}

/* XM_NAMESPACE_RESOLVER_CONTEXT.pop */
void T1014f11(T0* C)
{
	T6 t1;
	T1 t2;
	t1 = (((T1281*)(GE_void(((T1014*)(C))->a1)))->a1);
	t2 = (T6f1(&t1, (T6)(GE_int32(0))));
	if (t2) {
		T1281f10(GE_void(((T1014*)(C))->a1));
	}
}

/* DS_BILINKED_LIST [DS_HASH_TABLE [STRING_8, STRING_8]].remove_last */
void T1281f10(T0* C)
{
	T1 t1;
	T0* t2;
	t1 = ((((T1281*)(C))->a1)==((T6)(GE_int32(1))));
	if (t1) {
		T1281f12(C);
	} else {
		T1281f13(C);
		t2 = (((T1388*)(GE_void(((T1281*)(C))->a2)))->a2);
		T1281f14(C, t2);
		((T1281*)(C))->a1 = ((T6)((((T1281*)(C))->a1)-((T6)(GE_int32(1)))));
	}
}

/* DS_BILINKED_LIST [DS_HASH_TABLE [STRING_8, STRING_8]].set_last_cell */
void T1281f14(T0* C, T0* a1)
{
	T1388f7(GE_void(a1));
	((T1281*)(C))->a2 = a1;
}

/* DS_BILINKABLE [DS_HASH_TABLE [STRING_8, STRING_8]].forget_right */
void T1388f7(T0* C)
{
	((T1388*)(C))->a3 = EIF_VOID;
}

/* DS_BILINKED_LIST [DS_HASH_TABLE [STRING_8, STRING_8]].move_last_cursors_after */
void T1281f13(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* t1;
	T1 t2;
	l1 = ((T1281*)(C))->a3;
	l4 = ((T1281*)(C))->a2;
	t1 = (((T1282*)(GE_void(l1)))->a2);
	t2 = ((t1)==(l4));
	if (t2) {
		T1282f11(GE_void(l1));
	}
	l2 = l1;
	l1 = (((T1282*)(GE_void(l1)))->a3);
	t2 = ((l1)==(EIF_VOID));
	while (!(t2)) {
		t1 = (((T1282*)(GE_void(l1)))->a2);
		t2 = ((t1)==(l4));
		if (t2) {
			T1282f11(GE_void(l1));
			l3 = (((T1282*)(GE_void(l1)))->a3);
			T1282f12(GE_void(l2), l3);
			T1282f12(GE_void(l1), EIF_VOID);
			l1 = l3;
		} else {
			l2 = l1;
			l1 = (((T1282*)(GE_void(l1)))->a3);
		}
		t2 = ((l1)==(EIF_VOID));
	}
}

/* DS_BILINKED_LIST_CURSOR [DS_HASH_TABLE [STRING_8, STRING_8]].set_next_cursor */
void T1282f12(T0* C, T0* a1)
{
	((T1282*)(C))->a3 = a1;
}

/* DS_BILINKED_LIST_CURSOR [DS_HASH_TABLE [STRING_8, STRING_8]].set_after */
void T1282f11(T0* C)
{
	((T1282*)(C))->a2 = EIF_VOID;
	((T1282*)(C))->a1 = EIF_FALSE;
	((T1282*)(C))->a5 = EIF_TRUE;
}

/* DS_BILINKED_LIST [DS_HASH_TABLE [STRING_8, STRING_8]].wipe_out */
void T1281f12(T0* C)
{
	T1281f15(C);
	((T1281*)(C))->a4 = EIF_VOID;
	((T1281*)(C))->a2 = EIF_VOID;
	((T1281*)(C))->a1 = (T6)(GE_int32(0));
}

/* DS_BILINKED_LIST [DS_HASH_TABLE [STRING_8, STRING_8]].move_all_cursors_after */
void T1281f15(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	l1 = ((T1281*)(C))->a3;
	t1 = ((l1)==(EIF_VOID));
	while (!(t1)) {
		T1282f11(GE_void(l1));
		l2 = (((T1282*)(GE_void(l1)))->a3);
		T1282f12(GE_void(l1), EIF_VOID);
		l1 = l2;
		t1 = ((l1)==(EIF_VOID));
	}
}

/* XM_NAMESPACE_RESOLVER_CONTEXT.resolve_default */
T0* T1014f3(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T1014f7(C));
	R = (T1014f2(C, t1));
	return R;
}

/* XM_NAMESPACE_RESOLVER_CONTEXT.default_pseudo_prefix */
unsigned char ge1208os25907 = '\0';
T0* ge1208ov25907;
T0* T1014f7(T0* C)
{
	T0* R = 0;
	if (ge1208os25907) {
		return ge1208ov25907;
	} else {
		ge1208os25907 = '\1';
	}
	R = T17c42();
	ge1208ov25907 = R;
	return R;
}

/* XM_NAMESPACE_RESOLVER.on_end_tag */
void T345f32p1(T0* C, T0* a1, T0* a2, T0* a3)
{
	T113x10814T0T0T0(GE_void(((T345*)(C))->a1), a1, a2, a3);
}

/* XM_NAMESPACE_RESOLVER_CONTEXT.resolve */
T0* T1014f2(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T1 t1;
	T0* t2;
	R = (T1014f6(C));
	l1 = (T1281f7(GE_void(((T1014*)(C))->a1)));
	T1282f8(GE_void(l1));
	t1 = (((T1282*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T1282f6(GE_void(l1)));
		t1 = (T45f48(GE_void(t2), a1));
		if (t1) {
			t2 = (T1282f6(GE_void(l1)));
			R = (T45f44(GE_void(t2), a1));
			T1282f9(GE_void(l1));
		} else {
			T1282f10(GE_void(l1));
		}
		t1 = (((T1282*)(GE_void(l1)))->a1);
	}
	return R;
}

/* DS_BILINKED_LIST_CURSOR [DS_HASH_TABLE [STRING_8, STRING_8]].back */
void T1282f10(T0* C)
{
	T1281f18(GE_void(((T1282*)(C))->a4), C);
}

/* DS_BILINKED_LIST [DS_HASH_TABLE [STRING_8, STRING_8]].cursor_back */
void T1281f18(T0* C, T0* a1)
{
	T1 l1 = 0;
	T1 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T0* t2;
	t1 = (((T1282*)(a1))->a5);
	if (t1) {
		l1 = EIF_TRUE;
		l3 = ((T1281*)(C))->a2;
	} else {
		t2 = (((T1282*)(a1))->a2);
		l3 = (((T1388*)(GE_void(t2)))->a2);
	}
	l2 = ((l3)==(EIF_VOID));
	T1282f13(a1, l3, l2, EIF_FALSE);
	if (l2) {
		t1 = ((T1)(!(l1)));
		if (t1) {
			T1281f20(C, a1);
		}
	} else {
		if (l1) {
			T1281f19(C, a1);
		}
	}
}

/* DS_BILINKED_LIST [DS_HASH_TABLE [STRING_8, STRING_8]].add_traversing_cursor */
void T1281f19(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T1281*)(C))->a3));
	if (t1) {
		t2 = (((T1282*)(GE_void(((T1281*)(C))->a3)))->a3);
		T1282f12(a1, t2);
		T1282f12(GE_void(((T1281*)(C))->a3), a1);
	}
}

/* DS_BILINKED_LIST [DS_HASH_TABLE [STRING_8, STRING_8]].remove_traversing_cursor */
void T1281f20(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T1281*)(C))->a3));
	if (t1) {
		l2 = ((T1281*)(C))->a3;
		l1 = (((T1282*)(GE_void(l2)))->a3);
		t1 = ((l1)==(a1));
		if (!(t1)) {
			t1 = ((l1)==(EIF_VOID));
		}
		while (!(t1)) {
			l2 = l1;
			l1 = (((T1282*)(GE_void(l1)))->a3);
			t1 = ((l1)==(a1));
			if (!(t1)) {
				t1 = ((l1)==(EIF_VOID));
			}
		}
		t1 = ((l1)==(a1));
		if (t1) {
			t2 = (((T1282*)(a1))->a3);
			T1282f12(GE_void(l2), t2);
			T1282f12(a1, EIF_VOID);
		}
	}
}

/* DS_BILINKED_LIST_CURSOR [DS_HASH_TABLE [STRING_8, STRING_8]].set */
void T1282f13(T0* C, T0* a1, T1 a2, T1 a3)
{
	((T1282*)(C))->a2 = a1;
	((T1282*)(C))->a1 = a2;
	((T1282*)(C))->a5 = a3;
}

/* DS_BILINKED_LIST_CURSOR [DS_HASH_TABLE [STRING_8, STRING_8]].go_before */
void T1282f9(T0* C)
{
	T1281f17(GE_void(((T1282*)(C))->a4), C);
}

/* DS_BILINKED_LIST [DS_HASH_TABLE [STRING_8, STRING_8]].cursor_go_before */
void T1281f17(T0* C, T0* a1)
{
	T1 l1 = 0;
	T1 t1;
	l1 = (T1281f8(C, a1));
	T1282f14(a1);
	t1 = ((T1)(!(l1)));
	if (t1) {
		T1281f20(C, a1);
	}
}

/* DS_BILINKED_LIST_CURSOR [DS_HASH_TABLE [STRING_8, STRING_8]].set_before */
void T1282f14(T0* C)
{
	((T1282*)(C))->a2 = EIF_VOID;
	((T1282*)(C))->a1 = EIF_TRUE;
	((T1282*)(C))->a5 = EIF_FALSE;
}

/* DS_BILINKED_LIST [DS_HASH_TABLE [STRING_8, STRING_8]].cursor_off */
T1 T1281f8(T0* C, T0* a1)
{
	T1 R = 0;
	T0* t1;
	t1 = (((T1282*)(a1))->a2);
	R = ((t1)==(EIF_VOID));
	return R;
}

/* DS_BILINKED_LIST_CURSOR [DS_HASH_TABLE [STRING_8, STRING_8]].item */
T0* T1282f6(T0* C)
{
	T0* R = 0;
	R = (((T1388*)(GE_void(((T1282*)(C))->a2)))->a1);
	return R;
}

/* DS_BILINKED_LIST_CURSOR [DS_HASH_TABLE [STRING_8, STRING_8]].finish */
void T1282f8(T0* C)
{
	T1281f16(GE_void(((T1282*)(C))->a4), C);
}

/* DS_BILINKED_LIST [DS_HASH_TABLE [STRING_8, STRING_8]].cursor_finish */
void T1281f16(T0* C, T0* a1)
{
	T1 l1 = 0;
	T1 l2 = 0;
	T1 t1;
	l1 = (T1281f8(C, a1));
	l2 = ((((T1281*)(C))->a2)==(EIF_VOID));
	T1282f13(a1, ((T1281*)(C))->a2, l2, EIF_FALSE);
	t1 = ((T1)(!(l2)));
	if (t1) {
		t1 = (l1);
	}
	if (t1) {
		T1281f19(C, a1);
	}
}

/* XM_NAMESPACE_RESOLVER_CONTEXT.default_namespace */
unsigned char ge1208os25908 = '\0';
T0* ge1208ov25908;
T0* T1014f6(T0* C)
{
	T0* R = 0;
	if (ge1208os25908) {
		return ge1208ov25908;
	} else {
		ge1208os25908 = '\1';
	}
	R = T17c42();
	ge1208ov25908 = R;
	return R;
}

/* XM_NAMESPACE_RESOLVER.has_prefix */
T1 T345f9(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		t2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T949*)(a1))->a1));
		R = (T6f1(&t2, (T6)(GE_int32(0))));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* XM_CALLBACKS_TO_TREE_FILTER.on_end_tag */
void T105f19(T0* C, T0* a1, T0* a2, T0* a3)
{
	T0* t1;
	T1 t2;
	t1 = (((T100*)(GE_void(((T105*)(C))->a5)))->a1);
	t2 = (((((T0*)(GE_void(t1)))->id==99)?T99f10(t1):T100f22(t1)));
	if (t2) {
		((T105*)(C))->a5 = EIF_VOID;
	} else {
		((T105*)(C))->a5 = (T100f15(GE_void(((T105*)(C))->a5)));
	}
}

/* XM_ELEMENT.parent_element */
T0* T100f15(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T1407c10();
	if (((T0*)(GE_void(((T100*)(C))->a1)))->id==99) {
		T99f22(((T100*)(C))->a1, l1);
	} else {
		T100f40(((T100*)(C))->a1, l1);
	}
	R = (((T1407*)(GE_void(l1)))->a1);
	return R;
}

/* XM_DOCUMENT.process */
void T99f22(T0* C, T0* a1)
{
	T1407f12(GE_void(a1), C);
}

/* XM_NODE_TYPER.process_document */
void T1407f12(T0* C, T0* a1)
{
	T1407f13(C);
	((T1407*)(C))->a4 = a1;
	((T1407*)(C))->a3 = a1;
}

/* XM_ELEMENT.is_root_node */
T1 T100f22(T0* C)
{
	T1 R = 0;
	R = ((((T100*)(C))->a1)==(EIF_VOID));
	return R;
}

/* XM_DOCUMENT.is_root_node */
T1 T99f10(T0* C)
{
	T1 R = 0;
	R = ((((T99*)(C))->a6)==(EIF_VOID));
	return R;
}

/* XM_STOP_ON_ERROR_FILTER.on_end_tag */
void T104f13(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 t1;
	t1 = ((T1)(!(((T104*)(C))->a1)));
	if (t1) {
		T104f13p1(C, a1, a2, a3);
	}
}

/* XM_STOP_ON_ERROR_FILTER.on_end_tag */
void T104f13p1(T0* C, T0* a1, T0* a2, T0* a3)
{
	T113x10814T0T0T0(GE_void(((T104*)(C))->a3), a1, a2, a3);
}

/* XM_CALLBACKS_NULL.on_attribute */
void T348f10(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
}

/* XM_NAMESPACE_RESOLVER.on_attribute */
void T345f34(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 t1;
	t1 = (T345f9(C, a2));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t1 = (T345f14(C, a3));
	}
	if (t1) {
		T1014f13(GE_void(((T345*)(C))->a2), a4);
		if (((T345*)(C))->a5) {
			T345f38(C, a2, a3, a4);
		}
	} else {
		t1 = (T345f14(C, a2));
		if (t1) {
			t1 = (T1014f4(GE_void(((T345*)(C))->a2), a2));
			if (t1) {
				T345f35(C, ge1207ov20006);
			} else {
				T1014f14(GE_void(((T345*)(C))->a2), a4, a3);
			}
			if (((T345*)(C))->a5) {
				T345f38(C, a2, a3, a4);
			}
		} else {
			T345f38(C, a2, a3, a4);
		}
	}
}

/* XM_NAMESPACE_RESOLVER_CONTEXT.add */
void T1014f14(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	t1 = (T1281f5(GE_void(((T1014*)(C))->a1)));
	T45f103(GE_void(t1), a1, a2);
}

/* DS_HASH_TABLE [STRING_8, STRING_8].force_new */
void T45f103(T0* C, T0* a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	T6 t3;
	T45f56(C);
	t1 = ((((T45*)(C))->a7)==(((T45*)(C))->a5));
	if (t1) {
		t2 = ((T6)((((T45*)(C))->a7)+((T6)(GE_int32(1)))));
		t2 = (T45f23(C, t2));
		T45f59(C, t2);
	}
	l1 = ((T45*)(C))->a16;
	t1 = ((l1)==((T6)(GE_int32(0))));
	if (t1) {
		((T45*)(C))->a4 = ((T6)((((T45*)(C))->a4)+((T6)(GE_int32(1)))));
		l1 = ((T45*)(C))->a4;
	} else {
		t2 = (T6)(GE_int32(-1));
		t3 = (T45f25(C, l1));
		((T45*)(C))->a16 = ((T6)((t2)-(t3)));
	}
	l2 = (T45f28(C, a2));
	t2 = (T45f22(C, l2));
	T45f60(C, t2, l1);
	T45f61(C, l1, l2);
	T45f58(C, a1, l1);
	T45f62(C, a2, l1);
	((T45*)(C))->a7 = ((T6)((((T45*)(C))->a7)+((T6)(GE_int32(1)))));
}

/* DS_BILINKED_LIST [DS_HASH_TABLE [STRING_8, STRING_8]].last */
T0* T1281f5(T0* C)
{
	T0* R = 0;
	R = (((T1388*)(GE_void(((T1281*)(C))->a2)))->a1);
	return R;
}

/* XM_NAMESPACE_RESOLVER_CONTEXT.shallow_has */
T1 T1014f4(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (((T1281*)(GE_void(((T1014*)(C))->a1)))->a1);
	t2 = (T6f1(&t1, (T6)(GE_int32(0))));
	if (t2) {
		t3 = (T1281f5(GE_void(((T1014*)(C))->a1)));
		R = (T45f48(GE_void(t3), a1));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* XM_NAMESPACE_RESOLVER.attributes_force */
void T345f38(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1016f7(GE_void(((T345*)(C))->a6), a1);
	T1016f7(GE_void(((T345*)(C))->a7), a2);
	T1016f7(GE_void(((T345*)(C))->a8), a3);
}

/* DS_LINKED_QUEUE [STRING_8].force */
void T1016f7(T0* C, T0* a1)
{
	T0* l1 = 0;
	T1 t1;
	l1 = T340c3(a1);
	t1 = (T1016f4(C));
	if (t1) {
		((T1016*)(C))->a1 = l1;
		((T1016*)(C))->a3 = l1;
		((T1016*)(C))->a2 = (T6)(GE_int32(1));
	} else {
		T340f4(GE_void(((T1016*)(C))->a3), l1);
		((T1016*)(C))->a3 = l1;
		((T1016*)(C))->a2 = ((T6)((((T1016*)(C))->a2)+((T6)(GE_int32(1)))));
	}
}

/* DS_LINKED_QUEUE [STRING_8].is_empty */
T1 T1016f4(T0* C)
{
	T1 R = 0;
	R = ((((T1016*)(C))->a2)==((T6)(GE_int32(0))));
	return R;
}

/* XM_NAMESPACE_RESOLVER_CONTEXT.add_default */
void T1014f13(T0* C, T0* a1)
{
	T0* t1;
	t1 = (T1014f7(C));
	T1014f14(C, a1, t1);
}

/* XM_NAMESPACE_RESOLVER.is_xmlns */
T1 T345f14(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		t2 = (T345f20(C));
		R = (T345f21(C, t2, a1));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* XM_NAMESPACE_RESOLVER.same_string */
T1 T345f21(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* t1;
	t1 = (T345f24(C));
	R = (T48f1(GE_void(t1), a1, a2));
	return R;
}

/* XM_NAMESPACE_RESOLVER.string_equality_tester */
T0* T345f24(T0* C)
{
	T0* R = 0;
	if (ge341os1730) {
		return ge341ov1730;
	} else {
		ge341os1730 = '\1';
	}
	R = T48c3();
	ge341ov1730 = R;
	return R;
}

/* XM_NAMESPACE_RESOLVER.xmlns */
unsigned char ge1175os19267 = '\0';
T0* ge1175ov19267;
T0* T345f20(T0* C)
{
	T0* R = 0;
	if (ge1175os19267) {
		return ge1175ov19267;
	} else {
		ge1175os19267 = '\1';
	}
	R = GE_ms("xmlns", 5);
	ge1175ov19267 = R;
	return R;
}

/* XM_CALLBACKS_TO_TREE_FILTER.on_attribute */
void T105f21(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T0* l1 = 0;
	T0* t1;
	t1 = (T105f7(C, a1, a2));
	l1 = T287c5(a3, t1, a4, ((T105*)(C))->a5);
	T105f22(C, l1);
}

/* XM_ATTRIBUTE.make_last */
T0* T287c5(T0* a1, T0* a2, T0* a3, T0* a4)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T287));
	*(T287*)C = GE_default287;
	((T287*)(C))->a1 = a1;
	((T287*)(C))->a2 = a2;
	((T287*)(C))->a3 = a3;
	T100f28(GE_void(a4), C);
	return C;
}

/* XM_STOP_ON_ERROR_FILTER.on_attribute */
void T104f15(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 t1;
	t1 = ((T1)(!(((T104*)(C))->a1)));
	if (t1) {
		T104f15p1(C, a1, a2, a3, a4);
	}
}

/* XM_STOP_ON_ERROR_FILTER.on_attribute */
void T104f15p1(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T113x10812T0T0T0T0(GE_void(((T104*)(C))->a3), a1, a2, a3, a4);
}

/* XM_CALLBACKS_NULL.on_finish */
void T348f3(T0* C)
{
}

/* XM_NAMESPACE_RESOLVER.on_finish */
void T345f27(T0* C)
{
	T113x10806(GE_void(((T345*)(C))->a1));
}

/* XM_CALLBACKS_TO_TREE_FILTER.on_finish */
void T105f13(T0* C)
{
	T113x10806(GE_void(((T105*)(C))->a3));
}

/* XM_STOP_ON_ERROR_FILTER.on_finish */
void T104f7(T0* C)
{
	T1 t1;
	t1 = ((T1)(!(((T104*)(C))->a1)));
	if (t1) {
		T104f7p1(C);
	}
}

/* XM_STOP_ON_ERROR_FILTER.on_finish */
void T104f7p1(T0* C)
{
	T113x10806(GE_void(((T104*)(C))->a3));
}

/* XM_CALLBACKS_NULL.on_start_tag_finish */
void T348f7(T0* C)
{
}

/* XM_NAMESPACE_RESOLVER.on_start_tag_finish */
void T345f31(T0* C)
{
	T0* l1 = 0;
	T1 t1;
	T0* t2;
	t1 = (T345f9(C, ((T345*)(C))->a3));
	if (t1) {
		t1 = (T1014f5(GE_void(((T345*)(C))->a2), ((T345*)(C))->a3));
		if (t1) {
			t2 = (T1014f2(GE_void(((T345*)(C))->a2), ((T345*)(C))->a3));
			T113x10811T0T0T0(GE_void(((T345*)(C))->a1), t2, ((T345*)(C))->a3, ((T345*)(C))->a4);
			T345f37(C);
		} else {
			t2 = (T345f11(C));
			l1 = (T26f9(GE_void(t2), ge1207ov20005));
			t2 = (T345f11(C));
			l1 = (T26f8(GE_void(t2), l1, GE_ms(" in tag <", 9)));
			t2 = (T345f11(C));
			l1 = (T26f8(GE_void(t2), l1, ((T345*)(C))->a3));
			t2 = (T345f11(C));
			l1 = (T26f8(GE_void(t2), l1, GE_ms(":", 1)));
			t2 = (T345f11(C));
			l1 = (T26f8(GE_void(t2), l1, ((T345*)(C))->a4));
			t2 = (T345f11(C));
			l1 = (T26f8(GE_void(t2), l1, GE_ms(">", 1)));
			T345f35(C, l1);
		}
	} else {
		t2 = (T1014f3(GE_void(((T345*)(C))->a2)));
		T113x10811T0T0T0(GE_void(((T345*)(C))->a1), t2, ((T345*)(C))->a3, ((T345*)(C))->a4);
		T345f37(C);
	}
	T345f31p1(C);
}

/* XM_NAMESPACE_RESOLVER.on_start_tag_finish */
void T345f31p1(T0* C)
{
	T113x10813(GE_void(((T345*)(C))->a1));
}

/* XM_NAMESPACE_RESOLVER.string_ */
T0* T345f11(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* XM_NAMESPACE_RESOLVER.on_delayed_attributes */
void T345f37(T0* C)
{
	T1 t1;
	T0* t2;
	T0* t3;
	T0* t4;
	T0* t5;
	t1 = (T345f15(C));
	while (!(t1)) {
		t2 = (T1016f5(GE_void(((T345*)(C))->a6)));
		t1 = (T345f9(C, t2));
		if (t1) {
			t2 = (T1016f5(GE_void(((T345*)(C))->a6)));
			t1 = (T1014f5(GE_void(((T345*)(C))->a2), t2));
			if (t1) {
				t2 = (T1016f5(GE_void(((T345*)(C))->a6)));
				t2 = (T1014f2(GE_void(((T345*)(C))->a2), t2));
				t3 = (T1016f5(GE_void(((T345*)(C))->a6)));
				t4 = (T1016f5(GE_void(((T345*)(C))->a7)));
				t5 = (T1016f5(GE_void(((T345*)(C))->a8)));
				T113x10812T0T0T0T0(GE_void(((T345*)(C))->a1), t2, t3, t4, t5);
			} else {
				t2 = (T1016f5(GE_void(((T345*)(C))->a6)));
				t1 = (T345f16(C, t2));
				if (t1) {
					t2 = (T345f17(C));
					t3 = (T1016f5(GE_void(((T345*)(C))->a6)));
					t4 = (T1016f5(GE_void(((T345*)(C))->a7)));
					t5 = (T1016f5(GE_void(((T345*)(C))->a8)));
					T113x10812T0T0T0T0(GE_void(((T345*)(C))->a1), t2, t3, t4, t5);
				} else {
					t2 = (T1016f5(GE_void(((T345*)(C))->a6)));
					t1 = (T345f14(C, t2));
					if (t1) {
						t2 = (T345f18(C));
						t3 = (T1016f5(GE_void(((T345*)(C))->a6)));
						t4 = (T1016f5(GE_void(((T345*)(C))->a7)));
						t5 = (T1016f5(GE_void(((T345*)(C))->a8)));
						T113x10812T0T0T0T0(GE_void(((T345*)(C))->a1), t2, t3, t4, t5);
					} else {
						T345f35(C, ge1207ov20005);
					}
				}
			}
		} else {
			t2 = (T345f19(C));
			t3 = (T1016f5(GE_void(((T345*)(C))->a6)));
			t4 = (T1016f5(GE_void(((T345*)(C))->a7)));
			t5 = (T1016f5(GE_void(((T345*)(C))->a8)));
			T113x10812T0T0T0T0(GE_void(((T345*)(C))->a1), t2, t3, t4, t5);
		}
		T345f39(C);
		t1 = (T345f15(C));
	}
}

/* XM_NAMESPACE_RESOLVER.attributes_remove */
void T345f39(T0* C)
{
	T1016f8(GE_void(((T345*)(C))->a6));
	T1016f8(GE_void(((T345*)(C))->a7));
	T1016f8(GE_void(((T345*)(C))->a8));
}

/* DS_LINKED_QUEUE [STRING_8].remove */
void T1016f8(T0* C)
{
	T1 t1;
	t1 = ((((T1016*)(C))->a2)==((T6)(GE_int32(1))));
	if (t1) {
		T1016f9(C);
	} else {
		((T1016*)(C))->a1 = (((T340*)(GE_void(((T1016*)(C))->a1)))->a2);
		((T1016*)(C))->a2 = ((T6)((((T1016*)(C))->a2)-((T6)(GE_int32(1)))));
	}
}

/* DS_LINKED_QUEUE [STRING_8].wipe_out */
void T1016f9(T0* C)
{
	((T1016*)(C))->a1 = EIF_VOID;
	((T1016*)(C))->a3 = EIF_VOID;
	((T1016*)(C))->a2 = (T6)(GE_int32(0));
}

/* XM_NAMESPACE_RESOLVER.unprefixed_attribute_namespace */
T0* T345f19(T0* C)
{
	T0* R = 0;
	R = (T345f23(C));
	return R;
}

/* XM_NAMESPACE_RESOLVER.default_namespace */
unsigned char ge1175os19266 = '\0';
T0* ge1175ov19266;
T0* T345f23(T0* C)
{
	T0* R = 0;
	if (ge1175os19266) {
		return ge1175ov19266;
	} else {
		ge1175os19266 = '\1';
	}
	R = GE_ms("", 0);
	ge1175ov19266 = R;
	return R;
}

/* XM_NAMESPACE_RESOLVER.xmlns_namespace */
unsigned char ge1175os19274 = '\0';
T0* ge1175ov19274;
T0* T345f18(T0* C)
{
	T0* R = 0;
	if (ge1175os19274) {
		return ge1175ov19274;
	} else {
		ge1175os19274 = '\1';
	}
	R = GE_ms("http://www.w3.org/2000/xmlns/", 29);
	ge1175ov19274 = R;
	return R;
}

/* XM_NAMESPACE_RESOLVER.xml_prefix_namespace */
unsigned char ge1175os19273 = '\0';
T0* ge1175ov19273;
T0* T345f17(T0* C)
{
	T0* R = 0;
	if (ge1175os19273) {
		return ge1175ov19273;
	} else {
		ge1175os19273 = '\1';
	}
	R = GE_ms("http://www.w3.org/XML/1998/namespace", 36);
	ge1175ov19273 = R;
	return R;
}

/* XM_NAMESPACE_RESOLVER.is_xml */
T1 T345f16(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		t2 = (T345f22(C));
		R = (T345f21(C, t2, a1));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* XM_NAMESPACE_RESOLVER.xml_prefix */
unsigned char ge1175os19268 = '\0';
T0* ge1175ov19268;
T0* T345f22(T0* C)
{
	T0* R = 0;
	if (ge1175os19268) {
		return ge1175ov19268;
	} else {
		ge1175os19268 = '\1';
	}
	R = GE_ms("xml", 3);
	ge1175ov19268 = R;
	return R;
}

/* DS_LINKED_QUEUE [STRING_8].item */
T0* T1016f5(T0* C)
{
	T0* R = 0;
	R = (((T340*)(GE_void(((T1016*)(C))->a1)))->a1);
	return R;
}

/* XM_NAMESPACE_RESOLVER.attributes_is_empty */
T1 T345f15(T0* C)
{
	T1 R = 0;
	R = (T1016f4(GE_void(((T345*)(C))->a6)));
	return R;
}

/* XM_NAMESPACE_RESOLVER_CONTEXT.has */
T1 T1014f5(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	T0* t2;
	l1 = (T1281f7(GE_void(((T1014*)(C))->a1)));
	T1282f8(GE_void(l1));
	t1 = (((T1282*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T1282f6(GE_void(l1)));
		R = (T45f48(GE_void(t2), a1));
		if (R) {
			T1282f9(GE_void(l1));
		} else {
			T1282f10(GE_void(l1));
		}
		t1 = (((T1282*)(GE_void(l1)))->a1);
	}
	return R;
}

/* XM_CALLBACKS_TO_TREE_FILTER.on_start_tag_finish */
void T105f18(T0* C)
{
	T113x10813(GE_void(((T105*)(C))->a3));
}

/* XM_STOP_ON_ERROR_FILTER.on_start_tag_finish */
void T104f12(T0* C)
{
	T1 t1;
	t1 = ((T1)(!(((T104*)(C))->a1)));
	if (t1) {
		T104f12p1(C);
	}
}

/* XM_STOP_ON_ERROR_FILTER.on_start_tag_finish */
void T104f12p1(T0* C)
{
	T113x10813(GE_void(((T104*)(C))->a3));
}

/* XM_CALLBACKS_NULL.on_error */
void T348f11(T0* C, T0* a1)
{
}

/* XM_NAMESPACE_RESOLVER.on_error */
void T345f35(T0* C, T0* a1)
{
	T113x10808T0(GE_void(((T345*)(C))->a1), a1);
}

/* XM_CALLBACKS_TO_TREE_FILTER.on_error */
void T105f20(T0* C, T0* a1)
{
	T113x10808T0(GE_void(((T105*)(C))->a3), a1);
}

/* XM_STOP_ON_ERROR_FILTER.on_error */
void T104f14(T0* C, T0* a1)
{
	((T104*)(C))->a1 = EIF_TRUE;
	((T104*)(C))->a2 = a1;
	T104f14p1(C, a1);
}

/* XM_STOP_ON_ERROR_FILTER.on_error */
void T104f14p1(T0* C, T0* a1)
{
	T113x10808T0(GE_void(((T104*)(C))->a3), a1);
}

/* XM_CALLBACKS_NULL.on_xml_declaration */
void T348f12(T0* C, T0* a1, T0* a2, T1 a3)
{
}

/* XM_NAMESPACE_RESOLVER.on_xml_declaration */
void T345f41(T0* C, T0* a1, T0* a2, T1 a3)
{
	T113x10807T0T0T1(GE_void(((T345*)(C))->a1), a1, a2, a3);
}

/* XM_CALLBACKS_TO_TREE_FILTER.on_xml_declaration */
void T105f23(T0* C, T0* a1, T0* a2, T1 a3)
{
	T113x10807T0T0T1(GE_void(((T105*)(C))->a3), a1, a2, a3);
}

/* XM_STOP_ON_ERROR_FILTER.on_xml_declaration */
void T104f16(T0* C, T0* a1, T0* a2, T1 a3)
{
	T113x10807T0T0T1(GE_void(((T104*)(C))->a3), a1, a2, a3);
}

/* XM_NAMESPACE_RESOLVER.set_next */
void T345f40(T0* C, T0* a1)
{
	((T345*)(C))->a1 = a1;
}

/* XM_CALLBACKS_TO_TREE_FILTER.set_next */
void T105f11(T0* C, T0* a1)
{
	((T105*)(C))->a3 = a1;
}

/* XM_STOP_ON_ERROR_FILTER.set_next */
void T104f5(T0* C, T0* a1)
{
	((T104*)(C))->a3 = a1;
}

/* KL_TEXT_OUTPUT_FILE.put_line */
void T214f24(T0* C, T0* a1)
{
	T214f22(C, a1);
	T214f25(C);
}

/* KL_STRING_OUTPUT_STREAM.put_line */
void T185f6(T0* C, T0* a1)
{
	T185f8(C, a1);
	T185f5(C);
}

/* KL_NULL_TEXT_OUTPUT_STREAM.put_line */
void T183f5(T0* C, T0* a1)
{
	T183f9(C, a1);
	T183f4(C);
}

/* KL_TEXT_OUTPUT_FILE.append */
void T214f29(T0* C, T0* a1)
{
	T0* l1 = 0;
	T1 t1;
	T0* t2;
	l1 = a1;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		t1 = (T22f25(GE_void(l1)));
		t1 = ((T1)(!(t1)));
		if (t1) {
			T22f49(GE_void(l1), (T6)(GE_int32(512)));
		}
		t1 = (T22f25(GE_void(l1)));
		while (!(t1)) {
			t2 = (((T22*)(GE_void(l1)))->a8);
			T214f22(C, t2);
			T22f49(GE_void(l1), (T6)(GE_int32(512)));
			t1 = (T22f25(GE_void(l1)));
		}
	} else {
		T214f29p1(C, a1);
	}
}

/* KL_TEXT_OUTPUT_FILE.append */
void T214f29p1(T0* C, T0* a1)
{
	T1 t1;
	T2 t2;
	t1 = (T22f25(GE_void(a1)));
	t1 = ((T1)(!(t1)));
	if (t1) {
		T22f48(GE_void(a1));
	}
	t1 = (T22f25(GE_void(a1)));
	while (!(t1)) {
		t2 = (((T22*)(GE_void(a1)))->a9);
		T214f23(C, t2);
		T22f48(GE_void(a1));
		t1 = (T22f25(GE_void(a1)));
	}
}

/* KL_STRING_OUTPUT_STREAM.append */
void T185f10(T0* C, T0* a1)
{
	T0* l1 = 0;
	T1 t1;
	T0* t2;
	l1 = a1;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		t1 = (T22f25(GE_void(l1)));
		t1 = ((T1)(!(t1)));
		if (t1) {
			T22f49(GE_void(l1), (T6)(GE_int32(512)));
		}
		t1 = (T22f25(GE_void(l1)));
		while (!(t1)) {
			t2 = (((T22*)(GE_void(l1)))->a8);
			T185f8(C, t2);
			T22f49(GE_void(l1), (T6)(GE_int32(512)));
			t1 = (T22f25(GE_void(l1)));
		}
	} else {
		T185f10p1(C, a1);
	}
}

/* KL_STRING_OUTPUT_STREAM.append */
void T185f10p1(T0* C, T0* a1)
{
	T1 t1;
	T2 t2;
	t1 = (T22f25(GE_void(a1)));
	t1 = ((T1)(!(t1)));
	if (t1) {
		T22f48(GE_void(a1));
	}
	t1 = (T22f25(GE_void(a1)));
	while (!(t1)) {
		t2 = (((T22*)(GE_void(a1)))->a9);
		T185f7(C, t2);
		T22f48(GE_void(a1));
		t1 = (T22f25(GE_void(a1)));
	}
}

/* KL_NULL_TEXT_OUTPUT_STREAM.append */
void T183f6(T0* C, T0* a1)
{
	T0* l1 = 0;
	T1 t1;
	T0* t2;
	l1 = a1;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		t1 = (T22f25(GE_void(l1)));
		t1 = ((T1)(!(t1)));
		if (t1) {
			T22f49(GE_void(l1), (T6)(GE_int32(512)));
		}
		t1 = (T22f25(GE_void(l1)));
		while (!(t1)) {
			t2 = (((T22*)(GE_void(l1)))->a8);
			T183f9(C, t2);
			T22f49(GE_void(l1), (T6)(GE_int32(512)));
			t1 = (T22f25(GE_void(l1)));
		}
	} else {
		T183f6p1(C, a1);
	}
}

/* KL_NULL_TEXT_OUTPUT_STREAM.append */
void T183f6p1(T0* C, T0* a1)
{
	T1 t1;
	T2 t2;
	t1 = (T22f25(GE_void(a1)));
	t1 = ((T1)(!(t1)));
	if (t1) {
		T22f48(GE_void(a1));
	}
	t1 = (T22f25(GE_void(a1)));
	while (!(t1)) {
		t2 = (((T22*)(GE_void(a1)))->a9);
		T183f7(C, t2);
		T22f48(GE_void(a1));
		t1 = (T22f25(GE_void(a1)));
	}
}

/* KL_TEXT_OUTPUT_FILE.put_integer */
void T214f28(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)==((T6)(GE_int32(0))));
	if (t1) {
		T214f23(C, (T2)('0'));
	} else {
		t1 = ((T1)((a1)<((T6)(GE_int32(0)))));
		if (t1) {
			T214f23(C, (T2)('-'));
			t2 = ((T6)((a1)+((T6)(GE_int32(1)))));
			l1 = ((T6)(-(t2)));
			l2 = ((T6)((l1)/((T6)(GE_int32(10)))));
			t2 = ((T6)((l1)%((T6)(GE_int32(10)))));
			switch (t2) {
			case (T6)(T6)(GE_int32(0)):
				t1 = ((l2)!=((T6)(GE_int32(0))));
				if (t1) {
					T214f28(C, l2);
				}
				T214f23(C, (T2)('1'));
				break;
			case (T6)(T6)(GE_int32(1)):
				t1 = ((l2)!=((T6)(GE_int32(0))));
				if (t1) {
					T214f28(C, l2);
				}
				T214f23(C, (T2)('2'));
				break;
			case (T6)(T6)(GE_int32(2)):
				t1 = ((l2)!=((T6)(GE_int32(0))));
				if (t1) {
					T214f28(C, l2);
				}
				T214f23(C, (T2)('3'));
				break;
			case (T6)(T6)(GE_int32(3)):
				t1 = ((l2)!=((T6)(GE_int32(0))));
				if (t1) {
					T214f28(C, l2);
				}
				T214f23(C, (T2)('4'));
				break;
			case (T6)(T6)(GE_int32(4)):
				t1 = ((l2)!=((T6)(GE_int32(0))));
				if (t1) {
					T214f28(C, l2);
				}
				T214f23(C, (T2)('5'));
				break;
			case (T6)(T6)(GE_int32(5)):
				t1 = ((l2)!=((T6)(GE_int32(0))));
				if (t1) {
					T214f28(C, l2);
				}
				T214f23(C, (T2)('6'));
				break;
			case (T6)(T6)(GE_int32(6)):
				t1 = ((l2)!=((T6)(GE_int32(0))));
				if (t1) {
					T214f28(C, l2);
				}
				T214f23(C, (T2)('7'));
				break;
			case (T6)(T6)(GE_int32(7)):
				t1 = ((l2)!=((T6)(GE_int32(0))));
				if (t1) {
					T214f28(C, l2);
				}
				T214f23(C, (T2)('8'));
				break;
			case (T6)(T6)(GE_int32(8)):
				t1 = ((l2)!=((T6)(GE_int32(0))));
				if (t1) {
					T214f28(C, l2);
				}
				T214f23(C, (T2)('9'));
				break;
			case (T6)(T6)(GE_int32(9)):
				t2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				T214f28(C, t2);
				T214f23(C, (T2)('0'));
				break;
			default:
				break;
			}
		} else {
			l1 = a1;
			l2 = ((T6)((l1)/((T6)(GE_int32(10)))));
			t1 = ((l2)!=((T6)(GE_int32(0))));
			if (t1) {
				T214f28(C, l2);
			}
			t2 = ((T6)((l1)%((T6)(GE_int32(10)))));
			switch (t2) {
			case (T6)(T6)(GE_int32(0)):
				T214f23(C, (T2)('0'));
				break;
			case (T6)(T6)(GE_int32(1)):
				T214f23(C, (T2)('1'));
				break;
			case (T6)(T6)(GE_int32(2)):
				T214f23(C, (T2)('2'));
				break;
			case (T6)(T6)(GE_int32(3)):
				T214f23(C, (T2)('3'));
				break;
			case (T6)(T6)(GE_int32(4)):
				T214f23(C, (T2)('4'));
				break;
			case (T6)(T6)(GE_int32(5)):
				T214f23(C, (T2)('5'));
				break;
			case (T6)(T6)(GE_int32(6)):
				T214f23(C, (T2)('6'));
				break;
			case (T6)(T6)(GE_int32(7)):
				T214f23(C, (T2)('7'));
				break;
			case (T6)(T6)(GE_int32(8)):
				T214f23(C, (T2)('8'));
				break;
			case (T6)(T6)(GE_int32(9)):
				T214f23(C, (T2)('9'));
				break;
			default:
				break;
			}
		}
	}
}

/* KL_STRING_OUTPUT_STREAM.put_integer */
void T185f9(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)==((T6)(GE_int32(0))));
	if (t1) {
		T185f7(C, (T2)('0'));
	} else {
		t1 = ((T1)((a1)<((T6)(GE_int32(0)))));
		if (t1) {
			T185f7(C, (T2)('-'));
			t2 = ((T6)((a1)+((T6)(GE_int32(1)))));
			l1 = ((T6)(-(t2)));
			l2 = ((T6)((l1)/((T6)(GE_int32(10)))));
			t2 = ((T6)((l1)%((T6)(GE_int32(10)))));
			switch (t2) {
			case (T6)(T6)(GE_int32(0)):
				t1 = ((l2)!=((T6)(GE_int32(0))));
				if (t1) {
					T185f9(C, l2);
				}
				T185f7(C, (T2)('1'));
				break;
			case (T6)(T6)(GE_int32(1)):
				t1 = ((l2)!=((T6)(GE_int32(0))));
				if (t1) {
					T185f9(C, l2);
				}
				T185f7(C, (T2)('2'));
				break;
			case (T6)(T6)(GE_int32(2)):
				t1 = ((l2)!=((T6)(GE_int32(0))));
				if (t1) {
					T185f9(C, l2);
				}
				T185f7(C, (T2)('3'));
				break;
			case (T6)(T6)(GE_int32(3)):
				t1 = ((l2)!=((T6)(GE_int32(0))));
				if (t1) {
					T185f9(C, l2);
				}
				T185f7(C, (T2)('4'));
				break;
			case (T6)(T6)(GE_int32(4)):
				t1 = ((l2)!=((T6)(GE_int32(0))));
				if (t1) {
					T185f9(C, l2);
				}
				T185f7(C, (T2)('5'));
				break;
			case (T6)(T6)(GE_int32(5)):
				t1 = ((l2)!=((T6)(GE_int32(0))));
				if (t1) {
					T185f9(C, l2);
				}
				T185f7(C, (T2)('6'));
				break;
			case (T6)(T6)(GE_int32(6)):
				t1 = ((l2)!=((T6)(GE_int32(0))));
				if (t1) {
					T185f9(C, l2);
				}
				T185f7(C, (T2)('7'));
				break;
			case (T6)(T6)(GE_int32(7)):
				t1 = ((l2)!=((T6)(GE_int32(0))));
				if (t1) {
					T185f9(C, l2);
				}
				T185f7(C, (T2)('8'));
				break;
			case (T6)(T6)(GE_int32(8)):
				t1 = ((l2)!=((T6)(GE_int32(0))));
				if (t1) {
					T185f9(C, l2);
				}
				T185f7(C, (T2)('9'));
				break;
			case (T6)(T6)(GE_int32(9)):
				t2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				T185f9(C, t2);
				T185f7(C, (T2)('0'));
				break;
			default:
				break;
			}
		} else {
			l1 = a1;
			l2 = ((T6)((l1)/((T6)(GE_int32(10)))));
			t1 = ((l2)!=((T6)(GE_int32(0))));
			if (t1) {
				T185f9(C, l2);
			}
			t2 = ((T6)((l1)%((T6)(GE_int32(10)))));
			switch (t2) {
			case (T6)(T6)(GE_int32(0)):
				T185f7(C, (T2)('0'));
				break;
			case (T6)(T6)(GE_int32(1)):
				T185f7(C, (T2)('1'));
				break;
			case (T6)(T6)(GE_int32(2)):
				T185f7(C, (T2)('2'));
				break;
			case (T6)(T6)(GE_int32(3)):
				T185f7(C, (T2)('3'));
				break;
			case (T6)(T6)(GE_int32(4)):
				T185f7(C, (T2)('4'));
				break;
			case (T6)(T6)(GE_int32(5)):
				T185f7(C, (T2)('5'));
				break;
			case (T6)(T6)(GE_int32(6)):
				T185f7(C, (T2)('6'));
				break;
			case (T6)(T6)(GE_int32(7)):
				T185f7(C, (T2)('7'));
				break;
			case (T6)(T6)(GE_int32(8)):
				T185f7(C, (T2)('8'));
				break;
			case (T6)(T6)(GE_int32(9)):
				T185f7(C, (T2)('9'));
				break;
			default:
				break;
			}
		}
	}
}

/* KL_NULL_TEXT_OUTPUT_STREAM.put_integer */
void T183f8(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)==((T6)(GE_int32(0))));
	if (t1) {
		T183f7(C, (T2)('0'));
	} else {
		t1 = ((T1)((a1)<((T6)(GE_int32(0)))));
		if (t1) {
			T183f7(C, (T2)('-'));
			t2 = ((T6)((a1)+((T6)(GE_int32(1)))));
			l1 = ((T6)(-(t2)));
			l2 = ((T6)((l1)/((T6)(GE_int32(10)))));
			t2 = ((T6)((l1)%((T6)(GE_int32(10)))));
			switch (t2) {
			case (T6)(T6)(GE_int32(0)):
				t1 = ((l2)!=((T6)(GE_int32(0))));
				if (t1) {
					T183f8(C, l2);
				}
				T183f7(C, (T2)('1'));
				break;
			case (T6)(T6)(GE_int32(1)):
				t1 = ((l2)!=((T6)(GE_int32(0))));
				if (t1) {
					T183f8(C, l2);
				}
				T183f7(C, (T2)('2'));
				break;
			case (T6)(T6)(GE_int32(2)):
				t1 = ((l2)!=((T6)(GE_int32(0))));
				if (t1) {
					T183f8(C, l2);
				}
				T183f7(C, (T2)('3'));
				break;
			case (T6)(T6)(GE_int32(3)):
				t1 = ((l2)!=((T6)(GE_int32(0))));
				if (t1) {
					T183f8(C, l2);
				}
				T183f7(C, (T2)('4'));
				break;
			case (T6)(T6)(GE_int32(4)):
				t1 = ((l2)!=((T6)(GE_int32(0))));
				if (t1) {
					T183f8(C, l2);
				}
				T183f7(C, (T2)('5'));
				break;
			case (T6)(T6)(GE_int32(5)):
				t1 = ((l2)!=((T6)(GE_int32(0))));
				if (t1) {
					T183f8(C, l2);
				}
				T183f7(C, (T2)('6'));
				break;
			case (T6)(T6)(GE_int32(6)):
				t1 = ((l2)!=((T6)(GE_int32(0))));
				if (t1) {
					T183f8(C, l2);
				}
				T183f7(C, (T2)('7'));
				break;
			case (T6)(T6)(GE_int32(7)):
				t1 = ((l2)!=((T6)(GE_int32(0))));
				if (t1) {
					T183f8(C, l2);
				}
				T183f7(C, (T2)('8'));
				break;
			case (T6)(T6)(GE_int32(8)):
				t1 = ((l2)!=((T6)(GE_int32(0))));
				if (t1) {
					T183f8(C, l2);
				}
				T183f7(C, (T2)('9'));
				break;
			case (T6)(T6)(GE_int32(9)):
				t2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				T183f8(C, t2);
				T183f7(C, (T2)('0'));
				break;
			default:
				break;
			}
		} else {
			l1 = a1;
			l2 = ((T6)((l1)/((T6)(GE_int32(10)))));
			t1 = ((l2)!=((T6)(GE_int32(0))));
			if (t1) {
				T183f8(C, l2);
			}
			t2 = ((T6)((l1)%((T6)(GE_int32(10)))));
			switch (t2) {
			case (T6)(T6)(GE_int32(0)):
				T183f7(C, (T2)('0'));
				break;
			case (T6)(T6)(GE_int32(1)):
				T183f7(C, (T2)('1'));
				break;
			case (T6)(T6)(GE_int32(2)):
				T183f7(C, (T2)('2'));
				break;
			case (T6)(T6)(GE_int32(3)):
				T183f7(C, (T2)('3'));
				break;
			case (T6)(T6)(GE_int32(4)):
				T183f7(C, (T2)('4'));
				break;
			case (T6)(T6)(GE_int32(5)):
				T183f7(C, (T2)('5'));
				break;
			case (T6)(T6)(GE_int32(6)):
				T183f7(C, (T2)('6'));
				break;
			case (T6)(T6)(GE_int32(7)):
				T183f7(C, (T2)('7'));
				break;
			case (T6)(T6)(GE_int32(8)):
				T183f7(C, (T2)('8'));
				break;
			case (T6)(T6)(GE_int32(9)):
				T183f7(C, (T2)('9'));
				break;
			default:
				break;
			}
		}
	}
}

/* KL_TEXT_OUTPUT_FILE.put_string */
void T214f22(T0* C, T0* a1)
{
	T0* t1;
	t1 = (T214f12(C));
	t1 = (T26f6(GE_void(t1), a1));
	T214f32(C, t1);
}

/* KL_TEXT_OUTPUT_FILE.old_put_string */
void T214f32(T0* C, T0* a1)
{
	T0* l1 = 0;
	T6 t1;
	T1 t2;
	T74 t3;
	T14 t4;
	t1 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T949*)(a1))->a1));
	t2 = ((t1)!=((T6)(GE_int32(0))));
	if (t2) {
		l1 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a1:((T949*)(a1))->a2));
		(t3).id = 74;
		(t3).a1 = ((l1?(T14)(GE_types[((T0*)(l1))->id].is_special?(T14)((T15*)(l1))->z2:(T14)l1):(T14)0));
		t4 = ((t3).a1);
		t1 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T949*)(a1))->a1));
		T214f36(C, ((T214*)(C))->a4, t4, t1);
	}
}

/* KL_TEXT_OUTPUT_FILE.file_ps */
void T214f36(T0* C, T14 a1, T14 a2, T6 a3)
{
	file_ps((FILE *)a1,( char *)a2,( EIF_INTEGER)a3);
}

/* KL_STRING_OUTPUT_STREAM.put_string */
void T185f8(T0* C, T0* a1)
{
	T0* t1;
	t1 = (T185f3(C));
	t1 = (T26f6(GE_void(t1), a1));
	T17f41(GE_void(((T185*)(C))->a1), t1);
}

/* KL_STRING_OUTPUT_STREAM.string_ */
T0* T185f3(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* KL_NULL_TEXT_OUTPUT_STREAM.put_string */
void T183f9(T0* C, T0* a1)
{
}

/* KL_TEXT_OUTPUT_FILE.put_character */
void T214f23(T0* C, T2 a1)
{
	T214f33(C, a1);
}

/* KL_TEXT_OUTPUT_FILE.old_put_character */
void T214f33(T0* C, T2 a1)
{
	T214f37(C, ((T214*)(C))->a4, a1);
}

/* KL_TEXT_OUTPUT_FILE.file_pc */
void T214f37(T0* C, T14 a1, T2 a2)
{
	file_pc((FILE *)a1,( EIF_CHARACTER)a2);
}

/* KL_STRING_OUTPUT_STREAM.put_character */
void T185f7(T0* C, T2 a1)
{
	T17f39(GE_void(((T185*)(C))->a1), a1);
}

/* KL_NULL_TEXT_OUTPUT_STREAM.put_character */
void T183f7(T0* C, T2 a1)
{
}

/* KL_TEXT_OUTPUT_FILE.put_new_line */
void T214f25(T0* C)
{
	T214f22(C, ge415ov9304);
}

/* KL_STRING_OUTPUT_STREAM.put_new_line */
void T185f5(T0* C)
{
	T185f8(C, ge312ov9304);
}

/* KL_NULL_TEXT_OUTPUT_STREAM.put_new_line */
void T183f4(T0* C)
{
	T183f9(C, ge303ov9304);
}

/* AP_DISPLAY_HELP_FLAG.reset */
void T41f41(T0* C)
{
	((T41*)(C))->a5 = (T6)(GE_int32(0));
}

/* AP_INTEGER_OPTION.reset */
void T37f27(T0* C)
{
	((T37*)(C))->a1 = T96c8();
}

/* DS_LINKED_LIST [INTEGER_32].make */
T0* T96c8(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T96));
	*(T96*)C = GE_default96;
	((T96*)(C))->a3 = (T96f5(C));
	return C;
}

/* DS_LINKED_LIST [INTEGER_32].new_cursor */
T0* T96f5(T0* C)
{
	T0* R = 0;
	R = T344c3(C);
	return R;
}

/* DS_LINKED_LIST_CURSOR [INTEGER_32].make */
T0* T344c3(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T344));
	*(T344*)C = GE_default344;
	((T344*)(C))->a1 = a1;
	((T344*)(C))->a2 = EIF_TRUE;
	return C;
}

/* AP_BOOLEAN_OPTION.reset */
void T36f30(T0* C)
{
	((T36*)(C))->a1 = T93c8();
}

/* DS_LINKED_LIST [BOOLEAN].make */
T0* T93c8(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T93));
	*(T93*)C = GE_default93;
	((T93*)(C))->a3 = (T93f5(C));
	return C;
}

/* DS_LINKED_LIST [BOOLEAN].new_cursor */
T0* T93f5(T0* C)
{
	T0* R = 0;
	R = T342c3(C);
	return R;
}

/* DS_LINKED_LIST_CURSOR [BOOLEAN].make */
T0* T342c3(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T342));
	*(T342*)C = GE_default342;
	((T342*)(C))->a1 = a1;
	((T342*)(C))->a2 = EIF_TRUE;
	return C;
}

/* AP_ENUMERATION_OPTION.reset */
void T35f30(T0* C)
{
	((T35*)(C))->a1 = T80c23((T6)(GE_int32(1)));
}

/* AP_FLAG.reset */
void T33f23(T0* C)
{
	((T33*)(C))->a1 = (T6)(GE_int32(0));
}

/* AP_DISPLAY_HELP_FLAG.record_occurrence */
void T41f42(T0* C, T0* a1)
{
	T41f43(C, a1);
}

/* AP_DISPLAY_HELP_FLAG.display_help */
void T41f43(T0* C, T0* a1)
{
	T0* t1;
	T0* t2;
	t1 = (((T30*)(a1))->a7);
	t2 = (T41f29(C, a1));
	T83f11(GE_void(t1), t2);
	t1 = (T41f30(C));
	T29f2(GE_void(t1), (T6)(GE_int32(0)));
}

/* AP_DISPLAY_HELP_FLAG.exceptions */
T0* T41f30(T0* C)
{
	T0* R = 0;
	if (ge326os1719) {
		return ge326ov1719;
	} else {
		ge326os1719 = '\1';
	}
	R = T29c1();
	ge326ov1719 = R;
	return R;
}

/* AP_ERROR_HANDLER.report_info_message */
void T83f11(T0* C, T0* a1)
{
	T77f13(GE_void(((T83*)(C))->a4), a1);
}

/* AP_DISPLAY_HELP_FLAG.full_help_text */
T0* T41f29(T0* C, T0* a1)
{
	T0* R = 0;
	T6 l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 l5 = 0;
	T0* t1;
	T1 t2;
	T0* t3;
	T6 t4;
	l3 = T1393c3();
	l4 = T1394c2(l3);
	R = (T41f13(C, a1));
	t1 = (((T30*)(a1))->a5);
	t2 = (T17f17(GE_void(t1)));
	t2 = ((T1)(!(t2)));
	if (t2) {
		T17f41(GE_void(R), ge60ov4242);
		t1 = (T41f25(C));
		T97f10(GE_void(t1), (T6)(GE_int32(0)));
		t1 = (T41f25(C));
		t3 = (((T30*)(a1))->a5);
		t1 = (T97f5(GE_void(t1), t3));
		T17f41(GE_void(R), t1);
		T17f41(GE_void(R), ge60ov4243);
	}
	T17f41(GE_void(R), ge60ov4244);
	l2 = (T30f15(a1));
	T1394f3(GE_void(l4), l2);
	l1 = (T6)(GE_int32(0));
	T81f22(GE_void(l2));
	t2 = (T81f9(GE_void(l2)));
	while (!(t2)) {
		t1 = (T81f7(GE_void(l2)));
		t2 = (T38x3728(GE_void(t1)));
		t2 = ((T1)(!(t2)));
		if (t2) {
			t1 = (T81f7(GE_void(l2)));
			t1 = (T38x3721(GE_void(t1)));
			t4 = (((T17*)(GE_void(t1)))->a2);
			l1 = (T6f15(&t4, l1));
		}
		T81f23(GE_void(l2));
		t2 = (T81f9(GE_void(l2)));
	}
	T81f22(GE_void(l2));
	t2 = (T81f9(GE_void(l2)));
	while (!(t2)) {
		t1 = (T81f7(GE_void(l2)));
		t2 = (T38x3728(GE_void(t1)));
		t2 = ((T1)(!(t2)));
		if (t2) {
			if (l5) {
				T17f39(GE_void(R), (T2)('\n'));
			}
			t1 = (T81f7(GE_void(l2)));
			t4 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T41f35(C, t1, t4));
			T17f41(GE_void(R), t1);
			l5 = EIF_TRUE;
		}
		T81f23(GE_void(l2));
		t2 = (T81f9(GE_void(l2)));
	}
	return R;
}

/* AP_DISPLAY_HELP_FLAG.option_help_text */
T0* T41f35(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* t1;
	T6 t2;
	T0* t3;
	T0* t4;
	t1 = (T38x3721(GE_void(a1)));
	t2 = (((T17*)(GE_void(t1)))->a2);
	t2 = ((T6)((a2)-(t2)));
	l1 = T17c43((T2)(' '), t2);
	t1 = (T41f25(C));
	T97f10(GE_void(t1), a2);
	t1 = (T41f25(C));
	t3 = (T38x3721(GE_void(a1)));
	t3 = (T17f9(GE_void(t3), l1));
	t4 = (T38x3717(GE_void(a1)));
	t3 = (T17f9(GE_void(t3), t4));
	R = (T97f5(GE_void(t1), t3));
	return R;
}

/* DS_QUICK_SORTER [AP_OPTION].sort */
void T1394f3(T0* C, T0* a1)
{
	T1394f4(C, a1, ((T1394*)(C))->a1);
}

/* DS_QUICK_SORTER [AP_OPTION].sort_with_comparator */
void T1394f4(T0* C, T0* a1, T0* a2)
{
	T1 t1;
	T6 t2;
	t1 = (T81f17(GE_void(a1)));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = (((T81*)(GE_void(a1)))->a2);
		T1394f5(C, a1, a2, (T6)(GE_int32(1)), t2);
	}
}

/* DS_QUICK_SORTER [AP_OPTION].subsort_with_comparator */
void T1394f5(T0* C, T0* a1, T0* a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T6 l5 = 0;
	T0* l6 = 0;
	T0* l7 = 0;
	T0* l8 = 0;
	T6 l9 = 0;
	T6 l10 = 0;
	T0* l11 = 0;
	T0* l12 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	T1 t4;
	t1 = ((T6)((a4)-(a3)));
	l5 = ((T6)((t1)+((T6)(GE_int32(1)))));
	t2 = ((l5)==((T6)(GE_int32(0))));
	while (!(t2)) {
		l5 = ((T6)((l5)/((T6)(GE_int32(2)))));
		l4 = ((T6)((l4)+((T6)(GE_int32(1)))));
		t2 = ((l5)==((T6)(GE_int32(0))));
	}
	l4 = ((T6)((l4)+((T6)(GE_int32(10)))));
	l11 = T323c10((T6)(GE_int32(1)), l4);
	l12 = T323c10((T6)(GE_int32(1)), l4);
	T323f11(GE_void(l11), a3, (T6)(GE_int32(1)));
	T323f11(GE_void(l12), a4, (T6)(GE_int32(1)));
	l4 = (T6)(GE_int32(1));
	t2 = ((l4)==((T6)(GE_int32(0))));
	while (!(t2)) {
		l9 = (T323f4(GE_void(l11), l4));
		l10 = (T323f4(GE_void(l12), l4));
		l4 = ((T6)((l4)-((T6)(GE_int32(1)))));
		l1 = l9;
		l2 = l10;
		t2 = ((T1)((l1)<(l2)));
		if (t2) {
			t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t2 = ((l2)==(t1));
			if (t2) {
				l7 = (T81f11(GE_void(a1), l1));
				l8 = (T81f11(GE_void(a1), l2));
				t2 = (T1393f1(GE_void(a2), l8, l7));
				if (t2) {
					T81f29(GE_void(a1), l7, l2);
					T81f29(GE_void(a1), l8, l1);
				}
			} else {
				t1 = ((T6)((l1)+(l2)));
				l3 = ((T6)((t1)/((T6)(GE_int32(2)))));
				l6 = (T81f11(GE_void(a1), l3));
				t3 = (T81f11(GE_void(a1), l10));
				T81f29(GE_void(a1), t3, l3);
				t2 = (T6f12(&l1, l2));
				while (!(t2)) {
					t2 = (T6f12(&l1, l2));
					if (!(t2)) {
						t3 = (T81f11(GE_void(a1), l1));
						t4 = (T1393f1(GE_void(a2), t3, l6));
						t2 = ((T1)(!(t4)));
					}
					while (!(t2)) {
						l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
						t2 = (T6f12(&l1, l2));
						if (!(t2)) {
							t3 = (T81f11(GE_void(a1), l1));
							t4 = (T1393f1(GE_void(a2), t3, l6));
							t2 = ((T1)(!(t4)));
						}
					}
					l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
					t2 = (T6f13(&l2, l1));
					if (!(t2)) {
						t3 = (T81f11(GE_void(a1), l2));
						t4 = (T1393f1(GE_void(a2), l6, t3));
						t2 = ((T1)(!(t4)));
					}
					while (!(t2)) {
						l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
						t2 = (T6f13(&l2, l1));
						if (!(t2)) {
							t3 = (T81f11(GE_void(a1), l2));
							t4 = (T1393f1(GE_void(a2), l6, t3));
							t2 = ((T1)(!(t4)));
						}
					}
					t2 = ((T1)((l1)<(l2)));
					if (t2) {
						T81f30(GE_void(a1), l1, l2);
						l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
					}
					t2 = (T6f12(&l1, l2));
				}
				t3 = (T81f11(GE_void(a1), l1));
				T81f29(GE_void(a1), t3, l10);
				T81f29(GE_void(a1), l6, l1);
				t1 = ((T6)((l1)-((T6)(GE_int32(1)))));
				t2 = (T6f1(&t1, l9));
				if (t2) {
					l4 = ((T6)((l4)+((T6)(GE_int32(1)))));
					T323f12(GE_void(l11), l9, l4);
					t1 = ((T6)((l1)-((T6)(GE_int32(1)))));
					T323f12(GE_void(l12), t1, l4);
				}
				t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				t2 = ((T1)((t1)<(l10)));
				if (t2) {
					l4 = ((T6)((l4)+((T6)(GE_int32(1)))));
					t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
					T323f12(GE_void(l11), t1, l4);
					T323f12(GE_void(l12), l10, l4);
				}
			}
		}
		t2 = ((l4)==((T6)(GE_int32(0))));
	}
}

/* DS_ARRAYED_LIST [AP_OPTION].swap */
void T81f30(T0* C, T6 a1, T6 a2)
{
	T0* l1 = 0;
	T0* t1;
	l1 = (T81f11(C, a1));
	t1 = (T81f11(C, a2));
	T81f29(C, t1, a1);
	T81f29(C, l1, a2);
}

/* DS_ARRAYED_LIST [AP_OPTION].replace */
void T81f29(T0* C, T0* a1, T6 a2)
{
	((T335*)(GE_void(((T81*)(C))->a4)))->z2[a2] = (a1);
}

/* AP_OPTION_COMPARATOR.less_than */
T1 T1393f1(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T2 t2;
	T0* t3;
	T6 t4;
	t1 = (T38x3726(GE_void(a1)));
	if (t1) {
		l1 = (T38x3719(GE_void(a1)));
	} else {
		t2 = (T38x3724(GE_void(a1)));
		l1 = (T2f1(&t2));
	}
	t1 = (T38x3726(GE_void(a2)));
	if (t1) {
		l2 = (T38x3719(GE_void(a2)));
	} else {
		t2 = (T38x3724(GE_void(a2)));
		l2 = (T2f1(&t2));
	}
	t3 = (T1393f2(C));
	t4 = (T26f18(GE_void(t3), l1, l2));
	R = ((t4)==((T6)(GE_int32(-1))));
	return R;
}

/* KL_STRING_ROUTINES.three_way_comparison */
T6 T26f18(T0* C, T0* a1, T0* a2)
{
	T6 R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T6 l5 = 0;
	T2 l6 = 0;
	T2 l7 = 0;
	T6 l8 = 0;
	T6 l9 = 0;
	T1 l10 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	t1 = ((a2)==(a1));
	if (t1) {
		R = (T6)(GE_int32(0));
	} else {
		t2 = (T26f2(C));
		t1 = (T79f1(GE_void(t2), a1, ge412ov2926));
		if (t1) {
			t2 = (T26f2(C));
			t1 = (T79f1(GE_void(t2), a2, ge412ov2926));
		}
		if (t1) {
			l4 = (((T17*)(GE_void(a1)))->a2);
			l5 = (((T17*)(GE_void(a2)))->a2);
			t1 = ((T1)((l4)<(l5)));
			if (t1) {
				l3 = l4;
			} else {
				l3 = l5;
			}
			l2 = (T6)(GE_int32(1));
			t1 = (T6f1(&l2, l3));
			while (!(t1)) {
				l6 = (T17f10(GE_void(a1), l2));
				l7 = (T17f10(GE_void(a2), l2));
				t1 = ((l6)==(l7));
				if (t1) {
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					t1 = (T2f5(&l6, l7));
					if (t1) {
						l10 = EIF_TRUE;
						R = (T6)(GE_int32(-1));
						l2 = ((T6)((l3)+((T6)(GE_int32(1)))));
					} else {
						l10 = EIF_TRUE;
						R = (T6)(GE_int32(1));
						l2 = ((T6)((l3)+((T6)(GE_int32(1)))));
					}
				}
				t1 = (T6f1(&l2, l3));
			}
			t1 = ((T1)(!(l10)));
			if (t1) {
				t1 = ((T1)((l4)<(l5)));
				if (t1) {
					R = (T6)(GE_int32(-1));
				} else {
					t1 = ((l4)!=(l5));
					if (t1) {
						R = (T6)(GE_int32(1));
					}
				}
			}
		} else {
			l1 = EIF_VOID;
			t1 = ((l1)!=(EIF_VOID));
			if (t1) {
				R = ((GE_void(l1), a2, (T6)0));
			} else {
				l1 = EIF_VOID;
				t1 = ((l1)!=(EIF_VOID));
				if (t1) {
					t3 = ((GE_void(l1), a1, (T6)0));
					R = ((T6)(-(t3)));
				} else {
					l4 = (((T17*)(GE_void(a1)))->a2);
					l5 = (((T17*)(GE_void(a2)))->a2);
					t1 = ((T1)((l4)<(l5)));
					if (t1) {
						l3 = l4;
					} else {
						l3 = l5;
					}
					l2 = (T6)(GE_int32(1));
					t1 = (T6f1(&l2, l3));
					while (!(t1)) {
						l8 = (T17f7(GE_void(a1), l2));
						l9 = (T17f7(GE_void(a2), l2));
						t1 = ((l8)==(l9));
						if (t1) {
							l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
						} else {
							t1 = ((T1)((l8)<(l9)));
							if (t1) {
								l10 = EIF_TRUE;
								R = (T6)(GE_int32(-1));
								l2 = ((T6)((l3)+((T6)(GE_int32(1)))));
							} else {
								l10 = EIF_TRUE;
								R = (T6)(GE_int32(1));
								l2 = ((T6)((l3)+((T6)(GE_int32(1)))));
							}
						}
						t1 = (T6f1(&l2, l3));
					}
					t1 = ((T1)(!(l10)));
					if (t1) {
						t1 = ((T1)((l4)<(l5)));
						if (t1) {
							R = (T6)(GE_int32(-1));
						} else {
							t1 = ((l4)!=(l5));
							if (t1) {
								R = (T6)(GE_int32(1));
							}
						}
					}
				}
			}
		}
	}
	return R;
}

/* AP_OPTION_COMPARATOR.string_ */
T0* T1393f2(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* DS_QUICK_SORTER [AP_OPTION].make */
T0* T1394c2(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T1394));
	*(T1394*)C = GE_default1394;
	((T1394*)(C))->a1 = a1;
	return C;
}

/* AP_OPTION_COMPARATOR.default_create */
T0* T1393c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T1393));
	*(T1393*)C = GE_default1393;
	return C;
}

/* AP_INTEGER_OPTION.record_occurrence */
void T37f28(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	t1 = (((T30*)(a1))->a11);
	t2 = (((((T0*)(GE_void(t1)))->id==17)?T17f23(t1):T949f35(t1)));
	if (t2) {
		t1 = (((T30*)(a1))->a11);
		t3 = (((((T0*)(GE_void(t1)))->id==17)?T17f16(t1):T949f36(t1)));
		T96f9(GE_void(((T37*)(C))->a1), t3);
	} else {
		t1 = (((T30*)(a1))->a11);
		l1 = T32c20(C, t1);
		t1 = (((T30*)(a1))->a7);
		T83f9(GE_void(t1), l1);
		T96f9(GE_void(((T37*)(C))->a1), (T6)(GE_int32(0)));
	}
}

/* DS_LINKED_LIST [INTEGER_32].force_last */
void T96f9(T0* C, T6 a1)
{
	T0* l1 = 0;
	T1 t1;
	t1 = (T96f6(C));
	if (t1) {
		((T96*)(C))->a4 = T343c3(a1);
		((T96*)(C))->a2 = ((T96*)(C))->a4;
		((T96*)(C))->a1 = (T6)(GE_int32(1));
	} else {
		l1 = ((T96*)(C))->a2;
		((T96*)(C))->a2 = T343c3(a1);
		T343f4(GE_void(l1), ((T96*)(C))->a2);
		((T96*)(C))->a1 = ((T6)((((T96*)(C))->a1)+((T6)(GE_int32(1)))));
	}
}

/* DS_LINKED_LIST [INTEGER_32].is_empty */
T1 T96f6(T0* C)
{
	T1 R = 0;
	R = ((((T96*)(C))->a1)==((T6)(GE_int32(0))));
	return R;
}

/* AP_BOOLEAN_OPTION.record_occurrence */
void T36f31(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	t1 = (T36f21(C));
	t2 = (((T30*)(a1))->a11);
	t3 = (T80f22(GE_void(t1), t2));
	if (t3) {
		T93f9(GE_void(((T36*)(C))->a1), EIF_TRUE);
	} else {
		t1 = (T36f22(C));
		t2 = (((T30*)(a1))->a11);
		t3 = (T80f22(GE_void(t1), t2));
		if (t3) {
			T93f9(GE_void(((T36*)(C))->a1), EIF_FALSE);
		} else {
			t1 = (((T30*)(a1))->a11);
			l1 = T32c20(C, t1);
			t1 = (((T30*)(a1))->a7);
			T83f9(GE_void(t1), l1);
		}
	}
}

/* AP_BOOLEAN_OPTION.false_strings */
unsigned char ge58os4112 = '\0';
T0* ge58ov4112;
T0* T36f22(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge58os4112) {
		return ge58ov4112;
	} else {
		ge58os4112 = '\1';
	}
	R = T80c23((T6)(GE_int32(5)));
	t1 = (T36f23(C));
	T80f41(GE_void(R), t1);
	T80f35(GE_void(R), GE_ms("no", 2));
	T80f35(GE_void(R), GE_ms("n", 1));
	T80f35(GE_void(R), GE_ms("0", 1));
	T80f35(GE_void(R), GE_ms("false", 5));
	T80f35(GE_void(R), GE_ms("f", 1));
	ge58ov4112 = R;
	return R;
}

/* AP_BOOLEAN_OPTION.case_insensitive_string_equality_tester */
unsigned char ge279os3469 = '\0';
T0* ge279ov3469;
T0* T36f23(T0* C)
{
	T0* R = 0;
	if (ge279os3469) {
		return ge279ov3469;
	} else {
		ge279os3469 = '\1';
	}
	R = T1392c3();
	ge279ov3469 = R;
	return R;
}

/* KL_CASE_INSENSITIVE_STRING_EQUALITY_TESTER.default_create */
T0* T1392c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T1392));
	*(T1392*)C = GE_default1392;
	return C;
}

/* DS_LINKED_LIST [BOOLEAN].force_last */
void T93f9(T0* C, T1 a1)
{
	T0* l1 = 0;
	T1 t1;
	t1 = (T93f6(C));
	if (t1) {
		((T93*)(C))->a4 = T341c3(a1);
		((T93*)(C))->a2 = ((T93*)(C))->a4;
		((T93*)(C))->a1 = (T6)(GE_int32(1));
	} else {
		l1 = ((T93*)(C))->a2;
		((T93*)(C))->a2 = T341c3(a1);
		T341f4(GE_void(l1), ((T93*)(C))->a2);
		((T93*)(C))->a1 = ((T6)((((T93*)(C))->a1)+((T6)(GE_int32(1)))));
	}
}

/* DS_LINKABLE [BOOLEAN].put_right */
void T341f4(T0* C, T0* a1)
{
	((T341*)(C))->a2 = a1;
}

/* DS_LINKABLE [BOOLEAN].make */
T0* T341c3(T1 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T341));
	*(T341*)C = GE_default341;
	((T341*)(C))->a1 = a1;
	return C;
}

/* DS_LINKED_LIST [BOOLEAN].is_empty */
T1 T93f6(T0* C)
{
	T1 R = 0;
	R = ((((T93*)(C))->a1)==((T6)(GE_int32(0))));
	return R;
}

/* DS_ARRAYED_LIST [STRING_8].has */
T1 T80f22(T0* C, T0* a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	l1 = ((T80*)(C))->a1;
	l2 = ((T80*)(C))->a6;
	t1 = ((l2)!=(EIF_VOID));
	if (t1) {
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		while (!(t1)) {
			t2 = (((T85*)(GE_void(((T80*)(C))->a3)))->z2[l1]);
			t1 = (((((T0*)(GE_void(l2)))->id==48)?T48f1(l2, t2, a1):T1392f1(l2, t2, a1)));
			if (t1) {
				R = EIF_TRUE;
				l1 = (T6)(GE_int32(0));
			} else {
				l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			}
			t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		}
	} else {
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		while (!(t1)) {
			t2 = (((T85*)(GE_void(((T80*)(C))->a3)))->z2[l1]);
			t1 = ((t2)==(a1));
			if (t1) {
				R = EIF_TRUE;
				l1 = (T6)(GE_int32(0));
			} else {
				l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			}
			t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		}
	}
	return R;
}

/* KL_CASE_INSENSITIVE_STRING_EQUALITY_TESTER.test */
T1 T1392f1(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(a2));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t1 = ((a1)==(EIF_VOID));
		if (t1) {
			R = EIF_FALSE;
		} else {
			t1 = ((a2)==(EIF_VOID));
			if (t1) {
				R = EIF_FALSE;
			} else {
				t2 = (T1392f2(C));
				R = (T26f14(GE_void(t2), a1, a2));
			}
		}
	}
	return R;
}

/* KL_CASE_INSENSITIVE_STRING_EQUALITY_TESTER.string_ */
T0* T1392f2(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* AP_BOOLEAN_OPTION.true_strings */
unsigned char ge58os4113 = '\0';
T0* ge58ov4113;
T0* T36f21(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge58os4113) {
		return ge58ov4113;
	} else {
		ge58os4113 = '\1';
	}
	R = T80c23((T6)(GE_int32(5)));
	t1 = (T36f23(C));
	T80f41(GE_void(R), t1);
	T80f35(GE_void(R), GE_ms("yes", 3));
	T80f35(GE_void(R), GE_ms("y", 1));
	T80f35(GE_void(R), GE_ms("1", 1));
	T80f35(GE_void(R), GE_ms("true", 4));
	T80f35(GE_void(R), GE_ms("t", 1));
	ge58ov4113 = R;
	return R;
}

/* AP_ENUMERATION_OPTION.record_occurrence */
void T35f32(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	T35f32p1(C, a1);
	t1 = (((T30*)(a1))->a11);
	t2 = ((t1)!=(EIF_VOID));
	if (t2) {
		t1 = (((T30*)(a1))->a11);
		t2 = (T88f15(GE_void(((T35*)(C))->a3), t1));
		t2 = ((T1)(!(t2)));
		if (t2) {
			t1 = (((T30*)(a1))->a11);
			l1 = T32c20(C, t1);
			t1 = (((T30*)(a1))->a7);
			T83f9(GE_void(t1), l1);
		}
	}
}

/* DS_LINKED_LIST [STRING_8].has */
T1 T88f15(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	l1 = ((T88*)(C))->a3;
	l2 = ((T88*)(C))->a5;
	t1 = ((l2)!=(EIF_VOID));
	if (t1) {
		t1 = ((l1)==(EIF_VOID));
		while (!(t1)) {
			t2 = (((T340*)(GE_void(l1)))->a1);
			t1 = (T89f1(GE_void(l2), t2, a1));
			if (t1) {
				R = EIF_TRUE;
				l1 = EIF_VOID;
			} else {
				l1 = (((T340*)(GE_void(l1)))->a2);
			}
			t1 = ((l1)==(EIF_VOID));
		}
	} else {
		t1 = ((l1)==(EIF_VOID));
		while (!(t1)) {
			t2 = (((T340*)(GE_void(l1)))->a1);
			t1 = ((t2)==(a1));
			if (t1) {
				R = EIF_TRUE;
				l1 = EIF_VOID;
			} else {
				l1 = (((T340*)(GE_void(l1)))->a2);
			}
			t1 = ((l1)==(EIF_VOID));
		}
	}
	return R;
}

/* AP_ENUMERATION_OPTION.record_occurrence */
void T35f32p1(T0* C, T0* a1)
{
	T0* t1;
	t1 = (((T30*)(a1))->a11);
	T80f27(GE_void(((T35*)(C))->a1), t1);
}

/* AP_FLAG.record_occurrence */
void T33f25(T0* C, T0* a1)
{
	((T33*)(C))->a1 = ((T6)((((T33*)(C))->a1)+((T6)(GE_int32(1)))));
}

/* KL_STDIN_FILE.read_character */
void T956f20(T0* C)
{
	T1 t1;
	t1 = ((((T956*)(C))->a4)!=(EIF_VOID));
	if (t1) {
		((T956*)(C))->a3 = ((GE_void(((T956*)(C))->a4), (T2)0));
		((T956*)(C))->a4 = ((GE_void(((T956*)(C))->a4), (T0*)0));
	} else {
		t1 = (T956f7(C));
		if (t1) {
			((T956*)(C))->a1 = EIF_TRUE;
		} else {
			T956f23(C);
			((T956*)(C))->a1 = (T956f7(C));
		}
	}
}

/* KL_STDIN_FILE.old_read_character */
void T956f23(T0* C)
{
	((T956*)(C))->a3 = (T956f15(C, ((T956*)(C))->a5));
}

/* KL_STDIN_FILE.console_readchar */
T2 T956f15(T0* C, T14 a1)
{
	T2 R = 0;
	R = (T2)(EIF_CHARACTER )console_readchar((FILE *)a1);
	return R;
}

/* KL_STDIN_FILE.old_end_of_file */
T1 T956f7(T0* C)
{
	T1 R = 0;
	R = (T956f12(C, ((T956*)(C))->a5));
	return R;
}

/* KL_STDIN_FILE.console_eof */
T1 T956f12(T0* C, T14 a1)
{
	T1 R = 0;
	R = (T1)EIF_TEST((EIF_BOOLEAN )console_eof((FILE *)a1));
	return R;
}

/* XM_EIFFEL_INPUT_STREAM.read_character */
void T950f32(T0* C)
{
	T1 t1;
	T6 t2;
	T1 t3;
	t1 = ((((T950*)(C))->a2)==((T6)(GE_int32(6))));
	if (t1) {
		T950f34(C);
		t2 = (((T1233*)(GE_void(((T950*)(C))->a3)))->a1);
		t1 = ((t2)==((T6)(GE_int32(0))));
		if (t1) {
			t3 = (((((T0*)(GE_void(((T950*)(C))->a4)))->id==22)?T22f25(((T950*)(C))->a4):((T1416*)(((T950*)(C))->a4))->a1));
			t1 = ((T1)(!(t3)));
		}
		if (t1) {
			T950f35(C);
		}
	} else {
		t2 = (((T1233*)(GE_void(((T950*)(C))->a3)))->a1);
		t1 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t1) {
			T1233f7(GE_void(((T950*)(C))->a3));
			t2 = (((T1233*)(GE_void(((T950*)(C))->a3)))->a1);
			t1 = ((t2)==((T6)(GE_int32(0))));
			if (t1) {
				t3 = (((((T0*)(GE_void(((T950*)(C))->a4)))->id==22)?T22f25(((T950*)(C))->a4):((T1416*)(((T950*)(C))->a4))->a1));
				t1 = ((T1)(!(t3)));
			}
			if (t1) {
				T950f35(C);
			}
		} else {
			T950f35(C);
		}
	}
}

/* DS_LINKED_QUEUE [CHARACTER_8].remove */
void T1233f7(T0* C)
{
	T1 t1;
	t1 = ((((T1233*)(C))->a1)==((T6)(GE_int32(1))));
	if (t1) {
		T1233f9(C);
	} else {
		((T1233*)(C))->a2 = (((T1339*)(GE_void(((T1233*)(C))->a2)))->a2);
		((T1233*)(C))->a1 = ((T6)((((T1233*)(C))->a1)-((T6)(GE_int32(1)))));
	}
}

/* DS_LINKED_QUEUE [CHARACTER_8].wipe_out */
void T1233f9(T0* C)
{
	((T1233*)(C))->a2 = EIF_VOID;
	((T1233*)(C))->a3 = EIF_VOID;
	((T1233*)(C))->a1 = (T6)(GE_int32(0));
}

/* XM_EIFFEL_INPUT_STREAM.noqueue_read_character */
void T950f35(T0* C)
{
	T1 t1;
	t1 = ((((T950*)(C))->a2)==((T6)(GE_int32(1))));
	if (!(t1)) {
		t1 = ((((T950*)(C))->a2)==((T6)(GE_int32(2))));
	}
	if (t1) {
		if (((T0*)(GE_void(((T950*)(C))->a4)))->id==22) {
			T22f48(((T950*)(C))->a4);
		} else {
			T1416f9(((T950*)(C))->a4);
		}
	} else {
		t1 = ((((T950*)(C))->a2)==((T6)(GE_int32(3))));
		if (t1) {
			T950f36(C);
		} else {
			T950f37(C);
		}
	}
}

/* XM_EIFFEL_INPUT_STREAM.utf16_read_character */
void T950f37(T0* C)
{
	T2 l1 = 0;
	T2 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	T6 t4;
	if (((T0*)(GE_void(((T950*)(C))->a4)))->id==22) {
		T22f48(((T950*)(C))->a4);
	} else {
		T1416f9(((T950*)(C))->a4);
	}
	t1 = (((((T0*)(GE_void(((T950*)(C))->a4)))->id==22)?T22f25(((T950*)(C))->a4):((T1416*)(((T950*)(C))->a4))->a1));
	t1 = ((T1)(!(t1)));
	if (t1) {
		l1 = (((((T0*)(GE_void(((T950*)(C))->a4)))->id==22)?((T22*)(((T950*)(C))->a4))->a9:((T1416*)(((T950*)(C))->a4))->a2));
		if (((T0*)(GE_void(((T950*)(C))->a4)))->id==22) {
			T22f48(((T950*)(C))->a4);
		} else {
			T1416f9(((T950*)(C))->a4);
		}
		t1 = (((((T0*)(GE_void(((T950*)(C))->a4)))->id==22)?T22f25(((T950*)(C))->a4):((T1416*)(((T950*)(C))->a4))->a1));
		t1 = ((T1)(!(t1)));
		if (t1) {
			l2 = (((((T0*)(GE_void(((T950*)(C))->a4)))->id==22)?((T22*)(((T950*)(C))->a4))->a9:((T1416*)(((T950*)(C))->a4))->a2));
			l3 = (T950f25(C, l1, l2));
			l4 = (T950f26(C, l1, l2));
			t2 = (T950f22(C));
			t1 = (T1234f3(GE_void(t2), l3));
			if (t1) {
				t2 = (T950f22(C));
				t1 = (T1234f4(GE_void(t2), l3));
				if (t1) {
					t2 = (T950f22(C));
					l5 = (T1234f5(GE_void(t2), l3, l4));
					if (((T0*)(GE_void(((T950*)(C))->a4)))->id==22) {
						T22f48(((T950*)(C))->a4);
					} else {
						T1416f9(((T950*)(C))->a4);
					}
					t1 = (((((T0*)(GE_void(((T950*)(C))->a4)))->id==22)?T22f25(((T950*)(C))->a4):((T1416*)(((T950*)(C))->a4))->a1));
					t1 = ((T1)(!(t1)));
					if (t1) {
						l1 = (((((T0*)(GE_void(((T950*)(C))->a4)))->id==22)?((T22*)(((T950*)(C))->a4))->a9:((T1416*)(((T950*)(C))->a4))->a2));
						if (((T0*)(GE_void(((T950*)(C))->a4)))->id==22) {
							T22f48(((T950*)(C))->a4);
						} else {
							T1416f9(((T950*)(C))->a4);
						}
						t1 = (((((T0*)(GE_void(((T950*)(C))->a4)))->id==22)?T22f25(((T950*)(C))->a4):((T1416*)(((T950*)(C))->a4))->a1));
						t1 = ((T1)(!(t1)));
						if (t1) {
							l2 = (((((T0*)(GE_void(((T950*)(C))->a4)))->id==22)?((T22*)(((T950*)(C))->a4))->a9:((T1416*)(((T950*)(C))->a4))->a2));
							l3 = (T950f25(C, l1, l2));
							l4 = (T950f26(C, l1, l2));
							t2 = (T950f22(C));
							t1 = (T1234f6(GE_void(t2), l3));
							if (t1) {
								t2 = (T950f22(C));
								t3 = (T950f22(C));
								t4 = (T1234f5(GE_void(t3), l3, l4));
								t4 = (T1234f7(GE_void(t2), l5, t4));
								T950f38(C, t4);
							}
						}
					}
				}
			} else {
				t4 = ((T6)((l3)*((T6)(GE_int32(256)))));
				t4 = ((T6)((t4)+(l4)));
				T950f38(C, t4);
			}
		}
	}
}

/* XM_EIFFEL_INPUT_STREAM.append_character */
void T950f38(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T1 t2;
	T2 t3;
	l3 = (T950f27(C));
	t1 = (T950f8(C));
	T26f21(GE_void(t1), l3);
	t1 = (T950f24(C));
	T948f37(GE_void(t1), l3, a1);
	l2 = (((T17*)(GE_void(l3)))->a2);
	l1 = (T6)(GE_int32(1));
	t2 = (T6f1(&l1, l2));
	while (!(t2)) {
		t3 = (T17f10(GE_void(l3), l1));
		T1233f8(GE_void(((T950*)(C))->a3), t3);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t2 = (T6f1(&l1, l2));
	}
}

/* DS_LINKED_QUEUE [CHARACTER_8].force */
void T1233f8(T0* C, T2 a1)
{
	T0* l1 = 0;
	T1 t1;
	l1 = T1339c3(a1);
	t1 = (T1233f4(C));
	if (t1) {
		((T1233*)(C))->a2 = l1;
		((T1233*)(C))->a3 = l1;
		((T1233*)(C))->a1 = (T6)(GE_int32(1));
	} else {
		T1339f4(GE_void(((T1233*)(C))->a3), l1);
		((T1233*)(C))->a3 = l1;
		((T1233*)(C))->a1 = ((T6)((((T1233*)(C))->a1)+((T6)(GE_int32(1)))));
	}
}

/* DS_LINKABLE [CHARACTER_8].put_right */
void T1339f4(T0* C, T0* a1)
{
	((T1339*)(C))->a2 = a1;
}

/* DS_LINKED_QUEUE [CHARACTER_8].is_empty */
T1 T1233f4(T0* C)
{
	T1 R = 0;
	R = ((((T1233*)(C))->a1)==((T6)(GE_int32(0))));
	return R;
}

/* DS_LINKABLE [CHARACTER_8].make */
T0* T1339c3(T2 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T1339));
	*(T1339*)C = GE_default1339;
	((T1339*)(C))->a1 = a1;
	return C;
}

/* XM_EIFFEL_INPUT_STREAM.utf8 */
T0* T950f24(T0* C)
{
	T0* R = 0;
	if (ge339os10153) {
		return ge339ov10153;
	} else {
		ge339os10153 = '\1';
	}
	R = T948c36();
	ge339ov10153 = R;
	return R;
}

/* XM_EIFFEL_INPUT_STREAM.utf8_buffer */
unsigned char ge1274os25348 = '\0';
T0* ge1274ov25348;
T0* T950f27(T0* C)
{
	T0* R = 0;
	if (ge1274os25348) {
		return ge1274ov25348;
	} else {
		ge1274os25348 = '\1';
	}
	R = T17c36((T6)(GE_int32(6)));
	ge1274ov25348 = R;
	return R;
}

/* UC_UTF16_ROUTINES.surrogate */
T6 T1234f7(T0* C, T6 a1, T6 a2)
{
	T6 R = 0;
	T6 t1;
	T6 t2;
	t1 = (T6)(GE_int32(65536));
	t2 = ((T6)((a1)*((T6)(GE_int32(1024)))));
	t2 = ((T6)((t2)+(a2)));
	R = ((T6)((t1)+(t2)));
	return R;
}

/* UC_UTF16_ROUTINES.is_low_surrogate */
T1 T1234f6(T0* C, T6 a1)
{
	T1 R = 0;
	T1 t1;
	t1 = (T6f12(&a1, (T6)(GE_int32(220))));
	if (t1) {
		R = ((T1)((a1)<((T6)(GE_int32(224)))));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* UC_UTF16_ROUTINES.least_10_bits */
T6 T1234f5(T0* C, T6 a1, T6 a2)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)%((T6)(GE_int32(4)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(256)))));
	R = ((T6)((t1)+(a2)));
	return R;
}

/* UC_UTF16_ROUTINES.is_high_surrogate */
T1 T1234f4(T0* C, T6 a1)
{
	T1 R = 0;
	T1 t1;
	t1 = (T6f12(&a1, (T6)(GE_int32(216))));
	if (t1) {
		R = ((T1)((a1)<((T6)(GE_int32(220)))));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* UC_UTF16_ROUTINES.is_surrogate */
T1 T1234f3(T0* C, T6 a1)
{
	T1 R = 0;
	T1 t1;
	t1 = (T6f12(&a1, (T6)(GE_int32(216))));
	if (t1) {
		R = ((T1)((a1)<((T6)(GE_int32(224)))));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* XM_EIFFEL_INPUT_STREAM.utf16 */
unsigned char ge337os2933 = '\0';
T0* ge337ov2933;
T0* T950f22(T0* C)
{
	T0* R = 0;
	if (ge337os2933) {
		return ge337ov2933;
	} else {
		ge337os2933 = '\1';
	}
	R = T1234c16();
	ge337ov2933 = R;
	return R;
}

/* UC_UTF16_ROUTINES.default_create */
T0* T1234c16(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T1234));
	*(T1234*)C = GE_default1234;
	return C;
}

/* XM_EIFFEL_INPUT_STREAM.least_significant */
T6 T950f26(T0* C, T2 a1, T2 a2)
{
	T6 R = 0;
	T1 t1;
	t1 = ((((T950*)(C))->a2)==((T6)(GE_int32(4))));
	if (t1) {
		R = ((T6)(a2));
	} else {
		R = ((T6)(a1));
	}
	return R;
}

/* XM_EIFFEL_INPUT_STREAM.most_significant */
T6 T950f25(T0* C, T2 a1, T2 a2)
{
	T6 R = 0;
	T1 t1;
	t1 = ((((T950*)(C))->a2)==((T6)(GE_int32(4))));
	if (t1) {
		R = ((T6)(a1));
	} else {
		R = ((T6)(a2));
	}
	return R;
}

/* XM_EIFFEL_INPUT_STREAM.latin1_read_character */
void T950f36(T0* C)
{
	T1 t1;
	T2 t2;
	T6 t3;
	if (((T0*)(GE_void(((T950*)(C))->a4)))->id==22) {
		T22f48(((T950*)(C))->a4);
	} else {
		T1416f9(((T950*)(C))->a4);
	}
	t1 = (((((T0*)(GE_void(((T950*)(C))->a4)))->id==22)?T22f25(((T950*)(C))->a4):((T1416*)(((T950*)(C))->a4))->a1));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = (((((T0*)(GE_void(((T950*)(C))->a4)))->id==22)?((T22*)(((T950*)(C))->a4))->a9:((T1416*)(((T950*)(C))->a4))->a2));
		t3 = ((T6)(t2));
		t1 = (T6f12(&t3, (T6)(GE_int32(128))));
		if (t1) {
			t2 = (((((T0*)(GE_void(((T950*)(C))->a4)))->id==22)?((T22*)(((T950*)(C))->a4))->a9:((T1416*)(((T950*)(C))->a4))->a2));
			t3 = ((T6)(t2));
			T950f38(C, t3);
		}
	}
}

/* KL_STRING_INPUT_STREAM.read_character */
void T1416f9(T0* C)
{
	T6 t1;
	T1 t2;
	((T1416*)(C))->a4 = ((T6)((((T1416*)(C))->a4)+((T6)(GE_int32(1)))));
	t1 = (((T17*)(GE_void(((T1416*)(C))->a3)))->a2);
	t2 = (T6f13(&(((T1416*)(C))->a4), t1));
	if (t2) {
		((T1416*)(C))->a2 = (T17f10(GE_void(((T1416*)(C))->a3), ((T1416*)(C))->a4));
	} else {
		((T1416*)(C))->a1 = EIF_TRUE;
	}
}

/* XM_EIFFEL_INPUT_STREAM.utf16_detect_read_character */
void T950f34(T0* C)
{
	T2 l1 = 0;
	T2 l2 = 0;
	T2 l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	T6 t4;
	((T950*)(C))->a2 = (T6)(GE_int32(2));
	if (((T0*)(GE_void(((T950*)(C))->a4)))->id==22) {
		T22f48(((T950*)(C))->a4);
	} else {
		T1416f9(((T950*)(C))->a4);
	}
	t1 = (((((T0*)(GE_void(((T950*)(C))->a4)))->id==22)?T22f25(((T950*)(C))->a4):((T1416*)(((T950*)(C))->a4))->a1));
	t1 = ((T1)(!(t1)));
	if (t1) {
		l1 = (((((T0*)(GE_void(((T950*)(C))->a4)))->id==22)?((T22*)(((T950*)(C))->a4))->a9:((T1416*)(((T950*)(C))->a4))->a2));
		if (((T0*)(GE_void(((T950*)(C))->a4)))->id==22) {
			T22f48(((T950*)(C))->a4);
		} else {
			T1416f9(((T950*)(C))->a4);
		}
		t1 = (((((T0*)(GE_void(((T950*)(C))->a4)))->id==22)?T22f25(((T950*)(C))->a4):((T1416*)(((T950*)(C))->a4))->a1));
		t1 = ((T1)(!(t1)));
		if (t1) {
			l2 = (((((T0*)(GE_void(((T950*)(C))->a4)))->id==22)?((T22*)(((T950*)(C))->a4))->a9:((T1416*)(((T950*)(C))->a4))->a2));
			t2 = (T950f22(C));
			t3 = ((T6)(l1));
			t4 = ((T6)(l2));
			t1 = (T1234f1(GE_void(t2), t3, t4));
			if (t1) {
				((T950*)(C))->a2 = (T6)(GE_int32(4));
			} else {
				t2 = (T950f22(C));
				t3 = ((T6)(l1));
				t4 = ((T6)(l2));
				t1 = (T1234f2(GE_void(t2), t3, t4));
				if (t1) {
					((T950*)(C))->a2 = (T6)(GE_int32(5));
				} else {
					t3 = ((T6)(l1));
					t1 = ((t3)==((T6)(GE_int32(0))));
					if (t1) {
						t1 = ((l2)==((T2)('<')));
					}
					if (t1) {
						((T950*)(C))->a2 = (T6)(GE_int32(4));
						T1233f8(GE_void(((T950*)(C))->a3), (T2)('<'));
					} else {
						t1 = ((l1)==((T2)('<')));
						if (t1) {
							t3 = ((T6)(l2));
							t1 = ((t3)==((T6)(GE_int32(0))));
						}
						if (t1) {
							((T950*)(C))->a2 = (T6)(GE_int32(5));
							T1233f8(GE_void(((T950*)(C))->a3), (T2)('<'));
						} else {
							t2 = (T950f24(C));
							t1 = (T948f30(GE_void(t2), l1, l2));
							if (t1) {
								if (((T0*)(GE_void(((T950*)(C))->a4)))->id==22) {
									T22f48(((T950*)(C))->a4);
								} else {
									T1416f9(((T950*)(C))->a4);
								}
								t1 = (((((T0*)(GE_void(((T950*)(C))->a4)))->id==22)?T22f25(((T950*)(C))->a4):((T1416*)(((T950*)(C))->a4))->a1));
								t1 = ((T1)(!(t1)));
								if (t1) {
									l3 = (((((T0*)(GE_void(((T950*)(C))->a4)))->id==22)?((T22*)(((T950*)(C))->a4))->a9:((T1416*)(((T950*)(C))->a4))->a2));
									t2 = (T950f24(C));
									t1 = (T948f31(GE_void(t2), l1, l2, l3));
									if (t1) {
									} else {
										T1233f8(GE_void(((T950*)(C))->a3), l1);
										T1233f8(GE_void(((T950*)(C))->a3), l2);
										T1233f8(GE_void(((T950*)(C))->a3), l3);
									}
								} else {
									T1233f8(GE_void(((T950*)(C))->a3), l1);
									T1233f8(GE_void(((T950*)(C))->a3), l2);
								}
							} else {
								T1233f8(GE_void(((T950*)(C))->a3), l1);
								T1233f8(GE_void(((T950*)(C))->a3), l2);
							}
						}
					}
				}
			}
		} else {
			T1233f8(GE_void(((T950*)(C))->a3), l1);
		}
	}
}

/* UC_UTF8_ROUTINES.is_endian_detection_character */
T1 T948f31(T0* C, T2 a1, T2 a2, T2 a3)
{
	T1 R = 0;
	T1 t1;
	t1 = (T948f30(C, a1, a2));
	if (t1) {
		R = ((a3)==((T2)('\277')));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* UC_UTF8_ROUTINES.is_endian_detection_character_start */
T1 T948f30(T0* C, T2 a1, T2 a2)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==((T2)('\357')));
	if (t1) {
		R = ((a2)==((T2)('\273')));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* UC_UTF16_ROUTINES.is_endian_detection_character_least_first */
T1 T1234f2(T0* C, T6 a1, T6 a2)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==((T6)(GE_int32(255))));
	if (t1) {
		R = ((a2)==((T6)(GE_int32(254))));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* UC_UTF16_ROUTINES.is_endian_detection_character_most_first */
T1 T1234f1(T0* C, T6 a1, T6 a2)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==((T6)(GE_int32(254))));
	if (t1) {
		R = ((a2)==((T6)(GE_int32(255))));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* KL_TEXT_INPUT_FILE.read_character */
void T22f48(T0* C)
{
	T1 t1;
	t1 = ((((T22*)(C))->a4)!=(EIF_VOID));
	if (t1) {
		((T22*)(C))->a9 = (((T72*)(GE_void(((T22*)(C))->a4)))->a1);
		((T22*)(C))->a4 = (((T72*)(GE_void(((T22*)(C))->a4)))->a2);
	} else {
		t1 = (T22f27(C));
		if (t1) {
			((T22*)(C))->a5 = EIF_TRUE;
		} else {
			T22f51(C);
			((T22*)(C))->a5 = (T22f27(C));
		}
	}
}

/* KL_TEXT_INPUT_FILE.old_read_character */
void T22f51(T0* C)
{
	((T22*)(C))->a9 = (T22f30(C, ((T22*)(C))->a6));
}

/* KL_TEXT_INPUT_FILE.file_gc */
T2 T22f30(T0* C, T14 a1)
{
	T2 R = 0;
	R = (T2)(EIF_CHARACTER )file_gc((FILE *)a1);
	return R;
}

/* KL_STDIN_FILE.close */
void T956f21(T0* C)
{
}

/* XM_EIFFEL_INPUT_STREAM.close */
void T950f33(T0* C)
{
}

/* KL_TEXT_INPUT_FILE.close */
void T22f41(T0* C)
{
	GE_rescue r;
	T1 l1 = 0;
	T1 t1;
	if (GE_setjmp(r.jb) != 0) {
		t1 = ((T1)(!(l1)));
		if (t1) {
			l1 = EIF_TRUE;
			goto GE_retry;
		}
		GE_raise(8);
	}
GE_retry:
	r.previous = GE_last_rescue;
	GE_last_rescue = &r;
	t1 = ((T1)(!(l1)));
	if (t1) {
		T22f44(C);
		((T22*)(C))->a4 = EIF_VOID;
	}
	GE_last_rescue = r.previous;
}

/* KL_TEXT_INPUT_FILE.old_close */
void T22f44(T0* C)
{
	T22f45(C, ((T22*)(C))->a6);
	((T22*)(C))->a1 = (T6)(GE_int32(0));
	((T22*)(C))->a7 = EIF_FALSE;
}

/* KL_TEXT_INPUT_FILE.file_close */
void T22f45(T0* C, T14 a1)
{
	file_close((FILE *)a1);
}

/* ET_KEYWORD.position */
T0* T179f9(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_ALIAS_FREE_NAME.is_infix_freeop */
T1 T684f15(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T684f37(C));
	t2 = ((T2)('\020'));
	R = ((((T684*)(C))->a3)==(t2));
	return R;
}

/* ET_PREFIX_FREE_NAME.is_infix_freeop */
T1 T676f32(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FREE_OPERATOR.is_infix_freeop */
T1 T478f36(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T478f9(C));
	t2 = ((T2)('\020'));
	R = ((((T478*)(C))->a1)==(t2));
	return R;
}

/* ET_ALIAS_FREE_NAME.free_operator_name */
T0* T684f8(T0* C)
{
	T0* R = 0;
	R = (T259x18127(GE_void(((T684*)(C))->a2)));
	return R;
}

/* ET_INFIX_FREE_NAME.free_operator_name */
T0* T678f8(T0* C)
{
	T0* R = 0;
	R = (T259x18127(GE_void(((T678*)(C))->a2)));
	return R;
}

/* ET_PREFIX_FREE_NAME.free_operator_name */
T0* T676f8(T0* C)
{
	T0* R = 0;
	R = (T259x18127(GE_void(((T676*)(C))->a2)));
	return R;
}

/* ET_REDECLARED_FEATURE.selected_count */
T6 T1220f25(T0* C)
{
	T6 R = 0;
	T1 t1;
	t1 = (T1220f17(C));
	if (t1) {
		R = (T6)(GE_int32(1));
	}
	return R;
}

/* ET_INHERITED_FEATURE.selected_count */
T6 T1218f27(T0* C)
{
	T6 R = 0;
	T1 t1;
	t1 = (T1218f18(C));
	if (t1) {
		R = (T6)(GE_int32(1));
	}
	return R;
}

/* ET_REDECLARED_FEATURE.has_replication */
T1 T1220f22(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INHERITED_FEATURE.has_replication */
T1 T1218f24(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_REPLICATED_FEATURE.replicated_feature */
T0* T1257f4(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_REDECLARED_FEATURE.replicated_feature */
T0* T1220f23(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_INHERITED_FEATURE.replicated_feature */
T0* T1218f25(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_REPLICATED_FEATURE.first_feature */
T0* T1257f5(T0* C)
{
	T0* R = 0;
	R = (T1258f9(GE_void(((T1257*)(C))->a1)));
	return R;
}

/* DS_LINKED_LIST [ET_ADAPTED_FEATURE].first */
T0* T1258f9(T0* C)
{
	T0* R = 0;
	R = (((T1362*)(GE_void(((T1258*)(C))->a2)))->a1);
	return R;
}

/* ET_REDECLARED_FEATURE.first_feature */
T0* T1220f24(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_INHERITED_FEATURE.first_feature */
T0* T1218f26(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_REDECLARED_FEATURE.immediate_feature */
T0* T1220f10(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_INHERITED_FEATURE.immediate_feature */
T0* T1218f11(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_EXTERNAL_PROCEDURE.immediate_feature */
T0* T671f53(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_ONCE_PROCEDURE.immediate_feature */
T0* T670f51(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DEFERRED_FUNCTION.immediate_feature */
T0* T665f55(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_ONCE_FUNCTION.immediate_feature */
T0* T664f56(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DO_FUNCTION.immediate_feature */
T0* T662f56(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DEFERRED_PROCEDURE.immediate_feature */
T0* T332f49(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DO_PROCEDURE.immediate_feature */
T0* T326f51(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_ATTRIBUTE.immediate_feature */
T0* T261f51(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.immediate_feature */
T0* T260f53(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.immediate_feature */
T0* T258f53(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_EXTERNAL_FUNCTION.immediate_feature */
T0* T176f59(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_INHERITED_FEATURE.is_redeclared */
T1 T1218f13(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_EXTERNAL_PROCEDURE.is_redeclared */
T1 T671f55(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ONCE_PROCEDURE.is_redeclared */
T1 T670f53(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DEFERRED_FUNCTION.is_redeclared */
T1 T665f57(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ONCE_FUNCTION.is_redeclared */
T1 T664f58(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DO_FUNCTION.is_redeclared */
T1 T662f58(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DEFERRED_PROCEDURE.is_redeclared */
T1 T332f51(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DO_PROCEDURE.is_redeclared */
T1 T326f53(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ATTRIBUTE.is_redeclared */
T1 T261f53(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.is_redeclared */
T1 T260f55(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.is_redeclared */
T1 T258f55(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_EXTERNAL_FUNCTION.is_redeclared */
T1 T176f61(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_REDECLARED_FEATURE.redeclared_feature */
T0* T1220f13(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_INHERITED_FEATURE.redeclared_feature */
T0* T1218f14(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_EXTERNAL_PROCEDURE.redeclared_feature */
T0* T671f56(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_ONCE_PROCEDURE.redeclared_feature */
T0* T670f54(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_DEFERRED_FUNCTION.redeclared_feature */
T0* T665f58(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_ONCE_FUNCTION.redeclared_feature */
T0* T664f59(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_DO_FUNCTION.redeclared_feature */
T0* T662f59(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_DEFERRED_PROCEDURE.redeclared_feature */
T0* T332f52(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_DO_PROCEDURE.redeclared_feature */
T0* T326f54(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_ATTRIBUTE.redeclared_feature */
T0* T261f54(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.redeclared_feature */
T0* T260f56(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.redeclared_feature */
T0* T258f56(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_EXTERNAL_FUNCTION.redeclared_feature */
T0* T176f62(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_REDECLARED_FEATURE.is_inherited */
T1 T1220f14(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_EXTERNAL_PROCEDURE.is_inherited */
T1 T671f57(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ONCE_PROCEDURE.is_inherited */
T1 T670f55(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DEFERRED_FUNCTION.is_inherited */
T1 T665f59(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ONCE_FUNCTION.is_inherited */
T1 T664f60(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DO_FUNCTION.is_inherited */
T1 T662f60(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DEFERRED_PROCEDURE.is_inherited */
T1 T332f53(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DO_PROCEDURE.is_inherited */
T1 T326f55(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ATTRIBUTE.is_inherited */
T1 T261f55(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.is_inherited */
T1 T260f57(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.is_inherited */
T1 T258f57(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_EXTERNAL_FUNCTION.is_inherited */
T1 T176f63(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_REDECLARED_FEATURE.inherited_feature */
T0* T1220f15(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_INHERITED_FEATURE.inherited_feature */
T0* T1218f16(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_EXTERNAL_PROCEDURE.inherited_feature */
T0* T671f58(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_ONCE_PROCEDURE.inherited_feature */
T0* T670f56(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_DEFERRED_FUNCTION.inherited_feature */
T0* T665f60(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_ONCE_FUNCTION.inherited_feature */
T0* T664f61(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_DO_FUNCTION.inherited_feature */
T0* T662f61(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_DEFERRED_PROCEDURE.inherited_feature */
T0* T332f54(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_DO_PROCEDURE.inherited_feature */
T0* T326f56(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_ATTRIBUTE.inherited_feature */
T0* T261f56(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.inherited_feature */
T0* T260f58(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.inherited_feature */
T0* T258f58(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_EXTERNAL_FUNCTION.inherited_feature */
T0* T176f64(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_EXTERNAL_PROCEDURE.flattened_feature */
T0* T671f51(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_ONCE_PROCEDURE.flattened_feature */
T0* T670f49(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DEFERRED_FUNCTION.flattened_feature */
T0* T665f53(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_ONCE_FUNCTION.flattened_feature */
T0* T664f54(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DO_FUNCTION.flattened_feature */
T0* T662f54(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DEFERRED_PROCEDURE.flattened_feature */
T0* T332f47(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DO_PROCEDURE.flattened_feature */
T0* T326f49(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_ATTRIBUTE.flattened_feature */
T0* T261f49(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.flattened_feature */
T0* T260f51(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.flattened_feature */
T0* T258f51(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_EXTERNAL_FUNCTION.flattened_feature */
T0* T176f57(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_EXTERNAL_PROCEDURE.is_adapted */
T1 T671f59(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ONCE_PROCEDURE.is_adapted */
T1 T670f57(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DEFERRED_FUNCTION.is_adapted */
T1 T665f61(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ONCE_FUNCTION.is_adapted */
T1 T664f62(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DO_FUNCTION.is_adapted */
T1 T662f62(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DEFERRED_PROCEDURE.is_adapted */
T1 T332f55(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DO_PROCEDURE.is_adapted */
T1 T326f57(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ATTRIBUTE.is_adapted */
T1 T261f57(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.is_adapted */
T1 T260f59(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.is_adapted */
T1 T258f59(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_EXTERNAL_FUNCTION.is_adapted */
T1 T176f65(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_REDECLARED_FEATURE.adapted_feature */
T0* T1220f11(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_INHERITED_FEATURE.adapted_feature */
T0* T1218f12(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_EXTERNAL_PROCEDURE.adapted_feature */
T0* T671f54(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_ONCE_PROCEDURE.adapted_feature */
T0* T670f52(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_DEFERRED_FUNCTION.adapted_feature */
T0* T665f56(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_ONCE_FUNCTION.adapted_feature */
T0* T664f57(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_DO_FUNCTION.adapted_feature */
T0* T662f57(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_DEFERRED_PROCEDURE.adapted_feature */
T0* T332f50(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_DO_PROCEDURE.adapted_feature */
T0* T326f52(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_ATTRIBUTE.adapted_feature */
T0* T261f52(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.adapted_feature */
T0* T260f54(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.adapted_feature */
T0* T258f54(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_EXTERNAL_FUNCTION.adapted_feature */
T0* T176f60(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_XACE_CLUSTER.is_none */
T1 T283f39(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_LACE_CLUSTER.is_none */
T1 T136f22(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_NONE_GROUP.is_dotnet_assembly */
T1 T315f5(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_XACE_CLUSTER.is_dotnet_assembly */
T1 T283f20(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_LACE_CLUSTER.is_dotnet_assembly */
T1 T136f24(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_NONE_GROUP.is_cluster */
T1 T315f4(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_NONE_GROUP.cluster */
T0* T315f6(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_XACE_CLUSTER.cluster */
T0* T283f21(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_LACE_CLUSTER.cluster */
T0* T136f25(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_NONE_GROUP.full_pathname */
T0* T315f8(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	T1 t1;
	T6 t2;
	l1 = (T315f11(C));
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		t2 = ((GE_void(l1), (T6)0));
		t1 = (T6f1(&t2, (T6)(GE_int32(0))));
	}
	if (t1) {
		R = l1;
	} else {
		R = ((T315*)(C))->a1;
	}
	return R;
}

/* ET_NONE_GROUP.pathname */
T0* T315f11(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_XACE_CLUSTER.full_pathname */
T0* T283f25(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	l1 = ((T283*)(C))->a2;
	if (((T283*)(C))->a3) {
		t1 = ((((T283*)(C))->a15)!=(EIF_VOID));
	} else {
		t1 = EIF_FALSE;
	}
	if (t1) {
		l2 = (T283f25(GE_void(((T283*)(C))->a15)));
		t1 = ((l1)!=(EIF_VOID));
		if (t1) {
			t2 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T949*)(l1))->a1));
			t1 = (T6f1(&t2, (T6)(GE_int32(0))));
		}
		if (t1) {
			l3 = l1;
		} else {
			l3 = ((T283*)(C))->a1;
		}
		t3 = (T283f33(C));
		R = (((((T0*)(GE_void(t3)))->id==70)?T70f8(t3, l2, l3):T71f7(t3, l2, l3)));
	} else {
		t1 = ((l1)!=(EIF_VOID));
		if (t1) {
			t2 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T949*)(l1))->a1));
			t1 = (T6f1(&t2, (T6)(GE_int32(0))));
		}
		if (t1) {
			R = l1;
		} else {
			R = ((T283*)(C))->a1;
		}
	}
	return R;
}

/* ET_XACE_CLUSTER.file_system */
T0* T283f33(T0* C)
{
	T0* R = 0;
	T0* t1;
	T1 t2;
	if (ge307os1725) {
		return ge307ov1725;
	} else {
		ge307os1725 = '\1';
	}
	t1 = (T283f26(C));
	t2 = (T66f1(GE_void(t1)));
	if (t2) {
		R = (T283f34(C));
	} else {
		t1 = (T283f26(C));
		t2 = (T66f2(GE_void(t1)));
		if (t2) {
			R = (T283f35(C));
		} else {
			R = (T283f35(C));
		}
	}
	ge307ov1725 = R;
	return R;
}

/* ET_XACE_CLUSTER.unix_file_system */
T0* T283f35(T0* C)
{
	T0* R = 0;
	if (ge307os1728) {
		return ge307ov1728;
	} else {
		ge307os1728 = '\1';
	}
	R = T71c16();
	ge307ov1728 = R;
	return R;
}

/* ET_XACE_CLUSTER.windows_file_system */
T0* T283f34(T0* C)
{
	T0* R = 0;
	if (ge307os1726) {
		return ge307ov1726;
	} else {
		ge307os1726 = '\1';
	}
	R = T70c20();
	ge307ov1726 = R;
	return R;
}

/* ET_LACE_CLUSTER.full_pathname */
T0* T136f19(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	l1 = (T136f18(C));
	if (((T136*)(C))->a3) {
		t1 = ((((T136*)(C))->a10)!=(EIF_VOID));
	} else {
		t1 = EIF_FALSE;
	}
	if (t1) {
		l2 = (T136f19(GE_void(((T136*)(C))->a10)));
		t1 = ((l1)!=(EIF_VOID));
		if (t1) {
			t2 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T949*)(l1))->a1));
			t1 = (T6f1(&t2, (T6)(GE_int32(0))));
		}
		if (t1) {
			l3 = l1;
		} else {
			l3 = (T136f20(C));
		}
		t3 = (T136f34(C));
		R = (((((T0*)(GE_void(t3)))->id==70)?T70f8(t3, l2, l3):T71f7(t3, l2, l3)));
	} else {
		t1 = ((l1)!=(EIF_VOID));
		if (t1) {
			t2 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T949*)(l1))->a1));
			t1 = (T6f1(&t2, (T6)(GE_int32(0))));
		}
		if (t1) {
			R = l1;
		} else {
			R = (T136f20(C));
		}
	}
	return R;
}

/* ET_LACE_CLUSTER.file_system */
T0* T136f34(T0* C)
{
	T0* R = 0;
	T0* t1;
	T1 t2;
	if (ge307os1725) {
		return ge307ov1725;
	} else {
		ge307os1725 = '\1';
	}
	t1 = (T136f15(C));
	t2 = (T66f1(GE_void(t1)));
	if (t2) {
		R = (T136f16(C));
	} else {
		t1 = (T136f15(C));
		t2 = (T66f2(GE_void(t1)));
		if (t2) {
			R = (T136f17(C));
		} else {
			R = (T136f17(C));
		}
	}
	ge307ov1725 = R;
	return R;
}

/* ET_LACE_CLUSTER.unix_file_system */
T0* T136f17(T0* C)
{
	T0* R = 0;
	if (ge307os1728) {
		return ge307ov1728;
	} else {
		ge307os1728 = '\1';
	}
	R = T71c16();
	ge307ov1728 = R;
	return R;
}

/* ET_LACE_CLUSTER.windows_file_system */
T0* T136f16(T0* C)
{
	T0* R = 0;
	if (ge307os1726) {
		return ge307ov1726;
	} else {
		ge307os1726 = '\1';
	}
	R = T70c20();
	ge307ov1726 = R;
	return R;
}

/* ET_LACE_CLUSTER.pathname */
T0* T136f18(T0* C)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T136*)(C))->a2)!=(EIF_VOID));
	if (t1) {
		R = (((T129*)(GE_void(((T136*)(C))->a2)))->a6);
	}
	return R;
}

/* ET_NONE_GROUP.full_lower_name */
T0* T315f7(T0* C, T2 a1)
{
	T0* R = 0;
	R = (T315f10(C));
	return R;
}

/* ET_NONE_GROUP.lower_name */
T0* T315f10(T0* C)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T2 l3 = 0;
	T1 t1;
	R = ((T315*)(C))->a1;
	l2 = (((T17*)(GE_void(R)))->a2);
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		l3 = (T17f10(GE_void(R), l1));
		t1 = (T2f4(&l3, (T2)('A')));
		if (t1) {
			t1 = (T2f7(&l3, (T2)('Z')));
		}
		if (t1) {
			R = (T17f30(GE_void(R)));
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_XACE_CLUSTER.full_lower_name */
T0* T283f22(T0* C, T2 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	T6 t4;
	t1 = ((((T283*)(C))->a15)!=(EIF_VOID));
	if (t1) {
		l1 = (T283f22(GE_void(((T283*)(C))->a15), a1));
		l2 = (T283f29(C));
		t2 = (T283f30(C));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T949*)(l1))->a1));
		t4 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T949*)(l2))->a1));
		t3 = ((T6)((t3)+(t4)));
		t3 = ((T6)((t3)+((T6)(GE_int32(1)))));
		R = (T26f7(GE_void(t2), l1, t3));
		if (((T0*)(GE_void(R)))->id==17) {
			T17f41(R, l1);
		} else {
			T949f57(R, l1);
		}
		if (((T0*)(GE_void(R)))->id==17) {
			T17f39(R, a1);
		} else {
			T949f58(R, a1);
		}
		t2 = (T283f30(C));
		R = (T26f8(GE_void(t2), R, l2));
	} else {
		R = (T283f29(C));
	}
	return R;
}

/* ET_XACE_CLUSTER.lower_name */
T0* T283f29(T0* C)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T2 l3 = 0;
	T1 t1;
	R = ((T283*)(C))->a1;
	l2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T949*)(R))->a1));
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		l3 = (((((T0*)(GE_void(R)))->id==17)?T17f10(R, l1):T949f7(R, l1)));
		t1 = (T2f4(&l3, (T2)('A')));
		if (t1) {
			t1 = (T2f7(&l3, (T2)('Z')));
		}
		if (t1) {
			R = (((((T0*)(GE_void(R)))->id==17)?T17f30(R):T949f22(R)));
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_LACE_CLUSTER.full_lower_name */
T0* T136f27(T0* C, T2 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	T6 t4;
	t1 = ((((T136*)(C))->a10)!=(EIF_VOID));
	if (t1) {
		l1 = (T136f27(GE_void(((T136*)(C))->a10), a1));
		l2 = (T136f33(C));
		t2 = (T136f30(C));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T949*)(l1))->a1));
		t4 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T949*)(l2))->a1));
		t3 = ((T6)((t3)+(t4)));
		t3 = ((T6)((t3)+((T6)(GE_int32(1)))));
		R = (T26f7(GE_void(t2), l1, t3));
		if (((T0*)(GE_void(R)))->id==17) {
			T17f41(R, l1);
		} else {
			T949f57(R, l1);
		}
		if (((T0*)(GE_void(R)))->id==17) {
			T17f39(R, a1);
		} else {
			T949f58(R, a1);
		}
		t2 = (T136f30(C));
		R = (T26f8(GE_void(t2), R, l2));
	} else {
		R = (T136f33(C));
	}
	return R;
}

/* ET_LACE_CLUSTER.lower_name */
T0* T136f33(T0* C)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T2 l3 = 0;
	T1 t1;
	R = (T136f20(C));
	l2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T949*)(R))->a1));
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		l3 = (((((T0*)(GE_void(R)))->id==17)?T17f10(R, l1):T949f7(R, l1)));
		t1 = (T2f4(&l3, (T2)('A')));
		if (t1) {
			t1 = (T2f7(&l3, (T2)('Z')));
		}
		if (t1) {
			R = (((((T0*)(GE_void(R)))->id==17)?T17f30(R):T949f22(R)));
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_NONE_GROUP.dotnet_assembly */
T0* T315f9(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_XACE_CLUSTER.dotnet_assembly */
T0* T283f23(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_LACE_CLUSTER.dotnet_assembly */
T0* T136f28(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_TAGGED_ASSERTION.assertion */
T0* T848f3(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_EXTERNAL_PROCEDURE_INLINE_AGENT.assertion */
T0* T838f15(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_ONCE_PROCEDURE_INLINE_AGENT.assertion */
T0* T837f16(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DO_PROCEDURE_INLINE_AGENT.assertion */
T0* T836f16(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_EXTERNAL_FUNCTION_INLINE_AGENT.assertion */
T0* T835f17(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_ONCE_FUNCTION_INLINE_AGENT.assertion */
T0* T834f18(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DO_FUNCTION_INLINE_AGENT.assertion */
T0* T832f18(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_MANIFEST_TYPE.assertion */
T0* T822f8(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_STRIP_EXPRESSION.assertion */
T0* T815f11(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_MANIFEST_ARRAY.assertion */
T0* T813f10(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_ONCE_MANIFEST_STRING.assertion */
T0* T812f8(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CALL_AGENT.assertion */
T0* T808f11(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_OLD_EXPRESSION.assertion */
T0* T807f7(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_PREFIX_EXPRESSION.assertion */
T0* T806f6(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_EQUALITY_EXPRESSION.assertion */
T0* T805f7(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_INFIX_EXPRESSION.assertion */
T0* T801f7(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_EXPRESSION_ADDRESS.assertion */
T0* T799f7(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_RESULT_ADDRESS.assertion */
T0* T798f7(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CURRENT_ADDRESS.assertion */
T0* T797f7(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_FEATURE_ADDRESS.assertion */
T0* T796f7(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_PARENTHESIZED_EXPRESSION.assertion */
T0* T791f8(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_PRECURSOR_EXPRESSION.assertion */
T0* T790f9(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_STATIC_CALL_EXPRESSION.assertion */
T0* T775f11(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_BRACKET_EXPRESSION.assertion */
T0* T727f7(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CREATE_EXPRESSION.assertion */
T0* T554f8(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_C2_CHARACTER_CONSTANT.assertion */
T0* T525f17(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_C1_CHARACTER_CONSTANT.assertion */
T0* T524f17(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_FALSE_CONSTANT.assertion */
T0* T523f18(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_TRUE_CONSTANT.assertion */
T0* T522f18(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_UNDERSCORED_REAL_CONSTANT.assertion */
T0* T520f18(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_REGULAR_REAL_CONSTANT.assertion */
T0* T519f18(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_HEXADECIMAL_INTEGER_CONSTANT.assertion */
T0* T518f28(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_UNDERSCORED_INTEGER_CONSTANT.assertion */
T0* T517f29(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_REGULAR_INTEGER_CONSTANT.assertion */
T0* T516f29(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_SPECIAL_MANIFEST_STRING.assertion */
T0* T515f19(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_VERBATIM_STRING.assertion */
T0* T514f23(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_REGULAR_MANIFEST_STRING.assertion */
T0* T513f18(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_C3_CHARACTER_CONSTANT.assertion */
T0* T512f18(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_VOID.assertion */
T0* T500f12(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_BIT_CONSTANT.assertion */
T0* T464f16(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_RESULT.assertion */
T0* T222f12(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_MANIFEST_TUPLE.assertion */
T0* T205f15(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CALL_EXPRESSION.assertion */
T0* T203f12(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CURRENT.assertion */
T0* T198f13(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_IDENTIFIER.assertion */
T0* T129f75(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_TAGGED_ASSERTION.position */
T0* T848f4(T0* C)
{
	T0* R = 0;
	R = (T129f34(GE_void(((T848*)(C))->a1)));
	return R;
}

/* ET_CONVERT_TO_EXPRESSION.agent_actual_argument */
T0* T1420f13(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CONVERT_EXPRESSION.agent_actual_argument */
T0* T1322f11(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_AGENT_TYPED_OPEN_ARGUMENT.agent_actual_argument */
T0* T846f6(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_EXTERNAL_PROCEDURE_INLINE_AGENT.agent_actual_argument */
T0* T838f13(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_ONCE_PROCEDURE_INLINE_AGENT.agent_actual_argument */
T0* T837f14(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DO_PROCEDURE_INLINE_AGENT.agent_actual_argument */
T0* T836f14(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_EXTERNAL_FUNCTION_INLINE_AGENT.agent_actual_argument */
T0* T835f15(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_ONCE_FUNCTION_INLINE_AGENT.agent_actual_argument */
T0* T834f16(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DO_FUNCTION_INLINE_AGENT.agent_actual_argument */
T0* T832f16(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_MANIFEST_TYPE.agent_actual_argument */
T0* T822f7(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_STRIP_EXPRESSION.agent_actual_argument */
T0* T815f10(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_MANIFEST_ARRAY.agent_actual_argument */
T0* T813f9(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_ONCE_MANIFEST_STRING.agent_actual_argument */
T0* T812f7(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CALL_AGENT.agent_actual_argument */
T0* T808f10(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_OLD_EXPRESSION.agent_actual_argument */
T0* T807f6(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_PREFIX_EXPRESSION.agent_actual_argument */
T0* T806f5(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_EQUALITY_EXPRESSION.agent_actual_argument */
T0* T805f6(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_INFIX_EXPRESSION.agent_actual_argument */
T0* T801f6(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_EXPRESSION_ADDRESS.agent_actual_argument */
T0* T799f6(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_RESULT_ADDRESS.agent_actual_argument */
T0* T798f6(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CURRENT_ADDRESS.agent_actual_argument */
T0* T797f6(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_FEATURE_ADDRESS.agent_actual_argument */
T0* T796f6(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_PARENTHESIZED_EXPRESSION.agent_actual_argument */
T0* T791f7(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_PRECURSOR_EXPRESSION.agent_actual_argument */
T0* T790f8(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_STATIC_CALL_EXPRESSION.agent_actual_argument */
T0* T775f10(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_BRACKET_EXPRESSION.agent_actual_argument */
T0* T727f6(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CREATE_EXPRESSION.agent_actual_argument */
T0* T554f7(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_C2_CHARACTER_CONSTANT.agent_actual_argument */
T0* T525f10(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_C1_CHARACTER_CONSTANT.agent_actual_argument */
T0* T524f10(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_FALSE_CONSTANT.agent_actual_argument */
T0* T523f11(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_TRUE_CONSTANT.agent_actual_argument */
T0* T522f11(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_UNDERSCORED_REAL_CONSTANT.agent_actual_argument */
T0* T520f11(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_REGULAR_REAL_CONSTANT.agent_actual_argument */
T0* T519f11(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_HEXADECIMAL_INTEGER_CONSTANT.agent_actual_argument */
T0* T518f21(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_UNDERSCORED_INTEGER_CONSTANT.agent_actual_argument */
T0* T517f22(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_REGULAR_INTEGER_CONSTANT.agent_actual_argument */
T0* T516f22(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_SPECIAL_MANIFEST_STRING.agent_actual_argument */
T0* T515f12(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_VERBATIM_STRING.agent_actual_argument */
T0* T514f16(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_REGULAR_MANIFEST_STRING.agent_actual_argument */
T0* T513f11(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_C3_CHARACTER_CONSTANT.agent_actual_argument */
T0* T512f11(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_QUESTION_MARK_SYMBOL.agent_actual_argument */
T0* T509f8(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_VOID.agent_actual_argument */
T0* T500f11(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_BIT_CONSTANT.agent_actual_argument */
T0* T464f9(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_RESULT.agent_actual_argument */
T0* T222f11(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_MANIFEST_TUPLE.agent_actual_argument */
T0* T205f14(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CALL_EXPRESSION.agent_actual_argument */
T0* T203f11(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CURRENT.agent_actual_argument */
T0* T198f12(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_IDENTIFIER.agent_actual_argument */
T0* T129f74(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_EXTERNAL_PROCEDURE_INLINE_AGENT.type */
T0* T838f14(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_ONCE_PROCEDURE_INLINE_AGENT.type */
T0* T837f15(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_DO_PROCEDURE_INLINE_AGENT.type */
T0* T836f15(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_EXTERNAL_FUNCTION_INLINE_AGENT.type */
T0* T835f16(T0* C)
{
	T0* R = 0;
	R = (T648x6423(GE_void(((T835*)(C))->a7)));
	return R;
}

/* ET_ONCE_FUNCTION_INLINE_AGENT.type */
T0* T834f17(T0* C)
{
	T0* R = 0;
	R = (T648x6423(GE_void(((T834*)(C))->a2)));
	return R;
}

/* ET_DO_FUNCTION_INLINE_AGENT.type */
T0* T832f17(T0* C)
{
	T0* R = 0;
	R = (T648x6423(GE_void(((T832*)(C))->a2)));
	return R;
}

/* ET_EXTERNAL_PROCEDURE_INLINE_AGENT.locals */
T0* T838f23(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_EXTERNAL_FUNCTION_INLINE_AGENT.locals */
T0* T835f24(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_STATIC_CALL_EXPRESSION.choice */
T0* T775f7(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CHOICE_RANGE.choice */
T0* T773f5(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_C2_CHARACTER_CONSTANT.choice */
T0* T525f9(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_C1_CHARACTER_CONSTANT.choice */
T0* T524f9(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_HEXADECIMAL_INTEGER_CONSTANT.choice */
T0* T518f20(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_UNDERSCORED_INTEGER_CONSTANT.choice */
T0* T517f21(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_REGULAR_INTEGER_CONSTANT.choice */
T0* T516f21(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_C3_CHARACTER_CONSTANT.choice */
T0* T512f10(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CALL_EXPRESSION.choice */
T0* T203f10(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_IDENTIFIER.choice */
T0* T129f73(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_STATIC_CALL_EXPRESSION.lower */
T0* T775f19(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_C2_CHARACTER_CONSTANT.lower */
T0* T525f29(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_C1_CHARACTER_CONSTANT.lower */
T0* T524f29(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_HEXADECIMAL_INTEGER_CONSTANT.lower */
T0* T518f36(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_UNDERSCORED_INTEGER_CONSTANT.lower */
T0* T517f37(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_REGULAR_INTEGER_CONSTANT.lower */
T0* T516f37(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_C3_CHARACTER_CONSTANT.lower */
T0* T512f30(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CALL_EXPRESSION.lower */
T0* T203f19(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_IDENTIFIER.lower */
T0* T129f88(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_STATIC_CALL_EXPRESSION.is_range */
T1 T775f20(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_C2_CHARACTER_CONSTANT.is_range */
T1 T525f30(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_C1_CHARACTER_CONSTANT.is_range */
T1 T524f30(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_HEXADECIMAL_INTEGER_CONSTANT.is_range */
T1 T518f37(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_UNDERSCORED_INTEGER_CONSTANT.is_range */
T1 T517f38(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_REGULAR_INTEGER_CONSTANT.is_range */
T1 T516f38(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_C3_CHARACTER_CONSTANT.is_range */
T1 T512f31(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_CALL_EXPRESSION.is_range */
T1 T203f20(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_IDENTIFIER.is_range */
T1 T129f89(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_STATIC_CALL_EXPRESSION.upper */
T0* T775f21(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_C2_CHARACTER_CONSTANT.upper */
T0* T525f31(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_C1_CHARACTER_CONSTANT.upper */
T0* T524f31(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_HEXADECIMAL_INTEGER_CONSTANT.upper */
T0* T518f38(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_UNDERSCORED_INTEGER_CONSTANT.upper */
T0* T517f39(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_REGULAR_INTEGER_CONSTANT.upper */
T0* T516f39(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_C3_CHARACTER_CONSTANT.upper */
T0* T512f32(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CALL_EXPRESSION.upper */
T0* T203f21(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_IDENTIFIER.upper */
T0* T129f90(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.last_leaf */
T0* T569f64(T0* C)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T569*)(C))->a3)!=(EIF_VOID));
	if (t1) {
		R = (T570f11(GE_void(((T569*)(C))->a3)));
	} else {
		R = (T167x6396(GE_void(((T569*)(C))->a2)));
	}
	return R;
}

/* ET_CONSTRAINT_CREATOR.last_leaf */
T0* T570f11(T0* C)
{
	T0* R = 0;
	R = ((T570*)(C))->a2;
	return R;
}

/* ET_FORMAL_PARAMETER.last_leaf */
T0* T561f62(T0* C)
{
	T0* R = 0;
	R = ((T561*)(C))->a1;
	return R;
}

/* ET_CLASS.last_leaf */
T0* T60f158(T0* C)
{
	T0* R = 0;
	R = ((T60*)(C))->a7;
	return R;
}

/* ET_CONVERT_TO_EXPRESSION.arguments_count */
T6 T1420f16(T0* C)
{
	T6 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = (T1420f4(C));
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = ((GE_void(l1), (T6)0));
	}
	return R;
}

/* ET_PREFIX_EXPRESSION.arguments_count */
T6 T806f14(T0* C)
{
	T6 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = (T806f9(C));
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = ((GE_void(l1), (T6)0));
	}
	return R;
}

/* ET_BRACKET_EXPRESSION.arguments_count */
T6 T727f13(T0* C)
{
	T6 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = ((T727*)(C))->a3;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (((T817*)(GE_void(l1)))->a3);
	}
	return R;
}

/* ET_CALL_EXPRESSION.arguments_count */
T6 T203f16(T0* C)
{
	T6 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = ((T203*)(C))->a4;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (((T199*)(GE_void(l1)))->a1);
	}
	return R;
}

/* ET_LABELED_COMMA_ACTUAL_PARAMETER.named_parameter_with_type */
T0* T966f6(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	t1 = (T966f4(C));
	t2 = ((a1)==(t1));
	if (t2) {
		R = C;
	} else {
		l1 = T966c8(((T966*)(C))->a1, a1);
		R = l1;
	}
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.named_parameter_with_type */
T0* T957f38(T0* C, T0* a1)
{
	T0* R = 0;
	R = a1;
	return R;
}

/* ET_LIKE_CURRENT.named_parameter_with_type */
T0* T720f39(T0* C, T0* a1)
{
	T0* R = 0;
	R = a1;
	return R;
}

/* ET_LIKE_FEATURE.named_parameter_with_type */
T0* T718f34(T0* C, T0* a1)
{
	T0* R = 0;
	R = a1;
	return R;
}

/* ET_LABELED_ACTUAL_PARAMETER.named_parameter_with_type */
T0* T716f6(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	t1 = (T716f4(C));
	t2 = ((a1)==(t1));
	if (t2) {
		R = C;
	} else {
		l1 = T716c8(((T716*)(C))->a1, a1);
		R = l1;
	}
	return R;
}

/* ET_BIT_FEATURE.named_parameter_with_type */
T0* T582f36(T0* C, T0* a1)
{
	T0* R = 0;
	R = a1;
	return R;
}

/* ET_BIT_N.named_parameter_with_type */
T0* T581f35(T0* C, T0* a1)
{
	T0* R = 0;
	R = a1;
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.named_parameter_with_type */
T0* T569f54(T0* C, T0* a1)
{
	T0* R = 0;
	R = a1;
	return R;
}

/* ET_FORMAL_PARAMETER.named_parameter_with_type */
T0* T561f51(T0* C, T0* a1)
{
	T0* R = 0;
	R = a1;
	return R;
}

/* ET_TUPLE_TYPE.named_parameter_with_type */
T0* T181f29(T0* C, T0* a1)
{
	T0* R = 0;
	R = a1;
	return R;
}

/* ET_GENERIC_CLASS_TYPE.named_parameter_with_type */
T0* T174f32(T0* C, T0* a1)
{
	T0* R = 0;
	R = a1;
	return R;
}

/* ET_CLASS_TYPE.named_parameter_with_type */
T0* T172f28(T0* C, T0* a1)
{
	T0* R = 0;
	R = a1;
	return R;
}

/* ET_CLASS.named_parameter_with_type */
T0* T60f92(T0* C, T0* a1)
{
	T0* R = 0;
	R = a1;
	return R;
}

/* ET_ALIAS_FREE_NAME.is_prefix */
T1 T684f14(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T684f37(C));
	t2 = ((T2)('A'));
	R = ((((T684*)(C))->a3)==(t2));
	return R;
}

/* ET_ALIAS_NAME.is_prefix */
T1 T680f11(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	T1 t3;
	t1 = (T680f5(C));
	t2 = ((T2)('>'));
	t3 = (T2f4(&(((T680*)(C))->a3), t2));
	if (t3) {
		t1 = (T680f5(C));
		t2 = ((T2)('A'));
		R = (T2f7(&(((T680*)(C))->a3), t2));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_ALIAS_FREE_NAME.is_prefixable */
T1 T684f11(T0* C)
{
	T1 R = 0;
	R = EIF_TRUE;
	return R;
}

/* ET_ALIAS_NAME.is_prefixable */
T1 T680f8(T0* C)
{
	T1 R = 0;
	T1 t1;
	t1 = (T680f11(C));
	if (!(t1)) {
		t1 = (T680f34(C));
	}
	if (!(t1)) {
		R = (T680f35(C));
	} else {
		R = EIF_TRUE;
	}
	return R;
}

/* ET_ALIAS_FREE_NAME.is_infixable */
T1 T684f12(T0* C)
{
	T1 R = 0;
	R = EIF_TRUE;
	return R;
}

/* ET_ALIAS_NAME.is_infixable */
T1 T680f9(T0* C)
{
	T1 R = 0;
	T1 t1;
	t1 = (T680f10(C));
	if (!(t1)) {
		t1 = (T680f36(C));
	}
	if (!(t1)) {
		R = (T680f37(C));
	} else {
		R = EIF_TRUE;
	}
	return R;
}

/* ET_ALIAS_FREE_NAME.is_infix */
T1 T684f13(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T684f37(C));
	t2 = ((T2)('\020'));
	R = ((((T684*)(C))->a3)==(t2));
	return R;
}

/* ET_ALIAS_NAME.is_infix */
T1 T680f10(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	T1 t3;
	t1 = (T680f5(C));
	t2 = ((T2)('\001'));
	t3 = (T2f4(&(((T680*)(C))->a3), t2));
	if (t3) {
		t1 = (T680f5(C));
		t2 = ((T2)('\023'));
		R = (T2f7(&(((T680*)(C))->a3), t2));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_ALIAS_NAME.hash_code */
T6 T680f38(T0* C)
{
	T6 R = 0;
	R = ((T6)(((T680*)(C))->a3));
	return R;
}

/* ET_ALIAS_FREE_NAME.position */
T0* T684f38(T0* C)
{
	T0* R = 0;
	T1 t1;
	R = (T179f9(GE_void(((T684*)(C))->a1)));
	t1 = (T274x11970(GE_void(R)));
	if (t1) {
		R = (T259x6392(GE_void(((T684*)(C))->a2)));
	}
	return R;
}

/* ET_ALIAS_NAME.position */
T0* T680f56(T0* C)
{
	T0* R = 0;
	T1 t1;
	R = (T179f9(GE_void(((T680*)(C))->a1)));
	t1 = (T274x11970(GE_void(R)));
	if (t1) {
		R = (T259x6392(GE_void(((T680*)(C))->a2)));
	}
	return R;
}

/* ET_ALIAS_FREE_NAME.lower_name */
T0* T684f39(T0* C)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T2 l3 = 0;
	T1 t1;
	R = (T684f40(C));
	l2 = (((T17*)(GE_void(R)))->a2);
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		l3 = (T17f10(GE_void(R), l1));
		t1 = (T2f4(&l3, (T2)('A')));
		if (t1) {
			t1 = (T2f7(&l3, (T2)('Z')));
		}
		if (t1) {
			R = (T17f30(GE_void(R)));
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_ALIAS_FREE_NAME.name */
T0* T684f40(T0* C)
{
	T0* R = 0;
	T0* t1;
	T6 t2;
	t1 = (T684f8(C));
	t2 = (((((T0*)(GE_void(t1)))->id==17)?((T17*)(t1))->a2:((T949*)(t1))->a1));
	t2 = ((T6)((t2)+((T6)(GE_int32(8)))));
	R = T17c36(t2);
	T17f41(GE_void(R), ge778ov23179);
	t1 = (T684f8(C));
	T17f41(GE_void(R), t1);
	T17f39(GE_void(R), (T2)('\"'));
	return R;
}

/* ET_ALIAS_NAME.lower_name */
T0* T680f57(T0* C)
{
	T0* R = 0;
	R = (T680f58(C));
	return R;
}

/* ET_ALIAS_NAME.name */
T0* T680f58(T0* C)
{
	T0* R = 0;
	T0* t1;
	switch (((T680*)(C))->a3) {
	case (T2)(T2)('\024'):
		t1 = (T680f5(C));
		R = (ge774ov14318);
		break;
	case (T2)(T2)('\001'):
		t1 = (T680f5(C));
		R = (ge774ov14299);
		break;
	case (T2)(T2)('\021'):
		t1 = (T680f5(C));
		R = (ge774ov14315);
		break;
	case (T2)(T2)('\005'):
		t1 = (T680f5(C));
		R = (ge774ov14303);
		break;
	case (T2)(T2)('\006'):
		t1 = (T680f5(C));
		R = (ge774ov14304);
		break;
	case (T2)(T2)('\007'):
		t1 = (T680f5(C));
		R = (ge774ov14305);
		break;
	case (T2)(T2)('\010'):
		t1 = (T680f5(C));
		R = (ge774ov14306);
		break;
	case (T2)(T2)('\002'):
		t1 = (T680f5(C));
		R = (ge774ov14300);
		break;
	case (T2)(T2)('\t'):
		t1 = (T680f5(C));
		R = (ge774ov14307);
		break;
	case (T2)(T2)('\n'):
		t1 = (T680f5(C));
		R = (ge774ov14308);
		break;
	case (T2)(T2)('\013'):
		t1 = (T680f5(C));
		R = (ge774ov14309);
		break;
	case (T2)(T2)('\014'):
		t1 = (T680f5(C));
		R = (ge774ov14310);
		break;
	case (T2)(T2)('\003'):
		t1 = (T680f5(C));
		R = (ge774ov14301);
		break;
	case (T2)(T2)('\022'):
		t1 = (T680f5(C));
		R = (ge774ov14316);
		break;
	case (T2)(T2)('\r'):
		t1 = (T680f5(C));
		R = (ge774ov14311);
		break;
	case (T2)(T2)('\016'):
		t1 = (T680f5(C));
		R = (ge774ov14312);
		break;
	case (T2)(T2)('\017'):
		t1 = (T680f5(C));
		R = (ge774ov14313);
		break;
	case (T2)(T2)('\004'):
		t1 = (T680f5(C));
		R = (ge774ov14302);
		break;
	case (T2)(T2)('\023'):
		t1 = (T680f5(C));
		R = (ge774ov14314);
		break;
	case (T2)(T2)('?'):
		t1 = (T680f5(C));
		R = (ge774ov14309);
		break;
	case (T2)(T2)('@'):
		t1 = (T680f5(C));
		R = (ge774ov14311);
		break;
	case (T2)(T2)('>'):
		t1 = (T680f5(C));
		R = (ge774ov14317);
		break;
	default:
		t1 = (T680f5(C));
		R = (ge774ov14253);
		break;
	}
	return R;
}

/* ET_ALIAS_FREE_NAME.same_call_name */
T1 T684f9(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	T6 t2;
	T1 t3;
	T0* t4;
	T0* t5;
	T0* t6;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		if ((a1)==EIF_VOID) {
			l1 = EIF_VOID;
		} else {
			switch (((T0*)(a1))->id) {
			case 676:
			case 678:
			case 684:
			case 478:
				l1 = a1;
				break;
			default:
				l1 = EIF_VOID;
			}
		}
		t1 = ((l1)!=(EIF_VOID));
		if (t1) {
			t2 = (T1321x23(GE_void(l1)));
			t1 = ((((T684*)(C))->a4)==(t2));
			if (t1) {
				t1 = (T684f15(C));
				t3 = (T1321x11866(GE_void(l1)));
				t1 = ((t1)!=(t3));
				if (t1) {
					R = EIF_FALSE;
				} else {
					t4 = (T1321x21411(GE_void(l1)));
					t5 = (T684f8(C));
					t1 = ((t4)==(t5));
					if (t1) {
						R = EIF_TRUE;
					} else {
						t4 = (T684f7(C));
						t5 = (T684f8(C));
						t6 = (T1321x21411(GE_void(l1)));
						R = (T26f14(GE_void(t4), t5, t6));
					}
				}
			}
		}
	}
	return R;
}

/* ET_ALIAS_NAME.same_call_name */
T1 T680f6(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		switch (((T680*)(C))->a3) {
		case (T2)(T2)('\024'):
			R = (T225x11886(GE_void(a1)));
			break;
		case (T2)(T2)('\001'):
			R = (T225x11862(GE_void(a1)));
			break;
		case (T2)(T2)('\021'):
			R = (T225x11863(GE_void(a1)));
			break;
		case (T2)(T2)('\005'):
			R = (T225x11864(GE_void(a1)));
			break;
		case (T2)(T2)('\006'):
			R = (T225x11865(GE_void(a1)));
			break;
		case (T2)(T2)('\007'):
			R = (T225x11867(GE_void(a1)));
			break;
		case (T2)(T2)('\010'):
			R = (T225x11868(GE_void(a1)));
			break;
		case (T2)(T2)('\002'):
			R = (T225x11869(GE_void(a1)));
			break;
		case (T2)(T2)('\t'):
			R = (T225x11870(GE_void(a1)));
			break;
		case (T2)(T2)('\n'):
			R = (T225x11871(GE_void(a1)));
			break;
		case (T2)(T2)('\013'):
			R = (T225x11872(GE_void(a1)));
			break;
		case (T2)(T2)('\014'):
			R = (T225x11873(GE_void(a1)));
			break;
		case (T2)(T2)('\003'):
			R = (T225x11874(GE_void(a1)));
			break;
		case (T2)(T2)('\022'):
			R = (T225x11875(GE_void(a1)));
			break;
		case (T2)(T2)('\r'):
			R = (T225x11876(GE_void(a1)));
			break;
		case (T2)(T2)('\016'):
			R = (T225x11877(GE_void(a1)));
			break;
		case (T2)(T2)('\017'):
			R = (T225x11878(GE_void(a1)));
			break;
		case (T2)(T2)('\004'):
			R = (T225x11879(GE_void(a1)));
			break;
		case (T2)(T2)('\023'):
			R = (T225x11880(GE_void(a1)));
			break;
		case (T2)(T2)('?'):
			R = (T225x11882(GE_void(a1)));
			break;
		case (T2)(T2)('@'):
			R = (T225x11883(GE_void(a1)));
			break;
		case (T2)(T2)('>'):
			R = (T225x11885(GE_void(a1)));
			break;
		default:
			break;
		}
	}
	return R;
}

/* ET_ALIAS_FREE_NAME.same_alias_name */
T1 T684f42(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	T0* t4;
	T0* t5;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t2 = (T684f43(C));
		t2 = (T79f4(GE_void(t2), a1));
		if ((t2)==EIF_VOID) {
			l1 = EIF_VOID;
		} else {
			switch (((T0*)(t2))->id) {
			case 676:
			case 678:
			case 684:
				l1 = t2;
				break;
			default:
				l1 = EIF_VOID;
			}
		}
		t1 = ((l1)!=(EIF_VOID));
		if (t1) {
			t3 = (T1321x23(GE_void(l1)));
			t1 = ((((T684*)(C))->a4)==(t3));
			if (t1) {
				t2 = (T1321x21411(GE_void(l1)));
				t4 = (T684f8(C));
				t1 = ((t2)==(t4));
				if (t1) {
					R = EIF_TRUE;
				} else {
					t2 = (T684f7(C));
					t4 = (T684f8(C));
					t5 = (T1321x21411(GE_void(l1)));
					R = (T26f14(GE_void(t2), t4, t5));
				}
			}
		}
	}
	return R;
}

/* KL_ANY_ROUTINES.to_any */
T0* T79f4(T0* C, T0* a1)
{
	T0* R = 0;
	R = a1;
	return R;
}

/* ET_ALIAS_FREE_NAME.any_ */
T0* T684f43(T0* C)
{
	T0* R = 0;
	if (ge270os1804) {
		return ge270ov1804;
	} else {
		ge270os1804 = '\1';
	}
	R = T79c5();
	ge270ov1804 = R;
	return R;
}

/* ET_ALIAS_NAME.same_alias_name */
T1 T680f60(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t1 = (T680f6(C, a1));
		if (t1) {
			R = EIF_TRUE;
		} else {
			switch (((T680*)(C))->a3) {
			case (T2)(T2)('\r'):
				R = (T680x11883(GE_void(a1)));
				break;
			case (T2)(T2)('\013'):
				R = (T680x11882(GE_void(a1)));
				break;
			case (T2)(T2)('@'):
				R = (T680x11876(GE_void(a1)));
				break;
			case (T2)(T2)('?'):
				R = (T680x11872(GE_void(a1)));
				break;
			default:
				R = EIF_FALSE;
				break;
			}
		}
	}
	return R;
}

/* ET_INFIX_FREE_NAME.same_alias_name */
T1 T678f58(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	T0* t4;
	T0* t5;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t2 = (T678f44(C));
		t2 = (T79f4(GE_void(t2), a1));
		if ((t2)==EIF_VOID) {
			l1 = EIF_VOID;
		} else {
			switch (((T0*)(t2))->id) {
			case 676:
			case 678:
			case 684:
				l1 = t2;
				break;
			default:
				l1 = EIF_VOID;
			}
		}
		t1 = ((l1)!=(EIF_VOID));
		if (t1) {
			t3 = (T1321x23(GE_void(l1)));
			t1 = ((((T678*)(C))->a4)==(t3));
			if (t1) {
				t2 = (T1321x21411(GE_void(l1)));
				t4 = (T678f8(C));
				t1 = ((t2)==(t4));
				if (t1) {
					R = EIF_TRUE;
				} else {
					t2 = (T678f7(C));
					t4 = (T678f8(C));
					t5 = (T1321x21411(GE_void(l1)));
					R = (T26f14(GE_void(t2), t4, t5));
				}
			}
		}
	}
	return R;
}

/* ET_INFIX_FREE_NAME.any_ */
T0* T678f44(T0* C)
{
	T0* R = 0;
	if (ge270os1804) {
		return ge270ov1804;
	} else {
		ge270os1804 = '\1';
	}
	R = T79c5();
	ge270ov1804 = R;
	return R;
}

/* ET_INFIX_NAME.same_alias_name */
T1 T677f69(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t1 = (T677f20(C, a1));
		if (t1) {
			R = EIF_TRUE;
		} else {
			switch (((T677*)(C))->a3) {
			case (T2)(T2)('\r'):
				R = (T680x11883(GE_void(a1)));
				break;
			case (T2)(T2)('\013'):
				R = (T680x11882(GE_void(a1)));
				break;
			case (T2)(T2)('@'):
				R = (T680x11876(GE_void(a1)));
				break;
			case (T2)(T2)('?'):
				R = (T680x11872(GE_void(a1)));
				break;
			default:
				R = EIF_FALSE;
				break;
			}
		}
	}
	return R;
}

/* ET_PREFIX_FREE_NAME.same_alias_name */
T1 T676f58(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	T0* t4;
	T0* t5;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t2 = (T676f31(C));
		t2 = (T79f4(GE_void(t2), a1));
		if ((t2)==EIF_VOID) {
			l1 = EIF_VOID;
		} else {
			switch (((T0*)(t2))->id) {
			case 676:
			case 678:
			case 684:
				l1 = t2;
				break;
			default:
				l1 = EIF_VOID;
			}
		}
		t1 = ((l1)!=(EIF_VOID));
		if (t1) {
			t3 = (T1321x23(GE_void(l1)));
			t1 = ((((T676*)(C))->a4)==(t3));
			if (t1) {
				t2 = (T1321x21411(GE_void(l1)));
				t4 = (T676f8(C));
				t1 = ((t2)==(t4));
				if (t1) {
					R = EIF_TRUE;
				} else {
					t2 = (T676f7(C));
					t4 = (T676f8(C));
					t5 = (T1321x21411(GE_void(l1)));
					R = (T26f14(GE_void(t2), t4, t5));
				}
			}
		}
	}
	return R;
}

/* ET_PREFIX_FREE_NAME.any_ */
T0* T676f31(T0* C)
{
	T0* R = 0;
	if (ge270os1804) {
		return ge270ov1804;
	} else {
		ge270os1804 = '\1';
	}
	R = T79c5();
	ge270ov1804 = R;
	return R;
}

/* ET_PREFIX_NAME.same_alias_name */
T1 T675f55(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t1 = (T675f17(C, a1));
		if (t1) {
			R = EIF_TRUE;
		} else {
			switch (((T675*)(C))->a3) {
			case (T2)(T2)('\r'):
				R = (T680x11883(GE_void(a1)));
				break;
			case (T2)(T2)('\013'):
				R = (T680x11882(GE_void(a1)));
				break;
			case (T2)(T2)('@'):
				R = (T680x11876(GE_void(a1)));
				break;
			case (T2)(T2)('?'):
				R = (T680x11872(GE_void(a1)));
				break;
			default:
				R = EIF_FALSE;
				break;
			}
		}
	}
	return R;
}

/* ET_SPECIAL_MANIFEST_STRING.manifest_string */
T0* T515f8(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_VERBATIM_STRING.manifest_string */
T0* T514f12(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_REGULAR_MANIFEST_STRING.manifest_string */
T0* T513f7(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_SYMBOL.position */
T0* T459f8(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_AGENT_KEYWORD.position */
T0* T453f9(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_C2_CHARACTER_CONSTANT.last_position */
T0* T525f33(T0* C)
{
	T0* R = 0;
	T6 t1;
	T6 t2;
	t1 = (T525f22(C));
	t2 = (T525f23(C));
	t2 = ((T6)((t2)+((T6)(GE_int32(3)))));
	R = T1326c9(t1, t2);
	return R;
}

/* ET_COMPRESSED_POSITION.make */
T0* T1326c9(T6 a1, T6 a2)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T1326));
	*(T1326*)C = GE_default1326;
	T1326f10(C, a1, a2);
	return C;
}

/* ET_COMPRESSED_POSITION.set_position */
void T1326f10(T0* C, T6 a1, T6 a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	t1 = (T6f1(&a1, (T6)(GE_int32(8388607))));
	if (t1) {
		l1 = (T6)(GE_int32(0));
	} else {
		l1 = a1;
	}
	t1 = (T6f1(&a2, (T6)(GE_int32(255))));
	if (t1) {
		l2 = (T6)(GE_int32(0));
	} else {
		l2 = a2;
	}
	t2 = (T6)(GE_int32(256));
	t2 = ((T6)((t2)*(l1)));
	((T1326*)(C))->a1 = ((T6)((t2)+(l2)));
}

/* ET_C1_CHARACTER_CONSTANT.last_position */
T0* T524f33(T0* C)
{
	T0* R = 0;
	T6 t1;
	T6 t2;
	t1 = (T524f22(C));
	t2 = (T524f23(C));
	t2 = ((T6)((t2)+((T6)(GE_int32(2)))));
	R = T1326c9(t1, t2);
	return R;
}

/* ET_FALSE_CONSTANT.last_position */
T0* T523f29(T0* C)
{
	T0* R = 0;
	T6 t1;
	T6 t2;
	T6 t3;
	t1 = (T523f22(C));
	t2 = (T523f23(C));
	t3 = (((T17*)(GE_void(((T523*)(C))->a3)))->a2);
	t2 = ((T6)((t2)+(t3)));
	t2 = ((T6)((t2)-((T6)(GE_int32(1)))));
	R = T1326c9(t1, t2);
	return R;
}

/* ET_TRUE_CONSTANT.last_position */
T0* T522f29(T0* C)
{
	T0* R = 0;
	T6 t1;
	T6 t2;
	T6 t3;
	t1 = (T522f22(C));
	t2 = (T522f23(C));
	t3 = (((T17*)(GE_void(((T522*)(C))->a3)))->a2);
	t2 = ((T6)((t2)+(t3)));
	t2 = ((T6)((t2)-((T6)(GE_int32(1)))));
	R = T1326c9(t1, t2);
	return R;
}

/* ET_UNDERSCORED_REAL_CONSTANT.last_position */
T0* T520f31(T0* C)
{
	T0* R = 0;
	T6 t1;
	T6 t2;
	T6 t3;
	t1 = (T520f23(C));
	t2 = (T520f24(C));
	t3 = (((((T0*)(GE_void(((T520*)(C))->a1)))->id==17)?((T17*)(((T520*)(C))->a1))->a2:((T949*)(((T520*)(C))->a1))->a1));
	t2 = ((T6)((t2)+(t3)));
	t2 = ((T6)((t2)-((T6)(GE_int32(1)))));
	R = T1326c9(t1, t2);
	return R;
}

/* ET_REGULAR_REAL_CONSTANT.last_position */
T0* T519f31(T0* C)
{
	T0* R = 0;
	T6 t1;
	T6 t2;
	T6 t3;
	t1 = (T519f23(C));
	t2 = (T519f24(C));
	t3 = (((((T0*)(GE_void(((T519*)(C))->a1)))->id==17)?((T17*)(((T519*)(C))->a1))->a2:((T949*)(((T519*)(C))->a1))->a1));
	t2 = ((T6)((t2)+(t3)));
	t2 = ((T6)((t2)-((T6)(GE_int32(1)))));
	R = T1326c9(t1, t2);
	return R;
}

/* ET_HEXADECIMAL_INTEGER_CONSTANT.last_position */
T0* T518f35(T0* C)
{
	T0* R = 0;
	T6 t1;
	T6 t2;
	T6 t3;
	t1 = (T518f17(C));
	t2 = (T518f18(C));
	t3 = (((((T0*)(GE_void(((T518*)(C))->a1)))->id==17)?((T17*)(((T518*)(C))->a1))->a2:((T949*)(((T518*)(C))->a1))->a1));
	t2 = ((T6)((t2)+(t3)));
	t2 = ((T6)((t2)-((T6)(GE_int32(1)))));
	R = T1326c9(t1, t2);
	return R;
}

/* ET_UNDERSCORED_INTEGER_CONSTANT.last_position */
T0* T517f36(T0* C)
{
	T0* R = 0;
	T6 t1;
	T6 t2;
	T6 t3;
	t1 = (T517f18(C));
	t2 = (T517f19(C));
	t3 = (((((T0*)(GE_void(((T517*)(C))->a1)))->id==17)?((T17*)(((T517*)(C))->a1))->a2:((T949*)(((T517*)(C))->a1))->a1));
	t2 = ((T6)((t2)+(t3)));
	t2 = ((T6)((t2)-((T6)(GE_int32(1)))));
	R = T1326c9(t1, t2);
	return R;
}

/* ET_REGULAR_INTEGER_CONSTANT.last_position */
T0* T516f36(T0* C)
{
	T0* R = 0;
	T6 t1;
	T6 t2;
	T6 t3;
	t1 = (T516f18(C));
	t2 = (T516f19(C));
	t3 = (((((T0*)(GE_void(((T516*)(C))->a1)))->id==17)?((T17*)(((T516*)(C))->a1))->a2:((T949*)(((T516*)(C))->a1))->a1));
	t2 = ((T6)((t2)+(t3)));
	t2 = ((T6)((t2)-((T6)(GE_int32(1)))));
	R = T1326c9(t1, t2);
	return R;
}

/* ET_SPECIAL_MANIFEST_STRING.last_position */
T0* T515f31(T0* C)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T1 t1;
	T6 t2;
	T6 t3;
	T6 t4;
	T2 t5;
	l1 = (((((T0*)(GE_void(((T515*)(C))->a1)))->id==17)?T17f27(((T515*)(C))->a1, (T2)('\n')):T949f19(((T515*)(C))->a1, (T2)('\n'))));
	t1 = ((l1)==((T6)(GE_int32(0))));
	if (t1) {
		t2 = (T515f23(C));
		t3 = (T515f24(C));
		t4 = (((((T0*)(GE_void(((T515*)(C))->a1)))->id==17)?((T17*)(((T515*)(C))->a1))->a2:((T949*)(((T515*)(C))->a1))->a1));
		t3 = ((T6)((t3)+(t4)));
		t3 = ((T6)((t3)+((T6)(GE_int32(1)))));
		R = T1326c9(t2, t3);
	} else {
		l4 = (((((T0*)(GE_void(((T515*)(C))->a1)))->id==17)?((T17*)(((T515*)(C))->a1))->a2:((T949*)(((T515*)(C))->a1))->a1));
		l3 = l4;
		t5 = (((((T0*)(GE_void(((T515*)(C))->a1)))->id==17)?T17f10(((T515*)(C))->a1, l3):T949f7(((T515*)(C))->a1, l3)));
		t1 = ((t5)==((T2)('\n')));
		while (!(t1)) {
			l3 = ((T6)((l3)-((T6)(GE_int32(1)))));
			t5 = (((((T0*)(GE_void(((T515*)(C))->a1)))->id==17)?T17f10(((T515*)(C))->a1, l3):T949f7(((T515*)(C))->a1, l3)));
			t1 = ((t5)==((T2)('\n')));
		}
		l2 = ((T6)((l4)-(l3)));
		t2 = (T515f23(C));
		t2 = ((T6)((t2)+(l1)));
		R = T1326c9(t2, l2);
	}
	return R;
}

/* ET_VERBATIM_STRING.last_position */
T0* T514f35(T0* C)
{
	T0* R = 0;
	T6 t1;
	T6 t2;
	T6 t3;
	t1 = (T514f27(C));
	t2 = (((((T0*)(GE_void(((T514*)(C))->a2)))->id==17)?T17f27(((T514*)(C))->a2, (T2)('\n')):T949f19(((T514*)(C))->a2, (T2)('\n'))));
	t1 = ((T6)((t1)+(t2)));
	t1 = ((T6)((t1)+((T6)(GE_int32(1)))));
	t2 = (((((T0*)(GE_void(((T514*)(C))->a5)))->id==17)?((T17*)(((T514*)(C))->a5))->a2:((T949*)(((T514*)(C))->a5))->a1));
	t3 = (((((T0*)(GE_void(((T514*)(C))->a3)))->id==17)?((T17*)(((T514*)(C))->a3))->a2:((T949*)(((T514*)(C))->a3))->a1));
	t2 = ((T6)((t2)+(t3)));
	R = T1326c9(t1, t2);
	return R;
}

/* ET_REGULAR_MANIFEST_STRING.last_position */
T0* T513f30(T0* C)
{
	T0* R = 0;
	T6 t1;
	T6 t2;
	T6 t3;
	t1 = (T513f22(C));
	t2 = (T513f23(C));
	t3 = (((((T0*)(GE_void(((T513*)(C))->a1)))->id==17)?((T17*)(((T513*)(C))->a1))->a2:((T949*)(((T513*)(C))->a1))->a1));
	t2 = ((T6)((t2)+(t3)));
	t2 = ((T6)((t2)+((T6)(GE_int32(1)))));
	R = T1326c9(t1, t2);
	return R;
}

/* ET_C3_CHARACTER_CONSTANT.last_position */
T0* T512f34(T0* C)
{
	T0* R = 0;
	T6 t1;
	T6 t2;
	T6 t3;
	t1 = (T512f23(C));
	t2 = (T512f24(C));
	t3 = (((((T0*)(GE_void(((T512*)(C))->a1)))->id==17)?((T17*)(((T512*)(C))->a1))->a2:((T949*)(((T512*)(C))->a1))->a1));
	t2 = ((T6)((t2)+(t3)));
	t2 = ((T6)((t2)+((T6)(GE_int32(4)))));
	R = T1326c9(t1, t2);
	return R;
}

/* ET_BRACKET_SYMBOL.last_position */
T0* T506f81(T0* C)
{
	T0* R = 0;
	T6 t1;
	T6 t2;
	T0* t3;
	T6 t4;
	t1 = (T506f10(C));
	t2 = (T506f19(C));
	t3 = (T506f44(C));
	t4 = (((T17*)(GE_void(t3)))->a2);
	t2 = ((T6)((t2)+(t4)));
	t2 = ((T6)((t2)-((T6)(GE_int32(1)))));
	R = T1326c9(t1, t2);
	return R;
}

/* ET_VOID.last_position */
T0* T500f23(T0* C)
{
	T0* R = 0;
	T6 t1;
	T6 t2;
	T6 t3;
	t1 = (T500f16(C));
	t2 = (T500f17(C));
	t3 = (((T17*)(GE_void(((T500*)(C))->a3)))->a2);
	t2 = ((T6)((t2)+(t3)));
	t2 = ((T6)((t2)-((T6)(GE_int32(1)))));
	R = T1326c9(t1, t2);
	return R;
}

/* ET_BIT_CONSTANT.last_position */
T0* T464f27(T0* C)
{
	T0* R = 0;
	T6 t1;
	T6 t2;
	T6 t3;
	t1 = (T464f20(C));
	t2 = (T464f21(C));
	t3 = (((((T0*)(GE_void(((T464*)(C))->a1)))->id==17)?((T17*)(((T464*)(C))->a1))->a2:((T949*)(((T464*)(C))->a1))->a1));
	t2 = ((T6)((t2)+(t3)));
	t2 = ((T6)((t2)-((T6)(GE_int32(1)))));
	R = T1326c9(t1, t2);
	return R;
}

/* ET_SYMBOL.last_position */
T0* T459f16(T0* C)
{
	T0* R = 0;
	T6 t1;
	T6 t2;
	T0* t3;
	T6 t4;
	t1 = (T459f10(C));
	t2 = (T459f12(C));
	t3 = (T459f15(C));
	t4 = (((T17*)(GE_void(t3)))->a2);
	t2 = ((T6)((t2)+(t4)));
	t2 = ((T6)((t2)-((T6)(GE_int32(1)))));
	R = T1326c9(t1, t2);
	return R;
}

/* ET_PRECURSOR_KEYWORD.last_position */
T0* T456f17(T0* C)
{
	T0* R = 0;
	T6 t1;
	T6 t2;
	T6 t3;
	t1 = (T456f13(C));
	t2 = (T456f14(C));
	t3 = (((T17*)(GE_void(((T456*)(C))->a3)))->a2);
	t2 = ((T6)((t2)+(t3)));
	t2 = ((T6)((t2)-((T6)(GE_int32(1)))));
	R = T1326c9(t1, t2);
	return R;
}

/* ET_RESULT.last_position */
T0* T222f23(T0* C)
{
	T0* R = 0;
	T6 t1;
	T6 t2;
	T6 t3;
	t1 = (T222f17(C));
	t2 = (T222f18(C));
	t3 = (((T17*)(GE_void(((T222*)(C))->a3)))->a2);
	t2 = ((T6)((t2)+(t3)));
	t2 = ((T6)((t2)-((T6)(GE_int32(1)))));
	R = T1326c9(t1, t2);
	return R;
}

/* ET_CURRENT.last_position */
T0* T198f24(T0* C)
{
	T0* R = 0;
	T6 t1;
	T6 t2;
	T6 t3;
	t1 = (T198f18(C));
	t2 = (T198f19(C));
	t3 = (((T17*)(GE_void(((T198*)(C))->a3)))->a2);
	t2 = ((T6)((t2)+(t3)));
	t2 = ((T6)((t2)-((T6)(GE_int32(1)))));
	R = T1326c9(t1, t2);
	return R;
}

/* ET_KEYWORD.last_position */
T0* T179f21(T0* C)
{
	T0* R = 0;
	T6 t1;
	T6 t2;
	T6 t3;
	t1 = (T179f16(C));
	t2 = (T179f17(C));
	t3 = (((T17*)(GE_void(((T179*)(C))->a2)))->a2);
	t2 = ((T6)((t2)+(t3)));
	t2 = ((T6)((t2)-((T6)(GE_int32(1)))));
	R = T1326c9(t1, t2);
	return R;
}

/* ET_IDENTIFIER.last_position */
T0* T129f86(T0* C)
{
	T0* R = 0;
	T6 t1;
	T6 t2;
	T6 t3;
	t1 = (T129f36(C));
	t2 = (T129f37(C));
	t3 = (((((T0*)(GE_void(((T129*)(C))->a6)))->id==17)?((T17*)(((T129*)(C))->a6))->a2:((T949*)(((T129*)(C))->a6))->a1));
	t2 = ((T6)((t2)+(t3)));
	t2 = ((T6)((t2)-((T6)(GE_int32(1)))));
	R = T1326c9(t1, t2);
	return R;
}

/* ET_CONVERT_PROCEDURE.is_convert_to */
T1 T637f7(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BUILTIN_CONVERT_FEATURE.is_convert_to */
T1 T322f5(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_CONVERT_FUNCTION.is_convert_from */
T1 T635f7(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BUILTIN_CONVERT_FEATURE.is_convert_from */
T1 T322f4(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_CONSTRAINT_GENERIC_NAMED_TYPE.position */
T0* T953f6(T0* C)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T953*)(C))->a1)!=(EIF_VOID));
	if (t1) {
		R = (T179f9(GE_void(((T953*)(C))->a1)));
	} else {
		R = (T129f34(GE_void(((T953*)(C))->a2)));
	}
	return R;
}

/* ET_CONSTRAINT_LABELED_COMMA_ACTUAL_PARAMETER.position */
T0* T589f4(T0* C)
{
	T0* R = 0;
	R = (T129f34(GE_void(((T589*)(C))->a1)));
	return R;
}

/* ET_CONSTRAINT_LABELED_ACTUAL_PARAMETER.position */
T0* T588f4(T0* C)
{
	T0* R = 0;
	R = (T129f34(GE_void(((T588*)(C))->a1)));
	return R;
}

/* ET_CONSTRAINT_NAMED_TYPE.position */
T0* T577f5(T0* C)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T577*)(C))->a1)!=(EIF_VOID));
	if (t1) {
		R = (T179f9(GE_void(((T577*)(C))->a1)));
	} else {
		R = (T129f34(GE_void(((T577*)(C))->a2)));
	}
	return R;
}

/* ET_CONSTRAINT_GENERIC_NAMED_TYPE.type */
T0* T953f5(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CONSTRAINT_NAMED_TYPE.type */
T0* T577f4(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CONSTRAINT_GENERIC_NAMED_TYPE.resolved_syntactical_constraint_with_type */
T0* T953f7(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = a1;
	return R;
}

/* ET_LIKE_CURRENT.resolved_syntactical_constraint_with_type */
T0* T720f54(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = a1;
	return R;
}

/* ET_LIKE_FEATURE.resolved_syntactical_constraint_with_type */
T0* T718f58(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = a1;
	return R;
}

/* ET_CONSTRAINT_LABELED_COMMA_ACTUAL_PARAMETER.resolved_syntactical_constraint_with_type */
T0* T589f5(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = (T171f895(a2, C, a1));
	return R;
}

/* ET_EIFFEL_PARSER.resolved_constraint_labeled_comma_actual_parameter */
T0* T171f895(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* t1;
	T0* t2;
	t1 = (((T589*)(a1))->a1);
	t2 = (((T589*)(a1))->a2);
	t1 = (T277f231(GE_void(((T171*)(C))->a12), t1, t2));
	R = (T277f232(GE_void(((T171*)(C))->a12), t1, a2));
	return R;
}

/* ET_CONSTRAINT_LABELED_ACTUAL_PARAMETER.resolved_syntactical_constraint_with_type */
T0* T588f5(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = (T171f894(a2, C, a1));
	return R;
}

/* ET_EIFFEL_PARSER.resolved_constraint_labeled_actual_parameter */
T0* T171f894(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* t1;
	T0* t2;
	t1 = (((T588*)(a1))->a1);
	t2 = (((T588*)(a1))->a2);
	t2 = (T277f161(GE_void(((T171*)(C))->a12), t2, a2));
	R = (T277f230(GE_void(((T171*)(C))->a12), t1, t2));
	return R;
}

/* ET_BIT_FEATURE.resolved_syntactical_constraint_with_type */
T0* T582f88(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = a1;
	return R;
}

/* ET_BIT_N.resolved_syntactical_constraint_with_type */
T0* T581f87(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = a1;
	return R;
}

/* ET_CONSTRAINT_NAMED_TYPE.resolved_syntactical_constraint_with_type */
T0* T577f6(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = a1;
	return R;
}

/* ET_CONSTRAINT_GENERIC_NAMED_TYPE.resolved_syntactical_constraint */
T0* T953f4(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = (T171f892(a2, C, a1));
	return R;
}

/* ET_EIFFEL_PARSER.resolved_constraint_generic_named_type */
T0* T171f892(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = (((T953*)(a1))->a2);
	l2 = (((T953*)(a1))->a1);
	l3 = (T429f16(GE_void(a2), l1));
	t1 = ((l3)!=(EIF_VOID));
	if (t1) {
		t1 = ((l2)!=(EIF_VOID));
		if (t1) {
			t2 = (T179f9(GE_void(l2)));
			T171f952(C, t2);
		}
		t2 = (((T953*)(a1))->a3);
		t2 = (T575f9(GE_void(t2)));
		T171f952(C, t2);
		t3 = (((((T0*)(GE_void(l3)))->id==561)?((T561*)(l3))->a2:((T569*)(l3))->a6));
		R = (T277f327(GE_void(((T171*)(C))->a12), l1, t3));
	} else {
		l4 = (((((T0*)(GE_void(((T171*)(C))->a11)))->id==53)?T53f159(((T171*)(C))->a11, l1):T56f151(((T171*)(C))->a11, l1)));
		t2 = (((T953*)(a1))->a3);
		l5 = (T575f10(GE_void(t2), a2, C));
		t1 = ((l5)!=(EIF_VOID));
		if (t1) {
			if (((T171*)(C))->a21) {
				T439f42(GE_void(((T171*)(C))->a10), l4);
			}
			T60f182(GE_void(l4), EIF_TRUE);
			t2 = (((((T0*)(GE_void(((T171*)(C))->a11)))->id==53)?((T53*)(((T171*)(C))->a11))->a80:((T56*)(((T171*)(C))->a11))->a50));
			t1 = ((l4)==(t2));
			if (t1) {
				t1 = ((l2)!=(EIF_VOID));
				if (t1) {
					t2 = (T179f9(GE_void(l2)));
					T171f952(C, t2);
				}
				R = (T277f227(GE_void(((T171*)(C))->a12), l1, l5));
			} else {
				R = (T277f316(GE_void(((T171*)(C))->a12), l2, l1, l5, l4));
			}
		}
	}
	return R;
}

/* ET_CONSTRAINT_ACTUAL_PARAMETER_LIST.resolved_syntactical_constraint */
T0* T575f10(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = (T171f893(a2, C, a1));
	return R;
}

/* ET_EIFFEL_PARSER.resolved_constraint_actual_parameter_list */
T0* T171f893(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* l7 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l2 = (((T575*)(a1))->a3);
	t1 = (((T575*)(a1))->a1);
	t2 = (((T575*)(a1))->a2);
	R = (T277f228(GE_void(((T171*)(C))->a12), t1, t2, l2));
	t3 = ((R)!=(EIF_VOID));
	if (t3) {
		l1 = l2;
		t3 = ((T1)((l1)<((T6)(GE_int32(1)))));
		while (!(t3)) {
			l7 = (T575f11(a1, l1));
			l3 = (T584x6417(GE_void(l7)));
			t3 = ((l3)!=(l4));
			if (t3) {
				l5 = (T566x6421T0T0(GE_void(l3), a2, C));
				l4 = l3;
			}
			l6 = (T584x6419T0T0(GE_void(l7), l5, C));
			t3 = ((l6)!=(EIF_VOID));
			if (t3) {
				T173f24(GE_void(R), l6);
			}
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t3 = ((T1)((l1)<((T6)(GE_int32(1)))));
		}
	}
	return R;
}

/* ET_CONSTRAINT_ACTUAL_PARAMETER_LIST.item */
T0* T575f11(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	t1 = ((T6)((((T575*)(C))->a3)-(a1)));
	R = (((T585*)(GE_void(((T575*)(C))->a4)))->z2[t1]);
	return R;
}

/* ET_CONSTRAINT_ACTUAL_PARAMETER_LIST.position */
T0* T575f9(T0* C)
{
	T0* R = 0;
	T1 t1;
	T1 t2;
	T0* t3;
	R = (((((T0*)(GE_void(((T575*)(C))->a1)))->id==506)?T506f8(((T575*)(C))->a1):T459f8(((T575*)(C))->a1)));
	t1 = (T274x11970(GE_void(R)));
	if (t1) {
		t2 = (T575f7(C));
		t1 = ((T1)(!(t2)));
	}
	if (t1) {
		t3 = (T575f11(C, (T6)(GE_int32(1))));
		R = (T584x6418(GE_void(t3)));
	}
	return R;
}

/* ET_LIKE_CURRENT.resolved_syntactical_constraint */
T0* T720f18(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_LIKE_FEATURE.resolved_syntactical_constraint */
T0* T718f37(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_BIT_FEATURE.resolved_syntactical_constraint */
T0* T582f6(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_BIT_N.resolved_syntactical_constraint */
T0* T581f10(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CONSTRAINT_NAMED_TYPE.resolved_syntactical_constraint */
T0* T577f3(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = (T171f891(a2, C, a1));
	return R;
}

/* ET_EIFFEL_PARSER.resolved_constraint_named_type */
T0* T171f891(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = (((T577*)(a1))->a2);
	l3 = (((T577*)(a1))->a1);
	l2 = (T429f16(GE_void(a2), l1));
	t1 = ((l2)!=(EIF_VOID));
	if (t1) {
		t1 = ((l3)!=(EIF_VOID));
		if (t1) {
			t2 = (T179f9(GE_void(l3)));
			T171f952(C, t2);
		}
		t3 = (((((T0*)(GE_void(l2)))->id==561)?((T561*)(l2))->a2:((T569*)(l2))->a6));
		R = (T277f327(GE_void(((T171*)(C))->a12), l1, t3));
	} else {
		l4 = (((((T0*)(GE_void(((T171*)(C))->a11)))->id==53)?T53f159(((T171*)(C))->a11, l1):T56f151(((T171*)(C))->a11, l1)));
		if (((T171*)(C))->a21) {
			T439f42(GE_void(((T171*)(C))->a10), l4);
		}
		T60f182(GE_void(l4), EIF_TRUE);
		t2 = (((((T0*)(GE_void(((T171*)(C))->a11)))->id==53)?((T53*)(((T171*)(C))->a11))->a80:((T56*)(((T171*)(C))->a11))->a50));
		t1 = ((l4)==(t2));
		if (t1) {
			t1 = ((l3)!=(EIF_VOID));
			if (t1) {
				t2 = (T179f9(GE_void(l3)));
				T171f952(C, t2);
			}
			R = (T277f227(GE_void(((T171*)(C))->a12), l1, EIF_VOID));
		} else {
			R = (T277f317(GE_void(((T171*)(C))->a12), l3, l1, l4));
		}
	}
	return R;
}

/* ET_HEXADECIMAL_INTEGER_CONSTANT.is_negative */
T1 T518f31(T0* C)
{
	T1 R = 0;
	T1 t1;
	t1 = ((((T518*)(C))->a6)!=(EIF_VOID));
	if (t1) {
		R = (T497f9(GE_void(((T518*)(C))->a6)));
	}
	return R;
}

/* ET_UNDERSCORED_INTEGER_CONSTANT.is_negative */
T1 T517f32(T0* C)
{
	T1 R = 0;
	T1 t1;
	t1 = ((((T517*)(C))->a6)!=(EIF_VOID));
	if (t1) {
		R = (T497f9(GE_void(((T517*)(C))->a6)));
	}
	return R;
}

/* ET_REGULAR_INTEGER_CONSTANT.is_negative */
T1 T516f32(T0* C)
{
	T1 R = 0;
	T1 t1;
	t1 = ((((T516*)(C))->a6)!=(EIF_VOID));
	if (t1) {
		R = (T497f9(GE_void(((T516*)(C))->a6)));
	}
	return R;
}

/* XM_EIFFEL_PE_ENTITY_DEF.error_position */
T0* T398f57(T0* C)
{
	T0* R = 0;
	R = T358c7(((T398*)(C))->a8, ((T398*)(C))->a17, ((T398*)(C))->a16, ((T398*)(C))->a15);
	return R;
}

/* XM_DEFAULT_POSITION.make */
T0* T358c7(T0* a1, T6 a2, T6 a3, T6 a4)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T358));
	*(T358*)C = GE_default358;
	((T358*)(C))->a1 = a1;
	((T358*)(C))->a4 = a2;
	((T358*)(C))->a3 = a3;
	((T358*)(C))->a2 = a4;
	return C;
}

/* XM_EIFFEL_SCANNER_DTD.error_position */
T0* T396f55(T0* C)
{
	T0* R = 0;
	R = T358c7(((T396*)(C))->a3, ((T396*)(C))->a4, ((T396*)(C))->a5, ((T396*)(C))->a6);
	return R;
}

/* XM_EIFFEL_ENTITY_DEF.error_position */
T0* T392f56(T0* C)
{
	T0* R = 0;
	R = T358c7(((T392*)(C))->a8, ((T392*)(C))->a17, ((T392*)(C))->a16, ((T392*)(C))->a15);
	return R;
}

/* XM_EIFFEL_SCANNER.error_position */
T0* T357f63(T0* C)
{
	T0* R = 0;
	R = T358c7(((T357*)(C))->a3, ((T357*)(C))->a4, ((T357*)(C))->a5, ((T357*)(C))->a6);
	return R;
}

/* XM_EIFFEL_PE_ENTITY_DEF.end_of_file */
T1 T398f60(T0* C)
{
	T1 R = 0;
	R = ((((T398*)(C))->a43)==((T6)(GE_int32(0))));
	return R;
}

/* XM_EIFFEL_SCANNER_DTD.end_of_file */
T1 T396f61(T0* C)
{
	T1 R = 0;
	R = ((((T396*)(C))->a1)==((T6)(GE_int32(0))));
	return R;
}

/* XM_EIFFEL_ENTITY_DEF.end_of_file */
T1 T392f59(T0* C)
{
	T1 R = 0;
	R = ((((T392*)(C))->a41)==((T6)(GE_int32(0))));
	return R;
}

/* XM_EIFFEL_SCANNER.end_of_file */
T1 T357f65(T0* C)
{
	T1 R = 0;
	R = ((((T357*)(C))->a1)==((T6)(GE_int32(0))));
	return R;
}

/* XM_EIFFEL_PE_ENTITY_DEF.is_applicable_encoding */
T1 T398f61(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	t1 = (T950f13(GE_void(((T398*)(C))->a45), a1));
	if (t1) {
		R = (T950f20(GE_void(((T398*)(C))->a45), a1));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* XM_EIFFEL_INPUT_STREAM.is_applicable_encoding */
T1 T950f20(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	T0* t2;
	t1 = ((((T950*)(C))->a2)==((T6)(GE_int32(6))));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t2 = (T950f8(C));
		t1 = (T26f14(GE_void(t2), a1, ge1274ov25319));
		if (!(t1)) {
			t2 = (T950f8(C));
			t1 = (T26f14(GE_void(t2), a1, ge1274ov25318));
		}
		if (t1) {
			t1 = ((((T950*)(C))->a2)==((T6)(GE_int32(2))));
			if (!(t1)) {
				t1 = ((((T950*)(C))->a2)==((T6)(GE_int32(1))));
			}
			if (!(t1)) {
				R = ((((T950*)(C))->a2)==((T6)(GE_int32(3))));
			} else {
				R = EIF_TRUE;
			}
		} else {
			t2 = (T950f8(C));
			t1 = (T26f14(GE_void(t2), a1, ge1274ov25320));
			if (t1) {
				t1 = ((((T950*)(C))->a2)==((T6)(GE_int32(2))));
				if (!(t1)) {
					R = ((((T950*)(C))->a2)==((T6)(GE_int32(1))));
				} else {
					R = EIF_TRUE;
				}
			} else {
				t2 = (T950f8(C));
				t1 = (T26f14(GE_void(t2), a1, ge1274ov25321));
				if (t1) {
					t1 = ((((T950*)(C))->a2)==((T6)(GE_int32(4))));
					if (!(t1)) {
						R = ((((T950*)(C))->a2)==((T6)(GE_int32(5))));
					} else {
						R = EIF_TRUE;
					}
				}
			}
		}
	}
	return R;
}

/* XM_EIFFEL_INPUT_STREAM.is_valid_encoding */
T1 T950f13(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		t2 = (T950f8(C));
		t1 = (T26f14(GE_void(t2), a1, ge1274ov25319));
		if (!(t1)) {
			t2 = (T950f8(C));
			t1 = (T26f14(GE_void(t2), a1, ge1274ov25318));
		}
		if (!(t1)) {
			t2 = (T950f8(C));
			t1 = (T26f14(GE_void(t2), a1, ge1274ov25320));
		}
		if (!(t1)) {
			t2 = (T950f8(C));
			R = (T26f14(GE_void(t2), a1, ge1274ov25321));
		} else {
			R = EIF_TRUE;
		}
	}
	return R;
}

/* XM_EIFFEL_SCANNER_DTD.is_applicable_encoding */
T1 T396f48(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	t1 = (T950f13(GE_void(((T396*)(C))->a7), a1));
	if (t1) {
		R = (T950f20(GE_void(((T396*)(C))->a7), a1));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* XM_EIFFEL_ENTITY_DEF.is_applicable_encoding */
T1 T392f60(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	t1 = (T950f13(GE_void(((T392*)(C))->a43), a1));
	if (t1) {
		R = (T950f20(GE_void(((T392*)(C))->a43), a1));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* XM_EIFFEL_SCANNER.is_applicable_encoding */
T1 T357f66(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	t1 = (T950f13(GE_void(((T357*)(C))->a7), a1));
	if (t1) {
		R = (T950f20(GE_void(((T357*)(C))->a7), a1));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* XM_EIFFEL_PE_ENTITY_DEF.start_condition */
T6 T398f62(T0* C)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((((T398*)(C))->a11)-((T6)(GE_int32(1)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* XM_EIFFEL_SCANNER_DTD.start_condition */
T6 T396f50(T0* C)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((((T396*)(C))->a8)-((T6)(GE_int32(1)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* XM_EIFFEL_ENTITY_DEF.start_condition */
T6 T392f61(T0* C)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((((T392*)(C))->a11)-((T6)(GE_int32(1)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* XM_EIFFEL_SCANNER.start_condition */
T6 T357f43(T0* C)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((((T357*)(C))->a8)-((T6)(GE_int32(1)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* ET_ALIASED_FEATURE_NAME.same_extended_feature_name */
T1 T682f4(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	T0* t2;
	t1 = ((((T682*)(C))->a2)==(EIF_VOID));
	if (t1) {
		t2 = (T327x11896(GE_void(a1)));
		t1 = ((t2)==(EIF_VOID));
		if (t1) {
			t2 = (T327x11895(GE_void(a1)));
			R = (T129f44(GE_void(((T682*)(C))->a1), t2));
		}
	} else {
		t2 = (T327x11896(GE_void(a1)));
		t1 = ((t2)!=(EIF_VOID));
		if (t1) {
			t2 = (T327x11895(GE_void(a1)));
			t1 = (T129f44(GE_void(((T682*)(C))->a1), t2));
			if (t1) {
				t2 = (T682f5(C));
				t1 = (T79f3(GE_void(t2), ((T682*)(C))->a2, ((T682*)(C))->a1));
				if (t1) {
					R = EIF_TRUE;
				} else {
					t2 = (T327x11896(GE_void(a1)));
					t1 = (T680x22825T0(GE_void(((T682*)(C))->a2), t2));
					if (t1) {
						R = EIF_TRUE;
					}
				}
			}
		}
	}
	return R;
}

/* KL_ANY_ROUTINES.same_objects */
T1 T79f3(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	R = ((a1)==(a2));
	return R;
}

/* ET_ALIASED_FEATURE_NAME.any_ */
T0* T682f5(T0* C)
{
	T0* R = 0;
	if (ge270os1804) {
		return ge270ov1804;
	} else {
		ge270os1804 = '\1';
	}
	R = T79c5();
	ge270ov1804 = R;
	return R;
}

/* ET_INFIX_FREE_NAME.same_extended_feature_name */
T1 T678f59(T0* C, T0* a1)
{
	T1 R = 0;
	T0* t1;
	T1 t2;
	T0* t3;
	T0* t4;
	t1 = (T678f10(C));
	t2 = ((t1)==(EIF_VOID));
	if (t2) {
		t1 = (T327x11896(GE_void(a1)));
		t2 = ((t1)==(EIF_VOID));
		if (t2) {
			t1 = (T678f9(C));
			t3 = (T327x11895(GE_void(a1)));
			R = (T678f11(GE_void(t1), t3));
		}
	} else {
		t1 = (T327x11896(GE_void(a1)));
		t2 = ((t1)!=(EIF_VOID));
		if (t2) {
			t1 = (T678f9(C));
			t3 = (T327x11895(GE_void(a1)));
			t2 = (T678f11(GE_void(t1), t3));
			if (t2) {
				t1 = (T678f44(C));
				t3 = (T678f10(C));
				t4 = (T678f9(C));
				t2 = (T79f3(GE_void(t1), t3, t4));
				if (t2) {
					R = EIF_TRUE;
				} else {
					t1 = (T678f10(C));
					t3 = (T327x11896(GE_void(a1)));
					t2 = (T678f58(GE_void(t1), t3));
					if (t2) {
						R = EIF_TRUE;
					}
				}
			}
		}
	}
	return R;
}

/* ET_INFIX_NAME.same_extended_feature_name */
T1 T677f70(T0* C, T0* a1)
{
	T1 R = 0;
	T0* t1;
	T1 t2;
	T0* t3;
	T0* t4;
	t1 = (T677f7(C));
	t2 = ((t1)==(EIF_VOID));
	if (t2) {
		t1 = (T327x11896(GE_void(a1)));
		t2 = ((t1)==(EIF_VOID));
		if (t2) {
			t1 = (T677f6(C));
			t3 = (T327x11895(GE_void(a1)));
			R = (T677f8(GE_void(t1), t3));
		}
	} else {
		t1 = (T327x11896(GE_void(a1)));
		t2 = ((t1)!=(EIF_VOID));
		if (t2) {
			t1 = (T677f6(C));
			t3 = (T327x11895(GE_void(a1)));
			t2 = (T677f8(GE_void(t1), t3));
			if (t2) {
				t1 = (T677f29(C));
				t3 = (T677f7(C));
				t4 = (T677f6(C));
				t2 = (T79f3(GE_void(t1), t3, t4));
				if (t2) {
					R = EIF_TRUE;
				} else {
					t1 = (T677f7(C));
					t3 = (T327x11896(GE_void(a1)));
					t2 = (T677f69(GE_void(t1), t3));
					if (t2) {
						R = EIF_TRUE;
					}
				}
			}
		}
	}
	return R;
}

/* ET_INFIX_NAME.any_ */
T0* T677f29(T0* C)
{
	T0* R = 0;
	if (ge270os1804) {
		return ge270ov1804;
	} else {
		ge270os1804 = '\1';
	}
	R = T79c5();
	ge270ov1804 = R;
	return R;
}

/* ET_PREFIX_FREE_NAME.same_extended_feature_name */
T1 T676f59(T0* C, T0* a1)
{
	T1 R = 0;
	T0* t1;
	T1 t2;
	T0* t3;
	T0* t4;
	t1 = (T676f10(C));
	t2 = ((t1)==(EIF_VOID));
	if (t2) {
		t1 = (T327x11896(GE_void(a1)));
		t2 = ((t1)==(EIF_VOID));
		if (t2) {
			t1 = (T676f9(C));
			t3 = (T327x11895(GE_void(a1)));
			R = (T676f11(GE_void(t1), t3));
		}
	} else {
		t1 = (T327x11896(GE_void(a1)));
		t2 = ((t1)!=(EIF_VOID));
		if (t2) {
			t1 = (T676f9(C));
			t3 = (T327x11895(GE_void(a1)));
			t2 = (T676f11(GE_void(t1), t3));
			if (t2) {
				t1 = (T676f31(C));
				t3 = (T676f10(C));
				t4 = (T676f9(C));
				t2 = (T79f3(GE_void(t1), t3, t4));
				if (t2) {
					R = EIF_TRUE;
				} else {
					t1 = (T676f10(C));
					t3 = (T327x11896(GE_void(a1)));
					t2 = (T676f58(GE_void(t1), t3));
					if (t2) {
						R = EIF_TRUE;
					}
				}
			}
		}
	}
	return R;
}

/* ET_PREFIX_NAME.same_extended_feature_name */
T1 T675f56(T0* C, T0* a1)
{
	T1 R = 0;
	T0* t1;
	T1 t2;
	T0* t3;
	T0* t4;
	t1 = (T675f7(C));
	t2 = ((t1)==(EIF_VOID));
	if (t2) {
		t1 = (T327x11896(GE_void(a1)));
		t2 = ((t1)==(EIF_VOID));
		if (t2) {
			t1 = (T675f6(C));
			t3 = (T327x11895(GE_void(a1)));
			R = (T675f8(GE_void(t1), t3));
		}
	} else {
		t1 = (T327x11896(GE_void(a1)));
		t2 = ((t1)!=(EIF_VOID));
		if (t2) {
			t1 = (T675f6(C));
			t3 = (T327x11895(GE_void(a1)));
			t2 = (T675f8(GE_void(t1), t3));
			if (t2) {
				t1 = (T675f26(C));
				t3 = (T675f7(C));
				t4 = (T675f6(C));
				t2 = (T79f3(GE_void(t1), t3, t4));
				if (t2) {
					R = EIF_TRUE;
				} else {
					t1 = (T675f7(C));
					t3 = (T327x11896(GE_void(a1)));
					t2 = (T675f55(GE_void(t1), t3));
					if (t2) {
						R = EIF_TRUE;
					}
				}
			}
		}
	}
	return R;
}

/* ET_PREFIX_NAME.any_ */
T0* T675f26(T0* C)
{
	T0* R = 0;
	if (ge270os1804) {
		return ge270ov1804;
	} else {
		ge270os1804 = '\1';
	}
	R = T79c5();
	ge270ov1804 = R;
	return R;
}

/* ET_IDENTIFIER.same_extended_feature_name */
T1 T129f92(T0* C, T0* a1)
{
	T1 R = 0;
	T0* t1;
	T1 t2;
	T0* t3;
	T0* t4;
	t1 = (T129f51(C));
	t2 = ((t1)==(EIF_VOID));
	if (t2) {
		t1 = (T327x11896(GE_void(a1)));
		t2 = ((t1)==(EIF_VOID));
		if (t2) {
			t1 = (T129f30(C));
			t3 = (T327x11895(GE_void(a1)));
			R = (T129f44(GE_void(t1), t3));
		}
	} else {
		t1 = (T327x11896(GE_void(a1)));
		t2 = ((t1)!=(EIF_VOID));
		if (t2) {
			t1 = (T129f30(C));
			t3 = (T327x11895(GE_void(a1)));
			t2 = (T129f44(GE_void(t1), t3));
			if (t2) {
				t1 = (T129f46(C));
				t3 = (T129f51(C));
				t4 = (T129f30(C));
				t2 = (T79f3(GE_void(t1), t3, t4));
				if (t2) {
					R = EIF_TRUE;
				} else {
					t1 = (T129f51(C));
					t3 = (T327x11896(GE_void(a1)));
					t2 = ((GE_void(t1), t3, (T1)0));
					if (t2) {
						R = EIF_TRUE;
					}
				}
			}
		}
	}
	return R;
}

/* ET_IDENTIFIER.any_ */
T0* T129f46(T0* C)
{
	T0* R = 0;
	if (ge270os1804) {
		return ge270ov1804;
	} else {
		ge270os1804 = '\1';
	}
	R = T79c5();
	ge270ov1804 = R;
	return R;
}

/* ET_ALIASED_FEATURE_NAME.position */
T0* T682f3(T0* C)
{
	T0* R = 0;
	R = (T129f34(GE_void(((T682*)(C))->a1)));
	return R;
}

/* ET_INFIX_FREE_NAME.alias_name */
T0* T678f10(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_INFIX_NAME.alias_name */
T0* T677f7(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_PREFIX_FREE_NAME.alias_name */
T0* T676f10(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_PREFIX_NAME.alias_name */
T0* T675f7(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_IDENTIFIER.alias_name */
T0* T129f51(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_FILE_POSITION.to_text */
T0* T955f10(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(50)));
	T955f12(C, R);
	return R;
}

/* ET_FILE_POSITION.append_to_string */
void T955f12(T0* C, T0* a1)
{
	T955f14(C, ((T955*)(C))->a1, a1);
}

/* ET_FILE_POSITION.append_to_string_with_filename */
void T955f14(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T6 t2;
	T17f41(GE_void(a2), GE_ms("line ", 5));
	t1 = (T955f3(C));
	t2 = (T955f4(C));
	T152f7(GE_void(t1), t2, a2);
	T17f41(GE_void(a2), GE_ms(" column ", 8));
	t1 = (T955f3(C));
	t2 = (T955f5(C));
	T152f7(GE_void(t1), t2, a2);
	T17f41(GE_void(a2), GE_ms(" in ", 4));
	T17f41(GE_void(a2), a1);
	T17f39(GE_void(a2), (T2)('\n'));
	T955f16(C, a1, a2);
}

/* ET_FILE_POSITION.append_context_to_string */
void T955f16(T0* C, T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T2 l3 = 0;
	T6 l4 = 0;
	T6 l5 = 0;
	T1 l6 = 0;
	T1 t1;
	T6 t2;
	T2 t3;
	l5 = (T955f4(C));
	t1 = ((l5)==((T6)(GE_int32(0))));
	if (t1) {
	} else {
		l1 = T22c39(a1);
		T22f40(GE_void(l1));
		t1 = (T22f10(GE_void(l1)));
		if (t1) {
			t1 = (T6f1(&l5, (T6)(GE_int32(1))));
			if (t1) {
				t2 = ((T6)((l5)-((T6)(GE_int32(2)))));
				T955f17(C, l1, t2);
				T955f18(C, l1, a2);
				T17f39(GE_void(a2), (T2)('\n'));
			}
			l5 = (T955f5(C));
			t1 = ((l5)==((T6)(GE_int32(0))));
			if (t1) {
				T955f18(C, l1, a2);
				T17f39(GE_void(a2), (T2)('\n'));
				T17f39(GE_void(a2), (T2)('^'));
				T17f39(GE_void(a2), (T2)('\n'));
				T955f18(C, l1, a2);
				T17f39(GE_void(a2), (T2)('\n'));
			} else {
				l4 = (T6)(GE_int32(1));
				l2 = T17c36((T6)(GE_int32(80)));
				T22f48(GE_void(l1));
				t1 = (((T22*)(GE_void(l1)))->a5);
				if (!(t1)) {
					t1 = (l6);
				}
				while (!(t1)) {
					l3 = (((T22*)(GE_void(l1)))->a9);
					t1 = ((l3)==((T2)('\n')));
					if (t1) {
						l6 = EIF_TRUE;
					} else {
						T17f39(GE_void(a2), l3);
						T22f48(GE_void(l1));
					}
					t1 = ((T1)((l4)<(l5)));
					if (t1) {
						t1 = ((l3)==((T2)('\t')));
						if (t1) {
							T17f39(GE_void(l2), (T2)('\t'));
						} else {
							T17f39(GE_void(l2), (T2)(' '));
						}
					} else {
						t1 = ((l4)==(l5));
						if (t1) {
							T17f39(GE_void(l2), (T2)('^'));
						}
					}
					l4 = ((T6)((l4)+((T6)(GE_int32(1)))));
					t1 = (((T22*)(GE_void(l1)))->a5);
					if (!(t1)) {
						t1 = (l6);
					}
				}
				T17f39(GE_void(a2), (T2)('\n'));
				T17f41(GE_void(a2), l2);
				t2 = (((T17*)(GE_void(l2)))->a2);
				t1 = ((t2)==((T6)(GE_int32(0))));
				if (!(t1)) {
					t2 = (((T17*)(GE_void(l2)))->a2);
					t3 = (T17f10(GE_void(l2), t2));
					t1 = ((t3)!=((T2)('^')));
				}
				if (t1) {
					T17f39(GE_void(a2), (T2)('^'));
				}
				T17f39(GE_void(a2), (T2)('\n'));
				T955f18(C, l1, a2);
				T17f39(GE_void(a2), (T2)('\n'));
			}
			T22f41(GE_void(l1));
		}
	}
}

/* ET_FILE_POSITION.append_line_to_string */
void T955f18(T0* C, T0* a1, T0* a2)
{
	T2 l1 = 0;
	T1 l2 = 0;
	T1 t1;
	t1 = (T22f25(GE_void(a1)));
	t1 = ((T1)(!(t1)));
	if (t1) {
		T22f48(GE_void(a1));
		t1 = (T22f25(GE_void(a1)));
		if (!(t1)) {
			t1 = (l2);
		}
		while (!(t1)) {
			l1 = (((T22*)(GE_void(a1)))->a9);
			t1 = ((l1)==((T2)('\n')));
			if (t1) {
				l2 = EIF_TRUE;
			} else {
				T17f39(GE_void(a2), l1);
				T22f48(GE_void(a1));
			}
			t1 = (T22f25(GE_void(a1)));
			if (!(t1)) {
				t1 = (l2);
			}
		}
	}
}

/* ET_FILE_POSITION.skip_lines */
void T955f17(T0* C, T0* a1, T6 a2)
{
	T6 l1 = 0;
	T1 t1;
	T2 t2;
	t1 = (T6f1(&a2, (T6)(GE_int32(0))));
	if (t1) {
		T22f48(GE_void(a1));
		t1 = (T22f25(GE_void(a1)));
		if (!(t1)) {
			t1 = ((l1)==(a2));
		}
		while (!(t1)) {
			t2 = (((T22*)(GE_void(a1)))->a9);
			t1 = ((t2)==((T2)('\n')));
			if (t1) {
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				t1 = ((l1)!=(a2));
				if (t1) {
					T22f48(GE_void(a1));
				}
			} else {
				T22f48(GE_void(a1));
			}
			t1 = (T22f25(GE_void(a1)));
			if (!(t1)) {
				t1 = ((l1)==(a2));
			}
		}
	}
}

/* ET_FILE_POSITION.column */
T6 T955f5(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T955*)(C))->a2)%((T6)(GE_int32(256)))));
	return R;
}

/* ET_FILE_POSITION.line */
T6 T955f4(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T955*)(C))->a2)/((T6)(GE_int32(256)))));
	return R;
}

/* ET_FILE_POSITION.integer_ */
T0* T955f3(T0* C)
{
	T0* R = 0;
	if (ge275os2931) {
		return ge275ov2931;
	} else {
		ge275os2931 = '\1';
	}
	R = T152c6();
	ge275ov2931 = R;
	return R;
}

/* ET_HEXADECIMAL_INTEGER_CONSTANT.to_text */
T0* T518f15(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(50)));
	T518f48(C, R);
	return R;
}

/* ET_HEXADECIMAL_INTEGER_CONSTANT.append_to_string */
void T518f48(T0* C, T0* a1)
{
	T0* t1;
	T6 t2;
	T17f41(GE_void(a1), GE_ms("line ", 5));
	t1 = (T518f16(C));
	t2 = (T518f17(C));
	T152f7(GE_void(t1), t2, a1);
	T17f41(GE_void(a1), GE_ms(" column ", 8));
	t1 = (T518f16(C));
	t2 = (T518f18(C));
	T152f7(GE_void(t1), t2, a1);
}

/* ET_HEXADECIMAL_INTEGER_CONSTANT.integer_ */
T0* T518f16(T0* C)
{
	T0* R = 0;
	if (ge275os2931) {
		return ge275ov2931;
	} else {
		ge275os2931 = '\1';
	}
	R = T152c6();
	ge275ov2931 = R;
	return R;
}

/* ET_UNDERSCORED_INTEGER_CONSTANT.to_text */
T0* T517f15(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(50)));
	T517f49(C, R);
	return R;
}

/* ET_UNDERSCORED_INTEGER_CONSTANT.append_to_string */
void T517f49(T0* C, T0* a1)
{
	T0* t1;
	T6 t2;
	T17f41(GE_void(a1), GE_ms("line ", 5));
	t1 = (T517f17(C));
	t2 = (T517f18(C));
	T152f7(GE_void(t1), t2, a1);
	T17f41(GE_void(a1), GE_ms(" column ", 8));
	t1 = (T517f17(C));
	t2 = (T517f19(C));
	T152f7(GE_void(t1), t2, a1);
}

/* ET_UNDERSCORED_INTEGER_CONSTANT.integer_ */
T0* T517f17(T0* C)
{
	T0* R = 0;
	if (ge275os2931) {
		return ge275ov2931;
	} else {
		ge275os2931 = '\1';
	}
	R = T152c6();
	ge275ov2931 = R;
	return R;
}

/* ET_REGULAR_INTEGER_CONSTANT.to_text */
T0* T516f15(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(50)));
	T516f49(C, R);
	return R;
}

/* ET_REGULAR_INTEGER_CONSTANT.append_to_string */
void T516f49(T0* C, T0* a1)
{
	T0* t1;
	T6 t2;
	T17f41(GE_void(a1), GE_ms("line ", 5));
	t1 = (T516f17(C));
	t2 = (T516f18(C));
	T152f7(GE_void(t1), t2, a1);
	T17f41(GE_void(a1), GE_ms(" column ", 8));
	t1 = (T516f17(C));
	t2 = (T516f19(C));
	T152f7(GE_void(t1), t2, a1);
}

/* ET_REGULAR_INTEGER_CONSTANT.integer_ */
T0* T516f17(T0* C)
{
	T0* R = 0;
	if (ge275os2931) {
		return ge275ov2931;
	} else {
		ge275os2931 = '\1';
	}
	R = T152c6();
	ge275ov2931 = R;
	return R;
}

/* ET_BRACKET_SYMBOL.to_text */
T0* T506f20(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(50)));
	T506f87(C, R);
	return R;
}

/* ET_BRACKET_SYMBOL.append_to_string */
void T506f87(T0* C, T0* a1)
{
	T0* t1;
	T6 t2;
	T17f41(GE_void(a1), GE_ms("line ", 5));
	t1 = (T506f43(C));
	t2 = (T506f10(C));
	T152f7(GE_void(t1), t2, a1);
	T17f41(GE_void(a1), GE_ms(" column ", 8));
	t1 = (T506f43(C));
	t2 = (T506f19(C));
	T152f7(GE_void(t1), t2, a1);
}

/* ET_BRACKET_SYMBOL.integer_ */
T0* T506f43(T0* C)
{
	T0* R = 0;
	if (ge275os2931) {
		return ge275ov2931;
	} else {
		ge275os2931 = '\1';
	}
	R = T152c6();
	ge275ov2931 = R;
	return R;
}

/* ET_SYMBOL_OPERATOR.to_text */
T0* T497f17(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(50)));
	T497f76(C, R);
	return R;
}

/* ET_SYMBOL_OPERATOR.append_to_string */
void T497f76(T0* C, T0* a1)
{
	T0* t1;
	T6 t2;
	T17f41(GE_void(a1), GE_ms("line ", 5));
	t1 = (T497f21(C));
	t2 = (T497f18(C));
	T152f7(GE_void(t1), t2, a1);
	T17f41(GE_void(a1), GE_ms(" column ", 8));
	t1 = (T497f21(C));
	t2 = (T497f19(C));
	T152f7(GE_void(t1), t2, a1);
}

/* ET_SYMBOL_OPERATOR.integer_ */
T0* T497f21(T0* C)
{
	T0* R = 0;
	if (ge275os2931) {
		return ge275ov2931;
	} else {
		ge275os2931 = '\1';
	}
	R = T152c6();
	ge275ov2931 = R;
	return R;
}

/* ET_SYMBOL.to_text */
T0* T459f13(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(50)));
	T459f73(C, R);
	return R;
}

/* ET_SYMBOL.append_to_string */
void T459f73(T0* C, T0* a1)
{
	T0* t1;
	T6 t2;
	T17f41(GE_void(a1), GE_ms("line ", 5));
	t1 = (T459f14(C));
	t2 = (T459f10(C));
	T152f7(GE_void(t1), t2, a1);
	T17f41(GE_void(a1), GE_ms(" column ", 8));
	t1 = (T459f14(C));
	t2 = (T459f12(C));
	T152f7(GE_void(t1), t2, a1);
}

/* ET_SYMBOL.integer_ */
T0* T459f14(T0* C)
{
	T0* R = 0;
	if (ge275os2931) {
		return ge275ov2931;
	} else {
		ge275os2931 = '\1';
	}
	R = T152c6();
	ge275ov2931 = R;
	return R;
}

/* ET_CURRENT.to_text */
T0* T198f17(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(50)));
	T198f33(C, R);
	return R;
}

/* ET_CURRENT.append_to_string */
void T198f33(T0* C, T0* a1)
{
	T0* t1;
	T6 t2;
	T17f41(GE_void(a1), GE_ms("line ", 5));
	t1 = (T198f21(C));
	t2 = (T198f18(C));
	T152f7(GE_void(t1), t2, a1);
	T17f41(GE_void(a1), GE_ms(" column ", 8));
	t1 = (T198f21(C));
	t2 = (T198f19(C));
	T152f7(GE_void(t1), t2, a1);
}

/* ET_CURRENT.integer_ */
T0* T198f21(T0* C)
{
	T0* R = 0;
	if (ge275os2931) {
		return ge275ov2931;
	} else {
		ge275os2931 = '\1';
	}
	R = T152c6();
	ge275ov2931 = R;
	return R;
}

/* ET_KEYWORD.to_text */
T0* T179f18(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(50)));
	T179f77(C, R);
	return R;
}

/* ET_KEYWORD.append_to_string */
void T179f77(T0* C, T0* a1)
{
	T0* t1;
	T6 t2;
	T17f41(GE_void(a1), GE_ms("line ", 5));
	t1 = (T179f19(C));
	t2 = (T179f16(C));
	T152f7(GE_void(t1), t2, a1);
	T17f41(GE_void(a1), GE_ms(" column ", 8));
	t1 = (T179f19(C));
	t2 = (T179f17(C));
	T152f7(GE_void(t1), t2, a1);
}

/* ET_KEYWORD.integer_ */
T0* T179f19(T0* C)
{
	T0* R = 0;
	if (ge275os2931) {
		return ge275ov2931;
	} else {
		ge275os2931 = '\1';
	}
	R = T152c6();
	ge275ov2931 = R;
	return R;
}

/* ET_IDENTIFIER.to_text */
T0* T129f55(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(50)));
	T129f110(C, R);
	return R;
}

/* ET_IDENTIFIER.append_to_string */
void T129f110(T0* C, T0* a1)
{
	T0* t1;
	T6 t2;
	T17f41(GE_void(a1), GE_ms("line ", 5));
	t1 = (T129f27(C));
	t2 = (T129f36(C));
	T152f7(GE_void(t1), t2, a1);
	T17f41(GE_void(a1), GE_ms(" column ", 8));
	t1 = (T129f27(C));
	t2 = (T129f37(C));
	T152f7(GE_void(t1), t2, a1);
}

/* ET_C2_CHARACTER_CONSTANT.is_null */
T1 T525f24(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T525f22(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_C1_CHARACTER_CONSTANT.is_null */
T1 T524f24(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T524f22(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_FALSE_CONSTANT.is_null */
T1 T523f24(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T523f22(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_TRUE_CONSTANT.is_null */
T1 T522f24(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T522f22(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_UNDERSCORED_REAL_CONSTANT.is_null */
T1 T520f25(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T520f23(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_REGULAR_REAL_CONSTANT.is_null */
T1 T519f25(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T519f23(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_HEXADECIMAL_INTEGER_CONSTANT.is_null */
T1 T518f19(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T518f17(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_UNDERSCORED_INTEGER_CONSTANT.is_null */
T1 T517f20(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T517f18(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_REGULAR_INTEGER_CONSTANT.is_null */
T1 T516f20(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T516f18(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_SPECIAL_MANIFEST_STRING.is_null */
T1 T515f25(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T515f23(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_VERBATIM_STRING.is_null */
T1 T514f29(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T514f27(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_REGULAR_MANIFEST_STRING.is_null */
T1 T513f24(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T513f22(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_C3_CHARACTER_CONSTANT.is_null */
T1 T512f25(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T512f23(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_BRACKET_SYMBOL.is_null */
T1 T506f9(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T506f10(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_VOID.is_null */
T1 T500f18(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T500f16(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_SYMBOL_OPERATOR.is_null */
T1 T497f20(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T497f18(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_KEYWORD_OPERATOR.is_null */
T1 T484f10(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T484f11(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_FREE_OPERATOR.is_null */
T1 T478f43(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T478f41(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_BIT_CONSTANT.is_null */
T1 T464f22(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T464f20(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_SYMBOL.is_null */
T1 T459f9(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T459f10(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_PRECURSOR_KEYWORD.is_null */
T1 T456f15(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T456f13(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_AGENT_KEYWORD.is_null */
T1 T453f12(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T453f10(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_RESULT.is_null */
T1 T222f19(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T222f17(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_CURRENT.is_null */
T1 T198f20(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T198f18(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_KEYWORD.is_null */
T1 T179f15(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T179f16(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_IDENTIFIER.is_null */
T1 T129f47(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T129f36(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_COMPRESSED_POSITION.line */
T6 T1326f3(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T1326*)(C))->a1)/((T6)(GE_int32(256)))));
	return R;
}

/* ET_C2_CHARACTER_CONSTANT.line */
T6 T525f22(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T525*)(C))->a2)/((T6)(GE_int32(256)))));
	return R;
}

/* ET_C1_CHARACTER_CONSTANT.line */
T6 T524f22(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T524*)(C))->a2)/((T6)(GE_int32(256)))));
	return R;
}

/* ET_FALSE_CONSTANT.line */
T6 T523f22(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T523*)(C))->a2)/((T6)(GE_int32(256)))));
	return R;
}

/* ET_TRUE_CONSTANT.line */
T6 T522f22(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T522*)(C))->a2)/((T6)(GE_int32(256)))));
	return R;
}

/* ET_UNDERSCORED_REAL_CONSTANT.line */
T6 T520f23(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T520*)(C))->a2)/((T6)(GE_int32(256)))));
	return R;
}

/* ET_REGULAR_REAL_CONSTANT.line */
T6 T519f23(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T519*)(C))->a2)/((T6)(GE_int32(256)))));
	return R;
}

/* ET_HEXADECIMAL_INTEGER_CONSTANT.line */
T6 T518f17(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T518*)(C))->a2)/((T6)(GE_int32(256)))));
	return R;
}

/* ET_UNDERSCORED_INTEGER_CONSTANT.line */
T6 T517f18(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T517*)(C))->a2)/((T6)(GE_int32(256)))));
	return R;
}

/* ET_REGULAR_INTEGER_CONSTANT.line */
T6 T516f18(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T516*)(C))->a2)/((T6)(GE_int32(256)))));
	return R;
}

/* ET_SPECIAL_MANIFEST_STRING.line */
T6 T515f23(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T515*)(C))->a3)/((T6)(GE_int32(256)))));
	return R;
}

/* ET_VERBATIM_STRING.line */
T6 T514f27(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T514*)(C))->a7)/((T6)(GE_int32(256)))));
	return R;
}

/* ET_REGULAR_MANIFEST_STRING.line */
T6 T513f22(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T513*)(C))->a2)/((T6)(GE_int32(256)))));
	return R;
}

/* ET_C3_CHARACTER_CONSTANT.line */
T6 T512f23(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T512*)(C))->a3)/((T6)(GE_int32(256)))));
	return R;
}

/* ET_BRACKET_SYMBOL.line */
T6 T506f10(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T506*)(C))->a2)/((T6)(GE_int32(256)))));
	return R;
}

/* ET_VOID.line */
T6 T500f16(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T500*)(C))->a2)/((T6)(GE_int32(256)))));
	return R;
}

/* ET_SYMBOL_OPERATOR.line */
T6 T497f18(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T497*)(C))->a2)/((T6)(GE_int32(256)))));
	return R;
}

/* ET_RETRY_INSTRUCTION.line */
T6 T494f10(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T494*)(C))->a2)/((T6)(GE_int32(256)))));
	return R;
}

/* ET_KEYWORD_OPERATOR.line */
T6 T484f11(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T484*)(C))->a2)/((T6)(GE_int32(256)))));
	return R;
}

/* ET_FREE_OPERATOR.line */
T6 T478f41(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T478*)(C))->a3)/((T6)(GE_int32(256)))));
	return R;
}

/* ET_BIT_CONSTANT.line */
T6 T464f20(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T464*)(C))->a2)/((T6)(GE_int32(256)))));
	return R;
}

/* ET_SYMBOL.line */
T6 T459f10(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T459*)(C))->a2)/((T6)(GE_int32(256)))));
	return R;
}

/* ET_PRECURSOR_KEYWORD.line */
T6 T456f13(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T456*)(C))->a2)/((T6)(GE_int32(256)))));
	return R;
}

/* ET_AGENT_KEYWORD.line */
T6 T453f10(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T453*)(C))->a2)/((T6)(GE_int32(256)))));
	return R;
}

/* ET_RESULT.line */
T6 T222f17(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T222*)(C))->a4)/((T6)(GE_int32(256)))));
	return R;
}

/* ET_CURRENT.line */
T6 T198f18(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T198*)(C))->a4)/((T6)(GE_int32(256)))));
	return R;
}

/* ET_KEYWORD.line */
T6 T179f16(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T179*)(C))->a3)/((T6)(GE_int32(256)))));
	return R;
}

/* ET_IDENTIFIER.line */
T6 T129f36(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T129*)(C))->a4)/((T6)(GE_int32(256)))));
	return R;
}

/* ET_COMPRESSED_POSITION.column */
T6 T1326f2(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T1326*)(C))->a1)%((T6)(GE_int32(256)))));
	return R;
}

/* ET_C2_CHARACTER_CONSTANT.column */
T6 T525f23(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T525*)(C))->a2)%((T6)(GE_int32(256)))));
	return R;
}

/* ET_C1_CHARACTER_CONSTANT.column */
T6 T524f23(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T524*)(C))->a2)%((T6)(GE_int32(256)))));
	return R;
}

/* ET_FALSE_CONSTANT.column */
T6 T523f23(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T523*)(C))->a2)%((T6)(GE_int32(256)))));
	return R;
}

/* ET_TRUE_CONSTANT.column */
T6 T522f23(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T522*)(C))->a2)%((T6)(GE_int32(256)))));
	return R;
}

/* ET_UNDERSCORED_REAL_CONSTANT.column */
T6 T520f24(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T520*)(C))->a2)%((T6)(GE_int32(256)))));
	return R;
}

/* ET_REGULAR_REAL_CONSTANT.column */
T6 T519f24(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T519*)(C))->a2)%((T6)(GE_int32(256)))));
	return R;
}

/* ET_HEXADECIMAL_INTEGER_CONSTANT.column */
T6 T518f18(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T518*)(C))->a2)%((T6)(GE_int32(256)))));
	return R;
}

/* ET_UNDERSCORED_INTEGER_CONSTANT.column */
T6 T517f19(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T517*)(C))->a2)%((T6)(GE_int32(256)))));
	return R;
}

/* ET_REGULAR_INTEGER_CONSTANT.column */
T6 T516f19(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T516*)(C))->a2)%((T6)(GE_int32(256)))));
	return R;
}

/* ET_SPECIAL_MANIFEST_STRING.column */
T6 T515f24(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T515*)(C))->a3)%((T6)(GE_int32(256)))));
	return R;
}

/* ET_VERBATIM_STRING.column */
T6 T514f28(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T514*)(C))->a7)%((T6)(GE_int32(256)))));
	return R;
}

/* ET_REGULAR_MANIFEST_STRING.column */
T6 T513f23(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T513*)(C))->a2)%((T6)(GE_int32(256)))));
	return R;
}

/* ET_C3_CHARACTER_CONSTANT.column */
T6 T512f24(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T512*)(C))->a3)%((T6)(GE_int32(256)))));
	return R;
}

/* ET_BRACKET_SYMBOL.column */
T6 T506f19(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T506*)(C))->a2)%((T6)(GE_int32(256)))));
	return R;
}

/* ET_VOID.column */
T6 T500f17(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T500*)(C))->a2)%((T6)(GE_int32(256)))));
	return R;
}

/* ET_SYMBOL_OPERATOR.column */
T6 T497f19(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T497*)(C))->a2)%((T6)(GE_int32(256)))));
	return R;
}

/* ET_RETRY_INSTRUCTION.column */
T6 T494f11(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T494*)(C))->a2)%((T6)(GE_int32(256)))));
	return R;
}

/* ET_KEYWORD_OPERATOR.column */
T6 T484f19(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T484*)(C))->a2)%((T6)(GE_int32(256)))));
	return R;
}

/* ET_FREE_OPERATOR.column */
T6 T478f42(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T478*)(C))->a3)%((T6)(GE_int32(256)))));
	return R;
}

/* ET_BIT_CONSTANT.column */
T6 T464f21(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T464*)(C))->a2)%((T6)(GE_int32(256)))));
	return R;
}

/* ET_SYMBOL.column */
T6 T459f12(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T459*)(C))->a2)%((T6)(GE_int32(256)))));
	return R;
}

/* ET_PRECURSOR_KEYWORD.column */
T6 T456f14(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T456*)(C))->a2)%((T6)(GE_int32(256)))));
	return R;
}

/* ET_AGENT_KEYWORD.column */
T6 T453f11(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T453*)(C))->a2)%((T6)(GE_int32(256)))));
	return R;
}

/* ET_RESULT.column */
T6 T222f18(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T222*)(C))->a4)%((T6)(GE_int32(256)))));
	return R;
}

/* ET_CURRENT.column */
T6 T198f19(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T198*)(C))->a4)%((T6)(GE_int32(256)))));
	return R;
}

/* ET_KEYWORD.column */
T6 T179f17(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T179*)(C))->a3)%((T6)(GE_int32(256)))));
	return R;
}

/* ET_IDENTIFIER.column */
T6 T129f37(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T129*)(C))->a4)%((T6)(GE_int32(256)))));
	return R;
}

/* ET_INVARIANTS.clients */
unsigned char ge532os12797 = '\0';
T0* ge532ov12797;
T0* T537f20(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge532os12797) {
		return ge532ov12797;
	} else {
		ge532os12797 = '\1';
	}
	t1 = (T537f9(C));
	R = (T170f740(GE_void(t1)));
	ge532ov12797 = R;
	return R;
}

/* ET_INVARIANTS.first_precursor */
T0* T537f18(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_INVARIANTS.type */
T0* T537f19(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_INVARIANTS.is_feature */
T1 T537f14(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_EXTERNAL_PROCEDURE.as_feature */
T0* T671f47(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_ONCE_PROCEDURE.as_feature */
T0* T670f46(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DEFERRED_FUNCTION.as_feature */
T0* T665f50(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_ONCE_FUNCTION.as_feature */
T0* T664f52(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DO_FUNCTION.as_feature */
T0* T662f52(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_INVARIANTS.as_feature */
T0* T537f15(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_DEFERRED_PROCEDURE.as_feature */
T0* T332f43(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DO_PROCEDURE.as_feature */
T0* T326f46(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_ATTRIBUTE.as_feature */
T0* T261f46(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.as_feature */
T0* T260f48(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.as_feature */
T0* T258f48(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_EXTERNAL_FUNCTION.as_feature */
T0* T176f54(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_INVARIANTS.arguments */
T0* T537f17(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_EXTERNAL_PROCEDURE.locals */
T0* T671f48(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_DEFERRED_FUNCTION.locals */
T0* T665f51(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_INVARIANTS.locals */
T0* T537f16(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_DEFERRED_PROCEDURE.locals */
T0* T332f44(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_ATTRIBUTE.locals */
T0* T261f47(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.locals */
T0* T260f49(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.locals */
T0* T258f49(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_EXTERNAL_FUNCTION.locals */
T0* T176f55(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_INVARIANTS.implementation_feature */
T0* T537f13(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DYNAMIC_TYPE_LIST.dynamic_type */
T0* T188f6(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T426*)(GE_void(((T188*)(C))->a2)))->z2[a1]);
	return R;
}

/* ET_AGENT_IMPLICIT_CURRENT_TARGET.position */
T0* T1172f4(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T228x18000(GE_void(((T1172*)(C))->a1)));
	R = (T1431x6392(GE_void(t1)));
	return R;
}

/* ET_AGENT_OPEN_TARGET.position */
T0* T831f7(T0* C)
{
	T0* R = 0;
	T1 t1;
	R = (T459f8(GE_void(((T831*)(C))->a2)));
	t1 = (T274x11970(GE_void(R)));
	if (t1) {
		R = (T167x6392(GE_void(((T831*)(C))->a1)));
	}
	return R;
}

/* ET_CONVERT_TO_EXPRESSION.is_open_operand */
T1 T1420f15(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_CONVERT_EXPRESSION.is_open_operand */
T1 T1322f13(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_AGENT_IMPLICIT_CURRENT_TARGET.is_open_operand */
T1 T1172f3(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_EXTERNAL_PROCEDURE_INLINE_AGENT.is_open_operand */
T1 T838f21(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ONCE_PROCEDURE_INLINE_AGENT.is_open_operand */
T1 T837f24(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DO_PROCEDURE_INLINE_AGENT.is_open_operand */
T1 T836f24(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_EXTERNAL_FUNCTION_INLINE_AGENT.is_open_operand */
T1 T835f22(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ONCE_FUNCTION_INLINE_AGENT.is_open_operand */
T1 T834f25(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DO_FUNCTION_INLINE_AGENT.is_open_operand */
T1 T832f25(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_MANIFEST_TYPE.is_open_operand */
T1 T822f12(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_STRIP_EXPRESSION.is_open_operand */
T1 T815f17(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_MANIFEST_ARRAY.is_open_operand */
T1 T813f17(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ONCE_MANIFEST_STRING.is_open_operand */
T1 T812f13(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_CALL_AGENT.is_open_operand */
T1 T808f17(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_OLD_EXPRESSION.is_open_operand */
T1 T807f11(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_EXPRESSION.is_open_operand */
T1 T806f12(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_EQUALITY_EXPRESSION.is_open_operand */
T1 T805f11(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_EXPRESSION.is_open_operand */
T1 T801f12(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_EXPRESSION_ADDRESS.is_open_operand */
T1 T799f11(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_RESULT_ADDRESS.is_open_operand */
T1 T798f11(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_CURRENT_ADDRESS.is_open_operand */
T1 T797f11(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FEATURE_ADDRESS.is_open_operand */
T1 T796f11(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PARENTHESIZED_EXPRESSION.is_open_operand */
T1 T791f11(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PRECURSOR_EXPRESSION.is_open_operand */
T1 T790f14(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_STATIC_CALL_EXPRESSION.is_open_operand */
T1 T775f15(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BRACKET_EXPRESSION.is_open_operand */
T1 T727f12(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_CREATE_EXPRESSION.is_open_operand */
T1 T554f13(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_C2_CHARACTER_CONSTANT.is_open_operand */
T1 T525f26(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_C1_CHARACTER_CONSTANT.is_open_operand */
T1 T524f26(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FALSE_CONSTANT.is_open_operand */
T1 T523f25(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_TRUE_CONSTANT.is_open_operand */
T1 T522f25(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_UNDERSCORED_REAL_CONSTANT.is_open_operand */
T1 T520f27(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_REGULAR_REAL_CONSTANT.is_open_operand */
T1 T519f27(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_HEXADECIMAL_INTEGER_CONSTANT.is_open_operand */
T1 T518f32(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_UNDERSCORED_INTEGER_CONSTANT.is_open_operand */
T1 T517f33(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_REGULAR_INTEGER_CONSTANT.is_open_operand */
T1 T516f33(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_SPECIAL_MANIFEST_STRING.is_open_operand */
T1 T515f27(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_VERBATIM_STRING.is_open_operand */
T1 T514f31(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_REGULAR_MANIFEST_STRING.is_open_operand */
T1 T513f26(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_C3_CHARACTER_CONSTANT.is_open_operand */
T1 T512f27(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_VOID.is_open_operand */
T1 T500f19(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BIT_CONSTANT.is_open_operand */
T1 T464f23(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_RESULT.is_open_operand */
T1 T222f15(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_MANIFEST_TUPLE.is_open_operand */
T1 T205f18(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_CALL_EXPRESSION.is_open_operand */
T1 T203f15(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_CURRENT.is_open_operand */
T1 T198f16(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_IDENTIFIER.is_open_operand */
T1 T129f80(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_CONVERT_TO_EXPRESSION.expression_item */
T0* T1420f11(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_INFIX_CAST_EXPRESSION.expression_item */
T0* T1323f9(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CONVERT_EXPRESSION.expression_item */
T0* T1322f9(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_EXTERNAL_PROCEDURE_INLINE_AGENT.expression_item */
T0* T838f12(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_ONCE_PROCEDURE_INLINE_AGENT.expression_item */
T0* T837f13(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DO_PROCEDURE_INLINE_AGENT.expression_item */
T0* T836f13(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_EXTERNAL_FUNCTION_INLINE_AGENT.expression_item */
T0* T835f14(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_ONCE_FUNCTION_INLINE_AGENT.expression_item */
T0* T834f15(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DO_FUNCTION_INLINE_AGENT.expression_item */
T0* T832f15(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_MANIFEST_TYPE.expression_item */
T0* T822f6(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_STRIP_EXPRESSION.expression_item */
T0* T815f9(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_MANIFEST_ARRAY.expression_item */
T0* T813f8(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_ONCE_MANIFEST_STRING.expression_item */
T0* T812f6(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CALL_AGENT.expression_item */
T0* T808f7(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_OLD_EXPRESSION.expression_item */
T0* T807f5(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_PREFIX_EXPRESSION.expression_item */
T0* T806f4(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_EQUALITY_EXPRESSION.expression_item */
T0* T805f5(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_INFIX_EXPRESSION.expression_item */
T0* T801f5(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_EXPRESSION_ADDRESS.expression_item */
T0* T799f5(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_RESULT_ADDRESS.expression_item */
T0* T798f5(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CURRENT_ADDRESS.expression_item */
T0* T797f5(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_FEATURE_ADDRESS.expression_item */
T0* T796f5(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_PARENTHESIZED_EXPRESSION.expression_item */
T0* T791f6(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_PRECURSOR_EXPRESSION.expression_item */
T0* T790f7(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_STATIC_CALL_EXPRESSION.expression_item */
T0* T775f6(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_BRACKET_EXPRESSION.expression_item */
T0* T727f5(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CREATE_EXPRESSION.expression_item */
T0* T554f6(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_C2_CHARACTER_CONSTANT.expression_item */
T0* T525f8(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_C1_CHARACTER_CONSTANT.expression_item */
T0* T524f8(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_FALSE_CONSTANT.expression_item */
T0* T523f10(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_TRUE_CONSTANT.expression_item */
T0* T522f10(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_UNDERSCORED_REAL_CONSTANT.expression_item */
T0* T520f9(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_REGULAR_REAL_CONSTANT.expression_item */
T0* T519f9(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_HEXADECIMAL_INTEGER_CONSTANT.expression_item */
T0* T518f13(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_UNDERSCORED_INTEGER_CONSTANT.expression_item */
T0* T517f13(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_REGULAR_INTEGER_CONSTANT.expression_item */
T0* T516f13(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_SPECIAL_MANIFEST_STRING.expression_item */
T0* T515f10(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_VERBATIM_STRING.expression_item */
T0* T514f14(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_REGULAR_MANIFEST_STRING.expression_item */
T0* T513f9(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_C3_CHARACTER_CONSTANT.expression_item */
T0* T512f9(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_VOID.expression_item */
T0* T500f10(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_BIT_CONSTANT.expression_item */
T0* T464f8(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_RESULT.expression_item */
T0* T222f10(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_MANIFEST_TUPLE.expression_item */
T0* T205f13(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CALL_EXPRESSION.expression_item */
T0* T203f8(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CURRENT.expression_item */
T0* T198f10(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_IDENTIFIER.expression_item */
T0* T129f48(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_AGENT_IMPLICIT_OPEN_ARGUMENT_LIST.is_empty */
T1 T1428f3(T0* C)
{
	T1 R = 0;
	R = ((((T1428*)(C))->a1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_AGENT_ARGUMENT_OPERAND_LIST.is_empty */
T1 T827f9(T0* C)
{
	T1 R = 0;
	R = ((((T827*)(C))->a3)==((T6)(GE_int32(0))));
	return R;
}

/* ET_ASSIGNER_INSTRUCTION.is_empty */
T1 T724f13(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T724f11(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_ASSIGNER_INSTRUCTION.count */
T6 T724f11(T0* C)
{
	T6 R = 0;
	T6 t1;
	t1 = (((((T0*)(GE_void(((T724*)(C))->a1)))->id==203)?T203f16(((T724*)(C))->a1):T727f13(((T724*)(C))->a1)));
	R = ((T6)((t1)+((T6)(GE_int32(1)))));
	return R;
}

/* ET_AGENT_IMPLICIT_OPEN_ARGUMENT_LIST.actual_argument */
T0* T1428f4(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T1463*)(GE_void(((T1428*)(C))->a2)))->z2[a1]);
	return R;
}

/* ET_AGENT_ARGUMENT_OPERAND_LIST.actual_argument */
T0* T827f7(T0* C, T6 a1)
{
	T0* R = 0;
	T0* t1;
	t1 = (T827f8(C, a1));
	R = (T842x11936(GE_void(t1)));
	return R;
}

/* ET_ASSIGNER_INSTRUCTION.actual_argument */
T0* T724f12(T0* C, T6 a1)
{
	T0* R = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	t1 = ((a1)==((T6)(GE_int32(1))));
	if (t1) {
		R = ((T724*)(C))->a2;
	} else {
		t2 = (((((T0*)(GE_void(((T724*)(C))->a1)))->id==203)?((T203*)(((T724*)(C))->a1))->a4:((T727*)(((T724*)(C))->a1))->a3));
		t3 = ((T6)((a1)-((T6)(GE_int32(1)))));
		R = (((((T0*)(GE_void(t2)))->id==199)?T199f6(t2, t3):T817f7(t2, t3)));
	}
	return R;
}

/* ET_CONVERT_TO_EXPRESSION.is_empty_actual_argument */
T1 T1420f10(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_INFIX_CAST_EXPRESSION.is_empty_actual_argument */
T1 T1323f7(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_CONVERT_EXPRESSION.is_empty_actual_argument */
T1 T1322f8(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_EXTERNAL_PROCEDURE_INLINE_AGENT.is_empty_actual_argument */
T1 T838f26(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_ONCE_PROCEDURE_INLINE_AGENT.is_empty_actual_argument */
T1 T837f27(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_DO_PROCEDURE_INLINE_AGENT.is_empty_actual_argument */
T1 T836f27(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_EXTERNAL_FUNCTION_INLINE_AGENT.is_empty_actual_argument */
T1 T835f27(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_ONCE_FUNCTION_INLINE_AGENT.is_empty_actual_argument */
T1 T834f28(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_DO_FUNCTION_INLINE_AGENT.is_empty_actual_argument */
T1 T832f28(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_MANIFEST_TYPE.is_empty_actual_argument */
T1 T822f14(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_BRACKET_ARGUMENT_LIST.is_empty */
T1 T817f9(T0* C)
{
	T1 R = 0;
	R = ((((T817*)(C))->a3)==((T6)(GE_int32(0))));
	return R;
}

/* ET_STRIP_EXPRESSION.is_empty_actual_argument */
T1 T815f20(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_MANIFEST_ARRAY.is_empty_actual_argument */
T1 T813f19(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_ONCE_MANIFEST_STRING.is_empty_actual_argument */
T1 T812f15(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_CALL_AGENT.is_empty_actual_argument */
T1 T808f22(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_OLD_EXPRESSION.is_empty_actual_argument */
T1 T807f13(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_PREFIX_EXPRESSION.is_empty_actual_argument */
T1 T806f15(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_EQUALITY_EXPRESSION.is_empty_actual_argument */
T1 T805f13(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_INFIX_EXPRESSION.is_empty_actual_argument */
T1 T801f14(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_EXPRESSION_ADDRESS.is_empty_actual_argument */
T1 T799f13(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_RESULT_ADDRESS.is_empty_actual_argument */
T1 T798f13(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_CURRENT_ADDRESS.is_empty_actual_argument */
T1 T797f13(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_FEATURE_ADDRESS.is_empty_actual_argument */
T1 T796f13(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_PARENTHESIZED_EXPRESSION.is_empty_actual_argument */
T1 T791f14(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_PRECURSOR_EXPRESSION.is_empty_actual_argument */
T1 T790f16(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_STATIC_CALL_EXPRESSION.is_empty_actual_argument */
T1 T775f18(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_BRACKET_EXPRESSION.is_empty_actual_argument */
T1 T727f15(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_CREATE_EXPRESSION.is_empty_actual_argument */
T1 T554f16(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_C2_CHARACTER_CONSTANT.is_empty_actual_argument */
T1 T525f28(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_C1_CHARACTER_CONSTANT.is_empty_actual_argument */
T1 T524f28(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_FALSE_CONSTANT.is_empty_actual_argument */
T1 T523f27(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_TRUE_CONSTANT.is_empty_actual_argument */
T1 T522f27(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_UNDERSCORED_REAL_CONSTANT.is_empty_actual_argument */
T1 T520f29(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_REGULAR_REAL_CONSTANT.is_empty_actual_argument */
T1 T519f29(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_HEXADECIMAL_INTEGER_CONSTANT.is_empty_actual_argument */
T1 T518f34(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_UNDERSCORED_INTEGER_CONSTANT.is_empty_actual_argument */
T1 T517f35(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_REGULAR_INTEGER_CONSTANT.is_empty_actual_argument */
T1 T516f35(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_SPECIAL_MANIFEST_STRING.is_empty_actual_argument */
T1 T515f29(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_VERBATIM_STRING.is_empty_actual_argument */
T1 T514f33(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_REGULAR_MANIFEST_STRING.is_empty_actual_argument */
T1 T513f28(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_C3_CHARACTER_CONSTANT.is_empty_actual_argument */
T1 T512f29(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_VOID.is_empty_actual_argument */
T1 T500f21(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_BIT_CONSTANT.is_empty_actual_argument */
T1 T464f25(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_RESULT.is_empty_actual_argument */
T1 T222f21(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_MANIFEST_TUPLE.is_empty_actual_argument */
T1 T205f20(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_CALL_EXPRESSION.is_empty_actual_argument */
T1 T203f18(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_ACTUAL_ARGUMENT_LIST.is_empty */
T1 T199f10(T0* C)
{
	T1 R = 0;
	R = ((((T199*)(C))->a1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_CURRENT.is_empty_actual_argument */
T1 T198f23(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_IDENTIFIER.is_empty_actual_argument */
T1 T129f85(T0* C)
{
	T1 R = 0;
	R = (((T6)(GE_int32(1)))==((T6)(GE_int32(0))));
	return R;
}

/* ET_CONVERT_TO_EXPRESSION.actual_argument */
T0* T1420f9(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_INFIX_CAST_EXPRESSION.actual_argument */
T0* T1323f6(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CONVERT_EXPRESSION.actual_argument */
T0* T1322f5(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_EXTERNAL_PROCEDURE_INLINE_AGENT.actual_argument */
T0* T838f17(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_ONCE_PROCEDURE_INLINE_AGENT.actual_argument */
T0* T837f18(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DO_PROCEDURE_INLINE_AGENT.actual_argument */
T0* T836f18(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_EXTERNAL_FUNCTION_INLINE_AGENT.actual_argument */
T0* T835f19(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_ONCE_FUNCTION_INLINE_AGENT.actual_argument */
T0* T834f20(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DO_FUNCTION_INLINE_AGENT.actual_argument */
T0* T832f20(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_MANIFEST_TYPE.actual_argument */
T0* T822f10(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_BRACKET_ARGUMENT_LIST.actual_argument */
T0* T817f7(T0* C, T6 a1)
{
	T0* R = 0;
	T0* t1;
	t1 = (T817f8(C, a1));
	R = (T238x11917(GE_void(t1)));
	return R;
}

/* ET_STRIP_EXPRESSION.actual_argument */
T0* T815f13(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_MANIFEST_ARRAY.actual_argument */
T0* T813f12(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_ONCE_MANIFEST_STRING.actual_argument */
T0* T812f10(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CALL_AGENT.actual_argument */
T0* T808f13(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_OLD_EXPRESSION.actual_argument */
T0* T807f9(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_PREFIX_EXPRESSION.actual_argument */
T0* T806f8(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_EQUALITY_EXPRESSION.actual_argument */
T0* T805f9(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_INFIX_EXPRESSION.actual_argument */
T0* T801f9(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_EXPRESSION_ADDRESS.actual_argument */
T0* T799f9(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_RESULT_ADDRESS.actual_argument */
T0* T798f9(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CURRENT_ADDRESS.actual_argument */
T0* T797f9(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_FEATURE_ADDRESS.actual_argument */
T0* T796f9(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_PARENTHESIZED_EXPRESSION.actual_argument */
T0* T791f10(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_PRECURSOR_EXPRESSION.actual_argument */
T0* T790f12(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_STATIC_CALL_EXPRESSION.actual_argument */
T0* T775f13(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_BRACKET_EXPRESSION.actual_argument */
T0* T727f10(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CREATE_EXPRESSION.actual_argument */
T0* T554f10(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_C2_CHARACTER_CONSTANT.actual_argument */
T0* T525f19(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_C1_CHARACTER_CONSTANT.actual_argument */
T0* T524f19(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_FALSE_CONSTANT.actual_argument */
T0* T523f20(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_TRUE_CONSTANT.actual_argument */
T0* T522f20(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_UNDERSCORED_REAL_CONSTANT.actual_argument */
T0* T520f21(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_REGULAR_REAL_CONSTANT.actual_argument */
T0* T519f21(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_HEXADECIMAL_INTEGER_CONSTANT.actual_argument */
T0* T518f30(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_UNDERSCORED_INTEGER_CONSTANT.actual_argument */
T0* T517f31(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_REGULAR_INTEGER_CONSTANT.actual_argument */
T0* T516f31(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_SPECIAL_MANIFEST_STRING.actual_argument */
T0* T515f21(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_VERBATIM_STRING.actual_argument */
T0* T514f25(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_REGULAR_MANIFEST_STRING.actual_argument */
T0* T513f20(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_C3_CHARACTER_CONSTANT.actual_argument */
T0* T512f20(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_VOID.actual_argument */
T0* T500f14(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_BIT_CONSTANT.actual_argument */
T0* T464f18(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_RESULT.actual_argument */
T0* T222f14(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_MANIFEST_TUPLE.actual_argument */
T0* T205f11(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CALL_EXPRESSION.actual_argument */
T0* T203f14(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_ACTUAL_ARGUMENT_LIST.actual_argument */
T0* T199f6(T0* C, T6 a1)
{
	T0* R = 0;
	T0* t1;
	t1 = (T199f5(C, a1));
	R = (T238x11917(GE_void(t1)));
	return R;
}

/* ET_CURRENT.actual_argument */
T0* T198f15(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_IDENTIFIER.actual_argument */
T0* T129f79(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_C2_CHARACTER_CONSTANT.is_boolean_constant */
T1 T525f11(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_C1_CHARACTER_CONSTANT.is_boolean_constant */
T1 T524f11(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_UNDERSCORED_REAL_CONSTANT.is_boolean_constant */
T1 T520f12(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_REGULAR_REAL_CONSTANT.is_boolean_constant */
T1 T519f12(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_HEXADECIMAL_INTEGER_CONSTANT.is_boolean_constant */
T1 T518f22(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_UNDERSCORED_INTEGER_CONSTANT.is_boolean_constant */
T1 T517f23(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_REGULAR_INTEGER_CONSTANT.is_boolean_constant */
T1 T516f23(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_SPECIAL_MANIFEST_STRING.is_boolean_constant */
T1 T515f13(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_VERBATIM_STRING.is_boolean_constant */
T1 T514f17(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_REGULAR_MANIFEST_STRING.is_boolean_constant */
T1 T513f12(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_C3_CHARACTER_CONSTANT.is_boolean_constant */
T1 T512f12(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BIT_CONSTANT.is_boolean_constant */
T1 T464f10(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FALSE_CONSTANT.is_character_constant */
T1 T523f13(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_TRUE_CONSTANT.is_character_constant */
T1 T522f13(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_UNDERSCORED_REAL_CONSTANT.is_character_constant */
T1 T520f13(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_REGULAR_REAL_CONSTANT.is_character_constant */
T1 T519f13(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_HEXADECIMAL_INTEGER_CONSTANT.is_character_constant */
T1 T518f23(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_UNDERSCORED_INTEGER_CONSTANT.is_character_constant */
T1 T517f24(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_REGULAR_INTEGER_CONSTANT.is_character_constant */
T1 T516f24(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_SPECIAL_MANIFEST_STRING.is_character_constant */
T1 T515f14(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_VERBATIM_STRING.is_character_constant */
T1 T514f18(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_REGULAR_MANIFEST_STRING.is_character_constant */
T1 T513f13(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BIT_CONSTANT.is_character_constant */
T1 T464f11(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_C2_CHARACTER_CONSTANT.is_integer_constant */
T1 T525f13(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_C1_CHARACTER_CONSTANT.is_integer_constant */
T1 T524f13(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FALSE_CONSTANT.is_integer_constant */
T1 T523f14(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_TRUE_CONSTANT.is_integer_constant */
T1 T522f14(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_UNDERSCORED_REAL_CONSTANT.is_integer_constant */
T1 T520f14(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_REGULAR_REAL_CONSTANT.is_integer_constant */
T1 T519f14(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_SPECIAL_MANIFEST_STRING.is_integer_constant */
T1 T515f15(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_VERBATIM_STRING.is_integer_constant */
T1 T514f19(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_REGULAR_MANIFEST_STRING.is_integer_constant */
T1 T513f14(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_C3_CHARACTER_CONSTANT.is_integer_constant */
T1 T512f14(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BIT_CONSTANT.is_integer_constant */
T1 T464f12(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_C2_CHARACTER_CONSTANT.is_real_constant */
T1 T525f14(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_C1_CHARACTER_CONSTANT.is_real_constant */
T1 T524f14(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FALSE_CONSTANT.is_real_constant */
T1 T523f15(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_TRUE_CONSTANT.is_real_constant */
T1 T522f15(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_HEXADECIMAL_INTEGER_CONSTANT.is_real_constant */
T1 T518f25(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_UNDERSCORED_INTEGER_CONSTANT.is_real_constant */
T1 T517f26(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_REGULAR_INTEGER_CONSTANT.is_real_constant */
T1 T516f26(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_SPECIAL_MANIFEST_STRING.is_real_constant */
T1 T515f16(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_VERBATIM_STRING.is_real_constant */
T1 T514f20(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_REGULAR_MANIFEST_STRING.is_real_constant */
T1 T513f15(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_C3_CHARACTER_CONSTANT.is_real_constant */
T1 T512f15(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BIT_CONSTANT.is_real_constant */
T1 T464f13(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_C2_CHARACTER_CONSTANT.is_string_constant */
T1 T525f15(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_C1_CHARACTER_CONSTANT.is_string_constant */
T1 T524f15(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FALSE_CONSTANT.is_string_constant */
T1 T523f16(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_TRUE_CONSTANT.is_string_constant */
T1 T522f16(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_UNDERSCORED_REAL_CONSTANT.is_string_constant */
T1 T520f16(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_REGULAR_REAL_CONSTANT.is_string_constant */
T1 T519f16(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_HEXADECIMAL_INTEGER_CONSTANT.is_string_constant */
T1 T518f26(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_UNDERSCORED_INTEGER_CONSTANT.is_string_constant */
T1 T517f27(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_REGULAR_INTEGER_CONSTANT.is_string_constant */
T1 T516f27(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_C3_CHARACTER_CONSTANT.is_string_constant */
T1 T512f16(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BIT_CONSTANT.is_string_constant */
T1 T464f14(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_C2_CHARACTER_CONSTANT.is_bit_constant */
T1 T525f16(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_C1_CHARACTER_CONSTANT.is_bit_constant */
T1 T524f16(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FALSE_CONSTANT.is_bit_constant */
T1 T523f17(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_TRUE_CONSTANT.is_bit_constant */
T1 T522f17(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_UNDERSCORED_REAL_CONSTANT.is_bit_constant */
T1 T520f17(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_REGULAR_REAL_CONSTANT.is_bit_constant */
T1 T519f17(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_HEXADECIMAL_INTEGER_CONSTANT.is_bit_constant */
T1 T518f27(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_UNDERSCORED_INTEGER_CONSTANT.is_bit_constant */
T1 T517f28(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_REGULAR_INTEGER_CONSTANT.is_bit_constant */
T1 T516f28(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_SPECIAL_MANIFEST_STRING.is_bit_constant */
T1 T515f18(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_VERBATIM_STRING.is_bit_constant */
T1 T514f22(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_REGULAR_MANIFEST_STRING.is_bit_constant */
T1 T513f17(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_C3_CHARACTER_CONSTANT.is_bit_constant */
T1 T512f17(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_CALL_AGENT.is_qualified_call */
T1 T808f14(T0* C)
{
	T1 R = 0;
	T0* l1 = 0;
	if ((((T808*)(C))->a4)==EIF_VOID) {
		l1 = EIF_VOID;
	} else {
		switch (((T0*)(((T808*)(C))->a4))->id) {
		case 1172:
			l1 = ((T808*)(C))->a4;
			break;
		default:
			l1 = EIF_VOID;
		}
	}
	R = ((l1)==(EIF_VOID));
	return R;
}

/* ET_ONCE_PROCEDURE_INLINE_AGENT.is_procedure */
T1 T837f23(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T837f15(C));
	R = ((t1)==(EIF_VOID));
	return R;
}

/* ET_DO_PROCEDURE_INLINE_AGENT.is_procedure */
T1 T836f23(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T836f15(C));
	R = ((t1)==(EIF_VOID));
	return R;
}

/* ET_ONCE_FUNCTION_INLINE_AGENT.is_procedure */
T1 T834f24(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T834f17(C));
	R = ((t1)==(EIF_VOID));
	return R;
}

/* ET_DO_FUNCTION_INLINE_AGENT.is_procedure */
T1 T832f24(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T832f17(C));
	R = ((t1)==(EIF_VOID));
	return R;
}

/* ET_EXTERNAL_PROCEDURE_INLINE_AGENT.implicit_result */
T0* T838f19(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_ONCE_PROCEDURE_INLINE_AGENT.implicit_result */
T0* T837f20(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_DO_PROCEDURE_INLINE_AGENT.implicit_result */
T0* T836f20(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_EXTERNAL_PROCEDURE_INLINE_AGENT.implicit_target_position */
T0* T838f25(T0* C)
{
	T0* R = 0;
	R = (T838f27(C));
	return R;
}

/* ET_EXTERNAL_PROCEDURE_INLINE_AGENT.first_leaf */
T0* T838f27(T0* C)
{
	T0* R = 0;
	R = ((T838*)(C))->a2;
	return R;
}

/* ET_ONCE_PROCEDURE_INLINE_AGENT.implicit_target_position */
T0* T837f26(T0* C)
{
	T0* R = 0;
	R = (T837f28(C));
	return R;
}

/* ET_ONCE_PROCEDURE_INLINE_AGENT.first_leaf */
T0* T837f28(T0* C)
{
	T0* R = 0;
	R = ((T837*)(C))->a3;
	return R;
}

/* ET_DO_PROCEDURE_INLINE_AGENT.implicit_target_position */
T0* T836f26(T0* C)
{
	T0* R = 0;
	R = (T836f28(C));
	return R;
}

/* ET_DO_PROCEDURE_INLINE_AGENT.first_leaf */
T0* T836f28(T0* C)
{
	T0* R = 0;
	R = ((T836*)(C))->a3;
	return R;
}

/* ET_EXTERNAL_FUNCTION_INLINE_AGENT.implicit_target_position */
T0* T835f26(T0* C)
{
	T0* R = 0;
	R = (T835f28(C));
	return R;
}

/* ET_EXTERNAL_FUNCTION_INLINE_AGENT.first_leaf */
T0* T835f28(T0* C)
{
	T0* R = 0;
	R = ((T835*)(C))->a2;
	return R;
}

/* ET_ONCE_FUNCTION_INLINE_AGENT.implicit_target_position */
T0* T834f27(T0* C)
{
	T0* R = 0;
	R = (T834f29(C));
	return R;
}

/* ET_ONCE_FUNCTION_INLINE_AGENT.first_leaf */
T0* T834f29(T0* C)
{
	T0* R = 0;
	R = ((T834*)(C))->a5;
	return R;
}

/* ET_DO_FUNCTION_INLINE_AGENT.implicit_target_position */
T0* T832f27(T0* C)
{
	T0* R = 0;
	R = (T832f29(C));
	return R;
}

/* ET_DO_FUNCTION_INLINE_AGENT.first_leaf */
T0* T832f29(T0* C)
{
	T0* R = 0;
	R = ((T832*)(C))->a5;
	return R;
}

/* ET_CALL_AGENT.implicit_target_position */
T0* T808f21(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T808f8(C));
	R = (T169x6395(GE_void(t1)));
	return R;
}

/* ET_CALL_AGENT.is_inline_agent */
T1 T808f20(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_OR_ELSE_OPERATOR.is_bracket */
T1 T804f11(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_AND_THEN_OPERATOR.is_bracket */
T1 T803f11(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_FREE_NAME.is_bracket */
T1 T684f10(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_NAME.is_bracket */
T1 T680f7(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T680f5(C));
	t2 = ((T2)('\024'));
	R = ((((T680*)(C))->a3)==(t2));
	return R;
}

/* ET_INFIX_FREE_NAME.is_bracket */
T1 T678f41(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_NAME.is_bracket */
T1 T677f26(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_FREE_NAME.is_bracket */
T1 T676f28(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_NAME.is_bracket */
T1 T675f23(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_SYMBOL_OPERATOR.is_bracket */
T1 T497f22(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_KEYWORD_OPERATOR.is_bracket */
T1 T484f20(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FREE_OPERATOR.is_bracket */
T1 T478f19(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_IDENTIFIER.is_bracket */
T1 T129f71(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_OR_ELSE_OPERATOR.is_infix_and */
T1 T804f8(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_AND_THEN_OPERATOR.is_infix_and */
T1 T803f8(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_FREE_NAME.is_infix_and */
T1 T684f16(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_NAME.is_infix_and */
T1 T680f39(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T680f5(C));
	t2 = ((T2)('\001'));
	R = ((((T680*)(C))->a3)==(t2));
	return R;
}

/* ET_INFIX_FREE_NAME.is_infix_and */
T1 T678f16(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_NAME.is_infix_and */
T1 T677f15(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T677f5(C));
	t2 = ((T2)('\001'));
	R = ((((T677*)(C))->a3)==(t2));
	return R;
}

/* ET_PREFIX_FREE_NAME.is_infix_and */
T1 T676f15(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_NAME.is_infix_and */
T1 T675f12(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BRACKET_SYMBOL.is_infix_and */
T1 T506f14(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_SYMBOL_OPERATOR.is_infix_and */
T1 T497f13(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_KEYWORD_OPERATOR.is_infix_and */
T1 T484f15(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T484f7(C));
	t2 = ((T2)('\001'));
	R = ((((T484*)(C))->a1)==(t2));
	return R;
}

/* ET_FREE_OPERATOR.is_infix_and */
T1 T478f14(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_IDENTIFIER.is_infix_and */
T1 T129f42(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_OR_ELSE_OPERATOR.is_infix_and_then */
T1 T804f5(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_FREE_NAME.is_infix_and_then */
T1 T684f17(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_NAME.is_infix_and_then */
T1 T680f40(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T680f5(C));
	t2 = ((T2)('\021'));
	R = ((((T680*)(C))->a3)==(t2));
	return R;
}

/* ET_INFIX_FREE_NAME.is_infix_and_then */
T1 T678f17(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_NAME.is_infix_and_then */
T1 T677f12(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T677f5(C));
	t2 = ((T2)('\021'));
	R = ((((T677*)(C))->a3)==(t2));
	return R;
}

/* ET_PREFIX_FREE_NAME.is_infix_and_then */
T1 T676f12(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_NAME.is_infix_and_then */
T1 T675f9(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BRACKET_SYMBOL.is_infix_and_then */
T1 T506f11(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_SYMBOL_OPERATOR.is_infix_and_then */
T1 T497f10(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_KEYWORD_OPERATOR.is_infix_and_then */
T1 T484f12(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FREE_OPERATOR.is_infix_and_then */
T1 T478f11(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_IDENTIFIER.is_infix_and_then */
T1 T129f39(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_OR_ELSE_OPERATOR.is_infix_div */
T1 T804f12(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_AND_THEN_OPERATOR.is_infix_div */
T1 T803f12(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_FREE_NAME.is_infix_div */
T1 T684f18(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_NAME.is_infix_div */
T1 T680f41(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T680f5(C));
	t2 = ((T2)('\005'));
	R = ((((T680*)(C))->a3)==(t2));
	return R;
}

/* ET_INFIX_FREE_NAME.is_infix_div */
T1 T678f18(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_NAME.is_infix_div */
T1 T677f47(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T677f5(C));
	t2 = ((T2)('\005'));
	R = ((((T677*)(C))->a3)==(t2));
	return R;
}

/* ET_PREFIX_FREE_NAME.is_infix_div */
T1 T676f37(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_NAME.is_infix_div */
T1 T675f34(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BRACKET_SYMBOL.is_infix_div */
T1 T506f22(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_SYMBOL_OPERATOR.is_infix_div */
T1 T497f23(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T497f7(C));
	t2 = ((T2)('\005'));
	R = ((((T497*)(C))->a1)==(t2));
	return R;
}

/* ET_KEYWORD_OPERATOR.is_infix_div */
T1 T484f21(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FREE_OPERATOR.is_infix_div */
T1 T478f20(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_IDENTIFIER.is_infix_div */
T1 T129f59(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_OR_ELSE_OPERATOR.is_infix_divide */
T1 T804f13(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_AND_THEN_OPERATOR.is_infix_divide */
T1 T803f13(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_FREE_NAME.is_infix_divide */
T1 T684f19(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_NAME.is_infix_divide */
T1 T680f42(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T680f5(C));
	t2 = ((T2)('\006'));
	R = ((((T680*)(C))->a3)==(t2));
	return R;
}

/* ET_INFIX_FREE_NAME.is_infix_divide */
T1 T678f19(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_NAME.is_infix_divide */
T1 T677f48(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T677f5(C));
	t2 = ((T2)('\006'));
	R = ((((T677*)(C))->a3)==(t2));
	return R;
}

/* ET_PREFIX_FREE_NAME.is_infix_divide */
T1 T676f38(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_NAME.is_infix_divide */
T1 T675f35(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BRACKET_SYMBOL.is_infix_divide */
T1 T506f23(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_SYMBOL_OPERATOR.is_infix_divide */
T1 T497f24(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T497f7(C));
	t2 = ((T2)('\006'));
	R = ((((T497*)(C))->a1)==(t2));
	return R;
}

/* ET_KEYWORD_OPERATOR.is_infix_divide */
T1 T484f22(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FREE_OPERATOR.is_infix_divide */
T1 T478f21(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_IDENTIFIER.is_infix_divide */
T1 T129f60(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_OR_ELSE_OPERATOR.is_infix_ge */
T1 T804f14(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_AND_THEN_OPERATOR.is_infix_ge */
T1 T803f14(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_FREE_NAME.is_infix_ge */
T1 T684f20(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_NAME.is_infix_ge */
T1 T680f43(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T680f5(C));
	t2 = ((T2)('\007'));
	R = ((((T680*)(C))->a3)==(t2));
	return R;
}

/* ET_INFIX_FREE_NAME.is_infix_ge */
T1 T678f20(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_NAME.is_infix_ge */
T1 T677f49(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T677f5(C));
	t2 = ((T2)('\007'));
	R = ((((T677*)(C))->a3)==(t2));
	return R;
}

/* ET_PREFIX_FREE_NAME.is_infix_ge */
T1 T676f39(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_NAME.is_infix_ge */
T1 T675f36(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BRACKET_SYMBOL.is_infix_ge */
T1 T506f24(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_SYMBOL_OPERATOR.is_infix_ge */
T1 T497f25(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T497f7(C));
	t2 = ((T2)('\007'));
	R = ((((T497*)(C))->a1)==(t2));
	return R;
}

/* ET_KEYWORD_OPERATOR.is_infix_ge */
T1 T484f23(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FREE_OPERATOR.is_infix_ge */
T1 T478f22(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_IDENTIFIER.is_infix_ge */
T1 T129f61(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_OR_ELSE_OPERATOR.is_infix_gt */
T1 T804f15(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_AND_THEN_OPERATOR.is_infix_gt */
T1 T803f15(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_FREE_NAME.is_infix_gt */
T1 T684f21(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_NAME.is_infix_gt */
T1 T680f44(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T680f5(C));
	t2 = ((T2)('\010'));
	R = ((((T680*)(C))->a3)==(t2));
	return R;
}

/* ET_INFIX_FREE_NAME.is_infix_gt */
T1 T678f21(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_NAME.is_infix_gt */
T1 T677f50(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T677f5(C));
	t2 = ((T2)('\010'));
	R = ((((T677*)(C))->a3)==(t2));
	return R;
}

/* ET_PREFIX_FREE_NAME.is_infix_gt */
T1 T676f40(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_NAME.is_infix_gt */
T1 T675f37(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BRACKET_SYMBOL.is_infix_gt */
T1 T506f25(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_SYMBOL_OPERATOR.is_infix_gt */
T1 T497f26(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T497f7(C));
	t2 = ((T2)('\010'));
	R = ((((T497*)(C))->a1)==(t2));
	return R;
}

/* ET_KEYWORD_OPERATOR.is_infix_gt */
T1 T484f24(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FREE_OPERATOR.is_infix_gt */
T1 T478f23(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_IDENTIFIER.is_infix_gt */
T1 T129f62(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_OR_ELSE_OPERATOR.is_infix_implies */
T1 T804f7(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_AND_THEN_OPERATOR.is_infix_implies */
T1 T803f7(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_FREE_NAME.is_infix_implies */
T1 T684f22(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_NAME.is_infix_implies */
T1 T680f45(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T680f5(C));
	t2 = ((T2)('\002'));
	R = ((((T680*)(C))->a3)==(t2));
	return R;
}

/* ET_INFIX_FREE_NAME.is_infix_implies */
T1 T678f22(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_NAME.is_infix_implies */
T1 T677f14(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T677f5(C));
	t2 = ((T2)('\002'));
	R = ((((T677*)(C))->a3)==(t2));
	return R;
}

/* ET_PREFIX_FREE_NAME.is_infix_implies */
T1 T676f14(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_NAME.is_infix_implies */
T1 T675f11(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BRACKET_SYMBOL.is_infix_implies */
T1 T506f13(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_SYMBOL_OPERATOR.is_infix_implies */
T1 T497f12(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_KEYWORD_OPERATOR.is_infix_implies */
T1 T484f14(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T484f7(C));
	t2 = ((T2)('\002'));
	R = ((((T484*)(C))->a1)==(t2));
	return R;
}

/* ET_FREE_OPERATOR.is_infix_implies */
T1 T478f13(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_IDENTIFIER.is_infix_implies */
T1 T129f41(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_OR_ELSE_OPERATOR.is_infix_le */
T1 T804f16(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_AND_THEN_OPERATOR.is_infix_le */
T1 T803f16(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_FREE_NAME.is_infix_le */
T1 T684f23(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_NAME.is_infix_le */
T1 T680f46(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T680f5(C));
	t2 = ((T2)('\t'));
	R = ((((T680*)(C))->a3)==(t2));
	return R;
}

/* ET_INFIX_FREE_NAME.is_infix_le */
T1 T678f23(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_NAME.is_infix_le */
T1 T677f51(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T677f5(C));
	t2 = ((T2)('\t'));
	R = ((((T677*)(C))->a3)==(t2));
	return R;
}

/* ET_PREFIX_FREE_NAME.is_infix_le */
T1 T676f41(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_NAME.is_infix_le */
T1 T675f38(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BRACKET_SYMBOL.is_infix_le */
T1 T506f26(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_SYMBOL_OPERATOR.is_infix_le */
T1 T497f27(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T497f7(C));
	t2 = ((T2)('\t'));
	R = ((((T497*)(C))->a1)==(t2));
	return R;
}

/* ET_KEYWORD_OPERATOR.is_infix_le */
T1 T484f25(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FREE_OPERATOR.is_infix_le */
T1 T478f24(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_IDENTIFIER.is_infix_le */
T1 T129f63(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_OR_ELSE_OPERATOR.is_infix_lt */
T1 T804f17(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_AND_THEN_OPERATOR.is_infix_lt */
T1 T803f17(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_FREE_NAME.is_infix_lt */
T1 T684f24(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_NAME.is_infix_lt */
T1 T680f47(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T680f5(C));
	t2 = ((T2)('\n'));
	R = ((((T680*)(C))->a3)==(t2));
	return R;
}

/* ET_INFIX_FREE_NAME.is_infix_lt */
T1 T678f24(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_NAME.is_infix_lt */
T1 T677f52(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T677f5(C));
	t2 = ((T2)('\n'));
	R = ((((T677*)(C))->a3)==(t2));
	return R;
}

/* ET_PREFIX_FREE_NAME.is_infix_lt */
T1 T676f42(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_NAME.is_infix_lt */
T1 T675f39(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BRACKET_SYMBOL.is_infix_lt */
T1 T506f27(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_SYMBOL_OPERATOR.is_infix_lt */
T1 T497f28(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T497f7(C));
	t2 = ((T2)('\n'));
	R = ((((T497*)(C))->a1)==(t2));
	return R;
}

/* ET_KEYWORD_OPERATOR.is_infix_lt */
T1 T484f26(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FREE_OPERATOR.is_infix_lt */
T1 T478f25(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_IDENTIFIER.is_infix_lt */
T1 T129f64(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_OR_ELSE_OPERATOR.is_infix_minus */
T1 T804f18(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_AND_THEN_OPERATOR.is_infix_minus */
T1 T803f18(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_FREE_NAME.is_infix_minus */
T1 T684f25(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_NAME.is_infix_minus */
T1 T680f35(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T680f5(C));
	t2 = ((T2)('\013'));
	R = ((((T680*)(C))->a3)==(t2));
	return R;
}

/* ET_INFIX_FREE_NAME.is_infix_minus */
T1 T678f25(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_NAME.is_infix_minus */
T1 T677f53(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T677f5(C));
	t2 = ((T2)('\013'));
	R = ((((T677*)(C))->a3)==(t2));
	return R;
}

/* ET_PREFIX_FREE_NAME.is_infix_minus */
T1 T676f43(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_NAME.is_infix_minus */
T1 T675f40(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BRACKET_SYMBOL.is_infix_minus */
T1 T506f28(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_SYMBOL_OPERATOR.is_infix_minus */
T1 T497f29(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T497f7(C));
	t2 = ((T2)('\013'));
	R = ((((T497*)(C))->a1)==(t2));
	return R;
}

/* ET_KEYWORD_OPERATOR.is_infix_minus */
T1 T484f27(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FREE_OPERATOR.is_infix_minus */
T1 T478f26(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_IDENTIFIER.is_infix_minus */
T1 T129f65(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_OR_ELSE_OPERATOR.is_infix_mod */
T1 T804f19(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_AND_THEN_OPERATOR.is_infix_mod */
T1 T803f19(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_FREE_NAME.is_infix_mod */
T1 T684f26(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_NAME.is_infix_mod */
T1 T680f48(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T680f5(C));
	t2 = ((T2)('\014'));
	R = ((((T680*)(C))->a3)==(t2));
	return R;
}

/* ET_INFIX_FREE_NAME.is_infix_mod */
T1 T678f26(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_NAME.is_infix_mod */
T1 T677f54(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T677f5(C));
	t2 = ((T2)('\014'));
	R = ((((T677*)(C))->a3)==(t2));
	return R;
}

/* ET_PREFIX_FREE_NAME.is_infix_mod */
T1 T676f44(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_NAME.is_infix_mod */
T1 T675f41(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BRACKET_SYMBOL.is_infix_mod */
T1 T506f29(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_SYMBOL_OPERATOR.is_infix_mod */
T1 T497f30(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T497f7(C));
	t2 = ((T2)('\014'));
	R = ((((T497*)(C))->a1)==(t2));
	return R;
}

/* ET_KEYWORD_OPERATOR.is_infix_mod */
T1 T484f28(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FREE_OPERATOR.is_infix_mod */
T1 T478f27(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_IDENTIFIER.is_infix_mod */
T1 T129f66(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_OR_ELSE_OPERATOR.is_infix_or */
T1 T804f9(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_AND_THEN_OPERATOR.is_infix_or */
T1 T803f9(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_FREE_NAME.is_infix_or */
T1 T684f27(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_NAME.is_infix_or */
T1 T680f49(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T680f5(C));
	t2 = ((T2)('\003'));
	R = ((((T680*)(C))->a3)==(t2));
	return R;
}

/* ET_INFIX_FREE_NAME.is_infix_or */
T1 T678f27(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_NAME.is_infix_or */
T1 T677f16(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T677f5(C));
	t2 = ((T2)('\003'));
	R = ((((T677*)(C))->a3)==(t2));
	return R;
}

/* ET_PREFIX_FREE_NAME.is_infix_or */
T1 T676f16(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_NAME.is_infix_or */
T1 T675f13(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BRACKET_SYMBOL.is_infix_or */
T1 T506f15(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_SYMBOL_OPERATOR.is_infix_or */
T1 T497f14(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_KEYWORD_OPERATOR.is_infix_or */
T1 T484f16(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T484f7(C));
	t2 = ((T2)('\003'));
	R = ((((T484*)(C))->a1)==(t2));
	return R;
}

/* ET_FREE_OPERATOR.is_infix_or */
T1 T478f15(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_IDENTIFIER.is_infix_or */
T1 T129f43(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_AND_THEN_OPERATOR.is_infix_or_else */
T1 T803f6(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_FREE_NAME.is_infix_or_else */
T1 T684f28(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_NAME.is_infix_or_else */
T1 T680f50(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T680f5(C));
	t2 = ((T2)('\022'));
	R = ((((T680*)(C))->a3)==(t2));
	return R;
}

/* ET_INFIX_FREE_NAME.is_infix_or_else */
T1 T678f28(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_NAME.is_infix_or_else */
T1 T677f13(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T677f5(C));
	t2 = ((T2)('\022'));
	R = ((((T677*)(C))->a3)==(t2));
	return R;
}

/* ET_PREFIX_FREE_NAME.is_infix_or_else */
T1 T676f13(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_NAME.is_infix_or_else */
T1 T675f10(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BRACKET_SYMBOL.is_infix_or_else */
T1 T506f12(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_SYMBOL_OPERATOR.is_infix_or_else */
T1 T497f11(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_KEYWORD_OPERATOR.is_infix_or_else */
T1 T484f13(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FREE_OPERATOR.is_infix_or_else */
T1 T478f12(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_IDENTIFIER.is_infix_or_else */
T1 T129f40(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_OR_ELSE_OPERATOR.is_infix_plus */
T1 T804f20(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_AND_THEN_OPERATOR.is_infix_plus */
T1 T803f20(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_FREE_NAME.is_infix_plus */
T1 T684f29(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_NAME.is_infix_plus */
T1 T680f34(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T680f5(C));
	t2 = ((T2)('\r'));
	R = ((((T680*)(C))->a3)==(t2));
	return R;
}

/* ET_INFIX_FREE_NAME.is_infix_plus */
T1 T678f29(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_NAME.is_infix_plus */
T1 T677f55(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T677f5(C));
	t2 = ((T2)('\r'));
	R = ((((T677*)(C))->a3)==(t2));
	return R;
}

/* ET_PREFIX_FREE_NAME.is_infix_plus */
T1 T676f45(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_NAME.is_infix_plus */
T1 T675f42(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BRACKET_SYMBOL.is_infix_plus */
T1 T506f30(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_SYMBOL_OPERATOR.is_infix_plus */
T1 T497f31(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T497f7(C));
	t2 = ((T2)('\r'));
	R = ((((T497*)(C))->a1)==(t2));
	return R;
}

/* ET_KEYWORD_OPERATOR.is_infix_plus */
T1 T484f29(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FREE_OPERATOR.is_infix_plus */
T1 T478f28(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_IDENTIFIER.is_infix_plus */
T1 T129f67(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_OR_ELSE_OPERATOR.is_infix_power */
T1 T804f21(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_AND_THEN_OPERATOR.is_infix_power */
T1 T803f21(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_FREE_NAME.is_infix_power */
T1 T684f30(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_NAME.is_infix_power */
T1 T680f51(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T680f5(C));
	t2 = ((T2)('\016'));
	R = ((((T680*)(C))->a3)==(t2));
	return R;
}

/* ET_INFIX_FREE_NAME.is_infix_power */
T1 T678f30(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_NAME.is_infix_power */
T1 T677f56(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T677f5(C));
	t2 = ((T2)('\016'));
	R = ((((T677*)(C))->a3)==(t2));
	return R;
}

/* ET_PREFIX_FREE_NAME.is_infix_power */
T1 T676f46(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_NAME.is_infix_power */
T1 T675f43(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BRACKET_SYMBOL.is_infix_power */
T1 T506f31(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_SYMBOL_OPERATOR.is_infix_power */
T1 T497f32(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T497f7(C));
	t2 = ((T2)('\016'));
	R = ((((T497*)(C))->a1)==(t2));
	return R;
}

/* ET_KEYWORD_OPERATOR.is_infix_power */
T1 T484f30(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FREE_OPERATOR.is_infix_power */
T1 T478f29(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_IDENTIFIER.is_infix_power */
T1 T129f68(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_OR_ELSE_OPERATOR.is_infix_times */
T1 T804f22(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_AND_THEN_OPERATOR.is_infix_times */
T1 T803f22(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_FREE_NAME.is_infix_times */
T1 T684f31(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_NAME.is_infix_times */
T1 T680f52(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T680f5(C));
	t2 = ((T2)('\017'));
	R = ((((T680*)(C))->a3)==(t2));
	return R;
}

/* ET_INFIX_FREE_NAME.is_infix_times */
T1 T678f31(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_NAME.is_infix_times */
T1 T677f57(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T677f5(C));
	t2 = ((T2)('\017'));
	R = ((((T677*)(C))->a3)==(t2));
	return R;
}

/* ET_PREFIX_FREE_NAME.is_infix_times */
T1 T676f47(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_NAME.is_infix_times */
T1 T675f44(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BRACKET_SYMBOL.is_infix_times */
T1 T506f32(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_SYMBOL_OPERATOR.is_infix_times */
T1 T497f33(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T497f7(C));
	t2 = ((T2)('\017'));
	R = ((((T497*)(C))->a1)==(t2));
	return R;
}

/* ET_KEYWORD_OPERATOR.is_infix_times */
T1 T484f31(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FREE_OPERATOR.is_infix_times */
T1 T478f30(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_IDENTIFIER.is_infix_times */
T1 T129f69(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_OR_ELSE_OPERATOR.is_infix_xor */
T1 T804f23(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_AND_THEN_OPERATOR.is_infix_xor */
T1 T803f23(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_FREE_NAME.is_infix_xor */
T1 T684f32(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_NAME.is_infix_xor */
T1 T680f53(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T680f5(C));
	t2 = ((T2)('\004'));
	R = ((((T680*)(C))->a3)==(t2));
	return R;
}

/* ET_INFIX_FREE_NAME.is_infix_xor */
T1 T678f32(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_NAME.is_infix_xor */
T1 T677f58(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T677f5(C));
	t2 = ((T2)('\004'));
	R = ((((T677*)(C))->a3)==(t2));
	return R;
}

/* ET_PREFIX_FREE_NAME.is_infix_xor */
T1 T676f48(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_NAME.is_infix_xor */
T1 T675f45(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BRACKET_SYMBOL.is_infix_xor */
T1 T506f33(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_SYMBOL_OPERATOR.is_infix_xor */
T1 T497f34(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_KEYWORD_OPERATOR.is_infix_xor */
T1 T484f32(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T484f7(C));
	t2 = ((T2)('\004'));
	R = ((((T484*)(C))->a1)==(t2));
	return R;
}

/* ET_FREE_OPERATOR.is_infix_xor */
T1 T478f31(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_IDENTIFIER.is_infix_xor */
T1 T129f70(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_OR_ELSE_OPERATOR.is_infix_dotdot */
T1 T804f24(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_AND_THEN_OPERATOR.is_infix_dotdot */
T1 T803f24(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_FREE_NAME.is_infix_dotdot */
T1 T684f33(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_NAME.is_infix_dotdot */
T1 T680f54(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T680f5(C));
	t2 = ((T2)('\023'));
	R = ((((T680*)(C))->a3)==(t2));
	return R;
}

/* ET_INFIX_FREE_NAME.is_infix_dotdot */
T1 T678f49(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_NAME.is_infix_dotdot */
T1 T677f60(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T677f5(C));
	t2 = ((T2)('\023'));
	R = ((((T677*)(C))->a3)==(t2));
	return R;
}

/* ET_PREFIX_FREE_NAME.is_infix_dotdot */
T1 T676f49(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_NAME.is_infix_dotdot */
T1 T675f46(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BRACKET_SYMBOL.is_infix_dotdot */
T1 T506f34(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_SYMBOL_OPERATOR.is_infix_dotdot */
T1 T497f35(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T497f7(C));
	t2 = ((T2)('\023'));
	R = ((((T497*)(C))->a1)==(t2));
	return R;
}

/* ET_KEYWORD_OPERATOR.is_infix_dotdot */
T1 T484f33(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FREE_OPERATOR.is_infix_dotdot */
T1 T478f32(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_IDENTIFIER.is_infix_dotdot */
T1 T129f72(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_OR_ELSE_OPERATOR.is_prefix_minus */
T1 T804f25(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_AND_THEN_OPERATOR.is_prefix_minus */
T1 T803f25(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_FREE_NAME.is_prefix_minus */
T1 T684f34(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_NAME.is_prefix_minus */
T1 T680f37(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T680f5(C));
	t2 = ((T2)('?'));
	R = ((((T680*)(C))->a3)==(t2));
	return R;
}

/* ET_INFIX_FREE_NAME.is_prefix_minus */
T1 T678f12(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_NAME.is_prefix_minus */
T1 T677f9(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_FREE_NAME.is_prefix_minus */
T1 T676f25(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_NAME.is_prefix_minus */
T1 T675f30(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T675f5(C));
	t2 = ((T2)('?'));
	R = ((((T675*)(C))->a3)==(t2));
	return R;
}

/* ET_BRACKET_SYMBOL.is_prefix_minus */
T1 T506f35(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_SYMBOL_OPERATOR.is_prefix_minus */
T1 T497f36(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T497f7(C));
	t2 = ((T2)('?'));
	R = ((((T497*)(C))->a1)==(t2));
	return R;
}

/* ET_KEYWORD_OPERATOR.is_prefix_minus */
T1 T484f34(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FREE_OPERATOR.is_prefix_minus */
T1 T478f33(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_IDENTIFIER.is_prefix_minus */
T1 T129f56(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_OR_ELSE_OPERATOR.is_prefix_plus */
T1 T804f26(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_AND_THEN_OPERATOR.is_prefix_plus */
T1 T803f26(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_FREE_NAME.is_prefix_plus */
T1 T684f35(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_NAME.is_prefix_plus */
T1 T680f36(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T680f5(C));
	t2 = ((T2)('@'));
	R = ((((T680*)(C))->a3)==(t2));
	return R;
}

/* ET_INFIX_FREE_NAME.is_prefix_plus */
T1 T678f13(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_NAME.is_prefix_plus */
T1 T677f10(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_FREE_NAME.is_prefix_plus */
T1 T676f26(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_NAME.is_prefix_plus */
T1 T675f31(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T675f5(C));
	t2 = ((T2)('@'));
	R = ((((T675*)(C))->a3)==(t2));
	return R;
}

/* ET_BRACKET_SYMBOL.is_prefix_plus */
T1 T506f36(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_SYMBOL_OPERATOR.is_prefix_plus */
T1 T497f37(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T497f7(C));
	t2 = ((T2)('@'));
	R = ((((T497*)(C))->a1)==(t2));
	return R;
}

/* ET_KEYWORD_OPERATOR.is_prefix_plus */
T1 T484f35(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FREE_OPERATOR.is_prefix_plus */
T1 T478f34(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_IDENTIFIER.is_prefix_plus */
T1 T129f57(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_OR_ELSE_OPERATOR.is_prefix_not */
T1 T804f27(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_AND_THEN_OPERATOR.is_prefix_not */
T1 T803f27(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_FREE_NAME.is_prefix_not */
T1 T684f36(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ALIAS_NAME.is_prefix_not */
T1 T680f55(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T680f5(C));
	t2 = ((T2)('>'));
	R = ((((T680*)(C))->a3)==(t2));
	return R;
}

/* ET_INFIX_FREE_NAME.is_prefix_not */
T1 T678f14(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_NAME.is_prefix_not */
T1 T677f11(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_FREE_NAME.is_prefix_not */
T1 T676f27(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_NAME.is_prefix_not */
T1 T675f32(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T675f5(C));
	t2 = ((T2)('>'));
	R = ((((T675*)(C))->a3)==(t2));
	return R;
}

/* ET_BRACKET_SYMBOL.is_prefix_not */
T1 T506f37(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_SYMBOL_OPERATOR.is_prefix_not */
T1 T497f38(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_KEYWORD_OPERATOR.is_prefix_not */
T1 T484f36(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T484f7(C));
	t2 = ((T2)('>'));
	R = ((((T484*)(C))->a1)==(t2));
	return R;
}

/* ET_FREE_OPERATOR.is_prefix_not */
T1 T478f35(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_IDENTIFIER.is_prefix_not */
T1 T129f58(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_FREE_NAME.is_precursor */
T1 T678f54(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_NAME.is_precursor */
T1 T677f65(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_FREE_NAME.is_precursor */
T1 T676f54(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_NAME.is_precursor */
T1 T675f51(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BRACKET_SYMBOL.is_precursor */
T1 T506f38(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_SYMBOL_OPERATOR.is_precursor */
T1 T497f39(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_KEYWORD_OPERATOR.is_precursor */
T1 T484f37(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FREE_OPERATOR.is_precursor */
T1 T478f37(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PRECURSOR_KEYWORD.is_precursor */
T1 T456f11(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T456f7(C));
	t2 = ((T2)('\''));
	R = ((((T456*)(C))->a1)==(t2));
	return R;
}

/* ET_IDENTIFIER.is_precursor */
T1 T129f83(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_FREE_NAME.precursor_keyword */
T0* T678f55(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_INFIX_NAME.precursor_keyword */
T0* T677f66(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_PREFIX_FREE_NAME.precursor_keyword */
T0* T676f55(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_PREFIX_NAME.precursor_keyword */
T0* T675f52(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_BRACKET_SYMBOL.precursor_keyword */
T0* T506f39(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_SYMBOL_OPERATOR.precursor_keyword */
T0* T497f40(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_KEYWORD_OPERATOR.precursor_keyword */
T0* T484f38(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_FREE_OPERATOR.precursor_keyword */
T0* T478f38(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_PRECURSOR_KEYWORD.precursor_keyword */
T0* T456f12(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_IDENTIFIER.precursor_keyword */
T0* T129f84(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_INFIX_OR_ELSE_OPERATOR.same_call_name */
T1 T804f29(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	t1 = ((C)==(a1));
	if (t1) {
		R = EIF_TRUE;
	} else {
		R = (T129f40(GE_void(a1)));
	}
	return R;
}

/* ET_INFIX_AND_THEN_OPERATOR.same_call_name */
T1 T803f29(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	t1 = ((C)==(a1));
	if (t1) {
		R = EIF_TRUE;
	} else {
		R = (T129f39(GE_void(a1)));
	}
	return R;
}

/* ET_INFIX_FREE_NAME.same_call_name */
T1 T678f36(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	T0* t4;
	T0* t5;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		if ((a1)==EIF_VOID) {
			l1 = EIF_VOID;
		} else {
			switch (((T0*)(a1))->id) {
			case 676:
			case 678:
			case 684:
			case 478:
				l1 = a1;
				break;
			default:
				l1 = EIF_VOID;
			}
		}
		t1 = ((l1)!=(EIF_VOID));
		if (t1) {
			t2 = (T1321x23(GE_void(l1)));
			t1 = ((((T678*)(C))->a4)==(t2));
			if (t1) {
				t1 = (T1321x11866(GE_void(l1)));
				t1 = ((EIF_TRUE)!=(t1));
				if (t1) {
					R = EIF_FALSE;
				} else {
					t3 = (T1321x21411(GE_void(l1)));
					t4 = (T678f8(C));
					t1 = ((t3)==(t4));
					if (t1) {
						R = EIF_TRUE;
					} else {
						t3 = (T678f7(C));
						t4 = (T678f8(C));
						t5 = (T1321x21411(GE_void(l1)));
						R = (T26f14(GE_void(t3), t4, t5));
					}
				}
			}
		}
	}
	return R;
}

/* ET_INFIX_NAME.same_call_name */
T1 T677f20(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		switch (((T677*)(C))->a3) {
		case (T2)(T2)('\001'):
			R = (T225x11862(GE_void(a1)));
			break;
		case (T2)(T2)('\021'):
			R = (T225x11863(GE_void(a1)));
			break;
		case (T2)(T2)('\005'):
			R = (T225x11864(GE_void(a1)));
			break;
		case (T2)(T2)('\006'):
			R = (T225x11865(GE_void(a1)));
			break;
		case (T2)(T2)('\007'):
			R = (T225x11867(GE_void(a1)));
			break;
		case (T2)(T2)('\010'):
			R = (T225x11868(GE_void(a1)));
			break;
		case (T2)(T2)('\002'):
			R = (T225x11869(GE_void(a1)));
			break;
		case (T2)(T2)('\t'):
			R = (T225x11870(GE_void(a1)));
			break;
		case (T2)(T2)('\n'):
			R = (T225x11871(GE_void(a1)));
			break;
		case (T2)(T2)('\013'):
			R = (T225x11872(GE_void(a1)));
			break;
		case (T2)(T2)('\014'):
			R = (T225x11873(GE_void(a1)));
			break;
		case (T2)(T2)('\003'):
			R = (T225x11874(GE_void(a1)));
			break;
		case (T2)(T2)('\022'):
			R = (T225x11875(GE_void(a1)));
			break;
		case (T2)(T2)('\r'):
			R = (T225x11876(GE_void(a1)));
			break;
		case (T2)(T2)('\016'):
			R = (T225x11877(GE_void(a1)));
			break;
		case (T2)(T2)('\017'):
			R = (T225x11878(GE_void(a1)));
			break;
		case (T2)(T2)('\004'):
			R = (T225x11879(GE_void(a1)));
			break;
		default:
			break;
		}
	}
	return R;
}

/* ET_PREFIX_FREE_NAME.same_call_name */
T1 T676f20(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	T6 t2;
	T1 t3;
	T0* t4;
	T0* t5;
	T0* t6;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		if ((a1)==EIF_VOID) {
			l1 = EIF_VOID;
		} else {
			switch (((T0*)(a1))->id) {
			case 676:
			case 678:
			case 684:
			case 478:
				l1 = a1;
				break;
			default:
				l1 = EIF_VOID;
			}
		}
		t1 = ((l1)!=(EIF_VOID));
		if (t1) {
			t2 = (T1321x23(GE_void(l1)));
			t1 = ((((T676*)(C))->a4)==(t2));
			if (t1) {
				t1 = (T676f32(C));
				t3 = (T1321x11866(GE_void(l1)));
				t1 = ((t1)!=(t3));
				if (t1) {
					R = EIF_FALSE;
				} else {
					t4 = (T1321x21411(GE_void(l1)));
					t5 = (T676f8(C));
					t1 = ((t4)==(t5));
					if (t1) {
						R = EIF_TRUE;
					} else {
						t4 = (T676f7(C));
						t5 = (T676f8(C));
						t6 = (T1321x21411(GE_void(l1)));
						R = (T26f14(GE_void(t4), t5, t6));
					}
				}
			}
		}
	}
	return R;
}

/* ET_PREFIX_NAME.same_call_name */
T1 T675f17(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		switch (((T675*)(C))->a3) {
		case (T2)(T2)('?'):
			R = (T225x11882(GE_void(a1)));
			break;
		case (T2)(T2)('@'):
			R = (T225x11883(GE_void(a1)));
			break;
		case (T2)(T2)('>'):
			R = (T225x11885(GE_void(a1)));
			break;
		default:
			break;
		}
	}
	return R;
}

/* ET_BRACKET_SYMBOL.same_call_name */
T1 T506f41(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	t1 = ((C)==(a1));
	if (t1) {
		R = EIF_TRUE;
	} else {
		R = (T129f71(GE_void(a1)));
	}
	return R;
}

/* ET_SYMBOL_OPERATOR.same_call_name */
T1 T497f42(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	t1 = ((C)==(a1));
	if (t1) {
		R = EIF_TRUE;
	} else {
		switch (((T497*)(C))->a1) {
		case (T2)(T2)('\005'):
			R = (T129f59(GE_void(a1)));
			break;
		case (T2)(T2)('\006'):
			R = (T129f60(GE_void(a1)));
			break;
		case (T2)(T2)('\007'):
			R = (T129f61(GE_void(a1)));
			break;
		case (T2)(T2)('\010'):
			R = (T129f62(GE_void(a1)));
			break;
		case (T2)(T2)('\t'):
			R = (T129f63(GE_void(a1)));
			break;
		case (T2)(T2)('\n'):
			R = (T129f64(GE_void(a1)));
			break;
		case (T2)(T2)('\013'):
			R = (T129f65(GE_void(a1)));
			break;
		case (T2)(T2)('\014'):
			R = (T129f66(GE_void(a1)));
			break;
		case (T2)(T2)('\r'):
			R = (T129f67(GE_void(a1)));
			break;
		case (T2)(T2)('\016'):
			R = (T129f68(GE_void(a1)));
			break;
		case (T2)(T2)('\017'):
			R = (T129f69(GE_void(a1)));
			break;
		case (T2)(T2)('\023'):
			R = (T129f72(GE_void(a1)));
			break;
		case (T2)(T2)('?'):
			R = (T129f56(GE_void(a1)));
			break;
		case (T2)(T2)('@'):
			R = (T129f57(GE_void(a1)));
			break;
		default:
			break;
		}
	}
	return R;
}

/* ET_KEYWORD_OPERATOR.same_call_name */
T1 T484f40(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	t1 = ((C)==(a1));
	if (t1) {
		R = EIF_TRUE;
	} else {
		switch (((T484*)(C))->a1) {
		case (T2)(T2)('\001'):
			R = (T129f42(GE_void(a1)));
			break;
		case (T2)(T2)('\002'):
			R = (T129f41(GE_void(a1)));
			break;
		case (T2)(T2)('\003'):
			R = (T129f43(GE_void(a1)));
			break;
		case (T2)(T2)('\004'):
			R = (T129f70(GE_void(a1)));
			break;
		case (T2)(T2)('>'):
			R = (T129f58(GE_void(a1)));
			break;
		default:
			break;
		}
	}
	return R;
}

/* ET_FREE_OPERATOR.same_call_name */
T1 T478f40(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	T6 t2;
	T1 t3;
	T0* t4;
	T0* t5;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		l1 = EIF_VOID;
		t1 = ((l1)!=(EIF_VOID));
		if (t1) {
			t2 = ((GE_void(l1), (T6)0));
			t1 = ((((T478*)(C))->a2)==(t2));
			if (t1) {
				t1 = (T478f36(C));
				t3 = ((GE_void(l1), (T1)0));
				t1 = ((t1)!=(t3));
				if (t1) {
					R = EIF_FALSE;
				} else {
					t4 = ((GE_void(l1), (T0*)0));
					t1 = ((t4)==(((T478*)(C))->a4));
					if (t1) {
						R = EIF_TRUE;
					} else {
						t4 = (T478f10(C));
						t5 = ((GE_void(l1), (T0*)0));
						R = (T26f14(GE_void(t4), ((T478*)(C))->a4, t5));
					}
				}
			}
		}
	}
	return R;
}

/* ET_IDENTIFIER.same_call_name */
T1 T129f52(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		l1 = a1;
		t1 = ((l1)!=(EIF_VOID));
		if (t1) {
			t2 = (((T129*)(GE_void(l1)))->a5);
			t1 = ((((T129*)(C))->a5)==(t2));
			if (t1) {
				l2 = (((T129*)(GE_void(l1)))->a6);
				t1 = ((l2)==(((T129*)(C))->a6));
				if (t1) {
					R = EIF_TRUE;
				} else {
					t3 = (T129f45(C));
					R = (T26f14(GE_void(t3), ((T129*)(C))->a6, l2));
				}
			}
		}
	}
	return R;
}

/* ET_INFIX_OR_ELSE_OPERATOR.is_tuple_label */
T1 T804f10(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_AND_THEN_OPERATOR.is_tuple_label */
T1 T803f10(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BRACKET_SYMBOL.is_tuple_label */
T1 T506f17(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_SYMBOL_OPERATOR.is_tuple_label */
T1 T497f16(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_KEYWORD_OPERATOR.is_tuple_label */
T1 T484f18(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FREE_OPERATOR.is_tuple_label */
T1 T478f17(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_OR_ELSE_OPERATOR.position */
T0* T804f31(T0* C)
{
	T0* R = 0;
	R = (T484f9(GE_void(((T804*)(C))->a1)));
	return R;
}

/* ET_INFIX_AND_THEN_OPERATOR.position */
T0* T803f31(T0* C)
{
	T0* R = 0;
	R = (T484f9(GE_void(((T803*)(C))->a1)));
	return R;
}

/* ET_BRACKET_SYMBOL.position */
T0* T506f8(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_SYMBOL_OPERATOR.position */
T0* T497f8(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_KEYWORD_OPERATOR.position */
T0* T484f9(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_FREE_OPERATOR.position */
T0* T478f18(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_PRECURSOR_KEYWORD.position */
T0* T456f10(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_INFIX_OR_ELSE_OPERATOR.lower_name */
T0* T804f28(T0* C)
{
	T0* R = 0;
	R = (T804f30(C));
	return R;
}

/* ET_INFIX_OR_ELSE_OPERATOR.name */
T0* T804f30(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T804f4(C));
	R = (ge774ov14295);
	return R;
}

/* ET_INFIX_AND_THEN_OPERATOR.lower_name */
T0* T803f28(T0* C)
{
	T0* R = 0;
	R = (T803f30(C));
	return R;
}

/* ET_INFIX_AND_THEN_OPERATOR.name */
T0* T803f30(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T803f4(C));
	R = (ge774ov14294);
	return R;
}

/* ET_BRACKET_SYMBOL.lower_name */
T0* T506f40(T0* C)
{
	T0* R = 0;
	R = (T506f42(C));
	return R;
}

/* ET_BRACKET_SYMBOL.name */
T0* T506f42(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T506f7(C));
	R = (ge774ov14318);
	return R;
}

/* ET_SYMBOL_OPERATOR.lower_name */
T0* T497f41(T0* C)
{
	T0* R = 0;
	R = (T497f43(C));
	return R;
}

/* ET_SYMBOL_OPERATOR.name */
T0* T497f43(T0* C)
{
	T0* R = 0;
	T0* t1;
	switch (((T497*)(C))->a1) {
	case (T2)(T2)('\005'):
		t1 = (T497f7(C));
		R = (ge774ov14282);
		break;
	case (T2)(T2)('\006'):
		t1 = (T497f7(C));
		R = (ge774ov14283);
		break;
	case (T2)(T2)('\007'):
		t1 = (T497f7(C));
		R = (ge774ov14284);
		break;
	case (T2)(T2)('\010'):
		t1 = (T497f7(C));
		R = (ge774ov14285);
		break;
	case (T2)(T2)('\t'):
		t1 = (T497f7(C));
		R = (ge774ov14286);
		break;
	case (T2)(T2)('\n'):
		t1 = (T497f7(C));
		R = (ge774ov14287);
		break;
	case (T2)(T2)('\013'):
		t1 = (T497f7(C));
		R = (ge774ov14288);
		break;
	case (T2)(T2)('\014'):
		t1 = (T497f7(C));
		R = (ge774ov14289);
		break;
	case (T2)(T2)('\r'):
		t1 = (T497f7(C));
		R = (ge774ov14290);
		break;
	case (T2)(T2)('\016'):
		t1 = (T497f7(C));
		R = (ge774ov14291);
		break;
	case (T2)(T2)('\017'):
		t1 = (T497f7(C));
		R = (ge774ov14292);
		break;
	case (T2)(T2)('\023'):
		t1 = (T497f7(C));
		R = (ge774ov14293);
		break;
	case (T2)(T2)('?'):
		t1 = (T497f7(C));
		R = (ge774ov14297);
		break;
	case (T2)(T2)('@'):
		t1 = (T497f7(C));
		R = (ge774ov14298);
		break;
	default:
		t1 = (T497f7(C));
		R = (ge774ov14253);
		break;
	}
	return R;
}

/* ET_KEYWORD_OPERATOR.lower_name */
T0* T484f39(T0* C)
{
	T0* R = 0;
	R = (T484f41(C));
	return R;
}

/* ET_KEYWORD_OPERATOR.name */
T0* T484f41(T0* C)
{
	T0* R = 0;
	T0* t1;
	switch (((T484*)(C))->a1) {
	case (T2)(T2)('\001'):
		t1 = (T484f7(C));
		R = (ge774ov14278);
		break;
	case (T2)(T2)('\002'):
		t1 = (T484f7(C));
		R = (ge774ov14279);
		break;
	case (T2)(T2)('\003'):
		t1 = (T484f7(C));
		R = (ge774ov14280);
		break;
	case (T2)(T2)('\004'):
		t1 = (T484f7(C));
		R = (ge774ov14281);
		break;
	case (T2)(T2)('>'):
		t1 = (T484f7(C));
		R = (ge774ov14296);
		break;
	default:
		t1 = (T484f7(C));
		R = (ge774ov14253);
		break;
	}
	return R;
}

/* ET_FREE_OPERATOR.lower_name */
T0* T478f39(T0* C)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T2 l3 = 0;
	T1 t1;
	R = (T478f44(C));
	l2 = (((T17*)(GE_void(R)))->a2);
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		l3 = (T17f10(GE_void(R), l1));
		t1 = (T2f4(&l3, (T2)('A')));
		if (t1) {
			t1 = (T2f7(&l3, (T2)('Z')));
		}
		if (t1) {
			R = (T17f30(GE_void(R)));
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_FREE_OPERATOR.name */
T0* T478f44(T0* C)
{
	T0* R = 0;
	T1 t1;
	T6 t2;
	t1 = (T478f36(C));
	if (t1) {
		t2 = (((((T0*)(GE_void(((T478*)(C))->a4)))->id==17)?((T17*)(((T478*)(C))->a4))->a2:((T949*)(((T478*)(C))->a4))->a1));
		t2 = ((T6)((t2)+((T6)(GE_int32(8)))));
		R = T17c36(t2);
		T17f41(GE_void(R), ge800ov21408);
	} else {
		t2 = (((((T0*)(GE_void(((T478*)(C))->a4)))->id==17)?((T17*)(((T478*)(C))->a4))->a2:((T949*)(((T478*)(C))->a4))->a1));
		t2 = ((T6)((t2)+((T6)(GE_int32(9)))));
		R = T17c36(t2);
		T17f41(GE_void(R), ge800ov21407);
	}
	T17f41(GE_void(R), ((T478*)(C))->a4);
	T17f39(GE_void(R), (T2)('\"'));
	return R;
}

/* ET_PRECURSOR_KEYWORD.lower_name */
T0* T456f16(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T456f7(C));
	R = (ge774ov14197);
	return R;
}

/* ET_CONVERT_TO_EXPRESSION.is_tuple_label */
T1 T1420f6(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T1420f5(C));
	R = (T169x11860(GE_void(t1)));
	return R;
}

/* ET_CALL_AGENT.is_tuple_label */
T1 T808f23(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T808f8(C));
	R = (T169x11860(GE_void(t1)));
	return R;
}

/* ET_PREFIX_EXPRESSION.is_tuple_label */
T1 T806f10(T0* C)
{
	T1 R = 0;
	R = (T802x11860(GE_void(((T806*)(C))->a1)));
	return R;
}

/* ET_INFIX_EXPRESSION.is_tuple_label */
T1 T801f10(T0* C)
{
	T1 R = 0;
	R = (T802x11860(GE_void(((T801*)(C))->a2)));
	return R;
}

/* ET_BRACKET_EXPRESSION.is_tuple_label */
T1 T727f8(T0* C)
{
	T1 R = 0;
	R = (T506f17(GE_void(((T727*)(C))->a2)));
	return R;
}

/* ET_ASSIGNER_INSTRUCTION.is_tuple_label */
T1 T724f9(T0* C)
{
	T1 R = 0;
	R = (T225x11860(GE_void(((T724*)(C))->a4)));
	return R;
}

/* ET_CALL_EXPRESSION.is_tuple_label */
T1 T203f7(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T203f6(C));
	R = (T169x11860(GE_void(t1)));
	return R;
}

/* ET_CALL_INSTRUCTION.is_tuple_label */
T1 T200f5(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T200f4(C));
	R = (T169x11860(GE_void(t1)));
	return R;
}

/* ET_ASSIGNER_INSTRUCTION.position */
T0* T724f10(T0* C)
{
	T0* R = 0;
	R = (((((T0*)(GE_void(((T724*)(C))->a1)))->id==203)?T203f9(((T724*)(C))->a1):T727f11(((T724*)(C))->a1)));
	return R;
}

/* ET_CALL_INSTRUCTION.position */
T0* T200f8(T0* C)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T200*)(C))->a1)!=(EIF_VOID));
	if (t1) {
		R = (T197x6392(GE_void(((T200*)(C))->a1)));
	} else {
		R = (T202x6392(GE_void(((T200*)(C))->a2)));
	}
	return R;
}

/* ET_CONVERT_TO_EXPRESSION.name */
T0* T1420f5(T0* C)
{
	T0* R = 0;
	R = (T628x19649(GE_void(((T1420*)(C))->a2)));
	return R;
}

/* ET_CALL_AGENT.name */
T0* T808f8(T0* C)
{
	T0* R = 0;
	R = (T202x11898(GE_void(((T808*)(C))->a2)));
	return R;
}

/* ET_CALL_EXPRESSION.name */
T0* T203f6(T0* C)
{
	T0* R = 0;
	R = (T202x11898(GE_void(((T203*)(C))->a3)));
	return R;
}

/* ET_CALL_INSTRUCTION.name */
T0* T200f4(T0* C)
{
	T0* R = 0;
	R = (T202x11898(GE_void(((T200*)(C))->a2)));
	return R;
}

/* ET_CONVERT_TO_EXPRESSION.arguments */
T0* T1420f4(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_PREFIX_EXPRESSION.arguments */
T0* T806f9(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_ASSIGNER_INSTRUCTION.arguments */
T0* T724f8(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_INFIX_FREE_NAME.feature_name */
T0* T678f9(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_INFIX_NAME.feature_name */
T0* T677f6(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_PREFIX_FREE_NAME.feature_name */
T0* T676f9(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_PREFIX_NAME.feature_name */
T0* T675f6(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_IDENTIFIER.feature_name */
T0* T129f30(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_EXTERNAL_PROCEDURE.is_query */
T1 T671f63(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T671f36(C));
	R = ((t1)!=(EIF_VOID));
	return R;
}

/* ET_ONCE_PROCEDURE.is_query */
T1 T670f60(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T670f35(C));
	R = ((t1)!=(EIF_VOID));
	return R;
}

/* ET_DEFERRED_FUNCTION.is_query */
T1 T665f36(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T665f41(C));
	R = ((t1)!=(EIF_VOID));
	return R;
}

/* ET_ONCE_FUNCTION.is_query */
T1 T664f38(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T664f43(C));
	R = ((t1)!=(EIF_VOID));
	return R;
}

/* ET_DO_FUNCTION.is_query */
T1 T662f38(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T662f43(C));
	R = ((t1)!=(EIF_VOID));
	return R;
}

/* ET_DEFERRED_PROCEDURE.is_query */
T1 T332f59(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T332f31(C));
	R = ((t1)!=(EIF_VOID));
	return R;
}

/* ET_DO_PROCEDURE.is_query */
T1 T326f60(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T326f40(C));
	R = ((t1)!=(EIF_VOID));
	return R;
}

/* ET_ATTRIBUTE.is_query */
T1 T261f29(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T261f34(C));
	R = ((t1)!=(EIF_VOID));
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.is_query */
T1 T260f32(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T260f37(C));
	R = ((t1)!=(EIF_VOID));
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.is_query */
T1 T258f31(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T258f36(C));
	R = ((t1)!=(EIF_VOID));
	return R;
}

/* ET_EXTERNAL_FUNCTION.is_query */
T1 T176f50(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T176f41(C));
	R = ((t1)!=(EIF_VOID));
	return R;
}

/* ET_EXTERNAL_PROCEDURE.is_once */
T1 T671f60(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DEFERRED_PROCEDURE.is_once */
T1 T332f56(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DO_PROCEDURE.is_once */
T1 T326f43(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_EXTERNAL_PROCEDURE.is_dotnet */
T1 T671f71(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ONCE_PROCEDURE.is_dotnet */
T1 T670f68(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DEFERRED_FUNCTION.is_dotnet */
T1 T665f68(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ONCE_FUNCTION.is_dotnet */
T1 T664f69(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DO_FUNCTION.is_dotnet */
T1 T662f69(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DEFERRED_PROCEDURE.is_dotnet */
T1 T332f67(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DO_PROCEDURE.is_dotnet */
T1 T326f68(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ATTRIBUTE.is_dotnet */
T1 T261f64(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.is_dotnet */
T1 T260f66(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.is_dotnet */
T1 T258f66(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_EXTERNAL_FUNCTION.is_dotnet */
T1 T176f72(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_EXTERNAL_PROCEDURE.same_version */
T1 T671f65(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (T201x12715(GE_void(a1)));
	R = ((((T671*)(C))->a26)==(t1));
	return R;
}

/* ET_ONCE_PROCEDURE.same_version */
T1 T670f62(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (T201x12715(GE_void(a1)));
	R = ((((T670*)(C))->a26)==(t1));
	return R;
}

/* ET_DEFERRED_FUNCTION.same_version */
T1 T665f65(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (T201x12715(GE_void(a1)));
	R = ((((T665*)(C))->a26)==(t1));
	return R;
}

/* ET_ONCE_FUNCTION.same_version */
T1 T664f66(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (T201x12715(GE_void(a1)));
	R = ((((T664*)(C))->a28)==(t1));
	return R;
}

/* ET_DO_FUNCTION.same_version */
T1 T662f66(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (T201x12715(GE_void(a1)));
	R = ((((T662*)(C))->a28)==(t1));
	return R;
}

/* ET_DEFERRED_PROCEDURE.same_version */
T1 T332f61(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (T201x12715(GE_void(a1)));
	R = ((((T332*)(C))->a24)==(t1));
	return R;
}

/* ET_DO_PROCEDURE.same_version */
T1 T326f62(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (T201x12715(GE_void(a1)));
	R = ((((T326*)(C))->a26)==(t1));
	return R;
}

/* ET_ATTRIBUTE.same_version */
T1 T261f61(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (T201x12715(GE_void(a1)));
	R = ((((T261*)(C))->a17)==(t1));
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.same_version */
T1 T260f63(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (T201x12715(GE_void(a1)));
	R = ((((T260*)(C))->a19)==(t1));
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.same_version */
T1 T258f63(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (T201x12715(GE_void(a1)));
	R = ((((T258*)(C))->a19)==(t1));
	return R;
}

/* ET_EXTERNAL_FUNCTION.same_version */
T1 T176f69(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (T201x12715(GE_void(a1)));
	R = ((((T176*)(C))->a26)==(t1));
	return R;
}

/* ET_EXTERNAL_PROCEDURE.undefined_feature */
T0* T671f69(T0* C, T0* a1)
{
	T0* R = 0;
	R = T332c68(a1, ((T671*)(C))->a3, ((T671*)(C))->a2);
	T332f70(GE_void(R), ((T671*)(C))->a11);
	T332f71(GE_void(R), ((T671*)(C))->a12);
	T332f72(GE_void(R), ((T671*)(C))->a13);
	T332f73(GE_void(R), ((T671*)(C))->a7);
	T332f95(GE_void(R), ((T671*)(C))->a8);
	T332f97(GE_void(R), C);
	T332f69(GE_void(R), ((T671*)(C))->a10);
	T332f86(GE_void(R), ((T671*)(C))->a6);
	T332f87(GE_void(R), ((T671*)(C))->a23);
	T332f88(GE_void(R), ((T671*)(C))->a24);
	T332f74(GE_void(R), ((T671*)(C))->a15);
	T332f90(GE_void(R), ((T671*)(C))->a16);
	T332f100(GE_void(R), ((T671*)(C))->a21);
	return R;
}

/* ET_DEFERRED_PROCEDURE.set_feature_clause */
void T332f88(T0* C, T0* a1)
{
	((T332*)(C))->a20 = a1;
}

/* ET_DEFERRED_PROCEDURE.set_semicolon */
void T332f87(T0* C, T0* a1)
{
	((T332*)(C))->a19 = a1;
}

/* ET_DEFERRED_PROCEDURE.set_end_keyword */
void T332f86(T0* C, T0* a1)
{
	((T332*)(C))->a6 = a1;
}

/* ET_ONCE_PROCEDURE.undefined_feature */
T0* T670f66(T0* C, T0* a1)
{
	T0* R = 0;
	R = T332c68(a1, ((T670*)(C))->a3, ((T670*)(C))->a6);
	T332f70(GE_void(R), ((T670*)(C))->a9);
	T332f71(GE_void(R), ((T670*)(C))->a10);
	T332f72(GE_void(R), ((T670*)(C))->a13);
	T332f73(GE_void(R), ((T670*)(C))->a5);
	T332f95(GE_void(R), ((T670*)(C))->a7);
	T332f97(GE_void(R), C);
	T332f69(GE_void(R), ((T670*)(C))->a8);
	T332f86(GE_void(R), ((T670*)(C))->a4);
	T332f87(GE_void(R), ((T670*)(C))->a22);
	T332f88(GE_void(R), ((T670*)(C))->a23);
	T332f74(GE_void(R), ((T670*)(C))->a15);
	T332f90(GE_void(R), ((T670*)(C))->a16);
	T332f100(GE_void(R), ((T670*)(C))->a21);
	return R;
}

/* ET_DEFERRED_FUNCTION.undefined_feature */
T0* T665f66(T0* C, T0* a1)
{
	T0* R = 0;
	R = T665c69(a1, ((T665*)(C))->a4, ((T665*)(C))->a5, ((T665*)(C))->a8);
	T665f71(GE_void(R), ((T665*)(C))->a11);
	T665f72(GE_void(R), ((T665*)(C))->a12);
	T665f73(GE_void(R), ((T665*)(C))->a13);
	T665f74(GE_void(R), ((T665*)(C))->a14);
	T665f75(GE_void(R), ((T665*)(C))->a7);
	T665f97(GE_void(R), ((T665*)(C))->a9);
	T665f99(GE_void(R), C);
	T665f70(GE_void(R), ((T665*)(C))->a10);
	T665f88(GE_void(R), ((T665*)(C))->a6);
	T665f89(GE_void(R), ((T665*)(C))->a22);
	T665f90(GE_void(R), ((T665*)(C))->a23);
	T665f76(GE_void(R), ((T665*)(C))->a15);
	T665f92(GE_void(R), ((T665*)(C))->a16);
	T665f102(GE_void(R), ((T665*)(C))->a21);
	return R;
}

/* ET_DEFERRED_FUNCTION.set_feature_clause */
void T665f90(T0* C, T0* a1)
{
	((T665*)(C))->a23 = a1;
}

/* ET_DEFERRED_FUNCTION.set_semicolon */
void T665f89(T0* C, T0* a1)
{
	((T665*)(C))->a22 = a1;
}

/* ET_DEFERRED_FUNCTION.set_end_keyword */
void T665f88(T0* C, T0* a1)
{
	((T665*)(C))->a6 = a1;
}

/* ET_ONCE_FUNCTION.undefined_feature */
T0* T664f67(T0* C, T0* a1)
{
	T0* R = 0;
	R = T665c69(a1, ((T664*)(C))->a3, ((T664*)(C))->a4, ((T664*)(C))->a7);
	T665f71(GE_void(R), ((T664*)(C))->a10);
	T665f72(GE_void(R), ((T664*)(C))->a11);
	T665f73(GE_void(R), ((T664*)(C))->a12);
	T665f74(GE_void(R), ((T664*)(C))->a15);
	T665f75(GE_void(R), ((T664*)(C))->a6);
	T665f97(GE_void(R), ((T664*)(C))->a8);
	T665f99(GE_void(R), C);
	T665f70(GE_void(R), ((T664*)(C))->a9);
	T665f88(GE_void(R), ((T664*)(C))->a5);
	T665f89(GE_void(R), ((T664*)(C))->a24);
	T665f90(GE_void(R), ((T664*)(C))->a25);
	T665f76(GE_void(R), ((T664*)(C))->a17);
	T665f92(GE_void(R), ((T664*)(C))->a18);
	T665f102(GE_void(R), ((T664*)(C))->a23);
	return R;
}

/* ET_DO_FUNCTION.undefined_feature */
T0* T662f67(T0* C, T0* a1)
{
	T0* R = 0;
	R = T665c69(a1, ((T662*)(C))->a3, ((T662*)(C))->a4, ((T662*)(C))->a7);
	T665f71(GE_void(R), ((T662*)(C))->a10);
	T665f72(GE_void(R), ((T662*)(C))->a11);
	T665f73(GE_void(R), ((T662*)(C))->a12);
	T665f74(GE_void(R), ((T662*)(C))->a15);
	T665f75(GE_void(R), ((T662*)(C))->a6);
	T665f97(GE_void(R), ((T662*)(C))->a8);
	T665f99(GE_void(R), C);
	T665f70(GE_void(R), ((T662*)(C))->a9);
	T665f88(GE_void(R), ((T662*)(C))->a5);
	T665f89(GE_void(R), ((T662*)(C))->a24);
	T665f90(GE_void(R), ((T662*)(C))->a25);
	T665f76(GE_void(R), ((T662*)(C))->a17);
	T665f92(GE_void(R), ((T662*)(C))->a18);
	T665f102(GE_void(R), ((T662*)(C))->a23);
	return R;
}

/* ET_DEFERRED_PROCEDURE.undefined_feature */
T0* T332f65(T0* C, T0* a1)
{
	T0* R = 0;
	R = T332c68(a1, ((T332*)(C))->a2, ((T332*)(C))->a8);
	T332f70(GE_void(R), ((T332*)(C))->a10);
	T332f71(GE_void(R), ((T332*)(C))->a11);
	T332f72(GE_void(R), ((T332*)(C))->a12);
	T332f73(GE_void(R), ((T332*)(C))->a7);
	T332f95(GE_void(R), ((T332*)(C))->a1);
	T332f97(GE_void(R), C);
	T332f69(GE_void(R), ((T332*)(C))->a9);
	T332f86(GE_void(R), ((T332*)(C))->a6);
	T332f87(GE_void(R), ((T332*)(C))->a19);
	T332f88(GE_void(R), ((T332*)(C))->a20);
	T332f74(GE_void(R), ((T332*)(C))->a13);
	T332f90(GE_void(R), ((T332*)(C))->a14);
	T332f100(GE_void(R), ((T332*)(C))->a21);
	return R;
}

/* ET_DO_PROCEDURE.undefined_feature */
T0* T326f66(T0* C, T0* a1)
{
	T0* R = 0;
	R = T332c68(a1, ((T326*)(C))->a2, ((T326*)(C))->a7);
	T332f70(GE_void(R), ((T326*)(C))->a9);
	T332f71(GE_void(R), ((T326*)(C))->a10);
	T332f72(GE_void(R), ((T326*)(C))->a13);
	T332f73(GE_void(R), ((T326*)(C))->a6);
	T332f95(GE_void(R), ((T326*)(C))->a1);
	T332f97(GE_void(R), C);
	T332f69(GE_void(R), ((T326*)(C))->a8);
	T332f86(GE_void(R), ((T326*)(C))->a5);
	T332f87(GE_void(R), ((T326*)(C))->a21);
	T332f88(GE_void(R), ((T326*)(C))->a22);
	T332f74(GE_void(R), ((T326*)(C))->a15);
	T332f90(GE_void(R), ((T326*)(C))->a16);
	T332f100(GE_void(R), ((T326*)(C))->a23);
	return R;
}

/* ET_ATTRIBUTE.undefined_feature */
T0* T261f62(T0* C, T0* a1)
{
	T0* R = 0;
	T0* t1;
	t1 = (T261f36(C));
	R = T665c69(a1, t1, ((T261*)(C))->a3, ((T261*)(C))->a5);
	T665f71(GE_void(R), ((T261*)(C))->a7);
	t1 = (T261f65(C));
	T665f72(GE_void(R), t1);
	t1 = (T261f41(C));
	T665f73(GE_void(R), t1);
	t1 = (T261f42(C));
	T665f74(GE_void(R), t1);
	T665f75(GE_void(R), ((T261*)(C))->a4);
	T665f97(GE_void(R), ((T261*)(C))->a6);
	T665f99(GE_void(R), C);
	T665f89(GE_void(R), ((T261*)(C))->a12);
	T665f90(GE_void(R), ((T261*)(C))->a13);
	T665f76(GE_void(R), ((T261*)(C))->a14);
	T665f92(GE_void(R), ((T261*)(C))->a8);
	T665f102(GE_void(R), ((T261*)(C))->a11);
	return R;
}

/* ET_ATTRIBUTE.obsolete_message */
T0* T261f65(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.undefined_feature */
T0* T260f64(T0* C, T0* a1)
{
	T0* R = 0;
	T0* t1;
	t1 = (T260f39(C));
	R = T665c69(a1, t1, ((T260*)(C))->a3, ((T260*)(C))->a7);
	T665f71(GE_void(R), ((T260*)(C))->a9);
	t1 = (T260f67(C));
	T665f72(GE_void(R), t1);
	t1 = (T260f43(C));
	T665f73(GE_void(R), t1);
	t1 = (T260f44(C));
	T665f74(GE_void(R), t1);
	T665f75(GE_void(R), ((T260*)(C))->a6);
	T665f97(GE_void(R), ((T260*)(C))->a8);
	T665f99(GE_void(R), C);
	T665f89(GE_void(R), ((T260*)(C))->a15);
	T665f90(GE_void(R), ((T260*)(C))->a16);
	T665f76(GE_void(R), ((T260*)(C))->a17);
	T665f92(GE_void(R), ((T260*)(C))->a10);
	T665f102(GE_void(R), ((T260*)(C))->a14);
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.obsolete_message */
T0* T260f67(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.undefined_feature */
T0* T258f64(T0* C, T0* a1)
{
	T0* R = 0;
	T0* t1;
	t1 = (T258f38(C));
	R = T665c69(a1, t1, ((T258*)(C))->a3, ((T258*)(C))->a7);
	T665f71(GE_void(R), ((T258*)(C))->a9);
	t1 = (T258f67(C));
	T665f72(GE_void(R), t1);
	t1 = (T258f43(C));
	T665f73(GE_void(R), t1);
	t1 = (T258f44(C));
	T665f74(GE_void(R), t1);
	T665f75(GE_void(R), ((T258*)(C))->a6);
	T665f97(GE_void(R), ((T258*)(C))->a8);
	T665f99(GE_void(R), C);
	T665f89(GE_void(R), ((T258*)(C))->a14);
	T665f90(GE_void(R), ((T258*)(C))->a15);
	T665f76(GE_void(R), ((T258*)(C))->a16);
	T665f92(GE_void(R), ((T258*)(C))->a10);
	T665f102(GE_void(R), ((T258*)(C))->a13);
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.obsolete_message */
T0* T258f67(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_EXTERNAL_FUNCTION.undefined_feature */
T0* T176f70(T0* C, T0* a1)
{
	T0* R = 0;
	R = T665c69(a1, ((T176*)(C))->a3, ((T176*)(C))->a5, ((T176*)(C))->a2);
	T665f71(GE_void(R), ((T176*)(C))->a12);
	T665f72(GE_void(R), ((T176*)(C))->a13);
	T665f73(GE_void(R), ((T176*)(C))->a14);
	T665f74(GE_void(R), ((T176*)(C))->a15);
	T665f75(GE_void(R), ((T176*)(C))->a8);
	T665f97(GE_void(R), ((T176*)(C))->a9);
	T665f99(GE_void(R), C);
	T665f70(GE_void(R), ((T176*)(C))->a11);
	T665f88(GE_void(R), ((T176*)(C))->a7);
	T665f89(GE_void(R), ((T176*)(C))->a21);
	T665f90(GE_void(R), ((T176*)(C))->a22);
	T665f76(GE_void(R), ((T176*)(C))->a17);
	T665f92(GE_void(R), ((T176*)(C))->a18);
	T665f102(GE_void(R), ((T176*)(C))->a23);
	return R;
}

/* ET_EXTERNAL_PROCEDURE.renamed_feature */
T0* T671f70(T0* C, T0* a1)
{
	T0* R = 0;
	R = T671c72(a1, ((T671*)(C))->a3, ((T671*)(C))->a1, ((T671*)(C))->a2);
	T671f75(GE_void(R), ((T671*)(C))->a11);
	T671f76(GE_void(R), ((T671*)(C))->a12);
	T671f77(GE_void(R), ((T671*)(C))->a13);
	T671f78(GE_void(R), ((T671*)(C))->a14);
	T671f79(GE_void(R), ((T671*)(C))->a7);
	T671f100(GE_void(R), ((T671*)(C))->a8);
	T671f102(GE_void(R), ((T671*)(C))->a19);
	T671f103(GE_void(R), ((T671*)(C))->a20);
	T671f74(GE_void(R), ((T671*)(C))->a10);
	T671f91(GE_void(R), ((T671*)(C))->a6);
	T671f96(GE_void(R), ((T671*)(C))->a26);
	T671f82(GE_void(R), ((T671*)(C))->a22);
	T671f92(GE_void(R), ((T671*)(C))->a23);
	T671f93(GE_void(R), ((T671*)(C))->a24);
	T671f80(GE_void(R), ((T671*)(C))->a15);
	T671f95(GE_void(R), ((T671*)(C))->a16);
	T671f105(GE_void(R), ((T671*)(C))->a21);
	T671f73(GE_void(R), ((T671*)(C))->a9);
	return R;
}

/* ET_EXTERNAL_PROCEDURE.set_feature_clause */
void T671f93(T0* C, T0* a1)
{
	((T671*)(C))->a24 = a1;
}

/* ET_EXTERNAL_PROCEDURE.set_semicolon */
void T671f92(T0* C, T0* a1)
{
	((T671*)(C))->a23 = a1;
}

/* ET_EXTERNAL_PROCEDURE.set_end_keyword */
void T671f91(T0* C, T0* a1)
{
	((T671*)(C))->a6 = a1;
}

/* ET_ONCE_PROCEDURE.renamed_feature */
T0* T670f67(T0* C, T0* a1)
{
	T0* R = 0;
	R = T670c69(a1, ((T670*)(C))->a3, ((T670*)(C))->a6);
	T670f71(GE_void(R), ((T670*)(C))->a9);
	T670f72(GE_void(R), ((T670*)(C))->a10);
	T670f73(GE_void(R), ((T670*)(C))->a11);
	T670f74(GE_void(R), ((T670*)(C))->a12);
	T670f75(GE_void(R), ((T670*)(C))->a13);
	T670f76(GE_void(R), ((T670*)(C))->a14);
	T670f77(GE_void(R), ((T670*)(C))->a5);
	T670f98(GE_void(R), ((T670*)(C))->a7);
	T670f100(GE_void(R), ((T670*)(C))->a19);
	T670f101(GE_void(R), ((T670*)(C))->a20);
	T670f70(GE_void(R), ((T670*)(C))->a8);
	T670f89(GE_void(R), ((T670*)(C))->a4);
	T670f94(GE_void(R), ((T670*)(C))->a26);
	T670f80(GE_void(R), ((T670*)(C))->a24);
	T670f90(GE_void(R), ((T670*)(C))->a22);
	T670f91(GE_void(R), ((T670*)(C))->a23);
	T670f78(GE_void(R), ((T670*)(C))->a15);
	T670f93(GE_void(R), ((T670*)(C))->a16);
	T670f103(GE_void(R), ((T670*)(C))->a21);
	return R;
}

/* ET_ONCE_PROCEDURE.set_feature_clause */
void T670f91(T0* C, T0* a1)
{
	((T670*)(C))->a23 = a1;
}

/* ET_ONCE_PROCEDURE.set_semicolon */
void T670f90(T0* C, T0* a1)
{
	((T670*)(C))->a22 = a1;
}

/* ET_ONCE_PROCEDURE.set_end_keyword */
void T670f89(T0* C, T0* a1)
{
	((T670*)(C))->a4 = a1;
}

/* ET_DEFERRED_FUNCTION.renamed_feature */
T0* T665f67(T0* C, T0* a1)
{
	T0* R = 0;
	R = T665c69(a1, ((T665*)(C))->a4, ((T665*)(C))->a5, ((T665*)(C))->a8);
	T665f71(GE_void(R), ((T665*)(C))->a11);
	T665f72(GE_void(R), ((T665*)(C))->a12);
	T665f73(GE_void(R), ((T665*)(C))->a13);
	T665f74(GE_void(R), ((T665*)(C))->a14);
	T665f75(GE_void(R), ((T665*)(C))->a7);
	T665f97(GE_void(R), ((T665*)(C))->a9);
	T665f99(GE_void(R), ((T665*)(C))->a19);
	T665f100(GE_void(R), ((T665*)(C))->a20);
	T665f70(GE_void(R), ((T665*)(C))->a10);
	T665f87(GE_void(R), ((T665*)(C))->a1);
	T665f88(GE_void(R), ((T665*)(C))->a6);
	T665f93(GE_void(R), ((T665*)(C))->a26);
	T665f78(GE_void(R), ((T665*)(C))->a24);
	T665f89(GE_void(R), ((T665*)(C))->a22);
	T665f90(GE_void(R), ((T665*)(C))->a23);
	T665f76(GE_void(R), ((T665*)(C))->a15);
	T665f92(GE_void(R), ((T665*)(C))->a16);
	T665f102(GE_void(R), ((T665*)(C))->a21);
	return R;
}

/* ET_DEFERRED_FUNCTION.set_deferred_keyword */
void T665f87(T0* C, T0* a1)
{
	((T665*)(C))->a1 = a1;
}

/* ET_ONCE_FUNCTION.renamed_feature */
T0* T664f68(T0* C, T0* a1)
{
	T0* R = 0;
	R = T664c70(a1, ((T664*)(C))->a3, ((T664*)(C))->a4, ((T664*)(C))->a7);
	T664f72(GE_void(R), ((T664*)(C))->a10);
	T664f73(GE_void(R), ((T664*)(C))->a11);
	T664f74(GE_void(R), ((T664*)(C))->a12);
	T664f75(GE_void(R), ((T664*)(C))->a13);
	T664f76(GE_void(R), ((T664*)(C))->a14);
	T664f77(GE_void(R), ((T664*)(C))->a15);
	T664f78(GE_void(R), ((T664*)(C))->a16);
	T664f79(GE_void(R), ((T664*)(C))->a6);
	T664f100(GE_void(R), ((T664*)(C))->a8);
	T664f102(GE_void(R), ((T664*)(C))->a21);
	T664f103(GE_void(R), ((T664*)(C))->a22);
	T664f71(GE_void(R), ((T664*)(C))->a9);
	T664f91(GE_void(R), ((T664*)(C))->a5);
	T664f96(GE_void(R), ((T664*)(C))->a28);
	T664f82(GE_void(R), ((T664*)(C))->a26);
	T664f92(GE_void(R), ((T664*)(C))->a24);
	T664f93(GE_void(R), ((T664*)(C))->a25);
	T664f80(GE_void(R), ((T664*)(C))->a17);
	T664f95(GE_void(R), ((T664*)(C))->a18);
	T664f105(GE_void(R), ((T664*)(C))->a23);
	return R;
}

/* ET_ONCE_FUNCTION.set_feature_clause */
void T664f93(T0* C, T0* a1)
{
	((T664*)(C))->a25 = a1;
}

/* ET_ONCE_FUNCTION.set_semicolon */
void T664f92(T0* C, T0* a1)
{
	((T664*)(C))->a24 = a1;
}

/* ET_ONCE_FUNCTION.set_end_keyword */
void T664f91(T0* C, T0* a1)
{
	((T664*)(C))->a5 = a1;
}

/* ET_DO_FUNCTION.renamed_feature */
T0* T662f68(T0* C, T0* a1)
{
	T0* R = 0;
	R = T662c70(a1, ((T662*)(C))->a3, ((T662*)(C))->a4, ((T662*)(C))->a7);
	T662f72(GE_void(R), ((T662*)(C))->a10);
	T662f73(GE_void(R), ((T662*)(C))->a11);
	T662f74(GE_void(R), ((T662*)(C))->a12);
	T662f75(GE_void(R), ((T662*)(C))->a13);
	T662f76(GE_void(R), ((T662*)(C))->a14);
	T662f77(GE_void(R), ((T662*)(C))->a15);
	T662f78(GE_void(R), ((T662*)(C))->a16);
	T662f79(GE_void(R), ((T662*)(C))->a6);
	T662f100(GE_void(R), ((T662*)(C))->a8);
	T662f102(GE_void(R), ((T662*)(C))->a21);
	T662f103(GE_void(R), ((T662*)(C))->a22);
	T662f71(GE_void(R), ((T662*)(C))->a9);
	T662f91(GE_void(R), ((T662*)(C))->a5);
	T662f96(GE_void(R), ((T662*)(C))->a28);
	T662f82(GE_void(R), ((T662*)(C))->a26);
	T662f92(GE_void(R), ((T662*)(C))->a24);
	T662f93(GE_void(R), ((T662*)(C))->a25);
	T662f80(GE_void(R), ((T662*)(C))->a17);
	T662f95(GE_void(R), ((T662*)(C))->a18);
	T662f105(GE_void(R), ((T662*)(C))->a23);
	return R;
}

/* ET_DO_FUNCTION.set_feature_clause */
void T662f93(T0* C, T0* a1)
{
	((T662*)(C))->a25 = a1;
}

/* ET_DO_FUNCTION.set_semicolon */
void T662f92(T0* C, T0* a1)
{
	((T662*)(C))->a24 = a1;
}

/* ET_DO_FUNCTION.set_end_keyword */
void T662f91(T0* C, T0* a1)
{
	((T662*)(C))->a5 = a1;
}

/* ET_DEFERRED_PROCEDURE.renamed_feature */
T0* T332f66(T0* C, T0* a1)
{
	T0* R = 0;
	R = T332c68(a1, ((T332*)(C))->a2, ((T332*)(C))->a8);
	T332f70(GE_void(R), ((T332*)(C))->a10);
	T332f71(GE_void(R), ((T332*)(C))->a11);
	T332f72(GE_void(R), ((T332*)(C))->a12);
	T332f73(GE_void(R), ((T332*)(C))->a7);
	T332f95(GE_void(R), ((T332*)(C))->a1);
	T332f97(GE_void(R), ((T332*)(C))->a17);
	T332f98(GE_void(R), ((T332*)(C))->a18);
	T332f69(GE_void(R), ((T332*)(C))->a9);
	T332f85(GE_void(R), ((T332*)(C))->a4);
	T332f86(GE_void(R), ((T332*)(C))->a6);
	T332f91(GE_void(R), ((T332*)(C))->a24);
	T332f76(GE_void(R), ((T332*)(C))->a22);
	T332f87(GE_void(R), ((T332*)(C))->a19);
	T332f88(GE_void(R), ((T332*)(C))->a20);
	T332f74(GE_void(R), ((T332*)(C))->a13);
	T332f90(GE_void(R), ((T332*)(C))->a14);
	T332f100(GE_void(R), ((T332*)(C))->a21);
	return R;
}

/* ET_DEFERRED_PROCEDURE.set_deferred_keyword */
void T332f85(T0* C, T0* a1)
{
	((T332*)(C))->a4 = a1;
}

/* ET_DO_PROCEDURE.renamed_feature */
T0* T326f67(T0* C, T0* a1)
{
	T0* R = 0;
	R = T326c69(a1, ((T326*)(C))->a2, ((T326*)(C))->a7);
	T326f71(GE_void(R), ((T326*)(C))->a9);
	T326f72(GE_void(R), ((T326*)(C))->a10);
	T326f73(GE_void(R), ((T326*)(C))->a11);
	T326f74(GE_void(R), ((T326*)(C))->a12);
	T326f75(GE_void(R), ((T326*)(C))->a13);
	T326f76(GE_void(R), ((T326*)(C))->a14);
	T326f77(GE_void(R), ((T326*)(C))->a6);
	T326f98(GE_void(R), ((T326*)(C))->a1);
	T326f100(GE_void(R), ((T326*)(C))->a19);
	T326f101(GE_void(R), ((T326*)(C))->a20);
	T326f70(GE_void(R), ((T326*)(C))->a8);
	T326f89(GE_void(R), ((T326*)(C))->a5);
	T326f94(GE_void(R), ((T326*)(C))->a26);
	T326f80(GE_void(R), ((T326*)(C))->a24);
	T326f90(GE_void(R), ((T326*)(C))->a21);
	T326f91(GE_void(R), ((T326*)(C))->a22);
	T326f78(GE_void(R), ((T326*)(C))->a15);
	T326f93(GE_void(R), ((T326*)(C))->a16);
	T326f103(GE_void(R), ((T326*)(C))->a23);
	return R;
}

/* ET_DO_PROCEDURE.set_feature_clause */
void T326f91(T0* C, T0* a1)
{
	((T326*)(C))->a22 = a1;
}

/* ET_DO_PROCEDURE.set_semicolon */
void T326f90(T0* C, T0* a1)
{
	((T326*)(C))->a21 = a1;
}

/* ET_DO_PROCEDURE.set_end_keyword */
void T326f89(T0* C, T0* a1)
{
	((T326*)(C))->a5 = a1;
}

/* ET_ATTRIBUTE.renamed_feature */
T0* T261f63(T0* C, T0* a1)
{
	T0* R = 0;
	R = T261c66(a1, ((T261*)(C))->a3, ((T261*)(C))->a5);
	T261f67(GE_void(R), ((T261*)(C))->a7);
	T261f68(GE_void(R), ((T261*)(C))->a4);
	T261f88(GE_void(R), ((T261*)(C))->a6);
	T261f90(GE_void(R), ((T261*)(C))->a18);
	T261f91(GE_void(R), ((T261*)(C))->a19);
	T261f80(GE_void(R), ((T261*)(C))->a17);
	T261f70(GE_void(R), ((T261*)(C))->a15);
	T261f75(GE_void(R), ((T261*)(C))->a12);
	T261f76(GE_void(R), ((T261*)(C))->a13);
	T261f77(GE_void(R), ((T261*)(C))->a14);
	T261f79(GE_void(R), ((T261*)(C))->a8);
	T261f93(GE_void(R), ((T261*)(C))->a11);
	return R;
}

/* ET_ATTRIBUTE.set_first_indexing */
void T261f77(T0* C, T0* a1)
{
	((T261*)(C))->a14 = a1;
}

/* ET_ATTRIBUTE.set_feature_clause */
void T261f76(T0* C, T0* a1)
{
	((T261*)(C))->a13 = a1;
}

/* ET_ATTRIBUTE.set_semicolon */
void T261f75(T0* C, T0* a1)
{
	((T261*)(C))->a12 = a1;
}

/* ET_UNIQUE_ATTRIBUTE.renamed_feature */
T0* T260f65(T0* C, T0* a1)
{
	T0* R = 0;
	R = T260c68(a1, ((T260*)(C))->a3, ((T260*)(C))->a7);
	T260f69(GE_void(R), ((T260*)(C))->a9);
	T260f70(GE_void(R), ((T260*)(C))->a6);
	T260f92(GE_void(R), ((T260*)(C))->a8);
	T260f94(GE_void(R), ((T260*)(C))->a20);
	T260f95(GE_void(R), ((T260*)(C))->a21);
	T260f77(GE_void(R), ((T260*)(C))->a4);
	T260f78(GE_void(R), ((T260*)(C))->a5);
	T260f84(GE_void(R), ((T260*)(C))->a19);
	T260f72(GE_void(R), ((T260*)(C))->a18);
	T260f79(GE_void(R), ((T260*)(C))->a15);
	T260f80(GE_void(R), ((T260*)(C))->a16);
	T260f81(GE_void(R), ((T260*)(C))->a17);
	T260f83(GE_void(R), ((T260*)(C))->a10);
	T260f97(GE_void(R), ((T260*)(C))->a14);
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.set_first_indexing */
void T260f81(T0* C, T0* a1)
{
	((T260*)(C))->a17 = a1;
}

/* ET_UNIQUE_ATTRIBUTE.set_feature_clause */
void T260f80(T0* C, T0* a1)
{
	((T260*)(C))->a16 = a1;
}

/* ET_UNIQUE_ATTRIBUTE.set_semicolon */
void T260f79(T0* C, T0* a1)
{
	((T260*)(C))->a15 = a1;
}

/* ET_UNIQUE_ATTRIBUTE.set_unique_keyword */
void T260f78(T0* C, T0* a1)
{
	((T260*)(C))->a5 = a1;
}

/* ET_UNIQUE_ATTRIBUTE.set_is_keyword */
void T260f77(T0* C, T0* a1)
{
	((T260*)(C))->a4 = a1;
}

/* ET_CONSTANT_ATTRIBUTE.renamed_feature */
T0* T258f65(T0* C, T0* a1)
{
	T0* R = 0;
	R = T258c68(a1, ((T258*)(C))->a3, ((T258*)(C))->a5, ((T258*)(C))->a7);
	T258f69(GE_void(R), ((T258*)(C))->a9);
	T258f70(GE_void(R), ((T258*)(C))->a6);
	T258f91(GE_void(R), ((T258*)(C))->a8);
	T258f93(GE_void(R), ((T258*)(C))->a20);
	T258f94(GE_void(R), ((T258*)(C))->a21);
	T258f77(GE_void(R), ((T258*)(C))->a4);
	T258f83(GE_void(R), ((T258*)(C))->a19);
	T258f72(GE_void(R), ((T258*)(C))->a17);
	T258f78(GE_void(R), ((T258*)(C))->a14);
	T258f79(GE_void(R), ((T258*)(C))->a15);
	T258f80(GE_void(R), ((T258*)(C))->a16);
	T258f82(GE_void(R), ((T258*)(C))->a10);
	T258f96(GE_void(R), ((T258*)(C))->a13);
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.set_first_indexing */
void T258f80(T0* C, T0* a1)
{
	((T258*)(C))->a16 = a1;
}

/* ET_CONSTANT_ATTRIBUTE.set_feature_clause */
void T258f79(T0* C, T0* a1)
{
	((T258*)(C))->a15 = a1;
}

/* ET_CONSTANT_ATTRIBUTE.set_semicolon */
void T258f78(T0* C, T0* a1)
{
	((T258*)(C))->a14 = a1;
}

/* ET_CONSTANT_ATTRIBUTE.set_is_keyword */
void T258f77(T0* C, T0* a1)
{
	((T258*)(C))->a4 = a1;
}

/* ET_EXTERNAL_FUNCTION.renamed_feature */
T0* T176f71(T0* C, T0* a1)
{
	T0* R = 0;
	R = T176c73(a1, ((T176*)(C))->a3, ((T176*)(C))->a5, ((T176*)(C))->a1, ((T176*)(C))->a2);
	T176f76(GE_void(R), ((T176*)(C))->a12);
	T176f77(GE_void(R), ((T176*)(C))->a13);
	T176f78(GE_void(R), ((T176*)(C))->a14);
	T176f79(GE_void(R), ((T176*)(C))->a15);
	T176f80(GE_void(R), ((T176*)(C))->a16);
	T176f81(GE_void(R), ((T176*)(C))->a8);
	T176f102(GE_void(R), ((T176*)(C))->a9);
	T176f104(GE_void(R), ((T176*)(C))->a27);
	T176f105(GE_void(R), ((T176*)(C))->a28);
	T176f75(GE_void(R), ((T176*)(C))->a11);
	T176f89(GE_void(R), ((T176*)(C))->a7);
	T176f94(GE_void(R), ((T176*)(C))->a26);
	T176f84(GE_void(R), ((T176*)(C))->a24);
	T176f90(GE_void(R), ((T176*)(C))->a21);
	T176f91(GE_void(R), ((T176*)(C))->a22);
	T176f82(GE_void(R), ((T176*)(C))->a17);
	T176f93(GE_void(R), ((T176*)(C))->a18);
	T176f107(GE_void(R), ((T176*)(C))->a23);
	T176f74(GE_void(R), ((T176*)(C))->a10);
	return R;
}

/* ET_EXTERNAL_FUNCTION.set_feature_clause */
void T176f91(T0* C, T0* a1)
{
	((T176*)(C))->a22 = a1;
}

/* ET_EXTERNAL_FUNCTION.set_semicolon */
void T176f90(T0* C, T0* a1)
{
	((T176*)(C))->a21 = a1;
}

/* ET_EXTERNAL_FUNCTION.set_end_keyword */
void T176f89(T0* C, T0* a1)
{
	((T176*)(C))->a7 = a1;
}

/* ET_EXTERNAL_PROCEDURE.is_bracketable */
T1 T671f68(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ONCE_PROCEDURE.is_bracketable */
T1 T670f65(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DEFERRED_PROCEDURE.is_bracketable */
T1 T332f64(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DO_PROCEDURE.is_bracketable */
T1 T326f65(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_EXTERNAL_PROCEDURE.is_prefixable */
T1 T671f67(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ONCE_PROCEDURE.is_prefixable */
T1 T670f64(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DEFERRED_PROCEDURE.is_prefixable */
T1 T332f63(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DO_PROCEDURE.is_prefixable */
T1 T326f64(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_EXTERNAL_PROCEDURE.is_infixable */
T1 T671f66(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ONCE_PROCEDURE.is_infixable */
T1 T670f63(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DEFERRED_PROCEDURE.is_infixable */
T1 T332f62(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DO_PROCEDURE.is_infixable */
T1 T326f63(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ATTRIBUTE.preconditions */
T0* T261f41(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.preconditions */
T0* T260f43(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.preconditions */
T0* T258f43(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_ATTRIBUTE.postconditions */
T0* T261f42(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.postconditions */
T0* T260f44(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.postconditions */
T0* T258f44(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_EXTERNAL_PROCEDURE.is_attribute */
T1 T671f33(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ONCE_PROCEDURE.is_attribute */
T1 T670f33(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DEFERRED_PROCEDURE.is_attribute */
T1 T332f29(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DO_PROCEDURE.is_attribute */
T1 T326f39(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_EXTERNAL_PROCEDURE.type */
T0* T671f36(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_ONCE_PROCEDURE.type */
T0* T670f35(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_DEFERRED_PROCEDURE.type */
T0* T332f31(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_DO_PROCEDURE.type */
T0* T326f40(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_EXTERNAL_PROCEDURE.is_constant_attribute */
T1 T671f34(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ONCE_PROCEDURE.is_constant_attribute */
T1 T670f34(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DEFERRED_PROCEDURE.is_constant_attribute */
T1 T332f32(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DO_PROCEDURE.is_constant_attribute */
T1 T326f32(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_EXTERNAL_PROCEDURE.is_unique_attribute */
T1 T671f37(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ONCE_PROCEDURE.is_unique_attribute */
T1 T670f36(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DEFERRED_PROCEDURE.is_unique_attribute */
T1 T332f34(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DO_PROCEDURE.is_unique_attribute */
T1 T326f33(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_EXTERNAL_PROCEDURE.is_procedure */
T1 T671f44(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T671f36(C));
	R = ((t1)==(EIF_VOID));
	return R;
}

/* ET_ONCE_PROCEDURE.is_procedure */
T1 T670f44(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T670f35(C));
	R = ((t1)==(EIF_VOID));
	return R;
}

/* ET_DEFERRED_FUNCTION.is_procedure */
T1 T665f48(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T665f41(C));
	R = ((t1)==(EIF_VOID));
	return R;
}

/* ET_ONCE_FUNCTION.is_procedure */
T1 T664f50(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T664f43(C));
	R = ((t1)==(EIF_VOID));
	return R;
}

/* ET_DO_FUNCTION.is_procedure */
T1 T662f50(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T662f43(C));
	R = ((t1)==(EIF_VOID));
	return R;
}

/* ET_DEFERRED_PROCEDURE.is_procedure */
T1 T332f41(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T332f31(C));
	R = ((t1)==(EIF_VOID));
	return R;
}

/* ET_DO_PROCEDURE.is_procedure */
T1 T326f44(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T326f40(C));
	R = ((t1)==(EIF_VOID));
	return R;
}

/* ET_ATTRIBUTE.is_procedure */
T1 T261f44(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T261f34(C));
	R = ((t1)==(EIF_VOID));
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.is_procedure */
T1 T260f46(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T260f37(C));
	R = ((t1)==(EIF_VOID));
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.is_procedure */
T1 T258f46(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T258f36(C));
	R = ((t1)==(EIF_VOID));
	return R;
}

/* ET_EXTERNAL_FUNCTION.is_procedure */
T1 T176f51(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T176f41(C));
	R = ((t1)==(EIF_VOID));
	return R;
}

/* ET_EXTERNAL_PROCEDURE.lower_name */
T0* T671f41(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T671f40(C));
	R = (T169x11854(GE_void(t1)));
	return R;
}

/* ET_ONCE_PROCEDURE.lower_name */
T0* T670f32(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T670f39(C));
	R = (T169x11854(GE_void(t1)));
	return R;
}

/* ET_DEFERRED_PROCEDURE.lower_name */
T0* T332f38(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T332f37(C));
	R = (T169x11854(GE_void(t1)));
	return R;
}

/* ET_DO_PROCEDURE.lower_name */
T0* T326f34(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T326f36(C));
	R = (T169x11854(GE_void(t1)));
	return R;
}

/* ET_CONVERT_TO_EXPRESSION.is_current */
T1 T1420f12(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_CAST_EXPRESSION.is_current */
T1 T1323f4(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_CONVERT_EXPRESSION.is_current */
T1 T1322f10(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_EXTERNAL_PROCEDURE_INLINE_AGENT.is_current */
T1 T838f22(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ONCE_PROCEDURE_INLINE_AGENT.is_current */
T1 T837f25(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DO_PROCEDURE_INLINE_AGENT.is_current */
T1 T836f25(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_EXTERNAL_FUNCTION_INLINE_AGENT.is_current */
T1 T835f23(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ONCE_FUNCTION_INLINE_AGENT.is_current */
T1 T834f26(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DO_FUNCTION_INLINE_AGENT.is_current */
T1 T832f26(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_MANIFEST_TYPE.is_current */
T1 T822f13(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_STRIP_EXPRESSION.is_current */
T1 T815f18(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_MANIFEST_ARRAY.is_current */
T1 T813f18(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ONCE_MANIFEST_STRING.is_current */
T1 T812f14(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_CALL_AGENT.is_current */
T1 T808f18(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_OLD_EXPRESSION.is_current */
T1 T807f12(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_EXPRESSION.is_current */
T1 T806f13(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_EQUALITY_EXPRESSION.is_current */
T1 T805f12(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_EXPRESSION.is_current */
T1 T801f13(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_EXPRESSION_ADDRESS.is_current */
T1 T799f12(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_RESULT_ADDRESS.is_current */
T1 T798f12(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_CURRENT_ADDRESS.is_current */
T1 T797f12(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FEATURE_ADDRESS.is_current */
T1 T796f12(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PARENTHESIZED_EXPRESSION.is_current */
T1 T791f13(T0* C)
{
	T1 R = 0;
	R = (T197x11915(GE_void(((T791*)(C))->a2)));
	return R;
}

/* ET_PRECURSOR_EXPRESSION.is_current */
T1 T790f15(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_STATIC_CALL_EXPRESSION.is_current */
T1 T775f17(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BRACKET_EXPRESSION.is_current */
T1 T727f14(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_CREATE_EXPRESSION.is_current */
T1 T554f14(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_C2_CHARACTER_CONSTANT.is_current */
T1 T525f27(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_C1_CHARACTER_CONSTANT.is_current */
T1 T524f27(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FALSE_CONSTANT.is_current */
T1 T523f26(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_TRUE_CONSTANT.is_current */
T1 T522f26(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_UNDERSCORED_REAL_CONSTANT.is_current */
T1 T520f28(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_REGULAR_REAL_CONSTANT.is_current */
T1 T519f28(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_HEXADECIMAL_INTEGER_CONSTANT.is_current */
T1 T518f33(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_UNDERSCORED_INTEGER_CONSTANT.is_current */
T1 T517f34(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_REGULAR_INTEGER_CONSTANT.is_current */
T1 T516f34(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_SPECIAL_MANIFEST_STRING.is_current */
T1 T515f28(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_VERBATIM_STRING.is_current */
T1 T514f32(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_REGULAR_MANIFEST_STRING.is_current */
T1 T513f27(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_C3_CHARACTER_CONSTANT.is_current */
T1 T512f28(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_VOID.is_current */
T1 T500f20(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BIT_CONSTANT.is_current */
T1 T464f24(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_RESULT.is_current */
T1 T222f20(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_MANIFEST_TUPLE.is_current */
T1 T205f19(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_CALL_EXPRESSION.is_current */
T1 T203f17(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_IDENTIFIER.is_current */
T1 T129f82(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_CONVERT_TO_EXPRESSION.position */
T0* T1420f7(T0* C)
{
	T0* R = 0;
	R = (T197x6392(GE_void(((T1420*)(C))->a3)));
	return R;
}

/* ET_INFIX_CAST_EXPRESSION.position */
T0* T1323f8(T0* C)
{
	T0* R = 0;
	R = (T197x6392(GE_void(((T1323*)(C))->a2)));
	return R;
}

/* ET_CONVERT_EXPRESSION.position */
T0* T1322f6(T0* C)
{
	T0* R = 0;
	R = (T197x6392(GE_void(((T1322*)(C))->a3)));
	return R;
}

/* ET_EXTERNAL_PROCEDURE_INLINE_AGENT.position */
T0* T838f20(T0* C)
{
	T0* R = 0;
	R = (T453f9(GE_void(((T838*)(C))->a2)));
	return R;
}

/* ET_ONCE_PROCEDURE_INLINE_AGENT.position */
T0* T837f22(T0* C)
{
	T0* R = 0;
	R = (T453f9(GE_void(((T837*)(C))->a3)));
	return R;
}

/* ET_DO_PROCEDURE_INLINE_AGENT.position */
T0* T836f22(T0* C)
{
	T0* R = 0;
	R = (T453f9(GE_void(((T836*)(C))->a3)));
	return R;
}

/* ET_EXTERNAL_FUNCTION_INLINE_AGENT.position */
T0* T835f21(T0* C)
{
	T0* R = 0;
	R = (T453f9(GE_void(((T835*)(C))->a2)));
	return R;
}

/* ET_ONCE_FUNCTION_INLINE_AGENT.position */
T0* T834f23(T0* C)
{
	T0* R = 0;
	R = (T453f9(GE_void(((T834*)(C))->a5)));
	return R;
}

/* ET_DO_FUNCTION_INLINE_AGENT.position */
T0* T832f23(T0* C)
{
	T0* R = 0;
	R = (T453f9(GE_void(((T832*)(C))->a5)));
	return R;
}

/* ET_MANIFEST_TYPE.position */
T0* T822f11(T0* C)
{
	T0* R = 0;
	T1 t1;
	R = (T459f8(GE_void(((T822*)(C))->a2)));
	t1 = (T274x11970(GE_void(R)));
	if (t1) {
		R = (T167x6392(GE_void(((T822*)(C))->a1)));
	}
	return R;
}

/* ET_STRIP_EXPRESSION.position */
T0* T815f14(T0* C)
{
	T0* R = 0;
	T1 t1;
	T1 t2;
	T0* t3;
	R = (T179f9(GE_void(((T815*)(C))->a1)));
	t1 = (T274x11970(GE_void(R)));
	if (t1) {
		R = (T459f8(GE_void(((T815*)(C))->a2)));
		t1 = (T274x11970(GE_void(R)));
		if (t1) {
			t2 = (T815f15(C));
			t1 = ((T1)(!(t2)));
		}
		if (t1) {
			t3 = (T815f16(C, (T6)(GE_int32(1))));
			R = (T573x6392(GE_void(t3)));
		}
	}
	return R;
}

/* ET_STRIP_EXPRESSION.is_empty */
T1 T815f15(T0* C)
{
	T1 R = 0;
	R = ((((T815*)(C))->a4)==((T6)(GE_int32(0))));
	return R;
}

/* ET_MANIFEST_ARRAY.position */
T0* T813f14(T0* C)
{
	T0* R = 0;
	T1 t1;
	T1 t2;
	T0* t3;
	R = (((((T0*)(GE_void(((T813*)(C))->a1)))->id==459)?T459f8(((T813*)(C))->a1):T506f8(((T813*)(C))->a1)));
	t1 = (T274x11970(GE_void(R)));
	if (t1) {
		t2 = (T813f16(C));
		t1 = ((T1)(!(t2)));
	}
	if (t1) {
		t3 = (T813f15(C, (T6)(GE_int32(1))));
		R = (T238x6392(GE_void(t3)));
	}
	return R;
}

/* ET_MANIFEST_ARRAY.is_empty */
T1 T813f16(T0* C)
{
	T1 R = 0;
	R = ((((T813*)(C))->a3)==((T6)(GE_int32(0))));
	return R;
}

/* ET_ONCE_MANIFEST_STRING.position */
T0* T812f11(T0* C)
{
	T0* R = 0;
	T1 t1;
	R = (T179f9(GE_void(((T812*)(C))->a1)));
	t1 = (T274x11970(GE_void(R)));
	if (t1) {
		R = (T259x6392(GE_void(((T812*)(C))->a2)));
	}
	return R;
}

/* ET_CALL_AGENT.position */
T0* T808f15(T0* C)
{
	T0* R = 0;
	T1 t1;
	T0* t2;
	t1 = (T808f14(C));
	if (t1) {
		t1 = (T808f16(C));
	}
	if (t1) {
		R = (T243x6392(GE_void(((T808*)(C))->a4)));
	} else {
		R = (T653x6392(GE_void(((T808*)(C))->a1)));
		t1 = (T274x11970(GE_void(R)));
		if (t1) {
			R = (T243x6392(GE_void(((T808*)(C))->a4)));
		}
	}
	t1 = (T274x11970(GE_void(R)));
	if (t1) {
		t2 = (T808f8(C));
		R = (T169x6392(GE_void(t2)));
	}
	return R;
}

/* ET_CALL_AGENT.use_tilde */
T1 T808f16(T0* C)
{
	T1 R = 0;
	T0* l1 = 0;
	if ((((T808*)(C))->a1)==EIF_VOID) {
		l1 = EIF_VOID;
	} else {
		switch (((T0*)(((T808*)(C))->a1))->id) {
		case 453:
			l1 = EIF_VOID;
			break;
		default:
			l1 = ((T808*)(C))->a1;
		}
	}
	R = ((l1)!=(EIF_VOID));
	return R;
}

/* ET_OLD_EXPRESSION.position */
T0* T807f10(T0* C)
{
	T0* R = 0;
	T1 t1;
	R = (T179f9(GE_void(((T807*)(C))->a1)));
	t1 = (T274x11970(GE_void(R)));
	if (t1) {
		R = (T197x6392(GE_void(((T807*)(C))->a2)));
	}
	return R;
}

/* ET_PREFIX_EXPRESSION.position */
T0* T806f11(T0* C)
{
	T0* R = 0;
	R = (T802x6392(GE_void(((T806*)(C))->a1)));
	return R;
}

/* ET_EQUALITY_EXPRESSION.position */
T0* T805f10(T0* C)
{
	T0* R = 0;
	R = (T197x6392(GE_void(((T805*)(C))->a1)));
	return R;
}

/* ET_INFIX_EXPRESSION.position */
T0* T801f11(T0* C)
{
	T0* R = 0;
	R = (T197x6392(GE_void(((T801*)(C))->a1)));
	return R;
}

/* ET_EXPRESSION_ADDRESS.position */
T0* T799f10(T0* C)
{
	T0* R = 0;
	R = (((((T0*)(GE_void(((T799*)(C))->a1)))->id==459)?T459f8(((T799*)(C))->a1):T506f8(((T799*)(C))->a1)));
	return R;
}

/* ET_RESULT_ADDRESS.position */
T0* T798f10(T0* C)
{
	T0* R = 0;
	R = (((((T0*)(GE_void(((T798*)(C))->a1)))->id==459)?T459f8(((T798*)(C))->a1):T506f8(((T798*)(C))->a1)));
	return R;
}

/* ET_CURRENT_ADDRESS.position */
T0* T797f10(T0* C)
{
	T0* R = 0;
	R = (((((T0*)(GE_void(((T797*)(C))->a1)))->id==459)?T459f8(((T797*)(C))->a1):T506f8(((T797*)(C))->a1)));
	return R;
}

/* ET_FEATURE_ADDRESS.position */
T0* T796f10(T0* C)
{
	T0* R = 0;
	R = (((((T0*)(GE_void(((T796*)(C))->a1)))->id==459)?T459f8(((T796*)(C))->a1):T506f8(((T796*)(C))->a1)));
	return R;
}

/* ET_PARENTHESIZED_EXPRESSION.position */
T0* T791f12(T0* C)
{
	T0* R = 0;
	T1 t1;
	R = (((((T0*)(GE_void(((T791*)(C))->a1)))->id==459)?T459f8(((T791*)(C))->a1):T506f8(((T791*)(C))->a1)));
	t1 = (T274x11970(GE_void(R)));
	if (t1) {
		R = (T197x6392(GE_void(((T791*)(C))->a2)));
	}
	return R;
}

/* ET_PRECURSOR_EXPRESSION.position */
T0* T790f13(T0* C)
{
	T0* R = 0;
	T1 t1;
	if (((T790*)(C))->a4) {
		t1 = ((((T790*)(C))->a1)!=(EIF_VOID));
	} else {
		t1 = EIF_FALSE;
	}
	if (t1) {
		R = (T129f34(GE_void(((T790*)(C))->a1)));
	} else {
		R = (T456f10(GE_void(((T790*)(C))->a3)));
	}
	return R;
}

/* ET_STATIC_CALL_EXPRESSION.position */
T0* T775f14(T0* C)
{
	T0* R = 0;
	T1 t1;
	T0* t2;
	T1 t3;
	t1 = ((((T775*)(C))->a2)!=(EIF_VOID));
	if (t1) {
		t2 = (T179f9(GE_void(((T775*)(C))->a2)));
		t3 = (T179f15(GE_void(t2)));
		t1 = ((T1)(!(t3)));
	}
	if (t1) {
		R = (T179f9(GE_void(((T775*)(C))->a2)));
	} else {
		R = (T745x6392(GE_void(((T775*)(C))->a1)));
	}
	return R;
}

/* ET_BRACKET_EXPRESSION.position */
T0* T727f11(T0* C)
{
	T0* R = 0;
	R = (T197x6392(GE_void(((T727*)(C))->a1)));
	return R;
}

/* ET_CREATE_EXPRESSION.position */
T0* T554f11(T0* C)
{
	T0* R = 0;
	T0* t1;
	T1 t2;
	t1 = (T179f9(GE_void(((T554*)(C))->a3)));
	t2 = (T179f15(GE_void(t1)));
	t2 = ((T1)(!(t2)));
	if (t2) {
		R = (T179f9(GE_void(((T554*)(C))->a3)));
	} else {
		R = (T745x6392(GE_void(((T554*)(C))->a1)));
	}
	return R;
}

/* ET_C2_CHARACTER_CONSTANT.position */
T0* T525f20(T0* C)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T525*)(C))->a4)!=(EIF_VOID));
	if (t1) {
		R = ((GE_void(((T525*)(C))->a4), (T0*)0));
	} else {
		R = C;
	}
	return R;
}

/* ET_C1_CHARACTER_CONSTANT.position */
T0* T524f20(T0* C)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T524*)(C))->a4)!=(EIF_VOID));
	if (t1) {
		R = ((GE_void(((T524*)(C))->a4), (T0*)0));
	} else {
		R = C;
	}
	return R;
}

/* ET_FALSE_CONSTANT.position */
T0* T523f21(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_TRUE_CONSTANT.position */
T0* T522f21(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_UNDERSCORED_REAL_CONSTANT.position */
T0* T520f22(T0* C)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T520*)(C))->a5)!=(EIF_VOID));
	if (t1) {
		R = (T745x6392(GE_void(((T520*)(C))->a5)));
	} else {
		t1 = ((((T520*)(C))->a4)!=(EIF_VOID));
		if (t1) {
			R = (T497f8(GE_void(((T520*)(C))->a4)));
		} else {
			R = C;
		}
	}
	return R;
}

/* ET_REGULAR_REAL_CONSTANT.position */
T0* T519f22(T0* C)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T519*)(C))->a5)!=(EIF_VOID));
	if (t1) {
		R = (T745x6392(GE_void(((T519*)(C))->a5)));
	} else {
		t1 = ((((T519*)(C))->a4)!=(EIF_VOID));
		if (t1) {
			R = (T497f8(GE_void(((T519*)(C))->a4)));
		} else {
			R = C;
		}
	}
	return R;
}

/* ET_HEXADECIMAL_INTEGER_CONSTANT.position */
T0* T518f14(T0* C)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T518*)(C))->a7)!=(EIF_VOID));
	if (t1) {
		R = (T745x6392(GE_void(((T518*)(C))->a7)));
	} else {
		t1 = ((((T518*)(C))->a6)!=(EIF_VOID));
		if (t1) {
			R = (T497f8(GE_void(((T518*)(C))->a6)));
		} else {
			R = C;
		}
	}
	return R;
}

/* ET_UNDERSCORED_INTEGER_CONSTANT.position */
T0* T517f14(T0* C)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T517*)(C))->a7)!=(EIF_VOID));
	if (t1) {
		R = (T745x6392(GE_void(((T517*)(C))->a7)));
	} else {
		t1 = ((((T517*)(C))->a6)!=(EIF_VOID));
		if (t1) {
			R = (T497f8(GE_void(((T517*)(C))->a6)));
		} else {
			R = C;
		}
	}
	return R;
}

/* ET_REGULAR_INTEGER_CONSTANT.position */
T0* T516f14(T0* C)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T516*)(C))->a7)!=(EIF_VOID));
	if (t1) {
		R = (T745x6392(GE_void(((T516*)(C))->a7)));
	} else {
		t1 = ((((T516*)(C))->a6)!=(EIF_VOID));
		if (t1) {
			R = (T497f8(GE_void(((T516*)(C))->a6)));
		} else {
			R = C;
		}
	}
	return R;
}

/* ET_SPECIAL_MANIFEST_STRING.position */
T0* T515f11(T0* C)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T515*)(C))->a5)!=(EIF_VOID));
	if (t1) {
		R = ((GE_void(((T515*)(C))->a5), (T0*)0));
	} else {
		R = C;
	}
	return R;
}

/* ET_VERBATIM_STRING.position */
T0* T514f15(T0* C)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T514*)(C))->a9)!=(EIF_VOID));
	if (t1) {
		R = ((GE_void(((T514*)(C))->a9), (T0*)0));
	} else {
		R = C;
	}
	return R;
}

/* ET_REGULAR_MANIFEST_STRING.position */
T0* T513f10(T0* C)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T513*)(C))->a4)!=(EIF_VOID));
	if (t1) {
		R = ((GE_void(((T513*)(C))->a4), (T0*)0));
	} else {
		R = C;
	}
	return R;
}

/* ET_C3_CHARACTER_CONSTANT.position */
T0* T512f21(T0* C)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T512*)(C))->a5)!=(EIF_VOID));
	if (t1) {
		R = ((GE_void(((T512*)(C))->a5), (T0*)0));
	} else {
		R = C;
	}
	return R;
}

/* ET_VOID.position */
T0* T500f15(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_BIT_CONSTANT.position */
T0* T464f19(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_RESULT.position */
T0* T222f16(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_MANIFEST_TUPLE.position */
T0* T205f16(T0* C)
{
	T0* R = 0;
	T1 t1;
	T1 t2;
	T0* t3;
	R = (((((T0*)(GE_void(((T205*)(C))->a1)))->id==506)?T506f8(((T205*)(C))->a1):T459f8(((T205*)(C))->a1)));
	t1 = (T274x11970(GE_void(R)));
	if (t1) {
		t2 = (T205f17(C));
		t1 = ((T1)(!(t2)));
	}
	if (t1) {
		t3 = (T205f12(C, (T6)(GE_int32(1))));
		R = (T238x6392(GE_void(t3)));
	}
	return R;
}

/* ET_MANIFEST_TUPLE.is_empty */
T1 T205f17(T0* C)
{
	T1 R = 0;
	R = ((((T205*)(C))->a3)==((T6)(GE_int32(0))));
	return R;
}

/* ET_CALL_EXPRESSION.position */
T0* T203f9(T0* C)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T203*)(C))->a1)!=(EIF_VOID));
	if (t1) {
		R = (T197x6392(GE_void(((T203*)(C))->a1)));
	} else {
		R = (T202x6392(GE_void(((T203*)(C))->a3)));
	}
	return R;
}

/* ET_CURRENT.position */
T0* T198f11(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CONVERT_TO_EXPRESSION.last_leaf */
T0* T1420f14(T0* C)
{
	T0* R = 0;
	R = (T197x6396(GE_void(((T1420*)(C))->a3)));
	return R;
}

/* ET_INFIX_CAST_EXPRESSION.last_leaf */
T0* T1323f10(T0* C)
{
	T0* R = 0;
	R = (T197x6396(GE_void(((T1323*)(C))->a2)));
	return R;
}

/* ET_CONVERT_EXPRESSION.last_leaf */
T0* T1322f12(T0* C)
{
	T0* R = 0;
	R = (T197x6396(GE_void(((T1322*)(C))->a3)));
	return R;
}

/* ET_EXTERNAL_PROCEDURE_INLINE_AGENT.last_leaf */
T0* T838f28(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	T1 t1;
	if ((((T838*)(C))->a9)==EIF_VOID) {
		l1 = EIF_VOID;
	} else {
		switch (((T0*)(((T838*)(C))->a9))->id) {
		case 827:
			l1 = ((T838*)(C))->a9;
			break;
		default:
			l1 = EIF_VOID;
		}
	}
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (T827f10(GE_void(l1)));
	} else {
		R = ((T838*)(C))->a7;
	}
	return R;
}

/* ET_AGENT_ARGUMENT_OPERAND_LIST.last_leaf */
T0* T827f10(T0* C)
{
	T0* R = 0;
	R = ((T827*)(C))->a2;
	return R;
}

/* ET_ONCE_PROCEDURE_INLINE_AGENT.last_leaf */
T0* T837f29(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	T1 t1;
	if ((((T837*)(C))->a10)==EIF_VOID) {
		l1 = EIF_VOID;
	} else {
		switch (((T0*)(((T837*)(C))->a10))->id) {
		case 827:
			l1 = ((T837*)(C))->a10;
			break;
		default:
			l1 = EIF_VOID;
		}
	}
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (T827f10(GE_void(l1)));
	} else {
		R = ((T837*)(C))->a2;
	}
	return R;
}

/* ET_DO_PROCEDURE_INLINE_AGENT.last_leaf */
T0* T836f29(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	T1 t1;
	if ((((T836*)(C))->a10)==EIF_VOID) {
		l1 = EIF_VOID;
	} else {
		switch (((T0*)(((T836*)(C))->a10))->id) {
		case 827:
			l1 = ((T836*)(C))->a10;
			break;
		default:
			l1 = EIF_VOID;
		}
	}
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (T827f10(GE_void(l1)));
	} else {
		R = ((T836*)(C))->a2;
	}
	return R;
}

/* ET_EXTERNAL_FUNCTION_INLINE_AGENT.last_leaf */
T0* T835f29(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	T1 t1;
	if ((((T835*)(C))->a11)==EIF_VOID) {
		l1 = EIF_VOID;
	} else {
		switch (((T0*)(((T835*)(C))->a11))->id) {
		case 827:
			l1 = ((T835*)(C))->a11;
			break;
		default:
			l1 = EIF_VOID;
		}
	}
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (T827f10(GE_void(l1)));
	} else {
		R = ((T835*)(C))->a8;
	}
	return R;
}

/* ET_ONCE_FUNCTION_INLINE_AGENT.last_leaf */
T0* T834f30(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	T1 t1;
	if ((((T834*)(C))->a12)==EIF_VOID) {
		l1 = EIF_VOID;
	} else {
		switch (((T0*)(((T834*)(C))->a12))->id) {
		case 827:
			l1 = ((T834*)(C))->a12;
			break;
		default:
			l1 = EIF_VOID;
		}
	}
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (T827f10(GE_void(l1)));
	} else {
		R = ((T834*)(C))->a3;
	}
	return R;
}

/* ET_DO_FUNCTION_INLINE_AGENT.last_leaf */
T0* T832f30(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	T1 t1;
	if ((((T832*)(C))->a12)==EIF_VOID) {
		l1 = EIF_VOID;
	} else {
		switch (((T0*)(((T832*)(C))->a12))->id) {
		case 827:
			l1 = ((T832*)(C))->a12;
			break;
		default:
			l1 = EIF_VOID;
		}
	}
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (T827f10(GE_void(l1)));
	} else {
		R = ((T832*)(C))->a3;
	}
	return R;
}

/* ET_MANIFEST_TYPE.last_leaf */
T0* T822f15(T0* C)
{
	T0* R = 0;
	R = ((T822*)(C))->a3;
	return R;
}

/* ET_STRIP_EXPRESSION.last_leaf */
T0* T815f21(T0* C)
{
	T0* R = 0;
	R = ((T815*)(C))->a3;
	return R;
}

/* ET_MANIFEST_ARRAY.last_leaf */
T0* T813f20(T0* C)
{
	T0* R = 0;
	R = ((T813*)(C))->a2;
	return R;
}

/* ET_ONCE_MANIFEST_STRING.last_leaf */
T0* T812f17(T0* C)
{
	T0* R = 0;
	R = ((T812*)(C))->a2;
	return R;
}

/* ET_CALL_AGENT.last_leaf */
T0* T808f24(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	T1 t1;
	if ((((T808*)(C))->a3)==EIF_VOID) {
		l1 = EIF_VOID;
	} else {
		switch (((T0*)(((T808*)(C))->a3))->id) {
		case 827:
			l1 = ((T808*)(C))->a3;
			break;
		default:
			l1 = EIF_VOID;
		}
	}
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (T827f10(GE_void(l1)));
	} else {
		R = (T202x6396(GE_void(((T808*)(C))->a2)));
	}
	return R;
}

/* ET_OLD_EXPRESSION.last_leaf */
T0* T807f14(T0* C)
{
	T0* R = 0;
	R = (T197x6396(GE_void(((T807*)(C))->a2)));
	return R;
}

/* ET_PREFIX_EXPRESSION.last_leaf */
T0* T806f16(T0* C)
{
	T0* R = 0;
	R = (T197x6396(GE_void(((T806*)(C))->a2)));
	return R;
}

/* ET_EQUALITY_EXPRESSION.last_leaf */
T0* T805f14(T0* C)
{
	T0* R = 0;
	R = (T197x6396(GE_void(((T805*)(C))->a3)));
	return R;
}

/* ET_INFIX_EXPRESSION.last_leaf */
T0* T801f15(T0* C)
{
	T0* R = 0;
	R = (T197x6396(GE_void(((T801*)(C))->a3)));
	return R;
}

/* ET_EXPRESSION_ADDRESS.last_leaf */
T0* T799f14(T0* C)
{
	T0* R = 0;
	R = (T791f15(GE_void(((T799*)(C))->a2)));
	return R;
}

/* ET_RESULT_ADDRESS.last_leaf */
T0* T798f14(T0* C)
{
	T0* R = 0;
	R = ((T798*)(C))->a2;
	return R;
}

/* ET_CURRENT_ADDRESS.last_leaf */
T0* T797f14(T0* C)
{
	T0* R = 0;
	R = ((T797*)(C))->a2;
	return R;
}

/* ET_FEATURE_ADDRESS.last_leaf */
T0* T796f14(T0* C)
{
	T0* R = 0;
	R = (T169x6396(GE_void(((T796*)(C))->a2)));
	return R;
}

/* ET_PARENTHESIZED_EXPRESSION.last_leaf */
T0* T791f15(T0* C)
{
	T0* R = 0;
	R = ((T791*)(C))->a3;
	return R;
}

/* ET_PRECURSOR_EXPRESSION.last_leaf */
T0* T790f17(T0* C)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T790*)(C))->a2)!=(EIF_VOID));
	if (t1) {
		R = (T199f11(GE_void(((T790*)(C))->a2)));
	} else {
		t1 = ((T1)(!(((T790*)(C))->a4)));
		if (t1) {
			t1 = ((((T790*)(C))->a1)!=(EIF_VOID));
		}
		if (t1) {
			R = (T129f87(GE_void(((T790*)(C))->a1)));
		} else {
			R = ((T790*)(C))->a3;
		}
	}
	return R;
}

/* ET_STATIC_CALL_EXPRESSION.last_leaf */
T0* T775f22(T0* C)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T775*)(C))->a4)!=(EIF_VOID));
	if (t1) {
		R = (T199f11(GE_void(((T775*)(C))->a4)));
	} else {
		R = (T202x6396(GE_void(((T775*)(C))->a3)));
	}
	return R;
}

/* ET_BRACKET_EXPRESSION.last_leaf */
T0* T727f16(T0* C)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T727*)(C))->a3)!=(EIF_VOID));
	if (t1) {
		R = (T817f10(GE_void(((T727*)(C))->a3)));
	} else {
		R = (T506f80(GE_void(((T727*)(C))->a2)));
	}
	return R;
}

/* ET_BRACKET_SYMBOL.last_leaf */
T0* T506f80(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_BRACKET_ARGUMENT_LIST.last_leaf */
T0* T817f10(T0* C)
{
	T0* R = 0;
	R = ((T817*)(C))->a2;
	return R;
}

/* ET_CREATE_EXPRESSION.last_leaf */
T0* T554f17(T0* C)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T554*)(C))->a2)!=(EIF_VOID));
	if (t1) {
		R = (T743f5(GE_void(((T554*)(C))->a2)));
	} else {
		R = (T745x6396(GE_void(((T554*)(C))->a1)));
	}
	return R;
}

/* ET_C2_CHARACTER_CONSTANT.last_leaf */
T0* T525f32(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_C1_CHARACTER_CONSTANT.last_leaf */
T0* T524f32(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_FALSE_CONSTANT.last_leaf */
T0* T523f28(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_TRUE_CONSTANT.last_leaf */
T0* T522f28(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_UNDERSCORED_REAL_CONSTANT.last_leaf */
T0* T520f30(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_REGULAR_REAL_CONSTANT.last_leaf */
T0* T519f30(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_HEXADECIMAL_INTEGER_CONSTANT.last_leaf */
T0* T518f39(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_UNDERSCORED_INTEGER_CONSTANT.last_leaf */
T0* T517f40(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_REGULAR_INTEGER_CONSTANT.last_leaf */
T0* T516f40(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_SPECIAL_MANIFEST_STRING.last_leaf */
T0* T515f30(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_VERBATIM_STRING.last_leaf */
T0* T514f34(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_REGULAR_MANIFEST_STRING.last_leaf */
T0* T513f29(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_C3_CHARACTER_CONSTANT.last_leaf */
T0* T512f33(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_VOID.last_leaf */
T0* T500f22(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_BIT_CONSTANT.last_leaf */
T0* T464f26(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_RESULT.last_leaf */
T0* T222f22(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_MANIFEST_TUPLE.last_leaf */
T0* T205f21(T0* C)
{
	T0* R = 0;
	R = ((T205*)(C))->a2;
	return R;
}

/* ET_CALL_EXPRESSION.last_leaf */
T0* T203f22(T0* C)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T203*)(C))->a4)!=(EIF_VOID));
	if (t1) {
		R = (T199f11(GE_void(((T203*)(C))->a4)));
	} else {
		R = (T202x6396(GE_void(((T203*)(C))->a3)));
	}
	return R;
}

/* ET_CURRENT.last_leaf */
T0* T198f25(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_LABELED_COMMA_ACTUAL_PARAMETER.actual_parameter */
T0* T966f3(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.actual_parameter */
T0* T957f10(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_LIKE_CURRENT.actual_parameter */
T0* T720f10(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_LIKE_FEATURE.actual_parameter */
T0* T718f7(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_LABELED_ACTUAL_PARAMETER.actual_parameter */
T0* T716f3(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_BIT_FEATURE.actual_parameter */
T0* T582f9(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_BIT_N.actual_parameter */
T0* T581f12(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.actual_parameter */
T0* T569f33(T0* C)
{
	T0* R = 0;
	R = (T569f9(C));
	return R;
}

/* ET_FORMAL_PARAMETER.actual_parameter */
T0* T561f31(T0* C)
{
	T0* R = 0;
	R = (T561f5(C));
	return R;
}

/* ET_TUPLE_TYPE.actual_parameter */
T0* T181f17(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_GENERIC_CLASS_TYPE.actual_parameter */
T0* T174f21(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CLASS_TYPE.actual_parameter */
T0* T172f11(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CLASS.actual_parameter */
T0* T60f85(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_LABELED_COMMA_ACTUAL_PARAMETER.resolved_formal_parameters_with_type */
T0* T966f5(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	t1 = (T966f4(C));
	t2 = ((a1)==(t1));
	if (t2) {
		R = C;
	} else {
		l1 = T966c8(((T966*)(C))->a1, a1);
		R = l1;
	}
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.resolved_formal_parameters_with_type */
T0* T957f17(T0* C, T0* a1)
{
	T0* R = 0;
	R = a1;
	return R;
}

/* ET_LIKE_CURRENT.resolved_formal_parameters_with_type */
T0* T720f17(T0* C, T0* a1)
{
	T0* R = 0;
	R = a1;
	return R;
}

/* ET_LIKE_FEATURE.resolved_formal_parameters_with_type */
T0* T718f8(T0* C, T0* a1)
{
	T0* R = 0;
	R = a1;
	return R;
}

/* ET_LABELED_ACTUAL_PARAMETER.resolved_formal_parameters_with_type */
T0* T716f5(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	t1 = (T716f4(C));
	t2 = ((a1)==(t1));
	if (t2) {
		R = C;
	} else {
		l1 = T716c8(((T716*)(C))->a1, a1);
		R = l1;
	}
	return R;
}

/* ET_BIT_FEATURE.resolved_formal_parameters_with_type */
T0* T582f10(T0* C, T0* a1)
{
	T0* R = 0;
	R = a1;
	return R;
}

/* ET_BIT_N.resolved_formal_parameters_with_type */
T0* T581f13(T0* C, T0* a1)
{
	T0* R = 0;
	R = a1;
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.resolved_formal_parameters_with_type */
T0* T569f35(T0* C, T0* a1)
{
	T0* R = 0;
	R = a1;
	return R;
}

/* ET_FORMAL_PARAMETER.resolved_formal_parameters_with_type */
T0* T561f33(T0* C, T0* a1)
{
	T0* R = 0;
	R = a1;
	return R;
}

/* ET_TUPLE_TYPE.resolved_formal_parameters_with_type */
T0* T181f18(T0* C, T0* a1)
{
	T0* R = 0;
	R = a1;
	return R;
}

/* ET_GENERIC_CLASS_TYPE.resolved_formal_parameters_with_type */
T0* T174f22(T0* C, T0* a1)
{
	T0* R = 0;
	R = a1;
	return R;
}

/* ET_CLASS_TYPE.resolved_formal_parameters_with_type */
T0* T172f18(T0* C, T0* a1)
{
	T0* R = 0;
	R = a1;
	return R;
}

/* ET_CLASS.resolved_formal_parameters_with_type */
T0* T60f87(T0* C, T0* a1)
{
	T0* R = 0;
	R = a1;
	return R;
}

/* ET_LABELED_COMMA_ACTUAL_PARAMETER.type */
T0* T966f4(T0* C)
{
	T0* R = 0;
	R = (T648x6423(GE_void(((T966*)(C))->a2)));
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.type */
T0* T957f3(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_LIKE_CURRENT.type */
T0* T720f4(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_LIKE_FEATURE.type */
T0* T718f6(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_LABELED_ACTUAL_PARAMETER.type */
T0* T716f4(T0* C)
{
	T0* R = 0;
	R = (T648x6423(GE_void(((T716*)(C))->a2)));
	return R;
}

/* ET_BIT_FEATURE.type */
T0* T582f8(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_BIT_N.type */
T0* T581f11(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.type */
T0* T569f9(T0* C)
{
	T0* R = 0;
	R = (T569f8(C));
	return R;
}

/* ET_FORMAL_PARAMETER.type */
T0* T561f5(T0* C)
{
	T0* R = 0;
	R = (T561f4(C));
	return R;
}

/* ET_TUPLE_TYPE.type */
T0* T181f16(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_GENERIC_CLASS_TYPE.type */
T0* T174f20(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CLASS_TYPE.type */
T0* T172f4(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CLASS.type */
T0* T60f46(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_LABELED_COMMA_ACTUAL_PARAMETER.label */
T0* T966f7(T0* C)
{
	T0* R = 0;
	R = (T129f53(GE_void(((T966*)(C))->a1)));
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.label */
T0* T957f56(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_LIKE_CURRENT.label */
T0* T720f58(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_LIKE_FEATURE.label */
T0* T718f63(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_LABELED_ACTUAL_PARAMETER.label */
T0* T716f7(T0* C)
{
	T0* R = 0;
	R = (T129f53(GE_void(((T716*)(C))->a1)));
	return R;
}

/* ET_BIT_FEATURE.label */
T0* T582f96(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_BIT_N.label */
T0* T581f95(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.label */
T0* T569f66(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_FORMAL_PARAMETER.label */
T0* T561f64(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_TUPLE_TYPE.label */
T0* T181f88(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_GENERIC_CLASS_TYPE.label */
T0* T174f94(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_CLASS_TYPE.label */
T0* T172f93(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_CLASS.label */
T0* T60f161(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_DYNAMIC_AGENT_OPERAND_PUSH_TYPE_SET.has_type */
T1 T943f7(T0* C, T0* a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	l2 = ((T943*)(C))->a6;
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (T943f8(C, l1));
		t1 = ((t2)==(a1));
		if (t1) {
			R = EIF_TRUE;
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_DYNAMIC_PUSH_TYPE_SET.has_type */
T1 T331f11(T0* C, T0* a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	l2 = ((T331*)(C))->a5;
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (T331f7(C, l1));
		t1 = ((t2)==(a1));
		if (t1) {
			R = EIF_TRUE;
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_DYNAMIC_PROCEDURE_TYPE.has_type */
T1 T234f61(T0* C, T0* a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	l2 = (T234f50(C));
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (T234f51(C, l1));
		t1 = ((t2)==(a1));
		if (t1) {
			R = EIF_TRUE;
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_DYNAMIC_FUNCTION_TYPE.has_type */
T1 T233f62(T0* C, T0* a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	l2 = (T233f51(C));
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (T233f52(C, l1));
		t1 = ((t2)==(a1));
		if (t1) {
			R = EIF_TRUE;
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_DYNAMIC_SPECIAL_TYPE.has_type */
T1 T229f60(T0* C, T0* a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	l2 = (T229f49(C));
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (T229f50(C, l1));
		t1 = ((t2)==(a1));
		if (t1) {
			R = EIF_TRUE;
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_DYNAMIC_TUPLE_TYPE.has_type */
T1 T215f61(T0* C, T0* a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	l2 = (T215f49(C));
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (T215f50(C, l1));
		t1 = ((t2)==(a1));
		if (t1) {
			R = EIF_TRUE;
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_DYNAMIC_STANDALONE_TYPE_SET.has_type */
T1 T189f6(T0* C, T0* a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	l2 = ((T189*)(C))->a2;
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (T189f5(C, l1));
		t1 = ((t2)==(a1));
		if (t1) {
			R = EIF_TRUE;
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_DYNAMIC_TYPE.has_type */
T1 T157f18(T0* C, T0* a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	l2 = (T157f30(C));
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (T157f56(C, l1));
		t1 = ((t2)==(a1));
		if (t1) {
			R = EIF_TRUE;
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_DYNAMIC_PROCEDURE_TYPE.dynamic_types */
T0* T234f62(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DYNAMIC_FUNCTION_TYPE.dynamic_types */
T0* T233f63(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DYNAMIC_SPECIAL_TYPE.dynamic_types */
T0* T229f62(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DYNAMIC_TUPLE_TYPE.dynamic_types */
T0* T215f62(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DYNAMIC_TYPE.dynamic_types */
T0* T157f60(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DYNAMIC_AGENT_OPERAND_PUSH_TYPE_SET.special_type */
T0* T943f12(T0* C)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	l2 = ((T943*)(C))->a6;
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		l3 = (T943f8(C, l1));
		t1 = (T157x12327(GE_void(l3)));
		if (t1) {
			R = l3;
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_DYNAMIC_PUSH_TYPE_SET.special_type */
T0* T331f12(T0* C)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	l2 = ((T331*)(C))->a5;
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		l3 = (T331f7(C, l1));
		t1 = (T157x12327(GE_void(l3)));
		if (t1) {
			R = l3;
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_DYNAMIC_PROCEDURE_TYPE.special_type */
T0* T234f63(T0* C)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	l2 = (T234f50(C));
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		l3 = (T234f51(C, l1));
		t1 = (T234f56(GE_void(l3)));
		if (t1) {
			R = l3;
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_DYNAMIC_FUNCTION_TYPE.special_type */
T0* T233f64(T0* C)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	l2 = (T233f51(C));
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		l3 = (T233f52(C, l1));
		t1 = (T233f57(GE_void(l3)));
		if (t1) {
			R = l3;
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_DYNAMIC_SPECIAL_TYPE.special_type */
T0* T229f63(T0* C)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	l2 = (T229f49(C));
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		l3 = (T229f50(C, l1));
		t1 = (EIF_TRUE);
		if (t1) {
			R = l3;
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_DYNAMIC_TUPLE_TYPE.special_type */
T0* T215f63(T0* C)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	l2 = (T215f49(C));
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		l3 = (T215f50(C, l1));
		t1 = (T215f55(GE_void(l3)));
		if (t1) {
			R = l3;
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_DYNAMIC_STANDALONE_TYPE_SET.special_type */
T0* T189f10(T0* C)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	l2 = ((T189*)(C))->a2;
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		l3 = (T189f5(C, l1));
		t1 = (T157x12327(GE_void(l3)));
		if (t1) {
			R = l3;
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_DYNAMIC_TYPE.special_type */
T0* T157f61(T0* C)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	l2 = (T157f30(C));
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		l3 = (T157f56(C, l1));
		t1 = (T157f58(GE_void(l3)));
		if (t1) {
			R = l3;
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_DYNAMIC_AGENT_OPERAND_PUSH_TYPE_SET.is_empty */
T1 T943f10(T0* C)
{
	T1 R = 0;
	R = ((((T943*)(C))->a6)==((T6)(GE_int32(0))));
	return R;
}

/* ET_DYNAMIC_PUSH_TYPE_SET.is_empty */
T1 T331f8(T0* C)
{
	T1 R = 0;
	R = ((((T331*)(C))->a5)==((T6)(GE_int32(0))));
	return R;
}

/* ET_DYNAMIC_PROCEDURE_TYPE.is_empty */
T1 T234f59(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T234f50(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_DYNAMIC_FUNCTION_TYPE.is_empty */
T1 T233f60(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T233f51(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_DYNAMIC_SPECIAL_TYPE.is_empty */
T1 T229f59(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T229f49(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_DYNAMIC_TUPLE_TYPE.is_empty */
T1 T215f59(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T215f49(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_DYNAMIC_STANDALONE_TYPE_SET.is_empty */
T1 T189f8(T0* C)
{
	T1 R = 0;
	R = ((((T189*)(C))->a2)==((T6)(GE_int32(0))));
	return R;
}

/* ET_DYNAMIC_TYPE.is_empty */
T1 T157f17(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T157f30(C));
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* ET_DYNAMIC_AGENT_OPERAND_PUSH_TYPE_SET.is_expanded */
T1 T943f11(T0* C)
{
	T1 R = 0;
	R = (T157x12373(GE_void(((T943*)(C))->a1)));
	return R;
}

/* ET_DYNAMIC_PUSH_TYPE_SET.is_expanded */
T1 T331f10(T0* C)
{
	T1 R = 0;
	R = (T157x12373(GE_void(((T331*)(C))->a1)));
	return R;
}

/* ET_DYNAMIC_STANDALONE_TYPE_SET.is_expanded */
T1 T189f9(T0* C)
{
	T1 R = 0;
	R = (T157x12373(GE_void(((T189*)(C))->a1)));
	return R;
}

/* ET_DYNAMIC_AGENT_OPERAND_PUSH_TYPE_SET.has_expanded */
T1 T943f9(T0* C)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	l2 = ((T943*)(C))->a6;
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (T943f8(C, l1));
		t1 = (T157x12373(GE_void(t2)));
		if (t1) {
			R = EIF_TRUE;
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_DYNAMIC_PUSH_TYPE_SET.has_expanded */
T1 T331f9(T0* C)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	l2 = ((T331*)(C))->a5;
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (T331f7(C, l1));
		t1 = (T157x12373(GE_void(t2)));
		if (t1) {
			R = EIF_TRUE;
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_DYNAMIC_PROCEDURE_TYPE.has_expanded */
T1 T234f60(T0* C)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	l2 = (T234f50(C));
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (T234f51(C, l1));
		t1 = (T234f49(GE_void(t2)));
		if (t1) {
			R = EIF_TRUE;
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_DYNAMIC_FUNCTION_TYPE.has_expanded */
T1 T233f61(T0* C)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	l2 = (T233f51(C));
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (T233f52(C, l1));
		t1 = (T233f49(GE_void(t2)));
		if (t1) {
			R = EIF_TRUE;
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_DYNAMIC_SPECIAL_TYPE.has_expanded */
T1 T229f58(T0* C)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	l2 = (T229f49(C));
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (T229f50(C, l1));
		t1 = (T229f47(GE_void(t2)));
		if (t1) {
			R = EIF_TRUE;
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_DYNAMIC_TUPLE_TYPE.has_expanded */
T1 T215f60(T0* C)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	l2 = (T215f49(C));
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (T215f50(C, l1));
		t1 = (T215f47(GE_void(t2)));
		if (t1) {
			R = EIF_TRUE;
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_DYNAMIC_STANDALONE_TYPE_SET.has_expanded */
T1 T189f7(T0* C)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	l2 = ((T189*)(C))->a2;
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (T189f5(C, l1));
		t1 = (T157x12373(GE_void(t2)));
		if (t1) {
			R = EIF_TRUE;
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_DYNAMIC_TYPE.has_expanded */
T1 T157f57(T0* C)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	l2 = (T157f30(C));
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (T157f56(C, l1));
		t1 = (T157f21(GE_void(t2)));
		if (t1) {
			R = EIF_TRUE;
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_DYNAMIC_PROCEDURE_TYPE.count */
T6 T234f50(T0* C)
{
	T6 R = 0;
	T1 t1;
	t1 = (T60f49(GE_void(((T234*)(C))->a7)));
	t1 = ((T1)(!(t1)));
	if (t1) {
		R = (T6)(GE_int32(1));
	}
	return R;
}

/* ET_DYNAMIC_FUNCTION_TYPE.count */
T6 T233f51(T0* C)
{
	T6 R = 0;
	T1 t1;
	t1 = (T60f49(GE_void(((T233*)(C))->a7)));
	t1 = ((T1)(!(t1)));
	if (t1) {
		R = (T6)(GE_int32(1));
	}
	return R;
}

/* ET_DYNAMIC_SPECIAL_TYPE.count */
T6 T229f49(T0* C)
{
	T6 R = 0;
	T1 t1;
	t1 = (T60f49(GE_void(((T229*)(C))->a7)));
	t1 = ((T1)(!(t1)));
	if (t1) {
		R = (T6)(GE_int32(1));
	}
	return R;
}

/* ET_DYNAMIC_TUPLE_TYPE.count */
T6 T215f49(T0* C)
{
	T6 R = 0;
	T1 t1;
	t1 = (T60f49(GE_void(((T215*)(C))->a7)));
	t1 = ((T1)(!(t1)));
	if (t1) {
		R = (T6)(GE_int32(1));
	}
	return R;
}

/* ET_DYNAMIC_TYPE.count */
T6 T157f30(T0* C)
{
	T6 R = 0;
	T1 t1;
	t1 = (T60f49(GE_void(((T157*)(C))->a6)));
	t1 = ((T1)(!(t1)));
	if (t1) {
		R = (T6)(GE_int32(1));
	}
	return R;
}

/* ET_DYNAMIC_AGENT_OPERAND_PUSH_TYPE_SET.dynamic_type */
T0* T943f8(T0* C, T6 a1)
{
	T0* R = 0;
	R = (T254x12386T6(GE_void(((T943*)(C))->a4), a1));
	return R;
}

/* ET_DYNAMIC_PUSH_TYPE_SET.dynamic_type */
T0* T331f7(T0* C, T6 a1)
{
	T0* R = 0;
	R = (T254x12386T6(GE_void(((T331*)(C))->a3), a1));
	return R;
}

/* ET_DYNAMIC_PROCEDURE_TYPE.dynamic_type */
T0* T234f51(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DYNAMIC_FUNCTION_TYPE.dynamic_type */
T0* T233f52(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DYNAMIC_SPECIAL_TYPE.dynamic_type */
T0* T229f50(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DYNAMIC_TUPLE_TYPE.dynamic_type */
T0* T215f50(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DYNAMIC_STANDALONE_TYPE_SET.dynamic_type */
T0* T189f5(T0* C, T6 a1)
{
	T0* R = 0;
	R = (T188f6(GE_void(((T189*)(C))->a4), a1));
	return R;
}

/* ET_DYNAMIC_TYPE.dynamic_type */
T0* T157f56(T0* C, T6 a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DYNAMIC_PROCEDURE_TYPE.is_never_void */
T1 T234f52(T0* C)
{
	T1 R = 0;
	T1 t1;
	t1 = (T60f49(GE_void(((T234*)(C))->a7)));
	R = ((T1)(!(t1)));
	return R;
}

/* ET_DYNAMIC_FUNCTION_TYPE.is_never_void */
T1 T233f53(T0* C)
{
	T1 R = 0;
	T1 t1;
	t1 = (T60f49(GE_void(((T233*)(C))->a7)));
	R = ((T1)(!(t1)));
	return R;
}

/* ET_DYNAMIC_SPECIAL_TYPE.is_never_void */
T1 T229f51(T0* C)
{
	T1 R = 0;
	T1 t1;
	t1 = (T60f49(GE_void(((T229*)(C))->a7)));
	R = ((T1)(!(t1)));
	return R;
}

/* ET_DYNAMIC_TUPLE_TYPE.is_never_void */
T1 T215f51(T0* C)
{
	T1 R = 0;
	T1 t1;
	t1 = (T60f49(GE_void(((T215*)(C))->a7)));
	R = ((T1)(!(t1)));
	return R;
}

/* ET_DYNAMIC_TYPE.is_never_void */
T1 T157f29(T0* C)
{
	T1 R = 0;
	T1 t1;
	t1 = (T60f49(GE_void(((T157*)(C))->a6)));
	R = ((T1)(!(t1)));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.is_separate */
T1 T174f25(T0* C)
{
	T1 R = 0;
	T1 t1;
	t1 = ((((T174*)(C))->a3)!=(EIF_VOID));
	if (t1) {
		R = (T179f14(GE_void(((T174*)(C))->a3)));
	} else {
		R = (T60f93(GE_void(((T174*)(C))->a1)));
	}
	return R;
}

/* ET_KEYWORD.is_separate */
T1 T179f14(T0* C)
{
	T1 R = 0;
	T0* t1;
	T2 t2;
	t1 = (T179f4(C));
	t2 = ((T2)('2'));
	R = ((((T179*)(C))->a1)==(t2));
	return R;
}

/* ET_CLASS_TYPE.is_separate */
T1 T172f23(T0* C)
{
	T1 R = 0;
	T1 t1;
	t1 = ((((T172*)(C))->a1)!=(EIF_VOID));
	if (t1) {
		R = (T179f14(GE_void(((T172*)(C))->a1)));
	} else {
		R = (T60f93(GE_void(((T172*)(C))->a3)));
	}
	return R;
}

/* ET_CLASS.is_separate */
T1 T60f93(T0* C)
{
	T1 R = 0;
	R = (T60f94(C));
	return R;
}

/* ET_CLASS.has_separate_mark */
T1 T60f94(T0* C)
{
	T1 R = 0;
	T1 t1;
	t1 = ((((T60*)(C))->a13)!=(EIF_VOID));
	if (t1) {
		R = (T179f14(GE_void(((T60*)(C))->a13)));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_PREFIX_FREE_NAME.is_infix */
T1 T676f24(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_NAME.is_infix */
T1 T675f22(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_IDENTIFIER.is_infix */
T1 T129f50(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_FREE_NAME.is_prefix */
T1 T678f39(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_NAME.is_prefix */
T1 T677f24(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_IDENTIFIER.is_prefix */
T1 T129f49(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_FREE_NAME.argument_name */
T0* T678f51(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_INFIX_NAME.argument_name */
T0* T677f62(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_PREFIX_FREE_NAME.argument_name */
T0* T676f51(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_PREFIX_NAME.argument_name */
T0* T675f48(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_IDENTIFIER.argument_name */
T0* T129f76(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_INFIX_FREE_NAME.local_name */
T0* T678f53(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_INFIX_NAME.local_name */
T0* T677f64(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_PREFIX_FREE_NAME.local_name */
T0* T676f53(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_PREFIX_NAME.local_name */
T0* T675f50(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_IDENTIFIER.local_name */
T0* T129f77(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_INFIX_NAME.hash_code */
T6 T677f21(T0* C)
{
	T6 R = 0;
	R = ((T6)(((T677*)(C))->a3));
	return R;
}

/* ET_PREFIX_NAME.hash_code */
T6 T675f18(T0* C)
{
	T6 R = 0;
	R = ((T6)(((T675*)(C))->a3));
	return R;
}

/* ET_INFIX_FREE_NAME.is_argument */
T1 T678f50(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_NAME.is_argument */
T1 T677f61(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_FREE_NAME.is_argument */
T1 T676f50(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_NAME.is_argument */
T1 T675f47(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_IDENTIFIER.is_argument */
T1 T129f19(T0* C)
{
	T1 R = 0;
	R = ((((T129*)(C))->a3)==((T2)('a')));
	return R;
}

/* ET_INFIX_FREE_NAME.is_local */
T1 T678f52(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_NAME.is_local */
T1 T677f63(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_FREE_NAME.is_local */
T1 T676f52(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_NAME.is_local */
T1 T675f49(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_IDENTIFIER.is_local */
T1 T129f21(T0* C)
{
	T1 R = 0;
	R = ((((T129*)(C))->a3)==((T2)('l')));
	return R;
}

/* ET_INFIX_FREE_NAME.first_leaf */
T0* T678f57(T0* C)
{
	T0* R = 0;
	R = ((T678*)(C))->a1;
	return R;
}

/* ET_INFIX_NAME.first_leaf */
T0* T677f68(T0* C)
{
	T0* R = 0;
	R = ((T677*)(C))->a1;
	return R;
}

/* ET_PREFIX_FREE_NAME.first_leaf */
T0* T676f57(T0* C)
{
	T0* R = 0;
	R = ((T676*)(C))->a1;
	return R;
}

/* ET_PREFIX_NAME.first_leaf */
T0* T675f54(T0* C)
{
	T0* R = 0;
	R = ((T675*)(C))->a1;
	return R;
}

/* ET_IDENTIFIER.first_leaf */
T0* T129f91(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_INFIX_FREE_NAME.position */
T0* T678f37(T0* C)
{
	T0* R = 0;
	T1 t1;
	R = (T179f9(GE_void(((T678*)(C))->a1)));
	t1 = (T274x11970(GE_void(R)));
	if (t1) {
		R = (T259x6392(GE_void(((T678*)(C))->a2)));
	}
	return R;
}

/* ET_INFIX_NAME.position */
T0* T677f22(T0* C)
{
	T0* R = 0;
	T1 t1;
	R = (T179f9(GE_void(((T677*)(C))->a1)));
	t1 = (T274x11970(GE_void(R)));
	if (t1) {
		R = (T259x6392(GE_void(((T677*)(C))->a2)));
	}
	return R;
}

/* ET_PREFIX_FREE_NAME.position */
T0* T676f21(T0* C)
{
	T0* R = 0;
	T1 t1;
	R = (T179f9(GE_void(((T676*)(C))->a1)));
	t1 = (T274x11970(GE_void(R)));
	if (t1) {
		R = (T259x6392(GE_void(((T676*)(C))->a2)));
	}
	return R;
}

/* ET_PREFIX_NAME.position */
T0* T675f19(T0* C)
{
	T0* R = 0;
	T1 t1;
	R = (T179f9(GE_void(((T675*)(C))->a1)));
	t1 = (T274x11970(GE_void(R)));
	if (t1) {
		R = (T259x6392(GE_void(((T675*)(C))->a2)));
	}
	return R;
}

/* ET_IDENTIFIER.position */
T0* T129f34(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_INFIX_FREE_NAME.lower_name */
T0* T678f35(T0* C)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T2 l3 = 0;
	T1 t1;
	R = (T678f38(C));
	l2 = (((T17*)(GE_void(R)))->a2);
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		l3 = (T17f10(GE_void(R), l1));
		t1 = (T2f4(&l3, (T2)('A')));
		if (t1) {
			t1 = (T2f7(&l3, (T2)('Z')));
		}
		if (t1) {
			R = (T17f30(GE_void(R)));
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_INFIX_NAME.lower_name */
T0* T677f19(T0* C)
{
	T0* R = 0;
	R = (T677f23(C));
	return R;
}

/* ET_PREFIX_FREE_NAME.lower_name */
T0* T676f19(T0* C)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T2 l3 = 0;
	T1 t1;
	R = (T676f22(C));
	l2 = (((T17*)(GE_void(R)))->a2);
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		l3 = (T17f10(GE_void(R), l1));
		t1 = (T2f4(&l3, (T2)('A')));
		if (t1) {
			t1 = (T2f7(&l3, (T2)('Z')));
		}
		if (t1) {
			R = (T17f30(GE_void(R)));
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_PREFIX_NAME.lower_name */
T0* T675f16(T0* C)
{
	T0* R = 0;
	R = (T675f20(C));
	return R;
}

/* ET_IDENTIFIER.lower_name */
T0* T129f38(T0* C)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T2 l3 = 0;
	T1 t1;
	R = ((T129*)(C))->a6;
	l2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T949*)(R))->a1));
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		l3 = (((((T0*)(GE_void(R)))->id==17)?T17f10(R, l1):T949f7(R, l1)));
		t1 = (T2f4(&l3, (T2)('A')));
		if (t1) {
			t1 = (T2f7(&l3, (T2)('Z')));
		}
		if (t1) {
			R = (((((T0*)(GE_void(R)))->id==17)?T17f30(R):T949f22(R)));
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_INFIX_FREE_NAME.is_tuple_label */
T1 T678f34(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_INFIX_NAME.is_tuple_label */
T1 T677f18(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_FREE_NAME.is_tuple_label */
T1 T676f18(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_PREFIX_NAME.is_tuple_label */
T1 T675f15(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_IDENTIFIER.is_tuple_label */
T1 T129f25(T0* C)
{
	T1 R = 0;
	R = ((((T129*)(C))->a3)==((T2)('t')));
	return R;
}

/* ET_INFIX_FREE_NAME.same_feature_name */
T1 T678f11(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t2 = (T678f44(C));
		t1 = (T79f1(GE_void(t2), C, a1));
		if (t1) {
			R = (T678f36(C, a1));
		}
	}
	return R;
}

/* ET_INFIX_NAME.same_feature_name */
T1 T677f8(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t2 = (T677f29(C));
		t1 = (T79f1(GE_void(t2), C, a1));
		if (t1) {
			R = (T677f20(C, a1));
		}
	}
	return R;
}

/* ET_PREFIX_FREE_NAME.same_feature_name */
T1 T676f11(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t2 = (T676f31(C));
		t1 = (T79f1(GE_void(t2), C, a1));
		if (t1) {
			R = (T676f20(C, a1));
		}
	}
	return R;
}

/* ET_PREFIX_NAME.same_feature_name */
T1 T675f8(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t2 = (T675f26(C));
		t1 = (T79f1(GE_void(t2), C, a1));
		if (t1) {
			R = (T675f17(C, a1));
		}
	}
	return R;
}

/* ET_IDENTIFIER.same_feature_name */
T1 T129f44(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		if ((a1)==EIF_VOID) {
			l1 = EIF_VOID;
		} else {
			switch (((T0*)(a1))->id) {
			case 129:
				l1 = a1;
				break;
			default:
				l1 = EIF_VOID;
			}
		}
		t1 = ((l1)!=(EIF_VOID));
		if (t1) {
			t2 = (((T129*)(GE_void(l1)))->a5);
			t1 = ((((T129*)(C))->a5)==(t2));
			if (t1) {
				l2 = (((T129*)(GE_void(l1)))->a6);
				t1 = ((l2)==(((T129*)(C))->a6));
				if (t1) {
					R = EIF_TRUE;
				} else {
					t3 = (T129f45(C));
					R = (T26f14(GE_void(t3), ((T129*)(C))->a6, l2));
				}
			}
		}
	}
	return R;
}

/* ET_INFIX_FREE_NAME.last_leaf */
T0* T678f56(T0* C)
{
	T0* R = 0;
	R = ((T678*)(C))->a2;
	return R;
}

/* ET_INFIX_NAME.last_leaf */
T0* T677f67(T0* C)
{
	T0* R = 0;
	R = ((T677*)(C))->a2;
	return R;
}

/* ET_PREFIX_FREE_NAME.last_leaf */
T0* T676f56(T0* C)
{
	T0* R = 0;
	R = ((T676*)(C))->a2;
	return R;
}

/* ET_PREFIX_NAME.last_leaf */
T0* T675f53(T0* C)
{
	T0* R = 0;
	R = ((T675*)(C))->a2;
	return R;
}

/* ET_IDENTIFIER.last_leaf */
T0* T129f87(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_INFIX_FREE_NAME.name */
T0* T678f38(T0* C)
{
	T0* R = 0;
	T0* t1;
	T6 t2;
	t1 = (T678f8(C));
	t2 = (((((T0*)(GE_void(t1)))->id==17)?((T17*)(t1))->a2:((T949*)(t1))->a1));
	t2 = ((T6)((t2)+((T6)(GE_int32(8)))));
	R = T17c36(t2);
	T17f41(GE_void(R), ge805ov23272);
	t1 = (T678f8(C));
	T17f41(GE_void(R), t1);
	T17f39(GE_void(R), (T2)('\"'));
	return R;
}

/* ET_INFIX_NAME.name */
T0* T677f23(T0* C)
{
	T0* R = 0;
	T0* t1;
	switch (((T677*)(C))->a3) {
	case (T2)(T2)('\001'):
		t1 = (T677f5(C));
		R = (ge774ov14278);
		break;
	case (T2)(T2)('\021'):
		t1 = (T677f5(C));
		R = (ge774ov14294);
		break;
	case (T2)(T2)('\005'):
		t1 = (T677f5(C));
		R = (ge774ov14282);
		break;
	case (T2)(T2)('\006'):
		t1 = (T677f5(C));
		R = (ge774ov14283);
		break;
	case (T2)(T2)('\007'):
		t1 = (T677f5(C));
		R = (ge774ov14284);
		break;
	case (T2)(T2)('\010'):
		t1 = (T677f5(C));
		R = (ge774ov14285);
		break;
	case (T2)(T2)('\002'):
		t1 = (T677f5(C));
		R = (ge774ov14279);
		break;
	case (T2)(T2)('\t'):
		t1 = (T677f5(C));
		R = (ge774ov14286);
		break;
	case (T2)(T2)('\n'):
		t1 = (T677f5(C));
		R = (ge774ov14287);
		break;
	case (T2)(T2)('\013'):
		t1 = (T677f5(C));
		R = (ge774ov14288);
		break;
	case (T2)(T2)('\014'):
		t1 = (T677f5(C));
		R = (ge774ov14289);
		break;
	case (T2)(T2)('\003'):
		t1 = (T677f5(C));
		R = (ge774ov14280);
		break;
	case (T2)(T2)('\022'):
		t1 = (T677f5(C));
		R = (ge774ov14295);
		break;
	case (T2)(T2)('\r'):
		t1 = (T677f5(C));
		R = (ge774ov14290);
		break;
	case (T2)(T2)('\016'):
		t1 = (T677f5(C));
		R = (ge774ov14291);
		break;
	case (T2)(T2)('\017'):
		t1 = (T677f5(C));
		R = (ge774ov14292);
		break;
	case (T2)(T2)('\004'):
		t1 = (T677f5(C));
		R = (ge774ov14281);
		break;
	default:
		t1 = (T677f5(C));
		R = (ge774ov14253);
		break;
	}
	return R;
}

/* ET_PREFIX_FREE_NAME.name */
T0* T676f22(T0* C)
{
	T0* R = 0;
	T0* t1;
	T6 t2;
	t1 = (T676f8(C));
	t2 = (((((T0*)(GE_void(t1)))->id==17)?((T17*)(t1))->a2:((T949*)(t1))->a1));
	t2 = ((T6)((t2)+((T6)(GE_int32(9)))));
	R = T17c36(t2);
	T17f41(GE_void(R), ge815ov23164);
	t1 = (T676f8(C));
	T17f41(GE_void(R), t1);
	T17f39(GE_void(R), (T2)('\"'));
	return R;
}

/* ET_PREFIX_NAME.name */
T0* T675f20(T0* C)
{
	T0* R = 0;
	T0* t1;
	switch (((T675*)(C))->a3) {
	case (T2)(T2)('?'):
		t1 = (T675f5(C));
		R = (ge774ov14297);
		break;
	case (T2)(T2)('@'):
		t1 = (T675f5(C));
		R = (ge774ov14298);
		break;
	case (T2)(T2)('>'):
		t1 = (T675f5(C));
		R = (ge774ov14296);
		break;
	default:
		t1 = (T675f5(C));
		R = (ge774ov14253);
		break;
	}
	return R;
}

/* ET_NESTED_TYPE_CONTEXT.base_type */
T0* T273f28(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* t1;
	switch (((T273*)(C))->a2) {
	case (T6)(T6)(GE_int32(0)):
		R = (T158x6429T0(GE_void(((T273*)(C))->a1), a1));
		break;
	case (T6)(T6)(GE_int32(1)):
		t1 = (T273f10(C));
		R = (T167x6332T0T0(GE_void(t1), ((T273*)(C))->a1, a1));
		break;
	default:
		l1 = (T273f10(C));
		T273f39(C);
		R = (T167x6332T0T0(GE_void(l1), C, a1));
		T273f40(C, l1);
		break;
	}
	return R;
}

/* ET_NESTED_TYPE_CONTEXT.same_named_type */
T1 T273f6(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T1 t2;
	switch (((T273*)(C))->a2) {
	case (T6)(T6)(GE_int32(0)):
		R = (T158x6444T0T0T0(GE_void(((T273*)(C))->a1), a1, a2, a3));
		break;
	case (T6)(T6)(GE_int32(1)):
		t1 = (T273f10(C));
		R = (T167x6356T0T0T0T0(GE_void(t1), a1, a2, ((T273*)(C))->a1, a3));
		break;
	default:
		t2 = ((a2)!=(C));
		if (t2) {
			l1 = (T273f10(C));
			T273f39(C);
			R = (T167x6356T0T0T0T0(GE_void(l1), a1, a2, C, a3));
			T273f40(C, l1);
		} else {
			l1 = (T273f10(C));
			l2 = (T273f11(C));
			T273f39(GE_void(l2));
			R = (T167x6356T0T0T0T0(GE_void(l1), a1, a2, l2, a3));
		}
		break;
	}
	return R;
}

/* ET_NESTED_TYPE_CONTEXT.cloned_type_context */
T0* T273f11(T0* C)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T273f5(C));
	R = T273c33(((T273*)(C))->a1, t1);
	l2 = ((T273*)(C))->a2;
	l1 = (T6)(GE_int32(1));
	t2 = (T6f1(&l1, l2));
	while (!(t2)) {
		t3 = (T273f17(C, l1));
		T273f40(GE_void(R), t3);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t2 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_NESTED_TYPE_CONTEXT.conforms_from_class_type */
T1 T273f24(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T1 t2;
	switch (((T273*)(C))->a2) {
	case (T6)(T6)(GE_int32(0)):
		R = (T158x6458T0T0T0(GE_void(((T273*)(C))->a1), a1, a2, a3));
		break;
	case (T6)(T6)(GE_int32(1)):
		t1 = (T273f10(C));
		R = (T167x6374T0T0T0T0(GE_void(t1), a1, a2, ((T273*)(C))->a1, a3));
		break;
	default:
		t2 = ((a2)!=(C));
		if (t2) {
			l1 = (T273f10(C));
			T273f39(C);
			R = (T167x6374T0T0T0T0(GE_void(l1), a1, a2, C, a3));
			T273f40(C, l1);
		} else {
			l1 = (T273f10(C));
			l2 = (T273f11(C));
			T273f39(GE_void(l2));
			R = (T167x6374T0T0T0T0(GE_void(l1), a1, a2, l2, a3));
		}
		break;
	}
	return R;
}

/* ET_NESTED_TYPE_CONTEXT.conforms_to_type */
T1 T273f22(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T1 t2;
	switch (((T273*)(C))->a2) {
	case (T6)(T6)(GE_int32(0)):
		R = (T158x6455T0T0T0(GE_void(((T273*)(C))->a1), a1, a2, a3));
		break;
	case (T6)(T6)(GE_int32(1)):
		t1 = (T273f10(C));
		R = (T167x6372T0T0T0T0(GE_void(t1), a1, a2, ((T273*)(C))->a1, a3));
		break;
	default:
		t2 = ((a2)!=(C));
		if (t2) {
			l1 = (T273f10(C));
			T273f39(C);
			R = (T167x6372T0T0T0T0(GE_void(l1), a1, a2, C, a3));
			T273f40(C, l1);
		} else {
			l1 = (T273f10(C));
			l2 = (T273f11(C));
			T273f39(GE_void(l2));
			R = (T167x6372T0T0T0T0(GE_void(l1), a1, a2, l2, a3));
		}
		break;
	}
	return R;
}

/* ET_NESTED_TYPE_CONTEXT.same_base_class_type */
T1 T273f29(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T1 t2;
	switch (((T273*)(C))->a2) {
	case (T6)(T6)(GE_int32(0)):
		R = (T158x6452T0T0T0(GE_void(((T273*)(C))->a1), a1, a2, a3));
		break;
	case (T6)(T6)(GE_int32(1)):
		t1 = (T273f10(C));
		R = (T167x6369T0T0T0T0(GE_void(t1), a1, a2, ((T273*)(C))->a1, a3));
		break;
	default:
		t2 = ((a2)!=(C));
		if (t2) {
			l1 = (T273f10(C));
			T273f39(C);
			R = (T167x6369T0T0T0T0(GE_void(l1), a1, a2, C, a3));
			T273f40(C, l1);
		} else {
			l1 = (T273f10(C));
			l2 = (T273f11(C));
			T273f39(GE_void(l2));
			R = (T167x6369T0T0T0T0(GE_void(l1), a1, a2, l2, a3));
		}
		break;
	}
	return R;
}

/* ET_NESTED_TYPE_CONTEXT.same_base_tuple_type */
T1 T273f30(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T1 t2;
	switch (((T273*)(C))->a2) {
	case (T6)(T6)(GE_int32(0)):
		R = (T158x6454T0T0T0(GE_void(((T273*)(C))->a1), a1, a2, a3));
		break;
	case (T6)(T6)(GE_int32(1)):
		t1 = (T273f10(C));
		R = (T167x6371T0T0T0T0(GE_void(t1), a1, a2, ((T273*)(C))->a1, a3));
		break;
	default:
		t2 = ((a2)!=(C));
		if (t2) {
			l1 = (T273f10(C));
			T273f39(C);
			R = (T167x6371T0T0T0T0(GE_void(l1), a1, a2, C, a3));
			T273f40(C, l1);
		} else {
			l1 = (T273f10(C));
			l2 = (T273f11(C));
			T273f39(GE_void(l2));
			R = (T167x6371T0T0T0T0(GE_void(l1), a1, a2, l2, a3));
		}
		break;
	}
	return R;
}

/* ET_NESTED_TYPE_CONTEXT.conforms_from_tuple_type */
T1 T273f27(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T1 t2;
	switch (((T273*)(C))->a2) {
	case (T6)(T6)(GE_int32(0)):
		R = (T158x6460T0T0T0(GE_void(((T273*)(C))->a1), a1, a2, a3));
		break;
	case (T6)(T6)(GE_int32(1)):
		t1 = (T273f10(C));
		R = (T167x6376T0T0T0T0(GE_void(t1), a1, a2, ((T273*)(C))->a1, a3));
		break;
	default:
		t2 = ((a2)!=(C));
		if (t2) {
			l1 = (T273f10(C));
			T273f39(C);
			R = (T167x6376T0T0T0T0(GE_void(l1), a1, a2, C, a3));
			T273f40(C, l1);
		} else {
			l1 = (T273f10(C));
			l2 = (T273f11(C));
			T273f39(GE_void(l2));
			R = (T167x6376T0T0T0T0(GE_void(l1), a1, a2, l2, a3));
		}
		break;
	}
	return R;
}

/* ET_NESTED_TYPE_CONTEXT.same_named_class_type */
T1 T273f14(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T1 t2;
	switch (((T273*)(C))->a2) {
	case (T6)(T6)(GE_int32(0)):
		R = (T158x6448T0T0T0(GE_void(((T273*)(C))->a1), a1, a2, a3));
		break;
	case (T6)(T6)(GE_int32(1)):
		t1 = (T273f10(C));
		R = (T167x6365T0T0T0T0(GE_void(t1), a1, a2, ((T273*)(C))->a1, a3));
		break;
	default:
		t2 = ((a2)!=(C));
		if (t2) {
			l1 = (T273f10(C));
			T273f39(C);
			R = (T167x6365T0T0T0T0(GE_void(l1), a1, a2, C, a3));
			T273f40(C, l1);
		} else {
			l1 = (T273f10(C));
			l2 = (T273f11(C));
			T273f39(GE_void(l2));
			R = (T167x6365T0T0T0T0(GE_void(l1), a1, a2, l2, a3));
		}
		break;
	}
	return R;
}

/* ET_NESTED_TYPE_CONTEXT.same_named_tuple_type */
T1 T273f15(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T1 t2;
	switch (((T273*)(C))->a2) {
	case (T6)(T6)(GE_int32(0)):
		R = (T158x6450T0T0T0(GE_void(((T273*)(C))->a1), a1, a2, a3));
		break;
	case (T6)(T6)(GE_int32(1)):
		t1 = (T273f10(C));
		R = (T167x6367T0T0T0T0(GE_void(t1), a1, a2, ((T273*)(C))->a1, a3));
		break;
	default:
		t2 = ((a2)!=(C));
		if (t2) {
			l1 = (T273f10(C));
			T273f39(C);
			R = (T167x6367T0T0T0T0(GE_void(l1), a1, a2, C, a3));
			T273f40(C, l1);
		} else {
			l1 = (T273f10(C));
			l2 = (T273f11(C));
			T273f39(GE_void(l2));
			R = (T167x6367T0T0T0T0(GE_void(l1), a1, a2, l2, a3));
		}
		break;
	}
	return R;
}

/* ET_NESTED_TYPE_CONTEXT.conforms_from_formal_parameter_type */
T1 T273f25(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T1 t2;
	switch (((T273*)(C))->a2) {
	case (T6)(T6)(GE_int32(0)):
		R = (T158x6459T0T0T0(GE_void(((T273*)(C))->a1), a1, a2, a3));
		break;
	case (T6)(T6)(GE_int32(1)):
		t1 = (T273f10(C));
		R = (T167x6375T0T0T0T0(GE_void(t1), a1, a2, ((T273*)(C))->a1, a3));
		break;
	default:
		t2 = ((a2)!=(C));
		if (t2) {
			l1 = (T273f10(C));
			T273f39(C);
			R = (T167x6375T0T0T0T0(GE_void(l1), a1, a2, C, a3));
			T273f40(C, l1);
		} else {
			l1 = (T273f10(C));
			l2 = (T273f11(C));
			T273f39(GE_void(l2));
			R = (T167x6375T0T0T0T0(GE_void(l1), a1, a2, l2, a3));
		}
		break;
	}
	return R;
}

/* ET_NESTED_TYPE_CONTEXT.same_named_formal_parameter_type */
T1 T273f12(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T1 t2;
	switch (((T273*)(C))->a2) {
	case (T6)(T6)(GE_int32(0)):
		R = (T158x6449T0T0T0(GE_void(((T273*)(C))->a1), a1, a2, a3));
		break;
	case (T6)(T6)(GE_int32(1)):
		t1 = (T273f10(C));
		R = (T167x6366T0T0T0T0(GE_void(t1), a1, a2, ((T273*)(C))->a1, a3));
		break;
	default:
		t2 = ((a2)!=(C));
		if (t2) {
			l1 = (T273f10(C));
			T273f39(C);
			R = (T167x6366T0T0T0T0(GE_void(l1), a1, a2, C, a3));
			T273f40(C, l1);
		} else {
			l1 = (T273f10(C));
			l2 = (T273f11(C));
			T273f39(GE_void(l2));
			R = (T167x6366T0T0T0T0(GE_void(l1), a1, a2, l2, a3));
		}
		break;
	}
	return R;
}

/* ET_NESTED_TYPE_CONTEXT.same_named_bit_type */
T1 T273f16(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T1 t2;
	switch (((T273*)(C))->a2) {
	case (T6)(T6)(GE_int32(0)):
		R = (T158x6447T0T0T0(GE_void(((T273*)(C))->a1), a1, a2, a3));
		break;
	case (T6)(T6)(GE_int32(1)):
		t1 = (T273f10(C));
		R = (T167x6364T0T0T0T0(GE_void(t1), a1, a2, ((T273*)(C))->a1, a3));
		break;
	default:
		t2 = ((a2)!=(C));
		if (t2) {
			l1 = (T273f10(C));
			T273f39(C);
			R = (T167x6364T0T0T0T0(GE_void(l1), a1, a2, C, a3));
			T273f40(C, l1);
		} else {
			l1 = (T273f10(C));
			l2 = (T273f11(C));
			T273f39(GE_void(l2));
			R = (T167x6364T0T0T0T0(GE_void(l1), a1, a2, l2, a3));
		}
		break;
	}
	return R;
}

/* ET_NESTED_TYPE_CONTEXT.conforms_from_bit_type */
T1 T273f26(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T1 t2;
	switch (((T273*)(C))->a2) {
	case (T6)(T6)(GE_int32(0)):
		R = (T158x6457T0T0T0(GE_void(((T273*)(C))->a1), a1, a2, a3));
		break;
	case (T6)(T6)(GE_int32(1)):
		t1 = (T273f10(C));
		R = (T167x6373T0T0T0T0(GE_void(t1), a1, a2, ((T273*)(C))->a1, a3));
		break;
	default:
		t2 = ((a2)!=(C));
		if (t2) {
			l1 = (T273f10(C));
			T273f39(C);
			R = (T167x6373T0T0T0T0(GE_void(l1), a1, a2, C, a3));
			T273f40(C, l1);
		} else {
			l1 = (T273f10(C));
			l2 = (T273f11(C));
			T273f39(GE_void(l2));
			R = (T167x6373T0T0T0T0(GE_void(l1), a1, a2, l2, a3));
		}
		break;
	}
	return R;
}

/* ET_NESTED_TYPE_CONTEXT.same_base_bit_type */
T1 T273f31(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T1 t2;
	switch (((T273*)(C))->a2) {
	case (T6)(T6)(GE_int32(0)):
		R = (T158x6451T0T0T0(GE_void(((T273*)(C))->a1), a1, a2, a3));
		break;
	case (T6)(T6)(GE_int32(1)):
		t1 = (T273f10(C));
		R = (T167x6368T0T0T0T0(GE_void(t1), a1, a2, ((T273*)(C))->a1, a3));
		break;
	default:
		t2 = ((a2)!=(C));
		if (t2) {
			l1 = (T273f10(C));
			T273f39(C);
			R = (T167x6368T0T0T0T0(GE_void(l1), a1, a2, C, a3));
			T273f40(C, l1);
		} else {
			l1 = (T273f10(C));
			l2 = (T273f11(C));
			T273f39(GE_void(l2));
			R = (T167x6368T0T0T0T0(GE_void(l1), a1, a2, l2, a3));
		}
		break;
	}
	return R;
}

/* ET_BIT_FEATURE.reference_context_conforms_to_type */
T1 T582f86(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T582f60(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_N.reference_context_conforms_to_type */
T1 T581f85(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T581f59(C, a1, a2, C, a3));
	return R;
}

/* ET_TUPLE_TYPE.reference_context_conforms_to_type */
T1 T181f79(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T181f47(C, a1, a2, C, a3));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.reference_context_conforms_to_type */
T1 T174f84(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T174f57(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS_TYPE.reference_context_conforms_to_type */
T1 T172f84(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T172f51(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS.reference_context_conforms_to_type */
T1 T60f143(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T60f131(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_FEATURE.reference_context_conforms_from_class_type */
T1 T582f78(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T582f62(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_N.reference_context_conforms_from_class_type */
T1 T581f77(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T581f61(C, a1, a2, C, a3));
	return R;
}

/* ET_TUPLE_TYPE.reference_context_conforms_from_class_type */
T1 T181f71(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T181f56(C, a1, a2, C, a3));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.reference_context_conforms_from_class_type */
T1 T174f76(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T174f61(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS_TYPE.reference_context_conforms_from_class_type */
T1 T172f76(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T172f57(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS.reference_context_conforms_from_class_type */
T1 T60f144(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T60f137(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_FEATURE.context_same_base_type */
T1 T582f76(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T582f43(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_N.context_same_base_type */
T1 T581f75(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T581f41(C, a1, a2, C, a3));
	return R;
}

/* ET_TUPLE_TYPE.context_same_base_type */
T1 T181f69(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T181f15(C, a1, a2, C, a3));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.context_same_base_type */
T1 T174f74(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T174f19(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS_TYPE.context_same_base_type */
T1 T172f74(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T172f26(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS.context_same_base_type */
T1 T60f145(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T60f82(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_FEATURE.reference_context_conforms_from_tuple_type */
T1 T582f81(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T582f72(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_N.reference_context_conforms_from_tuple_type */
T1 T581f80(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T581f71(C, a1, a2, C, a3));
	return R;
}

/* ET_TUPLE_TYPE.reference_context_conforms_from_tuple_type */
T1 T181f74(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T181f65(C, a1, a2, C, a3));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.reference_context_conforms_from_tuple_type */
T1 T174f79(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T174f70(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS_TYPE.reference_context_conforms_from_tuple_type */
T1 T172f79(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T172f70(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS.reference_context_conforms_from_tuple_type */
T1 T60f146(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T60f138(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_FEATURE.reference_context_conforms_from_formal_parameter_type */
T1 T582f80(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T582f74(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_N.reference_context_conforms_from_formal_parameter_type */
T1 T581f79(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T581f73(C, a1, a2, C, a3));
	return R;
}

/* ET_TUPLE_TYPE.reference_context_conforms_from_formal_parameter_type */
T1 T181f73(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T181f67(C, a1, a2, C, a3));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.reference_context_conforms_from_formal_parameter_type */
T1 T174f78(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T174f72(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS_TYPE.reference_context_conforms_from_formal_parameter_type */
T1 T172f78(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T172f72(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS.reference_context_conforms_from_formal_parameter_type */
T1 T60f147(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T60f141(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_FEATURE.reference_context_conforms_from_bit_type */
T1 T582f79(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T582f75(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_N.reference_context_conforms_from_bit_type */
T1 T581f78(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T581f74(C, a1, a2, C, a3));
	return R;
}

/* ET_TUPLE_TYPE.reference_context_conforms_from_bit_type */
T1 T181f72(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T181f68(C, a1, a2, C, a3));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.reference_context_conforms_from_bit_type */
T1 T174f77(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T174f73(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS_TYPE.reference_context_conforms_from_bit_type */
T1 T172f77(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T172f73(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS.reference_context_conforms_from_bit_type */
T1 T60f148(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T60f142(C, a1, a2, C, a3));
	return R;
}

/* ET_NESTED_TYPE_CONTEXT.base_class */
T0* T273f13(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* t1;
	switch (((T273*)(C))->a2) {
	case (T6)(T6)(GE_int32(0)):
		R = (T158x6428T0(GE_void(((T273*)(C))->a1), a1));
		break;
	case (T6)(T6)(GE_int32(1)):
		t1 = (T273f10(C));
		R = (T167x6331T0T0(GE_void(t1), ((T273*)(C))->a1, a1));
		break;
	default:
		l1 = (T273f10(C));
		T273f39(C);
		R = (T167x6331T0T0(GE_void(l1), C, a1));
		T273f40(C, l1);
		break;
	}
	return R;
}

/* ET_NESTED_TYPE_CONTEXT.base_type_index_of_label */
T6 T273f18(T0* C, T0* a1, T0* a2)
{
	T6 R = 0;
	T0* l1 = 0;
	T0* t1;
	switch (((T273*)(C))->a2) {
	case (T6)(T6)(GE_int32(0)):
		R = (T158x6432T0T0(GE_void(((T273*)(C))->a1), a1, a2));
		break;
	case (T6)(T6)(GE_int32(1)):
		t1 = (T273f10(C));
		R = (T167x6336T0T0T0(GE_void(t1), a1, ((T273*)(C))->a1, a2));
		break;
	default:
		l1 = (T273f10(C));
		T273f39(C);
		R = (T167x6336T0T0T0(GE_void(l1), a1, C, a2));
		T273f40(C, l1);
		break;
	}
	return R;
}

/* ET_NESTED_TYPE_CONTEXT.base_type_actual_count */
T6 T273f8(T0* C, T0* a1)
{
	T6 R = 0;
	T0* l1 = 0;
	T0* t1;
	switch (((T273*)(C))->a2) {
	case (T6)(T6)(GE_int32(0)):
		R = (T158x6434T0(GE_void(((T273*)(C))->a1), a1));
		break;
	case (T6)(T6)(GE_int32(1)):
		t1 = (T273f10(C));
		R = (T167x6342T0T0(GE_void(t1), ((T273*)(C))->a1, a1));
		break;
	default:
		l1 = (T273f10(C));
		T273f39(C);
		R = (T167x6342T0T0(GE_void(l1), C, a1));
		T273f40(C, l1);
		break;
	}
	return R;
}

/* ET_NESTED_TYPE_CONTEXT.base_type_actual */
T0* T273f9(T0* C, T6 a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* t1;
	switch (((T273*)(C))->a2) {
	case (T6)(T6)(GE_int32(0)):
		R = (T158x6430T6T0(GE_void(((T273*)(C))->a1), a1, a2));
		break;
	case (T6)(T6)(GE_int32(1)):
		t1 = (T273f10(C));
		R = (T167x6334T6T0T0(GE_void(t1), a1, ((T273*)(C))->a1, a2));
		break;
	default:
		l1 = (T273f10(C));
		T273f39(C);
		R = (T167x6334T6T0T0(GE_void(l1), a1, C, a2));
		T273f40(C, l1);
		break;
	}
	return R;
}

/* ET_BIT_FEATURE.root_context */
T0* T582f42(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_BIT_N.root_context */
T0* T581f40(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_TUPLE_TYPE.root_context */
T0* T181f34(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_GENERIC_CLASS_TYPE.root_context */
T0* T174f40(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CLASS_TYPE.root_context */
T0* T172f37(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CLASS.root_context */
T0* T60f103(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_NESTED_TYPE_CONTEXT.named_type */
T0* T273f7(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* t1;
	switch (((T273*)(C))->a2) {
	case (T6)(T6)(GE_int32(0)):
		R = (T158x6433T0(GE_void(((T273*)(C))->a1), a1));
		break;
	case (T6)(T6)(GE_int32(1)):
		t1 = (T273f10(C));
		R = (T167x6337T0T0(GE_void(t1), ((T273*)(C))->a1, a1));
		break;
	default:
		l1 = (T273f10(C));
		T273f39(C);
		R = (T167x6337T0T0(GE_void(l1), C, a1));
		T273f40(C, l1);
		break;
	}
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.unaliased_to_text */
T0* T957f15(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(15)));
	T957f59(C, R);
	return R;
}

/* ET_LIKE_CURRENT.unaliased_to_text */
T0* T720f15(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(15)));
	T720f61(C, R);
	return R;
}

/* ET_LIKE_FEATURE.unaliased_to_text */
T0* T718f25(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(15)));
	T718f69(C, R);
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.unaliased_to_text */
T0* T569f17(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(15)));
	T569f72(C, R);
	return R;
}

/* ET_FORMAL_PARAMETER.unaliased_to_text */
T0* T561f15(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(15)));
	T561f68(C, R);
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.same_syntactical_class_type */
T1 T957f19(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T957*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6359T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_LIKE_CURRENT.same_syntactical_class_type */
T1 T720f20(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_LIKE_FEATURE.same_syntactical_class_type */
T1 T718f47(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_BIT_FEATURE.same_syntactical_class_type */
T1 T582f69(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_BIT_N.same_syntactical_class_type */
T1 T581f68(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.same_syntactical_class_type */
T1 T569f41(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T569*)(C))->a6, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6359T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER.same_syntactical_class_type */
T1 T561f39(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T561*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6359T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_TUPLE_TYPE.same_syntactical_class_type */
T1 T181f58(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_GENERIC_CLASS_TYPE.same_syntactical_class_type */
T1 T174f24(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T1 t2;
	T1 t3;
	T1 t4;
	l2 = (T172x6330T0(a1, a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a5:((T56*)(a4))->a5));
	t2 = ((l2)==(t1));
	if (t2) {
		R = EIF_FALSE;
	} else {
		t2 = ((a1)==(C));
		if (t2) {
			t2 = ((a2)==(a3));
		}
		if (t2) {
			R = EIF_TRUE;
		} else {
			t2 = ((((T174*)(C))->a1)==(l2));
			if (t2) {
				t3 = (T174f6(C));
				t4 = (T172x6276(a1));
				t2 = ((t3)==(t4));
			}
			if (t2) {
				t3 = (T174f25(C));
				t4 = (T172x6243(a1));
				t2 = ((t3)==(t4));
			}
			if (t2) {
				t2 = (T172x6273(a1));
				t2 = ((T1)(!(t2)));
				if (t2) {
					t2 = (T174f12(C));
					R = ((T1)(!(t2)));
				} else {
					t2 = (T174f12(C));
					t2 = ((T1)(!(t2)));
					if (t2) {
					} else {
						l1 = (T172x6265(a1));
						R = (((((T0*)(GE_void(((T174*)(C))->a2)))->id==173)?T173f17(((T174*)(C))->a2, l1, a2, a3, a4):T429f19(((T174*)(C))->a2, l1, a2, a3, a4)));
					}
				}
			}
		}
	}
	return R;
}

/* ET_FORMAL_PARAMETER_LIST.same_syntactical_types */
T1 T429f19(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	T0* t4;
	t1 = ((a1)==(C));
	if (t1) {
		t1 = ((a2)==(a3));
	}
	if (t1) {
		R = EIF_TRUE;
	} else {
		t2 = (((((T0*)(GE_void(a1)))->id==429)?((T429*)(a1))->a1:((T173*)(a1))->a3));
		t1 = ((t2)!=(((T429*)(C))->a1));
		if (t1) {
			R = EIF_FALSE;
		} else {
			R = EIF_TRUE;
			l3 = (((((T0*)(GE_void(a1)))->id==429)?((T429*)(a1))->a2:((T173*)(a1))->a4));
			l2 = ((T6)((((T429*)(C))->a1)-((T6)(GE_int32(1)))));
			l1 = (T6)(GE_int32(0));
			t1 = (T6f1(&l1, l2));
			while (!(t1)) {
				t3 = (((T564*)(GE_void(((T429*)(C))->a2)))->z2[l1]);
				t3 = (((((T0*)(GE_void(t3)))->id==561)?T561f5(t3):T569f9(t3)));
				t4 = (((((T0*)(GE_void(l3)))->id==564)?((T564*)(l3))->z2[l1]:((T713*)(l3))->z2[l1]));
				t4 = (T177x6410(GE_void(t4)));
				t1 = (((((T0*)(GE_void(t3)))->id==561)?T561f20(t3, t4, a2, a3, a4):T569f24(t3, t4, a2, a3, a4)));
				t1 = ((T1)(!(t1)));
				if (t1) {
					R = EIF_FALSE;
					l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				}
				t1 = (T6f1(&l1, l2));
			}
		}
	}
	return R;
}

/* ET_ACTUAL_PARAMETER_LIST.same_syntactical_types */
T1 T173f17(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	T0* t4;
	t1 = ((a1)==(C));
	if (t1) {
		t1 = ((a2)==(a3));
	}
	if (t1) {
		R = EIF_TRUE;
	} else {
		t2 = (((((T0*)(GE_void(a1)))->id==429)?((T429*)(a1))->a1:((T173*)(a1))->a3));
		t1 = ((t2)!=(((T173*)(C))->a3));
		if (t1) {
			R = EIF_FALSE;
		} else {
			R = EIF_TRUE;
			l3 = (((((T0*)(GE_void(a1)))->id==429)?((T429*)(a1))->a2:((T173*)(a1))->a4));
			l2 = ((T6)((((T173*)(C))->a3)-((T6)(GE_int32(1)))));
			l1 = (T6)(GE_int32(0));
			t1 = (T6f1(&l1, l2));
			while (!(t1)) {
				t3 = (((T713*)(GE_void(((T173*)(C))->a4)))->z2[l1]);
				t3 = (T177x6410(GE_void(t3)));
				t4 = (((((T0*)(GE_void(l3)))->id==564)?((T564*)(l3))->z2[l1]:((T713*)(l3))->z2[l1]));
				t4 = (T177x6410(GE_void(t4)));
				t1 = (T167x6355T0T0T0T0(GE_void(t3), t4, a2, a3, a4));
				t1 = ((T1)(!(t1)));
				if (t1) {
					R = EIF_FALSE;
					l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				}
				t1 = (T6f1(&l1, l2));
			}
		}
	}
	return R;
}

/* ET_CLASS_TYPE.same_syntactical_class_type */
T1 T172f56(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T1 t2;
	T1 t3;
	T1 t4;
	l2 = (T172x6330T0(a1, a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a5:((T56*)(a4))->a5));
	t2 = ((l2)==(t1));
	if (t2) {
		R = EIF_FALSE;
	} else {
		t2 = ((a1)==(C));
		if (t2) {
			t2 = ((a2)==(a3));
		}
		if (t2) {
			R = EIF_TRUE;
		} else {
			t2 = ((((T172*)(C))->a3)==(l2));
			if (t2) {
				t3 = (T172f22(C));
				t4 = (T172x6276(a1));
				t2 = ((t3)==(t4));
			}
			if (t2) {
				t3 = (T172f23(C));
				t4 = (T172x6243(a1));
				t2 = ((t3)==(t4));
			}
			if (t2) {
				t2 = (T172x6273(a1));
				t2 = ((T1)(!(t2)));
				if (t2) {
					t2 = (T172f24(C));
					R = ((T1)(!(t2)));
				} else {
					t2 = (T172f24(C));
					t2 = ((T1)(!(t2)));
					if (t2) {
					} else {
						l1 = (T172x6265(a1));
						t1 = (T172f5(C));
						R = ((GE_void(t1), l1, a2, a3, a4, (T1)0));
					}
				}
			}
		}
	}
	return R;
}

/* ET_CLASS.same_syntactical_class_type */
T1 T60f89(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T1 t2;
	T1 t3;
	T1 t4;
	l2 = (T172x6330T0(a1, a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a5:((T56*)(a4))->a5));
	t2 = ((l2)==(t1));
	if (t2) {
		R = EIF_FALSE;
	} else {
		t2 = ((a1)==(C));
		if (t2) {
			t2 = ((a2)==(a3));
		}
		if (t2) {
			R = EIF_TRUE;
		} else {
			t2 = ((((T60*)(C))->a8)==(l2));
			if (t2) {
				t3 = (T60f64(C));
				t4 = (T172x6276(a1));
				t2 = ((t3)==(t4));
			}
			if (t2) {
				t3 = (T60f93(C));
				t4 = (T172x6243(a1));
				t2 = ((t3)==(t4));
			}
			if (t2) {
				t2 = (T172x6273(a1));
				t2 = ((T1)(!(t2)));
				if (t2) {
					t2 = (T60f73(C));
					R = ((T1)(!(t2)));
				} else {
					t2 = (T60f73(C));
					t2 = ((T1)(!(t2)));
					if (t2) {
					} else {
						l1 = (T172x6265(a1));
						R = (T429f19(GE_void(((T60*)(C))->a11), l1, a2, a3, a4));
					}
				}
			}
		}
	}
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.same_syntactical_tuple_type */
T1 T957f24(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T957*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6363T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_LIKE_CURRENT.same_syntactical_tuple_type */
T1 T720f25(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_LIKE_FEATURE.same_syntactical_tuple_type */
T1 T718f46(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_BIT_FEATURE.same_syntactical_tuple_type */
T1 T582f68(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_BIT_N.same_syntactical_tuple_type */
T1 T581f67(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.same_syntactical_tuple_type */
T1 T569f42(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T569*)(C))->a6, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6363T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER.same_syntactical_tuple_type */
T1 T561f40(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T561*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6363T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_TUPLE_TYPE.same_syntactical_tuple_type */
T1 T181f57(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		t1 = ((a2)==(a3));
	}
	if (t1) {
		R = EIF_TRUE;
	} else {
		l1 = (((T181*)(a1))->a1);
		t1 = ((l1)==(EIF_VOID));
		if (t1) {
			t1 = ((((T181*)(C))->a1)==(EIF_VOID));
			if (!(t1)) {
				R = (T173f10(GE_void(((T181*)(C))->a1)));
			} else {
				R = EIF_TRUE;
			}
		} else {
			t1 = ((((T181*)(C))->a1)==(EIF_VOID));
			if (t1) {
				R = (T173f10(GE_void(l1)));
			} else {
				R = (T173f17(GE_void(((T181*)(C))->a1), l1, a2, a3, a4));
			}
		}
	}
	return R;
}

/* ET_GENERIC_CLASS_TYPE.same_syntactical_tuple_type */
T1 T174f34(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CLASS_TYPE.same_syntactical_tuple_type */
T1 T172f66(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CLASS.same_syntactical_tuple_type */
T1 T60f98(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.same_syntactical_bit_type */
T1 T957f31(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T957*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6358T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_LIKE_CURRENT.same_syntactical_bit_type */
T1 T720f32(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_LIKE_FEATURE.same_syntactical_bit_type */
T1 T718f49(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_BIT_FEATURE.same_syntactical_bit_type */
T1 T582f44(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		T582f103(C);
		t1 = (T582f45(C));
		t1 = ((T1)(!(t1)));
		if (t1) {
			if (((T0*)(a1))->id==581) {
				T581f97(a1);
			} else {
				T582f103(a1);
			}
			t1 = (((((T0*)(a1))->id==581)?T581f5(a1):T582f45(a1)));
			t1 = ((T1)(!(t1)));
			if (t1) {
				t2 = (((((T0*)(a1))->id==581)?((T581*)(a1))->a2:((T582*)(a1))->a3));
				R = ((t2)==(((T582*)(C))->a3));
			}
		}
	}
	return R;
}

/* ET_BIT_N.same_syntactical_bit_type */
T1 T581f49(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		T581f97(C);
		t1 = (T581f5(C));
		t1 = ((T1)(!(t1)));
		if (t1) {
			if (((T0*)(a1))->id==581) {
				T581f97(a1);
			} else {
				T582f103(a1);
			}
			t1 = (((((T0*)(a1))->id==581)?T581f5(a1):T582f45(a1)));
			t1 = ((T1)(!(t1)));
			if (t1) {
				t2 = (((((T0*)(a1))->id==581)?((T581*)(a1))->a2:((T582*)(a1))->a3));
				R = ((t2)==(((T581*)(C))->a2));
			}
		}
	}
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.same_syntactical_bit_type */
T1 T569f45(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T569*)(C))->a6, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6358T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER.same_syntactical_bit_type */
T1 T561f43(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T561*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6358T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_TUPLE_TYPE.same_syntactical_bit_type */
T1 T181f60(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_GENERIC_CLASS_TYPE.same_syntactical_bit_type */
T1 T174f44(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CLASS_TYPE.same_syntactical_bit_type */
T1 T172f68(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CLASS.same_syntactical_bit_type */
T1 T60f108(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.same_syntactical_like_feature */
T1 T957f36(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T957*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6362T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_LIKE_CURRENT.same_syntactical_like_feature */
T1 T720f37(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_LIKE_FEATURE.same_syntactical_like_feature */
T1 T718f50(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T6 l4 = 0;
	T1 t1;
	T6 t2;
	T6 t3;
	T0* t4;
	t1 = ((a1)==(C));
	if (t1) {
		t1 = ((a2)==(a3));
	}
	if (t1) {
		R = EIF_TRUE;
	} else {
		t1 = ((((T718*)(C))->a3)==((T6)(GE_int32(0))));
		if (t1) {
		} else {
			t1 = (T718f36(C));
			if (t1) {
				t1 = (T718f36(a1));
				if (t1) {
					t2 = (T718f38(a1));
					t3 = (T718f38(C));
					t1 = ((t2)==(t3));
				}
				if (t1) {
					t2 = (((T718*)(a1))->a3);
					t1 = ((t2)==(((T718*)(C))->a3));
					if (t1) {
						R = EIF_TRUE;
					} else {
						l3 = (T168x6428T0(GE_void(a2), a4));
						l4 = (((T718*)(a1))->a3);
						t1 = (((T718*)(a1))->a4);
						if (t1) {
							l1 = (T60f67(GE_void(l3), l4));
						} else {
							l1 = (T60f71(GE_void(l3), l4));
						}
						t1 = ((l1)!=(EIF_VOID));
						if (t1) {
							R = (T201x12780T6(GE_void(l1), ((T718*)(C))->a3));
						} else {
							R = EIF_FALSE;
						}
						t1 = ((T1)(!(R)));
						if (t1) {
							l3 = (T168x6428T0(GE_void(a3), a4));
							if (((T718*)(C))->a4) {
								l1 = (T60f67(GE_void(l3), ((T718*)(C))->a3));
							} else {
								l1 = (T60f71(GE_void(l3), ((T718*)(C))->a3));
							}
							t1 = ((l1)!=(EIF_VOID));
							if (t1) {
								R = (T201x12780T6(GE_void(l1), l4));
							} else {
								R = EIF_FALSE;
							}
						}
					}
				}
			} else {
				t1 = (T718f36(a1));
				t1 = ((T1)(!(t1)));
				if (t1) {
					t2 = (((T718*)(a1))->a3);
					t1 = ((t2)==(((T718*)(C))->a3));
					if (t1) {
						R = EIF_TRUE;
					} else {
						t4 = (T168x6428T0(GE_void(a2), a4));
						t2 = (((T718*)(a1))->a3);
						l2 = (T60f71(GE_void(t4), t2));
						t1 = ((l2)!=(EIF_VOID));
						if (t1) {
							R = (T160x12780T6(GE_void(l2), ((T718*)(C))->a3));
						} else {
							R = EIF_FALSE;
						}
						t1 = ((T1)(!(R)));
						if (t1) {
							t4 = (T168x6428T0(GE_void(a3), a4));
							l2 = (T60f71(GE_void(t4), ((T718*)(C))->a3));
							t1 = ((l2)!=(EIF_VOID));
							if (t1) {
								t2 = (((T718*)(a1))->a3);
								R = (T160x12780T6(GE_void(l2), t2));
							} else {
								R = EIF_FALSE;
							}
						}
					}
				}
			}
		}
	}
	return R;
}

/* ET_BIT_FEATURE.same_syntactical_like_feature */
T1 T582f71(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_BIT_N.same_syntactical_like_feature */
T1 T581f70(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.same_syntactical_like_feature */
T1 T569f47(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T569*)(C))->a6, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6362T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER.same_syntactical_like_feature */
T1 T561f45(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T561*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6362T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_TUPLE_TYPE.same_syntactical_like_feature */
T1 T181f61(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_GENERIC_CLASS_TYPE.same_syntactical_like_feature */
T1 T174f48(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CLASS_TYPE.same_syntactical_like_feature */
T1 T172f69(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CLASS.same_syntactical_like_feature */
T1 T60f112(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.same_syntactical_like_current */
T1 T957f37(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T957*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6361T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_LIKE_CURRENT.same_syntactical_like_current */
T1 T720f38(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	R = EIF_TRUE;
	return R;
}

/* ET_LIKE_FEATURE.same_syntactical_like_current */
T1 T718f48(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_BIT_FEATURE.same_syntactical_like_current */
T1 T582f70(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_BIT_N.same_syntactical_like_current */
T1 T581f69(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.same_syntactical_like_current */
T1 T569f48(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T569*)(C))->a6, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6361T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER.same_syntactical_like_current */
T1 T561f46(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T561*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6361T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_TUPLE_TYPE.same_syntactical_like_current */
T1 T181f59(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_GENERIC_CLASS_TYPE.same_syntactical_like_current */
T1 T174f50(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CLASS_TYPE.same_syntactical_like_current */
T1 T172f67(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CLASS.same_syntactical_like_current */
T1 T60f114(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.same_syntactical_formal_parameter_type */
T1 T957f30(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T6 t3;
	T0* t4;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T957*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t1 = (T957x22348(GE_void(l2)));
			t3 = (T957x22348(GE_void(a1)));
			R = ((t1)==(t3));
		} else {
			t4 = (T168x6426(GE_void(a3)));
			R = (T960x6360T0T0T0T0(GE_void(l1), a1, a2, t4, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_LIKE_CURRENT.same_syntactical_formal_parameter_type */
T1 T720f31(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_LIKE_FEATURE.same_syntactical_formal_parameter_type */
T1 T718f32(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_BIT_FEATURE.same_syntactical_formal_parameter_type */
T1 T582f34(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_BIT_N.same_syntactical_formal_parameter_type */
T1 T581f33(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.same_syntactical_formal_parameter_type */
T1 T569f25(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T6 t3;
	T0* t4;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T569*)(C))->a6, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t1 = (T957x22348(GE_void(l2)));
			t3 = (T957x22348(GE_void(a1)));
			R = ((t1)==(t3));
		} else {
			t4 = (T168x6426(GE_void(a3)));
			R = (T960x6360T0T0T0T0(GE_void(l1), a1, a2, t4, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER.same_syntactical_formal_parameter_type */
T1 T561f26(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T6 t3;
	T0* t4;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T561*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t1 = (T957x22348(GE_void(l2)));
			t3 = (T957x22348(GE_void(a1)));
			R = ((t1)==(t3));
		} else {
			t4 = (T168x6426(GE_void(a3)));
			R = (T960x6360T0T0T0T0(GE_void(l1), a1, a2, t4, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_TUPLE_TYPE.same_syntactical_formal_parameter_type */
T1 T181f37(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_GENERIC_CLASS_TYPE.same_syntactical_formal_parameter_type */
T1 T174f43(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CLASS_TYPE.same_syntactical_formal_parameter_type */
T1 T172f40(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CLASS.same_syntactical_formal_parameter_type */
T1 T60f107(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.shallow_base_type */
T0* T957f14(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T6 l7 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T60f104(GE_void(a1)));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		t3 = (((T60*)(GE_void(a1)))->a11);
		l1 = (T429f10(GE_void(t3), ((T957*)(C))->a2));
		l2 = l1;
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			l3 = (T60f52(GE_void(a1), a2));
			l4 = (((T60*)(GE_void(l3)))->a11);
			l7 = (((((T0*)(GE_void(l2)))->id==561)?((T561*)(l2))->a2:((T569*)(l2))->a6));
			t2 = ((l4)!=(EIF_VOID));
			if (t2) {
				t1 = (((T429*)(GE_void(l4)))->a1);
				t2 = (T6f13(&l7, t1));
			}
			if (t2) {
				l5 = (T429f7(GE_void(l4), l7));
				l6 = (((((T0*)(GE_void(l5)))->id==561)?T561f7(l5):((T569*)(l5))->a7));
				t2 = ((l6)!=(EIF_VOID));
				if (t2) {
					R = l6;
				} else {
					R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a45:((T56*)(a2))->a45));
				}
			} else {
				R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
			}
		} else {
			R = EIF_VOID;
			t2 = ((R)==(EIF_VOID));
			if (t2) {
				R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
			}
		}
	} else {
		R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
	}
	return R;
}

/* ET_LIKE_CURRENT.shallow_base_type */
T0* T720f14(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = a1;
	return R;
}

/* ET_LIKE_FEATURE.shallow_base_type */
T0* T718f24(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((((T718*)(C))->a3)==((T6)(GE_int32(0))));
	if (t1) {
		R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
	} else {
		t1 = (T718f36(C));
		if (t1) {
			l1 = (T60f52(GE_void(a1), a2));
			if (((T718*)(C))->a4) {
				l2 = (T60f67(GE_void(l1), ((T718*)(C))->a3));
			} else {
				l2 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			}
			t1 = ((l2)!=(EIF_VOID));
			if (t1) {
				l4 = (T201x12784(GE_void(l2)));
				l5 = (T718f38(C));
				t1 = ((l4)==(EIF_VOID));
				if (!(t1)) {
					t2 = (((T236*)(GE_void(l4)))->a3);
					t1 = (T6f1(&l5, t2));
				}
				if (t1) {
					R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
				} else {
					t3 = (T236f11(GE_void(l4), l5));
					t3 = (((((T0*)(GE_void(t3)))->id==242)?T242f4(t3):T964f4(t3)));
					R = (T167x6333T0T0(GE_void(t3), a1, a2));
				}
			} else {
				R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
			}
		} else {
			l1 = (T60f52(GE_void(a1), a2));
			l3 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			t1 = ((l3)!=(EIF_VOID));
			if (t1) {
				t3 = (T160x12783(GE_void(l3)));
				R = (T167x6333T0T0(GE_void(t3), a1, a2));
			} else {
				R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
			}
		}
	}
	return R;
}

/* ET_BIT_FEATURE.shallow_base_type */
T0* T582f26(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = (T582f14(C, a1, a2));
	return R;
}

/* ET_BIT_N.shallow_base_type */
T0* T581f26(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = (T581f16(C, a1, a2));
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.shallow_base_type */
T0* T569f16(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T6 l7 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T60f104(GE_void(a1)));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		t3 = (((T60*)(GE_void(a1)))->a11);
		l1 = (T429f10(GE_void(t3), ((T569*)(C))->a6));
		l2 = l1;
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			l3 = (T60f52(GE_void(a1), a2));
			l4 = (((T60*)(GE_void(l3)))->a11);
			l7 = (((((T0*)(GE_void(l2)))->id==561)?((T561*)(l2))->a2:((T569*)(l2))->a6));
			t2 = ((l4)!=(EIF_VOID));
			if (t2) {
				t1 = (((T429*)(GE_void(l4)))->a1);
				t2 = (T6f13(&l7, t1));
			}
			if (t2) {
				l5 = (T429f7(GE_void(l4), l7));
				l6 = (((((T0*)(GE_void(l5)))->id==561)?T561f7(l5):((T569*)(l5))->a7));
				t2 = ((l6)!=(EIF_VOID));
				if (t2) {
					R = l6;
				} else {
					R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a45:((T56*)(a2))->a45));
				}
			} else {
				R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
			}
		} else {
			R = EIF_VOID;
			t2 = ((R)==(EIF_VOID));
			if (t2) {
				R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
			}
		}
	} else {
		R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
	}
	return R;
}

/* ET_FORMAL_PARAMETER.shallow_base_type */
T0* T561f14(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T6 l7 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T60f104(GE_void(a1)));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		t3 = (((T60*)(GE_void(a1)))->a11);
		l1 = (T429f10(GE_void(t3), ((T561*)(C))->a2));
		l2 = l1;
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			l3 = (T60f52(GE_void(a1), a2));
			l4 = (((T60*)(GE_void(l3)))->a11);
			l7 = (((((T0*)(GE_void(l2)))->id==561)?((T561*)(l2))->a2:((T569*)(l2))->a6));
			t2 = ((l4)!=(EIF_VOID));
			if (t2) {
				t1 = (((T429*)(GE_void(l4)))->a1);
				t2 = (T6f13(&l7, t1));
			}
			if (t2) {
				l5 = (T429f7(GE_void(l4), l7));
				l6 = (((((T0*)(GE_void(l5)))->id==561)?T561f7(l5):((T569*)(l5))->a7));
				t2 = ((l6)!=(EIF_VOID));
				if (t2) {
					R = l6;
				} else {
					R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a45:((T56*)(a2))->a45));
				}
			} else {
				R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
			}
		} else {
			R = EIF_VOID;
			t2 = ((R)==(EIF_VOID));
			if (t2) {
				R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
			}
		}
	} else {
		R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
	}
	return R;
}

/* ET_TUPLE_TYPE.shallow_base_type */
T0* T181f26(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_GENERIC_CLASS_TYPE.shallow_base_type */
T0* T174f30(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CLASS_TYPE.shallow_base_type */
T0* T172f15(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CLASS.shallow_base_type */
T0* T60f86(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.same_syntactical_type */
T1 T957f6(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T957*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t3 = (T168x6426(GE_void(a3)));
			R = (T167x6360T0T0T0T0(GE_void(a1), l2, t3, a2, a4));
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6355T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_LIKE_CURRENT.same_syntactical_type */
T1 T720f6(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		R = (T167x6361T0T0T0T0(GE_void(a1), C, a3, a2, a4));
	}
	return R;
}

/* ET_LIKE_FEATURE.same_syntactical_type */
T1 T718f10(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		t1 = ((a2)==(a3));
	}
	if (t1) {
		R = EIF_TRUE;
	} else {
		R = (T167x6362T0T0T0T0(GE_void(a1), C, a3, a2, a4));
	}
	return R;
}

/* ET_BIT_FEATURE.same_syntactical_type */
T1 T582f12(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		R = (T167x6358T0T0T0T0(GE_void(a1), C, a3, a2, a4));
	}
	return R;
}

/* ET_BIT_N.same_syntactical_type */
T1 T581f14(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		R = (T167x6358T0T0T0T0(GE_void(a1), C, a3, a2, a4));
	}
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.same_syntactical_type */
T1 T569f24(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T569*)(C))->a6, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t3 = (T168x6426(GE_void(a3)));
			R = (T167x6360T0T0T0T0(GE_void(a1), l2, t3, a2, a4));
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6355T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER.same_syntactical_type */
T1 T561f20(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T561*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t3 = (T168x6426(GE_void(a3)));
			R = (T167x6360T0T0T0T0(GE_void(a1), l2, t3, a2, a4));
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6355T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_TUPLE_TYPE.same_syntactical_type */
T1 T181f22(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		t1 = ((a2)==(a3));
	}
	if (t1) {
		R = EIF_TRUE;
	} else {
		R = (T167x6363T0T0T0T0(GE_void(a1), C, a3, a2, a4));
	}
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.has_anchored_type */
T1 T957f20(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T60f101(GE_void(a1), a2));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T60f102(GE_void(a1), ((T957*)(C))->a2, a2));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T60f103(GE_void(a1)));
			R = (T960x6348T0T0(GE_void(l1), t3, a2));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_LIKE_CURRENT.has_anchored_type */
T1 T720f21(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	R = EIF_TRUE;
	return R;
}

/* ET_LIKE_FEATURE.has_anchored_type */
T1 T718f18(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	R = EIF_TRUE;
	return R;
}

/* ET_BIT_FEATURE.has_anchored_type */
T1 T582f20(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = (T582f38(C));
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = ((GE_void(l1), a1, a2, (T1)0));
	}
	return R;
}

/* ET_BIT_N.has_anchored_type */
T1 T581f21(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = (T581f36(C));
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = ((GE_void(l1), a1, a2, (T1)0));
	}
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.has_anchored_type */
T1 T569f26(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T60f101(GE_void(a1), a2));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T60f102(GE_void(a1), ((T569*)(C))->a6, a2));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T60f103(GE_void(a1)));
			R = (T960x6348T0T0(GE_void(l1), t3, a2));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER.has_anchored_type */
T1 T561f21(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T60f101(GE_void(a1), a2));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T60f102(GE_void(a1), ((T561*)(C))->a2, a2));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T60f103(GE_void(a1)));
			R = (T960x6348T0T0(GE_void(l1), t3, a2));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_TUPLE_TYPE.has_anchored_type */
T1 T181f24(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = ((T181*)(C))->a1;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (T173f18(GE_void(l1), a1, a2));
	}
	return R;
}

/* ET_ACTUAL_PARAMETER_LIST.has_anchored_type */
T1 T173f18(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	l2 = ((T6)((((T173*)(C))->a3)-((T6)(GE_int32(1)))));
	l1 = (T6)(GE_int32(0));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (((T713*)(GE_void(((T173*)(C))->a4)))->z2[l1]);
		t2 = (T177x6410(GE_void(t2)));
		t1 = (T167x6348T0T0(GE_void(t2), a1, a2));
		if (t1) {
			R = EIF_TRUE;
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_GENERIC_CLASS_TYPE.has_anchored_type */
T1 T174f28(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = ((T174*)(C))->a2;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (((((T0*)(GE_void(l1)))->id==173)?T173f18(l1, a1, a2):T429f20(l1, a1, a2)));
	}
	return R;
}

/* ET_FORMAL_PARAMETER_LIST.has_anchored_type */
T1 T429f20(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	l2 = ((T6)((((T429*)(C))->a1)-((T6)(GE_int32(1)))));
	l1 = (T6)(GE_int32(0));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (((T564*)(GE_void(((T429*)(C))->a2)))->z2[l1]);
		t2 = (((((T0*)(GE_void(t2)))->id==561)?T561f5(t2):T569f9(t2)));
		t1 = (((((T0*)(GE_void(t2)))->id==561)?T561f21(t2, a1, a2):T569f26(t2, a1, a2)));
		if (t1) {
			R = EIF_TRUE;
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_CLASS_TYPE.has_anchored_type */
T1 T172f20(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = (T172f5(C));
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = ((GE_void(l1), a1, a2, (T1)0));
	}
	return R;
}

/* ET_CLASS.has_anchored_type */
T1 T60f95(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = ((T60*)(C))->a11;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (T429f20(GE_void(l1), a1, a2));
	}
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.has_formal_types */
T1 T957f21(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T60f101(GE_void(a1), a2));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T60f102(GE_void(a1), ((T957*)(C))->a2, a2));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_TRUE;
		} else {
			t3 = (T60f103(GE_void(a1)));
			R = (T960x6350T0T0(GE_void(l1), t3, a2));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_LIKE_CURRENT.has_formal_types */
T1 T720f22(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	R = (T60f120(GE_void(a1), a2));
	return R;
}

/* ET_CLASS.context_has_formal_types */
T1 T60f120(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T60f96(C, C, a1));
	return R;
}

/* ET_LIKE_FEATURE.has_formal_types */
T1 T718f19(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((((T718*)(C))->a3)==((T6)(GE_int32(0))));
	if (t1) {
		R = EIF_FALSE;
	} else {
		t1 = (T718f36(C));
		if (t1) {
			l1 = (T60f113(GE_void(a1), a2));
			if (((T718*)(C))->a4) {
				l2 = (T60f67(GE_void(l1), ((T718*)(C))->a3));
			} else {
				l2 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			}
			t1 = ((l2)!=(EIF_VOID));
			if (t1) {
				l4 = (T201x12784(GE_void(l2)));
				l5 = (T718f38(C));
				t1 = ((l4)==(EIF_VOID));
				if (!(t1)) {
					t2 = (((T236*)(GE_void(l4)))->a3);
					t1 = (T6f1(&l5, t2));
				}
				if (t1) {
				} else {
					t3 = (T236f11(GE_void(l4), l5));
					t3 = (((((T0*)(GE_void(t3)))->id==242)?T242f4(t3):T964f4(t3)));
					R = (T167x6350T0T0(GE_void(t3), a1, a2));
				}
			} else {
				R = EIF_FALSE;
			}
		} else {
			l1 = (T60f113(GE_void(a1), a2));
			l3 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			t1 = ((l3)!=(EIF_VOID));
			if (t1) {
				t3 = (T160x12783(GE_void(l3)));
				R = (T167x6350T0T0(GE_void(t3), a1, a2));
			} else {
				R = EIF_FALSE;
			}
		}
	}
	return R;
}

/* ET_BIT_FEATURE.has_formal_types */
T1 T582f21(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = (T582f38(C));
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = ((GE_void(l1), a1, a2, (T1)0));
	}
	return R;
}

/* ET_BIT_N.has_formal_types */
T1 T581f22(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = (T581f36(C));
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = ((GE_void(l1), a1, a2, (T1)0));
	}
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.has_formal_types */
T1 T569f27(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T60f101(GE_void(a1), a2));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T60f102(GE_void(a1), ((T569*)(C))->a6, a2));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_TRUE;
		} else {
			t3 = (T60f103(GE_void(a1)));
			R = (T960x6350T0T0(GE_void(l1), t3, a2));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER.has_formal_types */
T1 T561f22(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T60f101(GE_void(a1), a2));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T60f102(GE_void(a1), ((T561*)(C))->a2, a2));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_TRUE;
		} else {
			t3 = (T60f103(GE_void(a1)));
			R = (T960x6350T0T0(GE_void(l1), t3, a2));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_TUPLE_TYPE.has_formal_types */
T1 T181f25(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = ((T181*)(C))->a1;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (T173f19(GE_void(l1), a1, a2));
	}
	return R;
}

/* ET_ACTUAL_PARAMETER_LIST.has_formal_types */
T1 T173f19(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	l2 = ((T6)((((T173*)(C))->a3)-((T6)(GE_int32(1)))));
	l1 = (T6)(GE_int32(0));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (((T713*)(GE_void(((T173*)(C))->a4)))->z2[l1]);
		t2 = (T177x6410(GE_void(t2)));
		t1 = (T167x6350T0T0(GE_void(t2), a1, a2));
		if (t1) {
			R = EIF_TRUE;
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_GENERIC_CLASS_TYPE.has_formal_types */
T1 T174f29(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = ((T174*)(C))->a2;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (((((T0*)(GE_void(l1)))->id==173)?T173f19(l1, a1, a2):T429f21(l1, a1, a2)));
	}
	return R;
}

/* ET_FORMAL_PARAMETER_LIST.has_formal_types */
T1 T429f21(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	l2 = ((T6)((((T429*)(C))->a1)-((T6)(GE_int32(1)))));
	l1 = (T6)(GE_int32(0));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (((T564*)(GE_void(((T429*)(C))->a2)))->z2[l1]);
		t2 = (((((T0*)(GE_void(t2)))->id==561)?T561f5(t2):T569f9(t2)));
		t1 = (((((T0*)(GE_void(t2)))->id==561)?T561f22(t2, a1, a2):T569f27(t2, a1, a2)));
		if (t1) {
			R = EIF_TRUE;
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_CLASS_TYPE.has_formal_types */
T1 T172f21(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = (T172f5(C));
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = ((GE_void(l1), a1, a2, (T1)0));
	}
	return R;
}

/* ET_CLASS.has_formal_types */
T1 T60f96(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = ((T60*)(C))->a11;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (T429f21(GE_void(l1), a1, a2));
	}
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.direct_base_class */
T0* T957f12(T0* C, T0* a1)
{
	T0* R = 0;
	return R;
}

/* ET_LIKE_CURRENT.direct_base_class */
T0* T720f11(T0* C, T0* a1)
{
	T0* R = 0;
	return R;
}

/* ET_LIKE_FEATURE.direct_base_class */
T0* T718f13(T0* C, T0* a1)
{
	T0* R = 0;
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.direct_base_class */
T0* T569f13(T0* C, T0* a1)
{
	T0* R = 0;
	return R;
}

/* ET_FORMAL_PARAMETER.direct_base_class */
T0* T561f11(T0* C, T0* a1)
{
	T0* R = 0;
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.same_named_formal_parameter_type */
T1 T957f29(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T6 t3;
	T0* t4;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T957*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t1 = (T957x22348(GE_void(l2)));
			t3 = (T957x22348(GE_void(a1)));
			R = ((t1)==(t3));
		} else {
			t4 = (T168x6426(GE_void(a3)));
			R = (T960x6366T0T0T0T0(GE_void(l1), a1, a2, t4, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_LIKE_CURRENT.same_named_formal_parameter_type */
T1 T720f30(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	R = (T168x6449T0T0T0(GE_void(a3), a1, a2, a4));
	return R;
}

/* ET_LIKE_FEATURE.same_named_formal_parameter_type */
T1 T718f31(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((((T718*)(C))->a3)==((T6)(GE_int32(0))));
	if (t1) {
		R = EIF_FALSE;
	} else {
		t1 = (T718f36(C));
		if (t1) {
			l1 = (T168x6428T0(GE_void(a3), a4));
			if (((T718*)(C))->a4) {
				l2 = (T60f67(GE_void(l1), ((T718*)(C))->a3));
			} else {
				l2 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			}
			t1 = ((l2)!=(EIF_VOID));
			if (t1) {
				l4 = (T201x12784(GE_void(l2)));
				l5 = (T718f38(C));
				t1 = ((l4)==(EIF_VOID));
				if (!(t1)) {
					t2 = (((T236*)(GE_void(l4)))->a3);
					t1 = (T6f1(&l5, t2));
				}
				if (t1) {
					R = EIF_FALSE;
				} else {
					t3 = (T236f11(GE_void(l4), l5));
					t3 = (((((T0*)(GE_void(t3)))->id==242)?T242f4(t3):T964f4(t3)));
					R = (T167x6366T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
				}
			} else {
				R = EIF_FALSE;
			}
		} else {
			l1 = (T168x6428T0(GE_void(a3), a4));
			l3 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			t1 = ((l3)!=(EIF_VOID));
			if (t1) {
				t3 = (T160x12783(GE_void(l3)));
				R = (T167x6366T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
			} else {
				R = EIF_FALSE;
			}
		}
	}
	return R;
}

/* ET_BIT_FEATURE.same_named_formal_parameter_type */
T1 T582f33(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_BIT_N.same_named_formal_parameter_type */
T1 T581f32(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.same_named_formal_parameter_type */
T1 T569f23(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T6 t3;
	T0* t4;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T569*)(C))->a6, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t1 = (T957x22348(GE_void(l2)));
			t3 = (T957x22348(GE_void(a1)));
			R = ((t1)==(t3));
		} else {
			t4 = (T168x6426(GE_void(a3)));
			R = (T960x6366T0T0T0T0(GE_void(l1), a1, a2, t4, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER.same_named_formal_parameter_type */
T1 T561f25(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T6 t3;
	T0* t4;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T561*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t1 = (T957x22348(GE_void(l2)));
			t3 = (T957x22348(GE_void(a1)));
			R = ((t1)==(t3));
		} else {
			t4 = (T168x6426(GE_void(a3)));
			R = (T960x6366T0T0T0T0(GE_void(l1), a1, a2, t4, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_TUPLE_TYPE.same_named_formal_parameter_type */
T1 T181f36(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_GENERIC_CLASS_TYPE.same_named_formal_parameter_type */
T1 T174f42(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CLASS_TYPE.same_named_formal_parameter_type */
T1 T172f39(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CLASS.same_named_formal_parameter_type */
T1 T60f106(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.same_named_class_type */
T1 T957f25(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T957*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6365T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_LIKE_CURRENT.same_named_class_type */
T1 T720f26(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	R = (T168x6448T0T0T0(GE_void(a3), a1, a2, a4));
	return R;
}

/* ET_LIKE_FEATURE.same_named_class_type */
T1 T718f28(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((((T718*)(C))->a3)==((T6)(GE_int32(0))));
	if (t1) {
		R = EIF_FALSE;
	} else {
		t1 = (T718f36(C));
		if (t1) {
			l1 = (T168x6428T0(GE_void(a3), a4));
			if (((T718*)(C))->a4) {
				l2 = (T60f67(GE_void(l1), ((T718*)(C))->a3));
			} else {
				l2 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			}
			t1 = ((l2)!=(EIF_VOID));
			if (t1) {
				l4 = (T201x12784(GE_void(l2)));
				l5 = (T718f38(C));
				t1 = ((l4)==(EIF_VOID));
				if (!(t1)) {
					t2 = (((T236*)(GE_void(l4)))->a3);
					t1 = (T6f1(&l5, t2));
				}
				if (t1) {
					R = EIF_FALSE;
				} else {
					t3 = (T236f11(GE_void(l4), l5));
					t3 = (((((T0*)(GE_void(t3)))->id==242)?T242f4(t3):T964f4(t3)));
					R = (T167x6365T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
				}
			} else {
				R = EIF_FALSE;
			}
		} else {
			l1 = (T168x6428T0(GE_void(a3), a4));
			l3 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			t1 = ((l3)!=(EIF_VOID));
			if (t1) {
				t3 = (T160x12783(GE_void(l3)));
				R = (T167x6365T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
			} else {
				R = EIF_FALSE;
			}
		}
	}
	return R;
}

/* ET_BIT_FEATURE.same_named_class_type */
T1 T582f30(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_BIT_N.same_named_class_type */
T1 T581f30(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.same_named_class_type */
T1 T569f43(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T569*)(C))->a6, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6365T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER.same_named_class_type */
T1 T561f41(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T561*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6365T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_TUPLE_TYPE.same_named_class_type */
T1 T181f20(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_GENERIC_CLASS_TYPE.same_named_class_type */
T1 T174f35(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T1 t2;
	T1 t3;
	T1 t4;
	l2 = (T172x6330T0(a1, a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a5:((T56*)(a4))->a5));
	t2 = ((l2)==(t1));
	if (t2) {
		R = EIF_FALSE;
	} else {
		t2 = ((a1)==(C));
		if (t2) {
			t2 = ((a2)==(a3));
		}
		if (t2) {
			R = EIF_TRUE;
		} else {
			t2 = ((((T174*)(C))->a1)==(l2));
			if (t2) {
				t3 = (T174f6(C));
				t4 = (T172x6276(a1));
				t2 = ((t3)==(t4));
			}
			if (t2) {
				t3 = (T174f25(C));
				t4 = (T172x6243(a1));
				t2 = ((t3)==(t4));
			}
			if (t2) {
				t2 = (T172x6273(a1));
				t2 = ((T1)(!(t2)));
				if (t2) {
					t2 = (T174f12(C));
					R = ((T1)(!(t2)));
				} else {
					t2 = (T174f12(C));
					t2 = ((T1)(!(t2)));
					if (t2) {
					} else {
						l1 = (T172x6265(a1));
						R = (((((T0*)(GE_void(((T174*)(C))->a2)))->id==173)?T173f16(((T174*)(C))->a2, l1, a2, a3, a4):T429f18(((T174*)(C))->a2, l1, a2, a3, a4)));
					}
				}
			}
		}
	}
	return R;
}

/* ET_FORMAL_PARAMETER_LIST.same_named_types */
T1 T429f18(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	T0* t4;
	t1 = ((a1)==(C));
	if (t1) {
		t1 = ((a2)==(a3));
	}
	if (t1) {
		R = EIF_TRUE;
	} else {
		t2 = (((((T0*)(GE_void(a1)))->id==429)?((T429*)(a1))->a1:((T173*)(a1))->a3));
		t1 = ((t2)!=(((T429*)(C))->a1));
		if (t1) {
			R = EIF_FALSE;
		} else {
			R = EIF_TRUE;
			l3 = (((((T0*)(GE_void(a1)))->id==429)?((T429*)(a1))->a2:((T173*)(a1))->a4));
			l2 = ((T6)((((T429*)(C))->a1)-((T6)(GE_int32(1)))));
			l1 = (T6)(GE_int32(0));
			t1 = (T6f1(&l1, l2));
			while (!(t1)) {
				t3 = (((T564*)(GE_void(((T429*)(C))->a2)))->z2[l1]);
				t3 = (((((T0*)(GE_void(t3)))->id==561)?T561f5(t3):T569f9(t3)));
				t4 = (((((T0*)(GE_void(l3)))->id==564)?((T564*)(l3))->z2[l1]:((T713*)(l3))->z2[l1]));
				t4 = (T177x6410(GE_void(t4)));
				t1 = (((((T0*)(GE_void(t3)))->id==561)?T561f19(t3, t4, a2, a3, a4):T569f22(t3, t4, a2, a3, a4)));
				t1 = ((T1)(!(t1)));
				if (t1) {
					R = EIF_FALSE;
					l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				}
				t1 = (T6f1(&l1, l2));
			}
		}
	}
	return R;
}

/* ET_ACTUAL_PARAMETER_LIST.same_named_types */
T1 T173f16(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	T0* t4;
	t1 = ((a1)==(C));
	if (t1) {
		t1 = ((a2)==(a3));
	}
	if (t1) {
		R = EIF_TRUE;
	} else {
		t2 = (((((T0*)(GE_void(a1)))->id==429)?((T429*)(a1))->a1:((T173*)(a1))->a3));
		t1 = ((t2)!=(((T173*)(C))->a3));
		if (t1) {
			R = EIF_FALSE;
		} else {
			R = EIF_TRUE;
			l3 = (((((T0*)(GE_void(a1)))->id==429)?((T429*)(a1))->a2:((T173*)(a1))->a4));
			l2 = ((T6)((((T173*)(C))->a3)-((T6)(GE_int32(1)))));
			l1 = (T6)(GE_int32(0));
			t1 = (T6f1(&l1, l2));
			while (!(t1)) {
				t3 = (((T713*)(GE_void(((T173*)(C))->a4)))->z2[l1]);
				t3 = (T177x6410(GE_void(t3)));
				t4 = (((((T0*)(GE_void(l3)))->id==564)?((T564*)(l3))->z2[l1]:((T713*)(l3))->z2[l1]));
				t4 = (T177x6410(GE_void(t4)));
				t1 = (T167x6356T0T0T0T0(GE_void(t3), t4, a2, a3, a4));
				t1 = ((T1)(!(t1)));
				if (t1) {
					R = EIF_FALSE;
					l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				}
				t1 = (T6f1(&l1, l2));
			}
		}
	}
	return R;
}

/* ET_CLASS_TYPE.same_named_class_type */
T1 T172f32(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T1 t2;
	T1 t3;
	T1 t4;
	l2 = (T172x6330T0(a1, a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a5:((T56*)(a4))->a5));
	t2 = ((l2)==(t1));
	if (t2) {
		R = EIF_FALSE;
	} else {
		t2 = ((a1)==(C));
		if (t2) {
			t2 = ((a2)==(a3));
		}
		if (t2) {
			R = EIF_TRUE;
		} else {
			t2 = ((((T172*)(C))->a3)==(l2));
			if (t2) {
				t3 = (T172f22(C));
				t4 = (T172x6276(a1));
				t2 = ((t3)==(t4));
			}
			if (t2) {
				t3 = (T172f23(C));
				t4 = (T172x6243(a1));
				t2 = ((t3)==(t4));
			}
			if (t2) {
				t2 = (T172x6273(a1));
				t2 = ((T1)(!(t2)));
				if (t2) {
					t2 = (T172f24(C));
					R = ((T1)(!(t2)));
				} else {
					t2 = (T172f24(C));
					t2 = ((T1)(!(t2)));
					if (t2) {
					} else {
						l1 = (T172x6265(a1));
						t1 = (T172f5(C));
						R = ((GE_void(t1), l1, a2, a3, a4, (T1)0));
					}
				}
			}
		}
	}
	return R;
}

/* ET_CLASS.same_named_class_type */
T1 T60f90(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T1 t2;
	T1 t3;
	T1 t4;
	l2 = (T172x6330T0(a1, a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a5:((T56*)(a4))->a5));
	t2 = ((l2)==(t1));
	if (t2) {
		R = EIF_FALSE;
	} else {
		t2 = ((a1)==(C));
		if (t2) {
			t2 = ((a2)==(a3));
		}
		if (t2) {
			R = EIF_TRUE;
		} else {
			t2 = ((((T60*)(C))->a8)==(l2));
			if (t2) {
				t3 = (T60f64(C));
				t4 = (T172x6276(a1));
				t2 = ((t3)==(t4));
			}
			if (t2) {
				t3 = (T60f93(C));
				t4 = (T172x6243(a1));
				t2 = ((t3)==(t4));
			}
			if (t2) {
				t2 = (T172x6273(a1));
				t2 = ((T1)(!(t2)));
				if (t2) {
					t2 = (T60f73(C));
					R = ((T1)(!(t2)));
				} else {
					t2 = (T60f73(C));
					t2 = ((T1)(!(t2)));
					if (t2) {
					} else {
						l1 = (T172x6265(a1));
						R = (T429f18(GE_void(((T60*)(C))->a11), l1, a2, a3, a4));
					}
				}
			}
		}
	}
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.same_named_tuple_type */
T1 T957f26(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T957*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6367T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_LIKE_CURRENT.same_named_tuple_type */
T1 T720f27(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	R = (T168x6450T0T0T0(GE_void(a3), a1, a2, a4));
	return R;
}

/* ET_LIKE_FEATURE.same_named_tuple_type */
T1 T718f29(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((((T718*)(C))->a3)==((T6)(GE_int32(0))));
	if (t1) {
		R = EIF_FALSE;
	} else {
		t1 = (T718f36(C));
		if (t1) {
			l1 = (T168x6428T0(GE_void(a3), a4));
			if (((T718*)(C))->a4) {
				l2 = (T60f67(GE_void(l1), ((T718*)(C))->a3));
			} else {
				l2 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			}
			t1 = ((l2)!=(EIF_VOID));
			if (t1) {
				l4 = (T201x12784(GE_void(l2)));
				l5 = (T718f38(C));
				t1 = ((l4)==(EIF_VOID));
				if (!(t1)) {
					t2 = (((T236*)(GE_void(l4)))->a3);
					t1 = (T6f1(&l5, t2));
				}
				if (t1) {
					R = EIF_FALSE;
				} else {
					t3 = (T236f11(GE_void(l4), l5));
					t3 = (((((T0*)(GE_void(t3)))->id==242)?T242f4(t3):T964f4(t3)));
					R = (T167x6367T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
				}
			} else {
				R = EIF_FALSE;
			}
		} else {
			l1 = (T168x6428T0(GE_void(a3), a4));
			l3 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			t1 = ((l3)!=(EIF_VOID));
			if (t1) {
				t3 = (T160x12783(GE_void(l3)));
				R = (T167x6367T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
			} else {
				R = EIF_FALSE;
			}
		}
	}
	return R;
}

/* ET_BIT_FEATURE.same_named_tuple_type */
T1 T582f31(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_BIT_N.same_named_tuple_type */
T1 T581f31(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.same_named_tuple_type */
T1 T569f44(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T569*)(C))->a6, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6367T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER.same_named_tuple_type */
T1 T561f42(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T561*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6367T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_TUPLE_TYPE.same_named_tuple_type */
T1 T181f30(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		t1 = ((a2)==(a3));
	}
	if (t1) {
		R = EIF_TRUE;
	} else {
		l1 = (((T181*)(a1))->a1);
		t1 = ((l1)==(EIF_VOID));
		if (t1) {
			t1 = ((((T181*)(C))->a1)==(EIF_VOID));
			if (!(t1)) {
				R = (T173f10(GE_void(((T181*)(C))->a1)));
			} else {
				R = EIF_TRUE;
			}
		} else {
			t1 = ((((T181*)(C))->a1)==(EIF_VOID));
			if (t1) {
				R = (T173f10(GE_void(l1)));
			} else {
				R = (T173f16(GE_void(((T181*)(C))->a1), l1, a2, a3, a4));
			}
		}
	}
	return R;
}

/* ET_GENERIC_CLASS_TYPE.same_named_tuple_type */
T1 T174f36(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CLASS_TYPE.same_named_tuple_type */
T1 T172f33(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CLASS.same_named_tuple_type */
T1 T60f99(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.same_named_bit_type */
T1 T957f32(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T957*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6364T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_LIKE_CURRENT.same_named_bit_type */
T1 T720f33(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	R = (T168x6447T0T0T0(GE_void(a3), a1, a2, a4));
	return R;
}

/* ET_LIKE_FEATURE.same_named_bit_type */
T1 T718f30(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((((T718*)(C))->a3)==((T6)(GE_int32(0))));
	if (t1) {
		R = EIF_FALSE;
	} else {
		t1 = (T718f36(C));
		if (t1) {
			l1 = (T168x6428T0(GE_void(a3), a4));
			if (((T718*)(C))->a4) {
				l2 = (T60f67(GE_void(l1), ((T718*)(C))->a3));
			} else {
				l2 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			}
			t1 = ((l2)!=(EIF_VOID));
			if (t1) {
				l4 = (T201x12784(GE_void(l2)));
				l5 = (T718f38(C));
				t1 = ((l4)==(EIF_VOID));
				if (!(t1)) {
					t2 = (((T236*)(GE_void(l4)))->a3);
					t1 = (T6f1(&l5, t2));
				}
				if (t1) {
					R = EIF_FALSE;
				} else {
					t3 = (T236f11(GE_void(l4), l5));
					t3 = (((((T0*)(GE_void(t3)))->id==242)?T242f4(t3):T964f4(t3)));
					R = (T167x6364T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
				}
			} else {
				R = EIF_FALSE;
			}
		} else {
			l1 = (T168x6428T0(GE_void(a3), a4));
			l3 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			t1 = ((l3)!=(EIF_VOID));
			if (t1) {
				t3 = (T160x12783(GE_void(l3)));
				R = (T167x6364T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
			} else {
				R = EIF_FALSE;
			}
		}
	}
	return R;
}

/* ET_BIT_FEATURE.same_named_bit_type */
T1 T582f32(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	R = (T582f44(C, a1, a2, a3, a4));
	return R;
}

/* ET_BIT_N.same_named_bit_type */
T1 T581f42(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	R = (T581f49(C, a1, a2, a3, a4));
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.same_named_bit_type */
T1 T569f46(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T569*)(C))->a6, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6364T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER.same_named_bit_type */
T1 T561f44(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T561*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6364T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_TUPLE_TYPE.same_named_bit_type */
T1 T181f38(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_GENERIC_CLASS_TYPE.same_named_bit_type */
T1 T174f45(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CLASS_TYPE.same_named_bit_type */
T1 T172f41(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CLASS.same_named_bit_type */
T1 T60f109(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.reference_conforms_from_class_type */
T1 T957f45(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	T0* t4;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T957*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t2 = (T957f39(C, a3, a4));
			if (t2) {
				t3 = (T172x6330T0(a1, a4));
				t4 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a3:((T56*)(a4))->a3));
				t2 = ((t3)==(t4));
			}
			if (t2) {
				R = EIF_TRUE;
			} else {
				R = EIF_FALSE;
			}
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6379T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_LIKE_CURRENT.reference_conforms_from_class_type */
T1 T720f45(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	R = (T168x6463T0T0T0(GE_void(a3), a1, a2, a4));
	return R;
}

/* ET_LIKE_FEATURE.reference_conforms_from_class_type */
T1 T718f44(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((((T718*)(C))->a3)==((T6)(GE_int32(0))));
	if (t1) {
		R = EIF_FALSE;
	} else {
		t1 = (T718f36(C));
		if (t1) {
			l1 = (T168x6428T0(GE_void(a3), a4));
			if (((T718*)(C))->a4) {
				l2 = (T60f67(GE_void(l1), ((T718*)(C))->a3));
			} else {
				l2 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			}
			t1 = ((l2)!=(EIF_VOID));
			if (t1) {
				l4 = (T201x12784(GE_void(l2)));
				l5 = (T718f38(C));
				t1 = ((l4)==(EIF_VOID));
				if (!(t1)) {
					t2 = (((T236*)(GE_void(l4)))->a3);
					t1 = (T6f1(&l5, t2));
				}
				if (t1) {
					R = EIF_FALSE;
				} else {
					t3 = (T236f11(GE_void(l4), l5));
					t3 = (((((T0*)(GE_void(t3)))->id==242)?T242f4(t3):T964f4(t3)));
					R = (T167x6379T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
				}
			} else {
				R = EIF_FALSE;
			}
		} else {
			l1 = (T168x6428T0(GE_void(a3), a4));
			l3 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			t1 = ((l3)!=(EIF_VOID));
			if (t1) {
				t3 = (T160x12783(GE_void(l3)));
				R = (T167x6379T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
			} else {
				R = EIF_FALSE;
			}
		}
	}
	return R;
}

/* ET_BIT_FEATURE.reference_conforms_from_class_type */
T1 T582f62(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_BIT_N.reference_conforms_from_class_type */
T1 T581f61(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.reference_conforms_from_class_type */
T1 T569f49(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	T0* t4;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T569*)(C))->a6, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t2 = (T569f28(C, a3, a4));
			if (t2) {
				t3 = (T172x6330T0(a1, a4));
				t4 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a3:((T56*)(a4))->a3));
				t2 = ((t3)==(t4));
			}
			if (t2) {
				R = EIF_TRUE;
			} else {
				R = EIF_FALSE;
			}
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6379T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER.reference_conforms_from_class_type */
T1 T561f47(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	T0* t4;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T561*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t2 = (T561f23(C, a3, a4));
			if (t2) {
				t3 = (T172x6330T0(a1, a4));
				t4 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a3:((T56*)(a4))->a3));
				t2 = ((t3)==(t4));
			}
			if (t2) {
				R = EIF_TRUE;
			} else {
				R = EIF_FALSE;
			}
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6379T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_TUPLE_TYPE.reference_conforms_from_class_type */
T1 T181f56(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	l1 = (T172x6330T0(GE_void(a1), a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a3:((T56*)(a4))->a3));
	t2 = ((l1)==(t1));
	if (t2) {
		R = EIF_TRUE;
	} else {
		t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a80:((T56*)(a4))->a50));
		t2 = ((l1)==(t1));
		if (t2) {
			t3 = (T181f10(C));
			t2 = ((t3)==((T6)(GE_int32(0))));
		}
		if (t2) {
			R = EIF_TRUE;
		}
	}
	return R;
}

/* ET_GENERIC_CLASS_TYPE.reference_conforms_from_class_type */
T1 T174f61(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T1 t2;
	l1 = (T172x6330T0(GE_void(a1), a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a5:((T56*)(a4))->a5));
	t2 = ((l1)==(t1));
	if (t2) {
		R = EIF_FALSE;
	} else {
		t2 = ((a1)==(C));
		if (t2) {
			t2 = ((a2)==(a3));
		}
		if (t2) {
			R = EIF_TRUE;
		} else {
			t2 = ((((T174*)(C))->a1)==(l1));
			if (t2) {
				t2 = (T172x6273(GE_void(a1)));
				t2 = ((T1)(!(t2)));
				if (t2) {
					t2 = (T174f12(C));
					R = ((T1)(!(t2)));
				} else {
					t2 = (T174f12(C));
					t2 = ((T1)(!(t2)));
					if (t2) {
						R = EIF_FALSE;
					} else {
						l3 = (T172x6265(GE_void(a1)));
						t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a37:((T56*)(a4))->a37));
						t2 = ((((T174*)(C))->a1)==(t1));
						if (!(t2)) {
							t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a83:((T56*)(a4))->a51));
							t2 = ((((T174*)(C))->a1)==(t1));
						}
						if (!(t2)) {
							t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a85:((T56*)(a4))->a52));
							t2 = ((((T174*)(C))->a1)==(t1));
						}
						if (!(t2)) {
							t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a84:((T56*)(a4))->a53));
							t2 = ((((T174*)(C))->a1)==(t1));
						}
						if (t2) {
							R = (((((T0*)(GE_void(l3)))->id==429)?T429f11(l3, ((T174*)(C))->a2, a3, a2, a4):T173f9(l3, ((T174*)(C))->a2, a3, a2, a4)));
						} else {
							R = (((((T0*)(GE_void(l3)))->id==429)?T429f11(l3, ((T174*)(C))->a2, a3, a2, a4):T173f9(l3, ((T174*)(C))->a2, a3, a2, a4)));
						}
					}
				}
			} else {
				t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a3:((T56*)(a4))->a3));
				t2 = ((l1)==(t1));
				if (t2) {
					R = EIF_TRUE;
				} else {
					t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a64:((T56*)(a4))->a55));
					T60f164(GE_void(l1), t1);
					l2 = (T60f58(GE_void(l1), C, a4));
					t2 = ((l2)!=(EIF_VOID));
					if (t2) {
						l3 = (T172x6265(GE_void(a1)));
						t2 = ((l3)!=(EIF_VOID));
						if (t2) {
							l2 = (T158x6424T0(GE_void(l2), l3));
						}
						R = (T158x6377T0T0T0T0(GE_void(l2), C, a3, a2, a4));
					}
				}
			}
		}
	}
	return R;
}

/* ET_ACTUAL_PARAMETER_LIST.conforms_to_types */
T1 T173f9(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	T0* t4;
	t1 = ((a1)==(C));
	if (t1) {
		t1 = ((a2)==(a3));
	}
	if (t1) {
		R = EIF_TRUE;
	} else {
		t2 = (((((T0*)(GE_void(a1)))->id==173)?((T173*)(a1))->a3:((T429*)(a1))->a1));
		t1 = ((t2)!=(((T173*)(C))->a3));
		if (t1) {
			R = EIF_FALSE;
		} else {
			R = EIF_TRUE;
			l3 = (((((T0*)(GE_void(a1)))->id==173)?((T173*)(a1))->a4:((T429*)(a1))->a2));
			l2 = ((T6)((((T173*)(C))->a3)-((T6)(GE_int32(1)))));
			l1 = (T6)(GE_int32(0));
			t1 = (T6f1(&l1, l2));
			while (!(t1)) {
				t3 = (((T713*)(GE_void(((T173*)(C))->a4)))->z2[l1]);
				t3 = (T177x6410(GE_void(t3)));
				t4 = (((((T0*)(GE_void(l3)))->id==564)?((T564*)(l3))->z2[l1]:((T713*)(l3))->z2[l1]));
				t4 = (T177x6410(GE_void(t4)));
				t1 = (T167x6372T0T0T0T0(GE_void(t3), t4, a2, a3, a4));
				t1 = ((T1)(!(t1)));
				if (t1) {
					R = EIF_FALSE;
					l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				}
				t1 = (T6f1(&l1, l2));
			}
		}
	}
	return R;
}

/* ET_FORMAL_PARAMETER_LIST.conforms_to_types */
T1 T429f11(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	T0* t4;
	t1 = ((a1)==(C));
	if (t1) {
		t1 = ((a2)==(a3));
	}
	if (t1) {
		R = EIF_TRUE;
	} else {
		t2 = (((((T0*)(GE_void(a1)))->id==173)?((T173*)(a1))->a3:((T429*)(a1))->a1));
		t1 = ((t2)!=(((T429*)(C))->a1));
		if (t1) {
			R = EIF_FALSE;
		} else {
			R = EIF_TRUE;
			l3 = (((((T0*)(GE_void(a1)))->id==173)?((T173*)(a1))->a4:((T429*)(a1))->a2));
			l2 = ((T6)((((T429*)(C))->a1)-((T6)(GE_int32(1)))));
			l1 = (T6)(GE_int32(0));
			t1 = (T6f1(&l1, l2));
			while (!(t1)) {
				t3 = (((T564*)(GE_void(((T429*)(C))->a2)))->z2[l1]);
				t3 = (((((T0*)(GE_void(t3)))->id==561)?T561f5(t3):T569f9(t3)));
				t4 = (((((T0*)(GE_void(l3)))->id==564)?((T564*)(l3))->z2[l1]:((T713*)(l3))->z2[l1]));
				t4 = (T177x6410(GE_void(t4)));
				t1 = (((((T0*)(GE_void(t3)))->id==561)?T561f18(t3, t4, a2, a3, a4):T569f21(t3, t4, a2, a3, a4)));
				t1 = ((T1)(!(t1)));
				if (t1) {
					R = EIF_FALSE;
					l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				}
				t1 = (T6f1(&l1, l2));
			}
		}
	}
	return R;
}

/* ET_CLASS_TYPE.reference_conforms_from_class_type */
T1 T172f57(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T1 t2;
	l1 = (T172x6330T0(GE_void(a1), a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a5:((T56*)(a4))->a5));
	t2 = ((l1)==(t1));
	if (t2) {
		R = EIF_FALSE;
	} else {
		t2 = ((a1)==(C));
		if (t2) {
			t2 = ((a2)==(a3));
		}
		if (t2) {
			R = EIF_TRUE;
		} else {
			t2 = ((((T172*)(C))->a3)==(l1));
			if (t2) {
				t2 = (T172x6273(GE_void(a1)));
				t2 = ((T1)(!(t2)));
				if (t2) {
					t2 = (T172f24(C));
					R = ((T1)(!(t2)));
				} else {
					t2 = (T172f24(C));
					t2 = ((T1)(!(t2)));
					if (t2) {
						R = EIF_FALSE;
					} else {
						l3 = (T172x6265(GE_void(a1)));
						t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a37:((T56*)(a4))->a37));
						t2 = ((((T172*)(C))->a3)==(t1));
						if (!(t2)) {
							t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a83:((T56*)(a4))->a51));
							t2 = ((((T172*)(C))->a3)==(t1));
						}
						if (!(t2)) {
							t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a85:((T56*)(a4))->a52));
							t2 = ((((T172*)(C))->a3)==(t1));
						}
						if (!(t2)) {
							t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a84:((T56*)(a4))->a53));
							t2 = ((((T172*)(C))->a3)==(t1));
						}
						if (t2) {
							t1 = (T172f5(C));
							R = (((((T0*)(GE_void(l3)))->id==429)?T429f11(l3, t1, a3, a2, a4):T173f9(l3, t1, a3, a2, a4)));
						} else {
							t1 = (T172f5(C));
							R = (((((T0*)(GE_void(l3)))->id==429)?T429f11(l3, t1, a3, a2, a4):T173f9(l3, t1, a3, a2, a4)));
						}
					}
				}
			} else {
				t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a3:((T56*)(a4))->a3));
				t2 = ((l1)==(t1));
				if (t2) {
					R = EIF_TRUE;
				} else {
					t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a64:((T56*)(a4))->a55));
					T60f164(GE_void(l1), t1);
					l2 = (T60f58(GE_void(l1), C, a4));
					t2 = ((l2)!=(EIF_VOID));
					if (t2) {
						l3 = (T172x6265(GE_void(a1)));
						t2 = ((l3)!=(EIF_VOID));
						if (t2) {
							l2 = (T158x6424T0(GE_void(l2), l3));
						}
						R = (T158x6377T0T0T0T0(GE_void(l2), C, a3, a2, a4));
					}
				}
			}
		}
	}
	return R;
}

/* ET_CLASS.reference_conforms_from_class_type */
T1 T60f137(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T1 t2;
	l1 = (T172x6330T0(GE_void(a1), a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a5:((T56*)(a4))->a5));
	t2 = ((l1)==(t1));
	if (t2) {
		R = EIF_FALSE;
	} else {
		t2 = ((a1)==(C));
		if (t2) {
			t2 = ((a2)==(a3));
		}
		if (t2) {
			R = EIF_TRUE;
		} else {
			t2 = ((((T60*)(C))->a8)==(l1));
			if (t2) {
				t2 = (T172x6273(GE_void(a1)));
				t2 = ((T1)(!(t2)));
				if (t2) {
					t2 = (T60f73(C));
					R = ((T1)(!(t2)));
				} else {
					t2 = (T60f73(C));
					t2 = ((T1)(!(t2)));
					if (t2) {
						R = EIF_FALSE;
					} else {
						l3 = (T172x6265(GE_void(a1)));
						t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a37:((T56*)(a4))->a37));
						t2 = ((((T60*)(C))->a8)==(t1));
						if (!(t2)) {
							t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a83:((T56*)(a4))->a51));
							t2 = ((((T60*)(C))->a8)==(t1));
						}
						if (!(t2)) {
							t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a85:((T56*)(a4))->a52));
							t2 = ((((T60*)(C))->a8)==(t1));
						}
						if (!(t2)) {
							t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a84:((T56*)(a4))->a53));
							t2 = ((((T60*)(C))->a8)==(t1));
						}
						if (t2) {
							R = (((((T0*)(GE_void(l3)))->id==429)?T429f11(l3, ((T60*)(C))->a11, a3, a2, a4):T173f9(l3, ((T60*)(C))->a11, a3, a2, a4)));
						} else {
							R = (((((T0*)(GE_void(l3)))->id==429)?T429f11(l3, ((T60*)(C))->a11, a3, a2, a4):T173f9(l3, ((T60*)(C))->a11, a3, a2, a4)));
						}
					}
				}
			} else {
				t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a3:((T56*)(a4))->a3));
				t2 = ((l1)==(t1));
				if (t2) {
					R = EIF_TRUE;
				} else {
					t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a64:((T56*)(a4))->a55));
					T60f164(GE_void(l1), t1);
					l2 = (T60f58(GE_void(l1), C, a4));
					t2 = ((l2)!=(EIF_VOID));
					if (t2) {
						l3 = (T172x6265(GE_void(a1)));
						t2 = ((l3)!=(EIF_VOID));
						if (t2) {
							l2 = (T158x6424T0(GE_void(l2), l3));
						}
						R = (T158x6377T0T0T0T0(GE_void(l2), C, a3, a2, a4));
					}
				}
			}
		}
	}
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.same_base_type */
T1 T957f44(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T957*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t3 = (T168x6426(GE_void(a3)));
			R = (T60f149(GE_void(a1), l2, t3, a2, a4));
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6357T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_CLASS.same_base_formal_parameter_type */
T1 T60f149(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_LIKE_CURRENT.same_base_type */
T1 T720f46(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		t1 = ((a2)==(a3));
	}
	if (t1) {
		R = EIF_TRUE;
	} else {
		R = (T168x6446T0T0T0(GE_void(a3), a1, a2, a4));
	}
	return R;
}

/* ET_LIKE_FEATURE.same_base_type */
T1 T718f45(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((a1)==(C));
	if (t1) {
		t1 = ((a2)==(a3));
	}
	if (t1) {
		R = EIF_TRUE;
	} else {
		t1 = ((((T718*)(C))->a3)==((T6)(GE_int32(0))));
		if (t1) {
			R = EIF_FALSE;
		} else {
			t1 = (T718f36(C));
			if (t1) {
				l1 = (T168x6428T0(GE_void(a3), a4));
				if (((T718*)(C))->a4) {
					l2 = (T60f67(GE_void(l1), ((T718*)(C))->a3));
				} else {
					l2 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
				}
				t1 = ((l2)!=(EIF_VOID));
				if (t1) {
					l4 = (T201x12784(GE_void(l2)));
					l5 = (T718f38(C));
					t1 = ((l4)==(EIF_VOID));
					if (!(t1)) {
						t2 = (((T236*)(GE_void(l4)))->a3);
						t1 = (T6f1(&l5, t2));
					}
					if (t1) {
						R = EIF_FALSE;
					} else {
						t3 = (T236f11(GE_void(l4), l5));
						t3 = (((((T0*)(GE_void(t3)))->id==242)?T242f4(t3):T964f4(t3)));
						R = (T167x6357T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
					}
				} else {
					R = EIF_FALSE;
				}
			} else {
				l1 = (T168x6428T0(GE_void(a3), a4));
				l3 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
				t1 = ((l3)!=(EIF_VOID));
				if (t1) {
					t3 = (T160x12783(GE_void(l3)));
					R = (T167x6357T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
				} else {
					R = EIF_FALSE;
				}
			}
		}
	}
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.same_base_type */
T1 T569f56(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T569*)(C))->a6, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t3 = (T168x6426(GE_void(a3)));
			R = (T60f149(GE_void(a1), l2, t3, a2, a4));
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6357T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER.same_base_type */
T1 T561f54(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T561*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t3 = (T168x6426(GE_void(a3)));
			R = (T60f149(GE_void(a1), l2, t3, a2, a4));
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6357T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.reference_conforms_from_tuple_type */
T1 T957f46(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T957*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6381T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_LIKE_CURRENT.reference_conforms_from_tuple_type */
T1 T720f47(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	R = (T168x6465T0T0T0(GE_void(a3), a1, a2, a4));
	return R;
}

/* ET_LIKE_FEATURE.reference_conforms_from_tuple_type */
T1 T718f51(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((((T718*)(C))->a3)==((T6)(GE_int32(0))));
	if (t1) {
		R = EIF_FALSE;
	} else {
		t1 = (T718f36(C));
		if (t1) {
			l1 = (T168x6428T0(GE_void(a3), a4));
			if (((T718*)(C))->a4) {
				l2 = (T60f67(GE_void(l1), ((T718*)(C))->a3));
			} else {
				l2 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			}
			t1 = ((l2)!=(EIF_VOID));
			if (t1) {
				l4 = (T201x12784(GE_void(l2)));
				l5 = (T718f38(C));
				t1 = ((l4)==(EIF_VOID));
				if (!(t1)) {
					t2 = (((T236*)(GE_void(l4)))->a3);
					t1 = (T6f1(&l5, t2));
				}
				if (t1) {
					R = EIF_FALSE;
				} else {
					t3 = (T236f11(GE_void(l4), l5));
					t3 = (((((T0*)(GE_void(t3)))->id==242)?T242f4(t3):T964f4(t3)));
					R = (T167x6381T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
				}
			} else {
				R = EIF_FALSE;
			}
		} else {
			l1 = (T168x6428T0(GE_void(a3), a4));
			l3 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			t1 = ((l3)!=(EIF_VOID));
			if (t1) {
				t3 = (T160x12783(GE_void(l3)));
				R = (T167x6381T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
			} else {
				R = EIF_FALSE;
			}
		}
	}
	return R;
}

/* ET_BIT_FEATURE.reference_conforms_from_tuple_type */
T1 T582f72(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	T0* t2;
	l1 = (T181f6(a1, a4));
	t1 = (T60f72(GE_void(l1)));
	if (t1) {
		R = (T582f62(C, l1, a2, a3, a4));
	}
	t1 = ((T1)(!(R)));
	if (t1) {
		t2 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a80:((T56*)(a4))->a50));
		R = (T582f62(C, t2, a2, a3, a4));
	}
	return R;
}

/* ET_BIT_N.reference_conforms_from_tuple_type */
T1 T581f71(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	T0* t2;
	l1 = (T181f6(a1, a4));
	t1 = (T60f72(GE_void(l1)));
	if (t1) {
		R = (T581f61(C, l1, a2, a3, a4));
	}
	t1 = ((T1)(!(R)));
	if (t1) {
		t2 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a80:((T56*)(a4))->a50));
		R = (T581f61(C, t2, a2, a3, a4));
	}
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.reference_conforms_from_tuple_type */
T1 T569f50(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T569*)(C))->a6, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6381T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER.reference_conforms_from_tuple_type */
T1 T561f48(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T561*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6381T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_TUPLE_TYPE.reference_conforms_from_tuple_type */
T1 T181f65(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		t1 = ((a2)==(a3));
	}
	if (t1) {
		R = EIF_TRUE;
	} else {
		l1 = ((T181*)(C))->a1;
		l2 = (((T181*)(a1))->a1);
		t1 = ((l1)==(EIF_VOID));
		if (t1) {
			R = EIF_TRUE;
		} else {
			t1 = ((l2)==(EIF_VOID));
			if (t1) {
				R = (T173f10(GE_void(l1)));
			} else {
				R = (T173f11(GE_void(l2), l1, a3, a2, a4));
			}
		}
	}
	return R;
}

/* ET_ACTUAL_PARAMETER_LIST.tuple_conforms_to_types */
T1 T173f11(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = ((a1)==(C));
	if (t1) {
		t1 = ((a2)==(a3));
	}
	if (t1) {
		R = EIF_TRUE;
	} else {
		l2 = (((T173*)(GE_void(a1)))->a3);
		t1 = (T6f13(&l2, ((T173*)(C))->a3));
		if (t1) {
			R = EIF_TRUE;
			l1 = (T6)(GE_int32(1));
			t1 = (T6f1(&l1, l2));
			while (!(t1)) {
				t2 = (T173f7(C, l1));
				t3 = (T173f7(GE_void(a1), l1));
				t1 = (T167x6372T0T0T0T0(GE_void(t2), t3, a2, a3, a4));
				t1 = ((T1)(!(t1)));
				if (t1) {
					R = EIF_FALSE;
					l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				}
				t1 = (T6f1(&l1, l2));
			}
		} else {
			R = EIF_FALSE;
		}
	}
	return R;
}

/* ET_GENERIC_CLASS_TYPE.reference_conforms_from_tuple_type */
T1 T174f70(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	T0* t2;
	l1 = (T181f6(a1, a4));
	t1 = (T60f72(GE_void(l1)));
	if (t1) {
		R = (T174f61(C, l1, a2, a3, a4));
	}
	t1 = ((T1)(!(R)));
	if (t1) {
		t2 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a80:((T56*)(a4))->a50));
		R = (T174f61(C, t2, a2, a3, a4));
	}
	return R;
}

/* ET_CLASS_TYPE.reference_conforms_from_tuple_type */
T1 T172f70(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	T0* t2;
	l1 = (T181f6(a1, a4));
	t1 = (T60f72(GE_void(l1)));
	if (t1) {
		R = (T172f57(C, l1, a2, a3, a4));
	}
	t1 = ((T1)(!(R)));
	if (t1) {
		t2 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a80:((T56*)(a4))->a50));
		R = (T172f57(C, t2, a2, a3, a4));
	}
	return R;
}

/* ET_CLASS.reference_conforms_from_tuple_type */
T1 T60f138(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	T0* t2;
	l1 = (T181f6(a1, a4));
	t1 = (T60f72(GE_void(l1)));
	if (t1) {
		R = (T60f137(C, l1, a2, a3, a4));
	}
	t1 = ((T1)(!(R)));
	if (t1) {
		t2 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a80:((T56*)(a4))->a50));
		R = (T60f137(C, t2, a2, a3, a4));
	}
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.base_type_actual_count */
T6 T957f48(T0* C, T0* a1, T0* a2)
{
	T6 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T6 l7 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a1), a2));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a1), ((T957*)(C))->a2, a2));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t3 = (T168x6426(GE_void(a1)));
			l3 = (T158x6330T0(GE_void(t3), a2));
			l4 = (((T60*)(GE_void(l3)))->a11);
			l7 = (T957x22348(GE_void(l2)));
			t2 = ((l4)!=(EIF_VOID));
			if (t2) {
				t1 = (((T429*)(GE_void(l4)))->a1);
				t2 = (T6f13(&l7, t1));
			}
			if (t2) {
				l5 = (T429f7(GE_void(l4), l7));
				l6 = (((((T0*)(GE_void(l5)))->id==561)?T561f7(l5):((T569*)(l5))->a7));
				t2 = ((l6)!=(EIF_VOID));
				if (t2) {
					R = (T158x6272(GE_void(l6)));
				} else {
					R = (T6)(GE_int32(0));
				}
			} else {
				R = (T6)(GE_int32(0));
			}
		} else {
			if ((l1)==EIF_VOID) {
				l6 = EIF_VOID;
			} else {
				switch (((T0*)(l1))->id) {
				case 561:
				case 569:
				case 957:
					l6 = EIF_VOID;
					break;
				default:
					l6 = l1;
				}
			}
			t2 = ((l6)==(EIF_VOID));
			if (t2) {
				R = (T6)(GE_int32(0));
			} else {
				R = (T158x6272(GE_void(l6)));
			}
		}
	} else {
		R = (T6)(GE_int32(0));
	}
	return R;
}

/* ET_LIKE_CURRENT.base_type_actual_count */
T6 T720f49(T0* C, T0* a1, T0* a2)
{
	T6 R = 0;
	R = (T168x6434T0(GE_void(a1), a2));
	return R;
}

/* ET_LIKE_FEATURE.base_type_actual_count */
T6 T718f53(T0* C, T0* a1, T0* a2)
{
	T6 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((((T718*)(C))->a3)==((T6)(GE_int32(0))));
	if (t1) {
		R = (T6)(GE_int32(0));
	} else {
		t1 = (T718f36(C));
		if (t1) {
			l1 = (T168x6428T0(GE_void(a1), a2));
			if (((T718*)(C))->a4) {
				l2 = (T60f67(GE_void(l1), ((T718*)(C))->a3));
			} else {
				l2 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			}
			t1 = ((l2)!=(EIF_VOID));
			if (t1) {
				l4 = (T201x12784(GE_void(l2)));
				l5 = (T718f38(C));
				t1 = ((l4)==(EIF_VOID));
				if (!(t1)) {
					t2 = (((T236*)(GE_void(l4)))->a3);
					t1 = (T6f1(&l5, t2));
				}
				if (t1) {
					R = (T6)(GE_int32(0));
				} else {
					t3 = (T236f11(GE_void(l4), l5));
					t3 = (((((T0*)(GE_void(t3)))->id==242)?T242f4(t3):T964f4(t3)));
					R = (T167x6342T0T0(GE_void(t3), a1, a2));
				}
			} else {
				R = (T6)(GE_int32(0));
			}
		} else {
			l1 = (T168x6428T0(GE_void(a1), a2));
			l3 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			t1 = ((l3)!=(EIF_VOID));
			if (t1) {
				t3 = (T160x12783(GE_void(l3)));
				R = (T167x6342T0T0(GE_void(t3), a1, a2));
			} else {
				R = (T6)(GE_int32(0));
			}
		}
	}
	return R;
}

/* ET_BIT_FEATURE.base_type_actual_count */
T6 T582f48(T0* C, T0* a1, T0* a2)
{
	T6 R = 0;
	R = (T582f52(C));
	return R;
}

/* ET_BIT_N.base_type_actual_count */
T6 T581f46(T0* C, T0* a1, T0* a2)
{
	T6 R = 0;
	R = (T581f51(C));
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.base_type_actual_count */
T6 T569f60(T0* C, T0* a1, T0* a2)
{
	T6 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T6 l7 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a1), a2));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a1), ((T569*)(C))->a6, a2));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t3 = (T168x6426(GE_void(a1)));
			l3 = (T158x6330T0(GE_void(t3), a2));
			l4 = (((T60*)(GE_void(l3)))->a11);
			l7 = (T957x22348(GE_void(l2)));
			t2 = ((l4)!=(EIF_VOID));
			if (t2) {
				t1 = (((T429*)(GE_void(l4)))->a1);
				t2 = (T6f13(&l7, t1));
			}
			if (t2) {
				l5 = (T429f7(GE_void(l4), l7));
				l6 = (((((T0*)(GE_void(l5)))->id==561)?T561f7(l5):((T569*)(l5))->a7));
				t2 = ((l6)!=(EIF_VOID));
				if (t2) {
					R = (T158x6272(GE_void(l6)));
				} else {
					R = (T6)(GE_int32(0));
				}
			} else {
				R = (T6)(GE_int32(0));
			}
		} else {
			if ((l1)==EIF_VOID) {
				l6 = EIF_VOID;
			} else {
				switch (((T0*)(l1))->id) {
				case 561:
				case 569:
				case 957:
					l6 = EIF_VOID;
					break;
				default:
					l6 = l1;
				}
			}
			t2 = ((l6)==(EIF_VOID));
			if (t2) {
				R = (T6)(GE_int32(0));
			} else {
				R = (T158x6272(GE_void(l6)));
			}
		}
	} else {
		R = (T6)(GE_int32(0));
	}
	return R;
}

/* ET_FORMAL_PARAMETER.base_type_actual_count */
T6 T561f58(T0* C, T0* a1, T0* a2)
{
	T6 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T6 l7 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a1), a2));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a1), ((T561*)(C))->a2, a2));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t3 = (T168x6426(GE_void(a1)));
			l3 = (T158x6330T0(GE_void(t3), a2));
			l4 = (((T60*)(GE_void(l3)))->a11);
			l7 = (T957x22348(GE_void(l2)));
			t2 = ((l4)!=(EIF_VOID));
			if (t2) {
				t1 = (((T429*)(GE_void(l4)))->a1);
				t2 = (T6f13(&l7, t1));
			}
			if (t2) {
				l5 = (T429f7(GE_void(l4), l7));
				l6 = (((((T0*)(GE_void(l5)))->id==561)?T561f7(l5):((T569*)(l5))->a7));
				t2 = ((l6)!=(EIF_VOID));
				if (t2) {
					R = (T158x6272(GE_void(l6)));
				} else {
					R = (T6)(GE_int32(0));
				}
			} else {
				R = (T6)(GE_int32(0));
			}
		} else {
			if ((l1)==EIF_VOID) {
				l6 = EIF_VOID;
			} else {
				switch (((T0*)(l1))->id) {
				case 561:
				case 569:
				case 957:
					l6 = EIF_VOID;
					break;
				default:
					l6 = l1;
				}
			}
			t2 = ((l6)==(EIF_VOID));
			if (t2) {
				R = (T6)(GE_int32(0));
			} else {
				R = (T158x6272(GE_void(l6)));
			}
		}
	} else {
		R = (T6)(GE_int32(0));
	}
	return R;
}

/* ET_TUPLE_TYPE.base_type_actual_count */
T6 T181f62(T0* C, T0* a1, T0* a2)
{
	T6 R = 0;
	R = (T181f10(C));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.base_type_actual_count */
T6 T174f67(T0* C, T0* a1, T0* a2)
{
	T6 R = 0;
	R = (T174f69(C));
	return R;
}

/* ET_CLASS_TYPE.base_type_actual_count */
T6 T172f63(T0* C, T0* a1, T0* a2)
{
	T6 R = 0;
	R = (T172f65(C));
	return R;
}

/* ET_CLASS.base_type_actual_count */
T6 T60f135(T0* C, T0* a1, T0* a2)
{
	T6 R = 0;
	R = (T60f104(C));
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.base_type_actual */
T0* T957f49(T0* C, T6 a1, T0* a2, T0* a3)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T6 l7 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a2), a3));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a2), ((T957*)(C))->a2, a3));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t3 = (T168x6426(GE_void(a2)));
			l3 = (T158x6330T0(GE_void(t3), a3));
			l4 = (((T60*)(GE_void(l3)))->a11);
			l7 = (T957x22348(GE_void(l2)));
			t2 = ((l4)!=(EIF_VOID));
			if (t2) {
				t1 = (((T429*)(GE_void(l4)))->a1);
				t2 = (T6f13(&l7, t1));
			}
			if (t2) {
				l5 = (T429f7(GE_void(l4), l7));
				l6 = (((((T0*)(GE_void(l5)))->id==561)?T561f7(l5):((T569*)(l5))->a7));
				t2 = ((l6)!=(EIF_VOID));
				if (t2) {
					t3 = (T168x6426(GE_void(a2)));
					R = (T158x6334T6T0T0(GE_void(l6), a1, t3, a3));
				} else {
					R = (((((T0*)(GE_void(a3)))->id==53)?((T53*)(a3))->a5:((T56*)(a3))->a5));
				}
			} else {
				R = (((((T0*)(GE_void(a3)))->id==53)?((T53*)(a3))->a5:((T56*)(a3))->a5));
			}
		} else {
			t3 = (T168x6426(GE_void(a2)));
			R = (T960x6334T6T0T0(GE_void(l1), a1, t3, a3));
		}
	} else {
		R = (((((T0*)(GE_void(a3)))->id==53)?((T53*)(a3))->a5:((T56*)(a3))->a5));
	}
	return R;
}

/* ET_LIKE_CURRENT.base_type_actual */
T0* T720f50(T0* C, T6 a1, T0* a2, T0* a3)
{
	T0* R = 0;
	R = (T168x6430T6T0(GE_void(a2), a1, a3));
	return R;
}

/* ET_LIKE_FEATURE.base_type_actual */
T0* T718f54(T0* C, T6 a1, T0* a2, T0* a3)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((((T718*)(C))->a3)==((T6)(GE_int32(0))));
	if (t1) {
		R = (((((T0*)(GE_void(a3)))->id==53)?((T53*)(a3))->a5:((T56*)(a3))->a5));
	} else {
		t1 = (T718f36(C));
		if (t1) {
			l1 = (T168x6428T0(GE_void(a2), a3));
			if (((T718*)(C))->a4) {
				l2 = (T60f67(GE_void(l1), ((T718*)(C))->a3));
			} else {
				l2 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			}
			t1 = ((l2)!=(EIF_VOID));
			if (t1) {
				l4 = (T201x12784(GE_void(l2)));
				l5 = (T718f38(C));
				t1 = ((l4)==(EIF_VOID));
				if (!(t1)) {
					t2 = (((T236*)(GE_void(l4)))->a3);
					t1 = (T6f1(&l5, t2));
				}
				if (t1) {
					R = (((((T0*)(GE_void(a3)))->id==53)?((T53*)(a3))->a5:((T56*)(a3))->a5));
				} else {
					t3 = (T236f11(GE_void(l4), l5));
					t3 = (((((T0*)(GE_void(t3)))->id==242)?T242f4(t3):T964f4(t3)));
					R = (T167x6334T6T0T0(GE_void(t3), a1, a2, a3));
				}
			} else {
				R = (((((T0*)(GE_void(a3)))->id==53)?((T53*)(a3))->a5:((T56*)(a3))->a5));
			}
		} else {
			l1 = (T168x6428T0(GE_void(a2), a3));
			l3 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			t1 = ((l3)!=(EIF_VOID));
			if (t1) {
				t3 = (T160x12783(GE_void(l3)));
				R = (T167x6334T6T0T0(GE_void(t3), a1, a2, a3));
			} else {
				R = (((((T0*)(GE_void(a3)))->id==53)?((T53*)(a3))->a5:((T56*)(a3))->a5));
			}
		}
	}
	return R;
}

/* ET_BIT_FEATURE.base_type_actual */
T0* T582f49(T0* C, T6 a1, T0* a2, T0* a3)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	t1 = (T582f38(C));
	l1 = ((GE_void(t1), a1, (T0*)0));
	t2 = ((a2)==(C));
	if (t2) {
		R = l1;
	}
	t2 = ((R)==(EIF_VOID));
	if (t2) {
		R = ((GE_void(l1), a2, a3, (T0*)0));
	}
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.base_type_actual */
T0* T569f57(T0* C, T6 a1, T0* a2, T0* a3)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T6 l7 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a2), a3));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a2), ((T569*)(C))->a6, a3));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t3 = (T168x6426(GE_void(a2)));
			l3 = (T158x6330T0(GE_void(t3), a3));
			l4 = (((T60*)(GE_void(l3)))->a11);
			l7 = (T957x22348(GE_void(l2)));
			t2 = ((l4)!=(EIF_VOID));
			if (t2) {
				t1 = (((T429*)(GE_void(l4)))->a1);
				t2 = (T6f13(&l7, t1));
			}
			if (t2) {
				l5 = (T429f7(GE_void(l4), l7));
				l6 = (((((T0*)(GE_void(l5)))->id==561)?T561f7(l5):((T569*)(l5))->a7));
				t2 = ((l6)!=(EIF_VOID));
				if (t2) {
					t3 = (T168x6426(GE_void(a2)));
					R = (T158x6334T6T0T0(GE_void(l6), a1, t3, a3));
				} else {
					R = (((((T0*)(GE_void(a3)))->id==53)?((T53*)(a3))->a5:((T56*)(a3))->a5));
				}
			} else {
				R = (((((T0*)(GE_void(a3)))->id==53)?((T53*)(a3))->a5:((T56*)(a3))->a5));
			}
		} else {
			t3 = (T168x6426(GE_void(a2)));
			R = (T960x6334T6T0T0(GE_void(l1), a1, t3, a3));
		}
	} else {
		R = (((((T0*)(GE_void(a3)))->id==53)?((T53*)(a3))->a5:((T56*)(a3))->a5));
	}
	return R;
}

/* ET_FORMAL_PARAMETER.base_type_actual */
T0* T561f55(T0* C, T6 a1, T0* a2, T0* a3)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T6 l7 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a2), a3));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a2), ((T561*)(C))->a2, a3));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t3 = (T168x6426(GE_void(a2)));
			l3 = (T158x6330T0(GE_void(t3), a3));
			l4 = (((T60*)(GE_void(l3)))->a11);
			l7 = (T957x22348(GE_void(l2)));
			t2 = ((l4)!=(EIF_VOID));
			if (t2) {
				t1 = (((T429*)(GE_void(l4)))->a1);
				t2 = (T6f13(&l7, t1));
			}
			if (t2) {
				l5 = (T429f7(GE_void(l4), l7));
				l6 = (((((T0*)(GE_void(l5)))->id==561)?T561f7(l5):((T569*)(l5))->a7));
				t2 = ((l6)!=(EIF_VOID));
				if (t2) {
					t3 = (T168x6426(GE_void(a2)));
					R = (T158x6334T6T0T0(GE_void(l6), a1, t3, a3));
				} else {
					R = (((((T0*)(GE_void(a3)))->id==53)?((T53*)(a3))->a5:((T56*)(a3))->a5));
				}
			} else {
				R = (((((T0*)(GE_void(a3)))->id==53)?((T53*)(a3))->a5:((T56*)(a3))->a5));
			}
		} else {
			t3 = (T168x6426(GE_void(a2)));
			R = (T960x6334T6T0T0(GE_void(l1), a1, t3, a3));
		}
	} else {
		R = (((((T0*)(GE_void(a3)))->id==53)?((T53*)(a3))->a5:((T56*)(a3))->a5));
	}
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.reference_conforms_from_bit_type */
T1 T957f51(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T957*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6378T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_LIKE_CURRENT.reference_conforms_from_bit_type */
T1 T720f52(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	R = (T168x6462T0T0T0(GE_void(a3), a1, a2, a4));
	return R;
}

/* ET_LIKE_FEATURE.reference_conforms_from_bit_type */
T1 T718f56(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((((T718*)(C))->a3)==((T6)(GE_int32(0))));
	if (t1) {
		R = EIF_FALSE;
	} else {
		t1 = (T718f36(C));
		if (t1) {
			l1 = (T168x6428T0(GE_void(a3), a4));
			if (((T718*)(C))->a4) {
				l2 = (T60f67(GE_void(l1), ((T718*)(C))->a3));
			} else {
				l2 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			}
			t1 = ((l2)!=(EIF_VOID));
			if (t1) {
				l4 = (T201x12784(GE_void(l2)));
				l5 = (T718f38(C));
				t1 = ((l4)==(EIF_VOID));
				if (!(t1)) {
					t2 = (((T236*)(GE_void(l4)))->a3);
					t1 = (T6f1(&l5, t2));
				}
				if (t1) {
					R = EIF_FALSE;
				} else {
					t3 = (T236f11(GE_void(l4), l5));
					t3 = (((((T0*)(GE_void(t3)))->id==242)?T242f4(t3):T964f4(t3)));
					R = (T167x6378T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
				}
			} else {
				R = EIF_FALSE;
			}
		} else {
			l1 = (T168x6428T0(GE_void(a3), a4));
			l3 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			t1 = ((l3)!=(EIF_VOID));
			if (t1) {
				t3 = (T160x12783(GE_void(l3)));
				R = (T167x6378T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
			} else {
				R = EIF_FALSE;
			}
		}
	}
	return R;
}

/* ET_BIT_FEATURE.reference_conforms_from_bit_type */
T1 T582f75(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		T582f103(C);
		t1 = (T582f45(C));
		t1 = ((T1)(!(t1)));
		if (t1) {
			if (((T0*)(a1))->id==581) {
				T581f97(a1);
			} else {
				T582f103(a1);
			}
			t1 = (((((T0*)(a1))->id==581)?T581f5(a1):T582f45(a1)));
			t1 = ((T1)(!(t1)));
			if (t1) {
				t2 = (((((T0*)(a1))->id==581)?((T581*)(a1))->a2:((T582*)(a1))->a3));
				R = (T6f13(&t2, ((T582*)(C))->a3));
			}
		}
	}
	return R;
}

/* ET_BIT_N.reference_conforms_from_bit_type */
T1 T581f74(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		T581f97(C);
		t1 = (T581f5(C));
		t1 = ((T1)(!(t1)));
		if (t1) {
			if (((T0*)(a1))->id==581) {
				T581f97(a1);
			} else {
				T582f103(a1);
			}
			t1 = (((((T0*)(a1))->id==581)?T581f5(a1):T582f45(a1)));
			t1 = ((T1)(!(t1)));
			if (t1) {
				t2 = (((((T0*)(a1))->id==581)?((T581*)(a1))->a2:((T582*)(a1))->a3));
				R = (T6f13(&t2, ((T581*)(C))->a2));
			}
		}
	}
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.reference_conforms_from_bit_type */
T1 T569f55(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T569*)(C))->a6, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6378T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER.reference_conforms_from_bit_type */
T1 T561f53(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T561*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6378T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_TUPLE_TYPE.reference_conforms_from_bit_type */
T1 T181f68(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	l1 = (((((T0*)(a1))->id==581)?T581f17(a1, a4):T582f15(a1, a4)));
	t1 = (T60f72(GE_void(l1)));
	if (t1) {
		R = (T181f56(C, l1, a2, a3, a4));
	}
	t1 = ((T1)(!(R)));
	if (t1) {
		l2 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a4:((T56*)(a4))->a4));
		R = (T181f56(C, l2, a2, a3, a4));
	}
	return R;
}

/* ET_GENERIC_CLASS_TYPE.reference_conforms_from_bit_type */
T1 T174f73(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	l1 = (((((T0*)(a1))->id==581)?T581f17(a1, a4):T582f15(a1, a4)));
	t1 = (T60f72(GE_void(l1)));
	if (t1) {
		R = (T174f61(C, l1, a2, a3, a4));
	}
	t1 = ((T1)(!(R)));
	if (t1) {
		l2 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a4:((T56*)(a4))->a4));
		R = (T174f61(C, l2, a2, a3, a4));
	}
	return R;
}

/* ET_CLASS_TYPE.reference_conforms_from_bit_type */
T1 T172f73(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	l1 = (((((T0*)(a1))->id==581)?T581f17(a1, a4):T582f15(a1, a4)));
	t1 = (T60f72(GE_void(l1)));
	if (t1) {
		R = (T172f57(C, l1, a2, a3, a4));
	}
	t1 = ((T1)(!(R)));
	if (t1) {
		l2 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a4:((T56*)(a4))->a4));
		R = (T172f57(C, l2, a2, a3, a4));
	}
	return R;
}

/* ET_CLASS.reference_conforms_from_bit_type */
T1 T60f142(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	l1 = (((((T0*)(a1))->id==581)?T581f17(a1, a4):T582f15(a1, a4)));
	t1 = (T60f72(GE_void(l1)));
	if (t1) {
		R = (T60f137(C, l1, a2, a3, a4));
	}
	t1 = ((T1)(!(R)));
	if (t1) {
		l2 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a4:((T56*)(a4))->a4));
		R = (T60f137(C, l2, a2, a3, a4));
	}
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.reference_conforms_from_formal_parameter_type */
T1 T957f50(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* l7 = 0;
	T0* l8 = 0;
	T0* l9 = 0;
	T0* l10 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T957*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			l3 = (T957x22348(GE_void(l2)));
			l4 = (T957x22348(GE_void(a1)));
			t2 = ((l3)==(l4));
			if (t2) {
				R = EIF_TRUE;
			} else {
				t3 = (T168x6426(GE_void(a3)));
				l5 = (T158x6330T0(GE_void(t3), a4));
				l6 = (((T60*)(GE_void(l5)))->a11);
				t2 = ((l6)!=(EIF_VOID));
				if (t2) {
					t1 = (((T429*)(GE_void(l6)))->a1);
					t2 = (T6f13(&l4, t1));
				}
				if (t2) {
					l7 = (T429f7(GE_void(l6), l4));
					l8 = (((((T0*)(GE_void(l7)))->id==561)?T561f8(l7):((T569*)(l7))->a2));
					t2 = ((l8)!=(EIF_VOID));
					if (t2) {
						l9 = (((((T0*)(GE_void(l7)))->id==561)?T561f7(l7):((T569*)(l7))->a7));
						t2 = ((l9)!=(EIF_VOID));
						if (t2) {
							t3 = (T168x6426(GE_void(a3)));
							R = (T167x6377T0T0T0T0(GE_void(l8), C, t3, a2, a4));
						} else {
							if ((l8)==EIF_VOID) {
								l2 = EIF_VOID;
							} else {
								switch (((T0*)(l8))->id) {
								case 957:
									l2 = l8;
									break;
								default:
									l2 = EIF_VOID;
								}
							}
							t2 = ((l2)!=(EIF_VOID));
							if (t2) {
								t1 = (((T429*)(GE_void(l6)))->a1);
								l10 = T905c5((T6)(GE_int32(1)), t1);
								T905f6(GE_void(l10), EIF_TRUE, l4);
								l4 = (T957x22348(GE_void(l2)));
								R = ((l3)==(l4));
								if (!(R)) {
									t2 = (T905f4(GE_void(l10), l4));
								} else {
									t2 = EIF_TRUE;
								}
								while (!(t2)) {
									T905f6(GE_void(l10), EIF_TRUE, l4);
									t1 = (((T429*)(GE_void(l6)))->a1);
									t2 = (T6f13(&l4, t1));
									if (t2) {
										l7 = (T429f7(GE_void(l6), l4));
										t3 = (((((T0*)(GE_void(l7)))->id==561)?T561f8(l7):((T569*)(l7))->a2));
										if ((t3)==EIF_VOID) {
											l2 = EIF_VOID;
										} else {
											switch (((T0*)(t3))->id) {
											case 957:
												l2 = t3;
												break;
											default:
												l2 = EIF_VOID;
											}
										}
										t2 = ((l2)!=(EIF_VOID));
										if (t2) {
											l4 = (T957x22348(GE_void(l2)));
											R = ((l3)==(l4));
										} else {
											R = EIF_FALSE;
										}
									} else {
										R = EIF_FALSE;
									}
									if (!(R)) {
										t2 = (T905f4(GE_void(l10), l4));
									} else {
										t2 = EIF_TRUE;
									}
								}
							} else {
								R = EIF_FALSE;
							}
						}
					}
				} else {
					R = EIF_FALSE;
				}
			}
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6380T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_LIKE_CURRENT.reference_conforms_from_formal_parameter_type */
T1 T720f51(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	R = (T168x6464T0T0T0(GE_void(a3), a1, a2, a4));
	return R;
}

/* ET_LIKE_FEATURE.reference_conforms_from_formal_parameter_type */
T1 T718f55(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((((T718*)(C))->a3)==((T6)(GE_int32(0))));
	if (t1) {
		R = EIF_FALSE;
	} else {
		t1 = (T718f36(C));
		if (t1) {
			l1 = (T168x6428T0(GE_void(a3), a4));
			if (((T718*)(C))->a4) {
				l2 = (T60f67(GE_void(l1), ((T718*)(C))->a3));
			} else {
				l2 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			}
			t1 = ((l2)!=(EIF_VOID));
			if (t1) {
				l4 = (T201x12784(GE_void(l2)));
				l5 = (T718f38(C));
				t1 = ((l4)==(EIF_VOID));
				if (!(t1)) {
					t2 = (((T236*)(GE_void(l4)))->a3);
					t1 = (T6f1(&l5, t2));
				}
				if (t1) {
					R = EIF_FALSE;
				} else {
					t3 = (T236f11(GE_void(l4), l5));
					t3 = (((((T0*)(GE_void(t3)))->id==242)?T242f4(t3):T964f4(t3)));
					R = (T167x6380T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
				}
			} else {
				R = EIF_FALSE;
			}
		} else {
			l1 = (T168x6428T0(GE_void(a3), a4));
			l3 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			t1 = ((l3)!=(EIF_VOID));
			if (t1) {
				t3 = (T160x12783(GE_void(l3)));
				R = (T167x6380T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
			} else {
				R = EIF_FALSE;
			}
		}
	}
	return R;
}

/* ET_BIT_FEATURE.reference_conforms_from_formal_parameter_type */
T1 T582f74(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T6 l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	l1 = (T957x22348(GE_void(a1)));
	t1 = (T168x6428T0(GE_void(a2), a4));
	l3 = (((T60*)(GE_void(t1)))->a11);
	t2 = ((l3)==(EIF_VOID));
	if (!(t2)) {
		t3 = (((T429*)(GE_void(l3)))->a1);
		t2 = (T6f1(&l1, t3));
	}
	if (t2) {
		R = EIF_FALSE;
	} else {
		l2 = (T429f7(GE_void(l3), l1));
		l4 = (((((T0*)(GE_void(l2)))->id==561)?T561f8(l2):((T569*)(l2))->a2));
		t2 = ((l4)==(EIF_VOID));
		if (t2) {
			l6 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a45:((T56*)(a4))->a45));
			R = (T582f62(C, l6, a2, a3, a4));
		} else {
			l5 = (((((T0*)(GE_void(l2)))->id==561)?T561f7(l2):((T569*)(l2))->a7));
			t2 = ((l5)!=(EIF_VOID));
			if (t2) {
				R = (T158x6377T0T0T0T0(GE_void(l5), C, a3, a2, a4));
			} else {
				R = EIF_FALSE;
			}
		}
	}
	return R;
}

/* ET_BIT_N.reference_conforms_from_formal_parameter_type */
T1 T581f73(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T6 l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	l1 = (T957x22348(GE_void(a1)));
	t1 = (T168x6428T0(GE_void(a2), a4));
	l3 = (((T60*)(GE_void(t1)))->a11);
	t2 = ((l3)==(EIF_VOID));
	if (!(t2)) {
		t3 = (((T429*)(GE_void(l3)))->a1);
		t2 = (T6f1(&l1, t3));
	}
	if (t2) {
		R = EIF_FALSE;
	} else {
		l2 = (T429f7(GE_void(l3), l1));
		l4 = (((((T0*)(GE_void(l2)))->id==561)?T561f8(l2):((T569*)(l2))->a2));
		t2 = ((l4)==(EIF_VOID));
		if (t2) {
			l6 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a45:((T56*)(a4))->a45));
			R = (T581f61(C, l6, a2, a3, a4));
		} else {
			l5 = (((((T0*)(GE_void(l2)))->id==561)?T561f7(l2):((T569*)(l2))->a7));
			t2 = ((l5)!=(EIF_VOID));
			if (t2) {
				R = (T158x6377T0T0T0T0(GE_void(l5), C, a3, a2, a4));
			} else {
				R = EIF_FALSE;
			}
		}
	}
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.reference_conforms_from_formal_parameter_type */
T1 T569f53(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* l7 = 0;
	T0* l8 = 0;
	T0* l9 = 0;
	T0* l10 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T569*)(C))->a6, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			l3 = (T957x22348(GE_void(l2)));
			l4 = (T957x22348(GE_void(a1)));
			t2 = ((l3)==(l4));
			if (t2) {
				R = EIF_TRUE;
			} else {
				t3 = (T168x6426(GE_void(a3)));
				l5 = (T158x6330T0(GE_void(t3), a4));
				l6 = (((T60*)(GE_void(l5)))->a11);
				t2 = ((l6)!=(EIF_VOID));
				if (t2) {
					t1 = (((T429*)(GE_void(l6)))->a1);
					t2 = (T6f13(&l4, t1));
				}
				if (t2) {
					l7 = (T429f7(GE_void(l6), l4));
					l8 = (((((T0*)(GE_void(l7)))->id==561)?T561f8(l7):((T569*)(l7))->a2));
					t2 = ((l8)!=(EIF_VOID));
					if (t2) {
						l9 = (((((T0*)(GE_void(l7)))->id==561)?T561f7(l7):((T569*)(l7))->a7));
						t2 = ((l9)!=(EIF_VOID));
						if (t2) {
							t3 = (T168x6426(GE_void(a3)));
							R = (T167x6377T0T0T0T0(GE_void(l8), C, t3, a2, a4));
						} else {
							if ((l8)==EIF_VOID) {
								l2 = EIF_VOID;
							} else {
								switch (((T0*)(l8))->id) {
								case 957:
									l2 = l8;
									break;
								default:
									l2 = EIF_VOID;
								}
							}
							t2 = ((l2)!=(EIF_VOID));
							if (t2) {
								t1 = (((T429*)(GE_void(l6)))->a1);
								l10 = T905c5((T6)(GE_int32(1)), t1);
								T905f6(GE_void(l10), EIF_TRUE, l4);
								l4 = (T957x22348(GE_void(l2)));
								R = ((l3)==(l4));
								if (!(R)) {
									t2 = (T905f4(GE_void(l10), l4));
								} else {
									t2 = EIF_TRUE;
								}
								while (!(t2)) {
									T905f6(GE_void(l10), EIF_TRUE, l4);
									t1 = (((T429*)(GE_void(l6)))->a1);
									t2 = (T6f13(&l4, t1));
									if (t2) {
										l7 = (T429f7(GE_void(l6), l4));
										t3 = (((((T0*)(GE_void(l7)))->id==561)?T561f8(l7):((T569*)(l7))->a2));
										if ((t3)==EIF_VOID) {
											l2 = EIF_VOID;
										} else {
											switch (((T0*)(t3))->id) {
											case 957:
												l2 = t3;
												break;
											default:
												l2 = EIF_VOID;
											}
										}
										t2 = ((l2)!=(EIF_VOID));
										if (t2) {
											l4 = (T957x22348(GE_void(l2)));
											R = ((l3)==(l4));
										} else {
											R = EIF_FALSE;
										}
									} else {
										R = EIF_FALSE;
									}
									if (!(R)) {
										t2 = (T905f4(GE_void(l10), l4));
									} else {
										t2 = EIF_TRUE;
									}
								}
							} else {
								R = EIF_FALSE;
							}
						}
					}
				} else {
					R = EIF_FALSE;
				}
			}
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6380T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER.reference_conforms_from_formal_parameter_type */
T1 T561f52(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* l7 = 0;
	T0* l8 = 0;
	T0* l9 = 0;
	T0* l10 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T561*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			l3 = (T957x22348(GE_void(l2)));
			l4 = (T957x22348(GE_void(a1)));
			t2 = ((l3)==(l4));
			if (t2) {
				R = EIF_TRUE;
			} else {
				t3 = (T168x6426(GE_void(a3)));
				l5 = (T158x6330T0(GE_void(t3), a4));
				l6 = (((T60*)(GE_void(l5)))->a11);
				t2 = ((l6)!=(EIF_VOID));
				if (t2) {
					t1 = (((T429*)(GE_void(l6)))->a1);
					t2 = (T6f13(&l4, t1));
				}
				if (t2) {
					l7 = (T429f7(GE_void(l6), l4));
					l8 = (((((T0*)(GE_void(l7)))->id==561)?T561f8(l7):((T569*)(l7))->a2));
					t2 = ((l8)!=(EIF_VOID));
					if (t2) {
						l9 = (((((T0*)(GE_void(l7)))->id==561)?T561f7(l7):((T569*)(l7))->a7));
						t2 = ((l9)!=(EIF_VOID));
						if (t2) {
							t3 = (T168x6426(GE_void(a3)));
							R = (T167x6377T0T0T0T0(GE_void(l8), C, t3, a2, a4));
						} else {
							if ((l8)==EIF_VOID) {
								l2 = EIF_VOID;
							} else {
								switch (((T0*)(l8))->id) {
								case 957:
									l2 = l8;
									break;
								default:
									l2 = EIF_VOID;
								}
							}
							t2 = ((l2)!=(EIF_VOID));
							if (t2) {
								t1 = (((T429*)(GE_void(l6)))->a1);
								l10 = T905c5((T6)(GE_int32(1)), t1);
								T905f6(GE_void(l10), EIF_TRUE, l4);
								l4 = (T957x22348(GE_void(l2)));
								R = ((l3)==(l4));
								if (!(R)) {
									t2 = (T905f4(GE_void(l10), l4));
								} else {
									t2 = EIF_TRUE;
								}
								while (!(t2)) {
									T905f6(GE_void(l10), EIF_TRUE, l4);
									t1 = (((T429*)(GE_void(l6)))->a1);
									t2 = (T6f13(&l4, t1));
									if (t2) {
										l7 = (T429f7(GE_void(l6), l4));
										t3 = (((((T0*)(GE_void(l7)))->id==561)?T561f8(l7):((T569*)(l7))->a2));
										if ((t3)==EIF_VOID) {
											l2 = EIF_VOID;
										} else {
											switch (((T0*)(t3))->id) {
											case 957:
												l2 = t3;
												break;
											default:
												l2 = EIF_VOID;
											}
										}
										t2 = ((l2)!=(EIF_VOID));
										if (t2) {
											l4 = (T957x22348(GE_void(l2)));
											R = ((l3)==(l4));
										} else {
											R = EIF_FALSE;
										}
									} else {
										R = EIF_FALSE;
									}
									if (!(R)) {
										t2 = (T905f4(GE_void(l10), l4));
									} else {
										t2 = EIF_TRUE;
									}
								}
							} else {
								R = EIF_FALSE;
							}
						}
					}
				} else {
					R = EIF_FALSE;
				}
			}
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6380T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_TUPLE_TYPE.reference_conforms_from_formal_parameter_type */
T1 T181f67(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T6 l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	l1 = (T957x22348(GE_void(a1)));
	t1 = (T168x6428T0(GE_void(a2), a4));
	l3 = (((T60*)(GE_void(t1)))->a11);
	t2 = ((l3)==(EIF_VOID));
	if (!(t2)) {
		t3 = (((T429*)(GE_void(l3)))->a1);
		t2 = (T6f1(&l1, t3));
	}
	if (t2) {
		R = EIF_FALSE;
	} else {
		l2 = (T429f7(GE_void(l3), l1));
		l4 = (((((T0*)(GE_void(l2)))->id==561)?T561f8(l2):((T569*)(l2))->a2));
		t2 = ((l4)==(EIF_VOID));
		if (t2) {
			l6 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a45:((T56*)(a4))->a45));
			R = (T181f56(C, l6, a2, a3, a4));
		} else {
			l5 = (((((T0*)(GE_void(l2)))->id==561)?T561f7(l2):((T569*)(l2))->a7));
			t2 = ((l5)!=(EIF_VOID));
			if (t2) {
				R = (T158x6377T0T0T0T0(GE_void(l5), C, a3, a2, a4));
			} else {
				R = EIF_FALSE;
			}
		}
	}
	return R;
}

/* ET_GENERIC_CLASS_TYPE.reference_conforms_from_formal_parameter_type */
T1 T174f72(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T6 l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	l1 = (T957x22348(GE_void(a1)));
	t1 = (T168x6428T0(GE_void(a2), a4));
	l3 = (((T60*)(GE_void(t1)))->a11);
	t2 = ((l3)==(EIF_VOID));
	if (!(t2)) {
		t3 = (((T429*)(GE_void(l3)))->a1);
		t2 = (T6f1(&l1, t3));
	}
	if (t2) {
		R = EIF_FALSE;
	} else {
		l2 = (T429f7(GE_void(l3), l1));
		l4 = (((((T0*)(GE_void(l2)))->id==561)?T561f8(l2):((T569*)(l2))->a2));
		t2 = ((l4)==(EIF_VOID));
		if (t2) {
			l6 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a45:((T56*)(a4))->a45));
			R = (T174f61(C, l6, a2, a3, a4));
		} else {
			l5 = (((((T0*)(GE_void(l2)))->id==561)?T561f7(l2):((T569*)(l2))->a7));
			t2 = ((l5)!=(EIF_VOID));
			if (t2) {
				R = (T158x6377T0T0T0T0(GE_void(l5), C, a3, a2, a4));
			} else {
				R = EIF_FALSE;
			}
		}
	}
	return R;
}

/* ET_CLASS_TYPE.reference_conforms_from_formal_parameter_type */
T1 T172f72(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T6 l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	l1 = (T957x22348(GE_void(a1)));
	t1 = (T168x6428T0(GE_void(a2), a4));
	l3 = (((T60*)(GE_void(t1)))->a11);
	t2 = ((l3)==(EIF_VOID));
	if (!(t2)) {
		t3 = (((T429*)(GE_void(l3)))->a1);
		t2 = (T6f1(&l1, t3));
	}
	if (t2) {
		R = EIF_FALSE;
	} else {
		l2 = (T429f7(GE_void(l3), l1));
		l4 = (((((T0*)(GE_void(l2)))->id==561)?T561f8(l2):((T569*)(l2))->a2));
		t2 = ((l4)==(EIF_VOID));
		if (t2) {
			l6 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a45:((T56*)(a4))->a45));
			R = (T172f57(C, l6, a2, a3, a4));
		} else {
			l5 = (((((T0*)(GE_void(l2)))->id==561)?T561f7(l2):((T569*)(l2))->a7));
			t2 = ((l5)!=(EIF_VOID));
			if (t2) {
				R = (T158x6377T0T0T0T0(GE_void(l5), C, a3, a2, a4));
			} else {
				R = EIF_FALSE;
			}
		}
	}
	return R;
}

/* ET_CLASS.reference_conforms_from_formal_parameter_type */
T1 T60f141(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T6 l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	l1 = (T957x22348(GE_void(a1)));
	t1 = (T168x6428T0(GE_void(a2), a4));
	l3 = (((T60*)(GE_void(t1)))->a11);
	t2 = ((l3)==(EIF_VOID));
	if (!(t2)) {
		t3 = (((T429*)(GE_void(l3)))->a1);
		t2 = (T6f1(&l1, t3));
	}
	if (t2) {
		R = EIF_FALSE;
	} else {
		l2 = (T429f7(GE_void(l3), l1));
		l4 = (((((T0*)(GE_void(l2)))->id==561)?T561f8(l2):((T569*)(l2))->a2));
		t2 = ((l4)==(EIF_VOID));
		if (t2) {
			l6 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a45:((T56*)(a4))->a45));
			R = (T60f137(C, l6, a2, a3, a4));
		} else {
			l5 = (((((T0*)(GE_void(l2)))->id==561)?T561f7(l2):((T569*)(l2))->a7));
			t2 = ((l5)!=(EIF_VOID));
			if (t2) {
				R = (T158x6377T0T0T0T0(GE_void(l5), C, a3, a2, a4));
			} else {
				R = EIF_FALSE;
			}
		}
	}
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.shallow_named_type */
T0* T957f43(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T158x6272(GE_void(a1)));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		t3 = (T158x6265(GE_void(a1)));
		t3 = (((((T0*)(GE_void(t3)))->id==429)?T429f10(t3, ((T957*)(C))->a2):T173f7(t3, ((T957*)(C))->a2)));
		if ((t3)==EIF_VOID) {
			R = EIF_VOID;
		} else {
			switch (((T0*)(t3))->id) {
			case 720:
			case 718:
				R = EIF_VOID;
				break;
			default:
				R = t3;
			}
		}
		t2 = ((R)==(EIF_VOID));
		if (t2) {
			R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
		}
	} else {
		R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
	}
	return R;
}

/* ET_LIKE_CURRENT.shallow_named_type */
T0* T720f43(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = (T720f14(C, a1, a2));
	return R;
}

/* ET_LIKE_FEATURE.shallow_named_type */
T0* T718f42(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((((T718*)(C))->a3)==((T6)(GE_int32(0))));
	if (t1) {
		R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
	} else {
		t1 = (T718f36(C));
		if (t1) {
			l1 = (T158x6330T0(GE_void(a1), a2));
			if (((T718*)(C))->a4) {
				l2 = (T60f67(GE_void(l1), ((T718*)(C))->a3));
			} else {
				l2 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			}
			t1 = ((l2)!=(EIF_VOID));
			if (t1) {
				l4 = (T201x12784(GE_void(l2)));
				l5 = (T718f38(C));
				t1 = ((l4)==(EIF_VOID));
				if (!(t1)) {
					t2 = (((T236*)(GE_void(l4)))->a3);
					t1 = (T6f1(&l5, t2));
				}
				if (t1) {
					R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
				} else {
					t3 = (T236f11(GE_void(l4), l5));
					t3 = (((((T0*)(GE_void(t3)))->id==242)?T242f4(t3):T964f4(t3)));
					R = (T167x6338T0T0(GE_void(t3), a1, a2));
				}
			} else {
				R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
			}
		} else {
			l1 = (T158x6330T0(GE_void(a1), a2));
			l3 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			t1 = ((l3)!=(EIF_VOID));
			if (t1) {
				t3 = (T160x12783(GE_void(l3)));
				R = (T167x6338T0T0(GE_void(t3), a1, a2));
			} else {
				R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
			}
		}
	}
	return R;
}

/* ET_BIT_FEATURE.shallow_named_type */
T0* T582f61(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = (T582f26(C, a1, a2));
	return R;
}

/* ET_BIT_N.shallow_named_type */
T0* T581f60(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = (T581f26(C, a1, a2));
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.shallow_named_type */
T0* T569f51(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T158x6272(GE_void(a1)));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		t3 = (T158x6265(GE_void(a1)));
		t3 = (((((T0*)(GE_void(t3)))->id==429)?T429f10(t3, ((T569*)(C))->a6):T173f7(t3, ((T569*)(C))->a6)));
		if ((t3)==EIF_VOID) {
			R = EIF_VOID;
		} else {
			switch (((T0*)(t3))->id) {
			case 720:
			case 718:
				R = EIF_VOID;
				break;
			default:
				R = t3;
			}
		}
		t2 = ((R)==(EIF_VOID));
		if (t2) {
			R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
		}
	} else {
		R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
	}
	return R;
}

/* ET_FORMAL_PARAMETER.shallow_named_type */
T0* T561f49(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T158x6272(GE_void(a1)));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		t3 = (T158x6265(GE_void(a1)));
		t3 = (((((T0*)(GE_void(t3)))->id==429)?T429f10(t3, ((T561*)(C))->a2):T173f7(t3, ((T561*)(C))->a2)));
		if ((t3)==EIF_VOID) {
			R = EIF_VOID;
		} else {
			switch (((T0*)(t3))->id) {
			case 720:
			case 718:
				R = EIF_VOID;
				break;
			default:
				R = t3;
			}
		}
		t2 = ((R)==(EIF_VOID));
		if (t2) {
			R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
		}
	} else {
		R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
	}
	return R;
}

/* ET_TUPLE_TYPE.shallow_named_type */
T0* T181f49(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = (T181f26(C, a1, a2));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.shallow_named_type */
T0* T174f59(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = (T174f30(C, a1, a2));
	return R;
}

/* ET_CLASS_TYPE.shallow_named_type */
T0* T172f53(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = (T172f15(C, a1, a2));
	return R;
}

/* ET_CLASS.shallow_named_type */
T0* T60f133(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = (T60f86(C, a1, a2));
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.is_like_current */
T1 T957f47(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_LIKE_FEATURE.is_like_current */
T1 T718f52(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BIT_FEATURE.is_like_current */
T1 T582f73(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BIT_N.is_like_current */
T1 T581f72(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.is_like_current */
T1 T569f52(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FORMAL_PARAMETER.is_like_current */
T1 T561f50(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_TUPLE_TYPE.is_like_current */
T1 T181f66(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_GENERIC_CLASS_TYPE.is_like_current */
T1 T174f71(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_CLASS_TYPE.is_like_current */
T1 T172f71(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_CLASS.is_like_current */
T1 T60f139(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.named_type */
T0* T957f35(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (T168x6434T0(GE_void(a1), a2));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		R = (T168x6430T6T0(GE_void(a1), ((T957*)(C))->a2, a2));
	} else {
		R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
	}
	return R;
}

/* ET_LIKE_CURRENT.named_type */
T0* T720f36(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = (T168x6433T0(GE_void(a1), a2));
	return R;
}

/* ET_LIKE_FEATURE.named_type */
T0* T718f33(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((((T718*)(C))->a3)==((T6)(GE_int32(0))));
	if (t1) {
		R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
	} else {
		t1 = (T718f36(C));
		if (t1) {
			l1 = (T168x6428T0(GE_void(a1), a2));
			if (((T718*)(C))->a4) {
				l2 = (T60f67(GE_void(l1), ((T718*)(C))->a3));
			} else {
				l2 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			}
			t1 = ((l2)!=(EIF_VOID));
			if (t1) {
				l4 = (T201x12784(GE_void(l2)));
				l5 = (T718f38(C));
				t1 = ((l4)==(EIF_VOID));
				if (!(t1)) {
					t2 = (((T236*)(GE_void(l4)))->a3);
					t1 = (T6f1(&l5, t2));
				}
				if (t1) {
					R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
				} else {
					t3 = (T236f11(GE_void(l4), l5));
					t3 = (((((T0*)(GE_void(t3)))->id==242)?T242f4(t3):T964f4(t3)));
					R = (T167x6337T0T0(GE_void(t3), a1, a2));
				}
			} else {
				R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
			}
		} else {
			l1 = (T168x6428T0(GE_void(a1), a2));
			l3 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			t1 = ((l3)!=(EIF_VOID));
			if (t1) {
				t3 = (T160x12783(GE_void(l3)));
				R = (T167x6337T0T0(GE_void(t3), a1, a2));
			} else {
				R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
			}
		}
	}
	return R;
}

/* ET_BIT_FEATURE.named_type */
T0* T582f35(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = (T582f14(C, a1, a2));
	return R;
}

/* ET_BIT_N.named_type */
T0* T581f34(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = (T581f16(C, a1, a2));
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.named_type */
T0* T569f36(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (T168x6434T0(GE_void(a1), a2));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		R = (T168x6430T6T0(GE_void(a1), ((T569*)(C))->a6, a2));
	} else {
		R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
	}
	return R;
}

/* ET_FORMAL_PARAMETER.named_type */
T0* T561f34(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (T168x6434T0(GE_void(a1), a2));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		R = (T168x6430T6T0(GE_void(a1), ((T561*)(C))->a2, a2));
	} else {
		R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
	}
	return R;
}

/* ET_TUPLE_TYPE.named_type */
T0* T181f28(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = (T181f9(C, a1, a2));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.named_type */
T0* T174f31(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = (T174f9(C, a1, a2));
	return R;
}

/* ET_CLASS_TYPE.named_type */
T0* T172f27(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = (T172f9(C, a1, a2));
	return R;
}

/* ET_CLASS.named_type */
T0* T60f91(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = (T60f45(C, a1, a2));
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.is_base_type */
T1 T957f52(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_LIKE_CURRENT.is_base_type */
T1 T720f53(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_LIKE_FEATURE.is_base_type */
T1 T718f57(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BIT_FEATURE.is_base_type */
T1 T582f77(T0* C)
{
	T1 R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	R = EIF_TRUE;
	l1 = (T582f38(C));
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		l3 = ((GE_void(l1), (T6)0));
		l2 = (T6)(GE_int32(1));
		t1 = (T6f1(&l2, l3));
		while (!(t1)) {
			t2 = ((GE_void(l1), l2, (T0*)0));
			t1 = ((GE_void(t2), (T1)0));
			t1 = ((T1)(!(t1)));
			if (t1) {
				R = EIF_FALSE;
				l2 = ((T6)((l3)+((T6)(GE_int32(1)))));
			} else {
				l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			}
			t1 = (T6f1(&l2, l3));
		}
	}
	return R;
}

/* ET_BIT_N.is_base_type */
T1 T581f76(T0* C)
{
	T1 R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	R = EIF_TRUE;
	l1 = (T581f36(C));
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		l3 = ((GE_void(l1), (T6)0));
		l2 = (T6)(GE_int32(1));
		t1 = (T6f1(&l2, l3));
		while (!(t1)) {
			t2 = ((GE_void(l1), l2, (T0*)0));
			t1 = ((GE_void(t2), (T1)0));
			t1 = ((T1)(!(t1)));
			if (t1) {
				R = EIF_FALSE;
				l2 = ((T6)((l3)+((T6)(GE_int32(1)))));
			} else {
				l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			}
			t1 = (T6f1(&l2, l3));
		}
	}
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.is_base_type */
T1 T569f61(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_FORMAL_PARAMETER.is_base_type */
T1 T561f59(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_TUPLE_TYPE.is_base_type */
T1 T181f70(T0* C)
{
	T1 R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	R = EIF_TRUE;
	l1 = ((T181*)(C))->a1;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		l3 = (((T173*)(GE_void(l1)))->a3);
		l2 = (T6)(GE_int32(1));
		t1 = (T6f1(&l2, l3));
		while (!(t1)) {
			t2 = (T173f7(GE_void(l1), l2));
			t1 = (T167x6345(GE_void(t2)));
			t1 = ((T1)(!(t1)));
			if (t1) {
				R = EIF_FALSE;
				l2 = ((T6)((l3)+((T6)(GE_int32(1)))));
			} else {
				l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			}
			t1 = (T6f1(&l2, l3));
		}
	}
	return R;
}

/* ET_GENERIC_CLASS_TYPE.is_base_type */
T1 T174f75(T0* C)
{
	T1 R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	R = EIF_TRUE;
	l1 = ((T174*)(C))->a2;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		l3 = (((((T0*)(GE_void(l1)))->id==173)?((T173*)(l1))->a3:((T429*)(l1))->a1));
		l2 = (T6)(GE_int32(1));
		t1 = (T6f1(&l2, l3));
		while (!(t1)) {
			t2 = (((((T0*)(GE_void(l1)))->id==173)?T173f7(l1, l2):T429f10(l1, l2)));
			t1 = (T167x6345(GE_void(t2)));
			t1 = ((T1)(!(t1)));
			if (t1) {
				R = EIF_FALSE;
				l2 = ((T6)((l3)+((T6)(GE_int32(1)))));
			} else {
				l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			}
			t1 = (T6f1(&l2, l3));
		}
	}
	return R;
}

/* ET_CLASS_TYPE.is_base_type */
T1 T172f75(T0* C)
{
	T1 R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	R = EIF_TRUE;
	l1 = (T172f5(C));
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		l3 = ((GE_void(l1), (T6)0));
		l2 = (T6)(GE_int32(1));
		t1 = (T6f1(&l2, l3));
		while (!(t1)) {
			t2 = ((GE_void(l1), l2, (T0*)0));
			t1 = ((GE_void(t2), (T1)0));
			t1 = ((T1)(!(t1)));
			if (t1) {
				R = EIF_FALSE;
				l2 = ((T6)((l3)+((T6)(GE_int32(1)))));
			} else {
				l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			}
			t1 = (T6f1(&l2, l3));
		}
	}
	return R;
}

/* ET_CLASS.is_base_type */
T1 T60f150(T0* C)
{
	T1 R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	R = EIF_TRUE;
	l1 = ((T60*)(C))->a11;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		l3 = (((T429*)(GE_void(l1)))->a1);
		l2 = (T6)(GE_int32(1));
		t1 = (T6f1(&l2, l3));
		while (!(t1)) {
			t2 = (T429f10(GE_void(l1), l2));
			t1 = (((((T0*)(GE_void(t2)))->id==561)?T561f59(t2):T569f61(t2)));
			t1 = ((T1)(!(t1)));
			if (t1) {
				R = EIF_FALSE;
				l2 = ((T6)((l3)+((T6)(GE_int32(1)))));
			} else {
				l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			}
			t1 = (T6f1(&l2, l3));
		}
	}
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.is_named_type */
T1 T957f53(T0* C)
{
	T1 R = 0;
	R = EIF_TRUE;
	return R;
}

/* ET_LIKE_CURRENT.is_named_type */
T1 T720f55(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_LIKE_FEATURE.is_named_type */
T1 T718f59(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_BIT_FEATURE.is_named_type */
T1 T582f89(T0* C)
{
	T1 R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	R = EIF_TRUE;
	l1 = (T582f38(C));
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		l3 = ((GE_void(l1), (T6)0));
		l2 = (T6)(GE_int32(1));
		t1 = (T6f1(&l2, l3));
		while (!(t1)) {
			t2 = ((GE_void(l1), l2, (T0*)0));
			t1 = ((GE_void(t2), (T1)0));
			t1 = ((T1)(!(t1)));
			if (t1) {
				R = EIF_FALSE;
				l2 = ((T6)((l3)+((T6)(GE_int32(1)))));
			} else {
				l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			}
			t1 = (T6f1(&l2, l3));
		}
	}
	return R;
}

/* ET_BIT_N.is_named_type */
T1 T581f88(T0* C)
{
	T1 R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	R = EIF_TRUE;
	l1 = (T581f36(C));
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		l3 = ((GE_void(l1), (T6)0));
		l2 = (T6)(GE_int32(1));
		t1 = (T6f1(&l2, l3));
		while (!(t1)) {
			t2 = ((GE_void(l1), l2, (T0*)0));
			t1 = ((GE_void(t2), (T1)0));
			t1 = ((T1)(!(t1)));
			if (t1) {
				R = EIF_FALSE;
				l2 = ((T6)((l3)+((T6)(GE_int32(1)))));
			} else {
				l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			}
			t1 = (T6f1(&l2, l3));
		}
	}
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.is_named_type */
T1 T569f62(T0* C)
{
	T1 R = 0;
	R = EIF_TRUE;
	return R;
}

/* ET_FORMAL_PARAMETER.is_named_type */
T1 T561f60(T0* C)
{
	T1 R = 0;
	R = EIF_TRUE;
	return R;
}

/* ET_TUPLE_TYPE.is_named_type */
T1 T181f81(T0* C)
{
	T1 R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	R = EIF_TRUE;
	l1 = ((T181*)(C))->a1;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		l3 = (((T173*)(GE_void(l1)))->a3);
		l2 = (T6)(GE_int32(1));
		t1 = (T6f1(&l2, l3));
		while (!(t1)) {
			t2 = (T173f7(GE_void(l1), l2));
			t1 = (T167x6344(GE_void(t2)));
			t1 = ((T1)(!(t1)));
			if (t1) {
				R = EIF_FALSE;
				l2 = ((T6)((l3)+((T6)(GE_int32(1)))));
			} else {
				l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			}
			t1 = (T6f1(&l2, l3));
		}
	}
	return R;
}

/* ET_GENERIC_CLASS_TYPE.is_named_type */
T1 T174f86(T0* C)
{
	T1 R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	R = EIF_TRUE;
	l1 = ((T174*)(C))->a2;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		l3 = (((((T0*)(GE_void(l1)))->id==173)?((T173*)(l1))->a3:((T429*)(l1))->a1));
		l2 = (T6)(GE_int32(1));
		t1 = (T6f1(&l2, l3));
		while (!(t1)) {
			t2 = (((((T0*)(GE_void(l1)))->id==173)?T173f7(l1, l2):T429f10(l1, l2)));
			t1 = (T167x6344(GE_void(t2)));
			t1 = ((T1)(!(t1)));
			if (t1) {
				R = EIF_FALSE;
				l2 = ((T6)((l3)+((T6)(GE_int32(1)))));
			} else {
				l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			}
			t1 = (T6f1(&l2, l3));
		}
	}
	return R;
}

/* ET_CLASS_TYPE.is_named_type */
T1 T172f55(T0* C)
{
	T1 R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	R = EIF_TRUE;
	l1 = (T172f5(C));
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		l3 = ((GE_void(l1), (T6)0));
		l2 = (T6)(GE_int32(1));
		t1 = (T6f1(&l2, l3));
		while (!(t1)) {
			t2 = ((GE_void(l1), l2, (T0*)0));
			t1 = ((GE_void(t2), (T1)0));
			t1 = ((T1)(!(t1)));
			if (t1) {
				R = EIF_FALSE;
				l2 = ((T6)((l3)+((T6)(GE_int32(1)))));
			} else {
				l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			}
			t1 = (T6f1(&l2, l3));
		}
	}
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.is_type_expanded */
T1 T957f42(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 l3 = 0;
	T0* l4 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a1), a2));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a1), ((T957*)(C))->a2, a2));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			l3 = (T957x22348(GE_void(l2)));
			t3 = (T168x6426(GE_void(a1)));
			t3 = (T158x6330T0(GE_void(t3), a2));
			l4 = (((T60*)(GE_void(t3)))->a11);
			t2 = ((l4)!=(EIF_VOID));
			if (t2) {
				t1 = (((T429*)(GE_void(l4)))->a1);
				t2 = (T6f13(&l3, t1));
			}
			if (t2) {
				t3 = (T429f7(GE_void(l4), l3));
				R = (((((T0*)(GE_void(t3)))->id==561)?T561f36(t3):T569f38(t3)));
			} else {
				R = EIF_FALSE;
			}
		} else {
			t3 = (T168x6426(GE_void(a1)));
			R = (T960x6346T0T0(GE_void(l1), t3, a2));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_LIKE_CURRENT.is_type_expanded */
T1 T720f42(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* t1;
	t1 = (T168x6428T0(GE_void(a1), a2));
	R = (T60f64(GE_void(t1)));
	return R;
}

/* ET_LIKE_FEATURE.is_type_expanded */
T1 T718f41(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((((T718*)(C))->a3)==((T6)(GE_int32(0))));
	if (t1) {
		R = EIF_FALSE;
	} else {
		t1 = (T718f36(C));
		if (t1) {
			l1 = (T168x6428T0(GE_void(a1), a2));
			if (((T718*)(C))->a4) {
				l2 = (T60f67(GE_void(l1), ((T718*)(C))->a3));
			} else {
				l2 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			}
			t1 = ((l2)!=(EIF_VOID));
			if (t1) {
				l4 = (T201x12784(GE_void(l2)));
				l5 = (T718f38(C));
				t1 = ((l4)==(EIF_VOID));
				if (!(t1)) {
					t2 = (((T236*)(GE_void(l4)))->a3);
					t1 = (T6f1(&l5, t2));
				}
				if (t1) {
					R = EIF_FALSE;
				} else {
					t3 = (T236f11(GE_void(l4), l5));
					t3 = (((((T0*)(GE_void(t3)))->id==242)?T242f4(t3):T964f4(t3)));
					R = (T167x6346T0T0(GE_void(t3), a1, a2));
				}
			} else {
				R = EIF_FALSE;
			}
		} else {
			l1 = (T168x6428T0(GE_void(a1), a2));
			l3 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			t1 = ((l3)!=(EIF_VOID));
			if (t1) {
				t3 = (T160x12783(GE_void(l3)));
				R = (T167x6346T0T0(GE_void(t3), a1, a2));
			} else {
				R = EIF_FALSE;
			}
		}
	}
	return R;
}

/* ET_BIT_FEATURE.is_type_expanded */
T1 T582f51(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	R = EIF_TRUE;
	return R;
}

/* ET_BIT_N.is_type_expanded */
T1 T581f50(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	R = EIF_TRUE;
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.is_type_expanded */
T1 T569f39(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 l3 = 0;
	T0* l4 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a1), a2));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a1), ((T569*)(C))->a6, a2));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			l3 = (T957x22348(GE_void(l2)));
			t3 = (T168x6426(GE_void(a1)));
			t3 = (T158x6330T0(GE_void(t3), a2));
			l4 = (((T60*)(GE_void(t3)))->a11);
			t2 = ((l4)!=(EIF_VOID));
			if (t2) {
				t1 = (((T429*)(GE_void(l4)))->a1);
				t2 = (T6f13(&l3, t1));
			}
			if (t2) {
				t3 = (T429f7(GE_void(l4), l3));
				R = (((((T0*)(GE_void(t3)))->id==561)?T561f36(t3):T569f38(t3)));
			} else {
				R = EIF_FALSE;
			}
		} else {
			t3 = (T168x6426(GE_void(a1)));
			R = (T960x6346T0T0(GE_void(l1), t3, a2));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER.is_type_expanded */
T1 T561f37(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 l3 = 0;
	T0* l4 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a1), a2));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a1), ((T561*)(C))->a2, a2));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			l3 = (T957x22348(GE_void(l2)));
			t3 = (T168x6426(GE_void(a1)));
			t3 = (T158x6330T0(GE_void(t3), a2));
			l4 = (((T60*)(GE_void(t3)))->a11);
			t2 = ((l4)!=(EIF_VOID));
			if (t2) {
				t1 = (((T429*)(GE_void(l4)))->a1);
				t2 = (T6f13(&l3, t1));
			}
			if (t2) {
				t3 = (T429f7(GE_void(l4), l3));
				R = (((((T0*)(GE_void(t3)))->id==561)?T561f36(t3):T569f38(t3)));
			} else {
				R = EIF_FALSE;
			}
		} else {
			t3 = (T168x6426(GE_void(a1)));
			R = (T960x6346T0T0(GE_void(l1), t3, a2));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_TUPLE_TYPE.is_type_expanded */
T1 T181f48(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	R = EIF_FALSE;
	return R;
}

/* ET_GENERIC_CLASS_TYPE.is_type_expanded */
T1 T174f58(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	R = (T174f6(C));
	return R;
}

/* ET_CLASS_TYPE.is_type_expanded */
T1 T172f52(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	R = (T172f22(C));
	return R;
}

/* ET_CLASS.is_type_expanded */
T1 T60f132(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	R = (T60f64(C));
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.resolved_formal_parameters */
T0* T957f16(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	R = C;
	t1 = (((((T0*)(GE_void(a1)))->id==173)?((T173*)(a1))->a3:((T429*)(a1))->a1));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (((((T0*)(GE_void(a1)))->id==173)?T173f7(a1, ((T957*)(C))->a2):T429f10(a1, ((T957*)(C))->a2)));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 957:
			case 561:
			case 569:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)==(EIF_VOID));
		if (!(t2)) {
			t1 = (T957x22348(GE_void(l2)));
			t2 = ((t1)!=(((T957*)(C))->a2));
		}
		if (t2) {
			R = l1;
		}
	}
	return R;
}

/* ET_LIKE_CURRENT.resolved_formal_parameters */
T0* T720f16(T0* C, T0* a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_LIKE_FEATURE.resolved_formal_parameters */
T0* T718f26(T0* C, T0* a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_BIT_FEATURE.resolved_formal_parameters */
T0* T582f28(T0* C, T0* a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_BIT_N.resolved_formal_parameters */
T0* T581f28(T0* C, T0* a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.resolved_formal_parameters */
T0* T569f34(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	R = C;
	t1 = (((((T0*)(GE_void(a1)))->id==173)?((T173*)(a1))->a3:((T429*)(a1))->a1));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (((((T0*)(GE_void(a1)))->id==173)?T173f7(a1, ((T569*)(C))->a6):T429f10(a1, ((T569*)(C))->a6)));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 957:
			case 561:
			case 569:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)==(EIF_VOID));
		if (!(t2)) {
			t1 = (T957x22348(GE_void(l2)));
			t2 = ((t1)!=(((T569*)(C))->a6));
		}
		if (t2) {
			R = l1;
		}
	}
	return R;
}

/* ET_FORMAL_PARAMETER.resolved_formal_parameters */
T0* T561f32(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	R = C;
	t1 = (((((T0*)(GE_void(a1)))->id==173)?((T173*)(a1))->a3:((T429*)(a1))->a1));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (((((T0*)(GE_void(a1)))->id==173)?T173f7(a1, ((T561*)(C))->a2):T429f10(a1, ((T561*)(C))->a2)));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 957:
			case 561:
			case 569:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)==(EIF_VOID));
		if (!(t2)) {
			t1 = (T957x22348(GE_void(l2)));
			t2 = ((t1)!=(((T561*)(C))->a2));
		}
		if (t2) {
			R = l1;
		}
	}
	return R;
}

/* ET_TUPLE_TYPE.resolved_formal_parameters */
T0* T181f27(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	R = C;
	l1 = ((T181*)(C))->a1;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		l2 = (T173f13(GE_void(l1), a1));
		t1 = ((l2)!=(l1));
		if (t1) {
			R = T181c89(l2);
			T181f90(GE_void(R), ((T181*)(C))->a2);
		}
	}
	return R;
}

/* ET_ACTUAL_PARAMETER_LIST.resolved_formal_parameters */
T0* T173f13(T0* C, T0* a1)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* l7 = 0;
	T0* l8 = 0;
	T1 t1;
	T0* t2;
	R = C;
	l3 = ((T6)((((T173*)(C))->a3)-((T6)(GE_int32(1)))));
	l1 = (T6)(GE_int32(0));
	t1 = (T6f1(&l1, l3));
	while (!(t1)) {
		l4 = (((T713*)(GE_void(((T173*)(C))->a4)))->z2[l1]);
		l6 = (T177x6410(GE_void(l4)));
		t1 = ((l6)!=(l7));
		if (t1) {
			l8 = (T167x6424T0(GE_void(l6), a1));
			l7 = l6;
		}
		l5 = (T177x6413T0(GE_void(l4), l8));
		t1 = ((R)!=(C));
		if (t1) {
			T173f24(GE_void(R), l5);
		} else {
			t1 = ((l4)!=(l5));
			if (t1) {
				R = T173c23(((T173*)(C))->a3);
				T173f26(GE_void(R), ((T173*)(C))->a1);
				T173f27(GE_void(R), ((T173*)(C))->a2);
				l2 = (T6)(GE_int32(0));
				t1 = (T6f12(&l2, l1));
				while (!(t1)) {
					t2 = (((T713*)(GE_void(((T173*)(C))->a4)))->z2[l2]);
					T173f24(GE_void(R), t2);
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
					t1 = (T6f12(&l2, l1));
				}
				T173f24(GE_void(R), l5);
			}
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l3));
	}
	return R;
}

/* ET_ACTUAL_PARAMETER_LIST.set_right_bracket */
void T173f27(T0* C, T0* a1)
{
	((T173*)(C))->a2 = a1;
}

/* ET_FORMAL_PARAMETER_TYPE.reference_conforms_to_type */
T1 T957f41(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T957*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t3 = (T168x6426(GE_void(a3)));
			R = (T167x6380T0T0T0T0(GE_void(a1), l2, t3, a2, a4));
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6377T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_LIKE_CURRENT.reference_conforms_to_type */
T1 T720f41(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		t1 = ((a2)==(a3));
	}
	if (t1) {
		R = EIF_TRUE;
	} else {
		R = (T168x6461T0T0T0(GE_void(a3), a1, a2, a4));
	}
	return R;
}

/* ET_LIKE_FEATURE.reference_conforms_to_type */
T1 T718f40(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((a1)==(C));
	if (t1) {
		t1 = ((a2)==(a3));
	}
	if (t1) {
		R = EIF_TRUE;
	} else {
		t1 = ((((T718*)(C))->a3)==((T6)(GE_int32(0))));
		if (t1) {
			R = EIF_FALSE;
		} else {
			t1 = (T718f36(C));
			if (t1) {
				l1 = (T168x6428T0(GE_void(a3), a4));
				if (((T718*)(C))->a4) {
					l2 = (T60f67(GE_void(l1), ((T718*)(C))->a3));
				} else {
					l2 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
				}
				t1 = ((l2)!=(EIF_VOID));
				if (t1) {
					l4 = (T201x12784(GE_void(l2)));
					l5 = (T718f38(C));
					t1 = ((l4)==(EIF_VOID));
					if (!(t1)) {
						t2 = (((T236*)(GE_void(l4)))->a3);
						t1 = (T6f1(&l5, t2));
					}
					if (t1) {
						R = EIF_FALSE;
					} else {
						t3 = (T236f11(GE_void(l4), l5));
						t3 = (((((T0*)(GE_void(t3)))->id==242)?T242f4(t3):T964f4(t3)));
						R = (T167x6377T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
					}
				} else {
					R = EIF_FALSE;
				}
			} else {
				l1 = (T168x6428T0(GE_void(a3), a4));
				l3 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
				t1 = ((l3)!=(EIF_VOID));
				if (t1) {
					t3 = (T160x12783(GE_void(l3)));
					R = (T167x6377T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
				} else {
					R = EIF_FALSE;
				}
			}
		}
	}
	return R;
}

/* ET_BIT_FEATURE.reference_conforms_to_type */
T1 T582f60(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		R = (T167x6378T0T0T0T0(GE_void(a1), C, a3, a2, a4));
	}
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.reference_conforms_to_type */
T1 T569f37(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T569*)(C))->a6, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t3 = (T168x6426(GE_void(a3)));
			R = (T167x6380T0T0T0T0(GE_void(a1), l2, t3, a2, a4));
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6377T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER.reference_conforms_to_type */
T1 T561f35(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T561*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t3 = (T168x6426(GE_void(a3)));
			R = (T167x6380T0T0T0T0(GE_void(a1), l2, t3, a2, a4));
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6377T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.is_type_reference */
T1 T957f39(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 l3 = 0;
	T0* l4 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a1), a2));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a1), ((T957*)(C))->a2, a2));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			l3 = (T957x22348(GE_void(l2)));
			t3 = (T168x6426(GE_void(a1)));
			t3 = (T158x6330T0(GE_void(t3), a2));
			l4 = (((T60*)(GE_void(t3)))->a11);
			t2 = ((l4)!=(EIF_VOID));
			if (t2) {
				t1 = (((T429*)(GE_void(l4)))->a1);
				t2 = (T6f13(&l3, t1));
			}
			if (t2) {
				t3 = (T429f7(GE_void(l4), l3));
				R = (((((T0*)(GE_void(t3)))->id==561)?T561f38(t3):T569f40(t3)));
			} else {
				R = EIF_FALSE;
			}
		} else {
			t3 = (T168x6426(GE_void(a1)));
			R = (T960x6347T0T0(GE_void(l1), t3, a2));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_LIKE_CURRENT.is_type_reference */
T1 T720f44(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T1 t1;
	t1 = (T720f42(C, a1, a2));
	R = ((T1)(!(t1)));
	return R;
}

/* ET_LIKE_FEATURE.is_type_reference */
T1 T718f43(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T1 t1;
	t1 = (T718f41(C, a1, a2));
	R = ((T1)(!(t1)));
	return R;
}

/* ET_BIT_FEATURE.is_type_reference */
T1 T582f47(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T1 t1;
	t1 = (T582f51(C, a1, a2));
	R = ((T1)(!(t1)));
	return R;
}

/* ET_BIT_N.is_type_reference */
T1 T581f45(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T1 t1;
	t1 = (T581f50(C, a1, a2));
	R = ((T1)(!(t1)));
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.is_type_reference */
T1 T569f28(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 l3 = 0;
	T0* l4 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a1), a2));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a1), ((T569*)(C))->a6, a2));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			l3 = (T957x22348(GE_void(l2)));
			t3 = (T168x6426(GE_void(a1)));
			t3 = (T158x6330T0(GE_void(t3), a2));
			l4 = (((T60*)(GE_void(t3)))->a11);
			t2 = ((l4)!=(EIF_VOID));
			if (t2) {
				t1 = (((T429*)(GE_void(l4)))->a1);
				t2 = (T6f13(&l3, t1));
			}
			if (t2) {
				t3 = (T429f7(GE_void(l4), l3));
				R = (((((T0*)(GE_void(t3)))->id==561)?T561f38(t3):T569f40(t3)));
			} else {
				R = EIF_FALSE;
			}
		} else {
			t3 = (T168x6426(GE_void(a1)));
			R = (T960x6347T0T0(GE_void(l1), t3, a2));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER.is_type_reference */
T1 T561f23(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 l3 = 0;
	T0* l4 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a1), a2));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a1), ((T561*)(C))->a2, a2));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			l3 = (T957x22348(GE_void(l2)));
			t3 = (T168x6426(GE_void(a1)));
			t3 = (T158x6330T0(GE_void(t3), a2));
			l4 = (((T60*)(GE_void(t3)))->a11);
			t2 = ((l4)!=(EIF_VOID));
			if (t2) {
				t1 = (((T429*)(GE_void(l4)))->a1);
				t2 = (T6f13(&l3, t1));
			}
			if (t2) {
				t3 = (T429f7(GE_void(l4), l3));
				R = (((((T0*)(GE_void(t3)))->id==561)?T561f38(t3):T569f40(t3)));
			} else {
				R = EIF_FALSE;
			}
		} else {
			t3 = (T168x6426(GE_void(a1)));
			R = (T960x6347T0T0(GE_void(l1), t3, a2));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_TUPLE_TYPE.is_type_reference */
T1 T181f50(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T1 t1;
	t1 = (T181f48(C, a1, a2));
	R = ((T1)(!(t1)));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.is_type_reference */
T1 T174f60(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T1 t1;
	t1 = (T174f58(C, a1, a2));
	R = ((T1)(!(t1)));
	return R;
}

/* ET_CLASS_TYPE.is_type_reference */
T1 T172f54(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T1 t1;
	t1 = (T172f52(C, a1, a2));
	R = ((T1)(!(t1)));
	return R;
}

/* ET_CLASS.is_type_reference */
T1 T60f134(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T1 t1;
	t1 = (T60f132(C, a1, a2));
	R = ((T1)(!(t1)));
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.conforms_to_type */
T1 T957f11(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T957*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t3 = (T168x6426(GE_void(a3)));
			R = (T167x6375T0T0T0T0(GE_void(a1), l2, t3, a2, a4));
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6372T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_LIKE_CURRENT.conforms_to_type */
T1 T720f13(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		t1 = ((a2)==(a3));
	}
	if (t1) {
		R = EIF_TRUE;
	} else {
		R = (T168x6455T0T0T0(GE_void(a3), a1, a2, a4));
	}
	return R;
}

/* ET_LIKE_FEATURE.conforms_to_type */
T1 T718f23(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((a1)==(C));
	if (t1) {
		t1 = ((a2)==(a3));
	}
	if (t1) {
		R = EIF_TRUE;
	} else {
		t1 = ((((T718*)(C))->a3)==((T6)(GE_int32(0))));
		if (t1) {
			R = EIF_FALSE;
		} else {
			t1 = (T718f36(C));
			if (t1) {
				l1 = (T168x6428T0(GE_void(a3), a4));
				if (((T718*)(C))->a4) {
					l2 = (T60f67(GE_void(l1), ((T718*)(C))->a3));
				} else {
					l2 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
				}
				t1 = ((l2)!=(EIF_VOID));
				if (t1) {
					l4 = (T201x12784(GE_void(l2)));
					l5 = (T718f38(C));
					t1 = ((l4)==(EIF_VOID));
					if (!(t1)) {
						t2 = (((T236*)(GE_void(l4)))->a3);
						t1 = (T6f1(&l5, t2));
					}
					if (t1) {
						R = EIF_FALSE;
					} else {
						t3 = (T236f11(GE_void(l4), l5));
						t3 = (((((T0*)(GE_void(t3)))->id==242)?T242f4(t3):T964f4(t3)));
						R = (T167x6372T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
					}
				} else {
					R = EIF_FALSE;
				}
			} else {
				l1 = (T168x6428T0(GE_void(a3), a4));
				l3 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
				t1 = ((l3)!=(EIF_VOID));
				if (t1) {
					t3 = (T160x12783(GE_void(l3)));
					R = (T167x6372T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
				} else {
					R = EIF_FALSE;
				}
			}
		}
	}
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.conforms_to_type */
T1 T569f21(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T569*)(C))->a6, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t3 = (T168x6426(GE_void(a3)));
			R = (T167x6375T0T0T0T0(GE_void(a1), l2, t3, a2, a4));
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6372T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER.conforms_to_type */
T1 T561f18(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T561*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t3 = (T168x6426(GE_void(a3)));
			R = (T167x6375T0T0T0T0(GE_void(a1), l2, t3, a2, a4));
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6372T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.conforms_from_class_type */
T1 T957f13(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	T0* t4;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T957*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t2 = (T957f39(C, a3, a4));
			if (t2) {
				t3 = (T172x6330T0(a1, a4));
				t4 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a3:((T56*)(a4))->a3));
				t2 = ((t3)==(t4));
			}
			if (t2) {
				R = EIF_TRUE;
			} else {
				R = EIF_FALSE;
			}
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6374T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_LIKE_CURRENT.conforms_from_class_type */
T1 T720f12(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	R = (T168x6458T0T0T0(GE_void(a3), a1, a2, a4));
	return R;
}

/* ET_LIKE_FEATURE.conforms_from_class_type */
T1 T718f20(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((((T718*)(C))->a3)==((T6)(GE_int32(0))));
	if (t1) {
		R = EIF_FALSE;
	} else {
		t1 = (T718f36(C));
		if (t1) {
			l1 = (T168x6428T0(GE_void(a3), a4));
			if (((T718*)(C))->a4) {
				l2 = (T60f67(GE_void(l1), ((T718*)(C))->a3));
			} else {
				l2 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			}
			t1 = ((l2)!=(EIF_VOID));
			if (t1) {
				l4 = (T201x12784(GE_void(l2)));
				l5 = (T718f38(C));
				t1 = ((l4)==(EIF_VOID));
				if (!(t1)) {
					t2 = (((T236*)(GE_void(l4)))->a3);
					t1 = (T6f1(&l5, t2));
				}
				if (t1) {
					R = EIF_FALSE;
				} else {
					t3 = (T236f11(GE_void(l4), l5));
					t3 = (((((T0*)(GE_void(t3)))->id==242)?T242f4(t3):T964f4(t3)));
					R = (T167x6374T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
				}
			} else {
				R = EIF_FALSE;
			}
		} else {
			l1 = (T168x6428T0(GE_void(a3), a4));
			l3 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			t1 = ((l3)!=(EIF_VOID));
			if (t1) {
				t3 = (T160x12783(GE_void(l3)));
				R = (T167x6374T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
			} else {
				R = EIF_FALSE;
			}
		}
	}
	return R;
}

/* ET_BIT_FEATURE.conforms_from_class_type */
T1 T582f22(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_BIT_N.conforms_from_class_type */
T1 T581f23(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.conforms_from_class_type */
T1 T569f18(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	T0* t4;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T569*)(C))->a6, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t2 = (T569f28(C, a3, a4));
			if (t2) {
				t3 = (T172x6330T0(a1, a4));
				t4 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a3:((T56*)(a4))->a3));
				t2 = ((t3)==(t4));
			}
			if (t2) {
				R = EIF_TRUE;
			} else {
				R = EIF_FALSE;
			}
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6374T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER.conforms_from_class_type */
T1 T561f16(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	T0* t4;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T561*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t2 = (T561f23(C, a3, a4));
			if (t2) {
				t3 = (T172x6330T0(a1, a4));
				t4 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a3:((T56*)(a4))->a3));
				t2 = ((t3)==(t4));
			}
			if (t2) {
				R = EIF_TRUE;
			} else {
				R = EIF_FALSE;
			}
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6374T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_TUPLE_TYPE.conforms_from_class_type */
T1 T181f7(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	l1 = (T172x6330T0(GE_void(a1), a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a3:((T56*)(a4))->a3));
	t2 = ((l1)==(t1));
	if (t2) {
		R = EIF_TRUE;
	} else {
		t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a80:((T56*)(a4))->a50));
		t2 = ((l1)==(t1));
		if (t2) {
			t3 = (T181f10(C));
			t2 = ((t3)==((T6)(GE_int32(0))));
		}
		if (t2) {
			R = EIF_TRUE;
		}
	}
	return R;
}

/* ET_GENERIC_CLASS_TYPE.conforms_from_class_type */
T1 T174f11(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T1 t2;
	T1 t3;
	T0* t4;
	l1 = (T172x6330T0(GE_void(a1), a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a5:((T56*)(a4))->a5));
	t2 = ((l1)==(t1));
	if (t2) {
		R = EIF_FALSE;
	} else {
		t2 = ((a1)==(C));
		if (t2) {
			t2 = ((a2)==(a3));
		}
		if (t2) {
			R = EIF_TRUE;
		} else {
			t2 = ((((T174*)(C))->a1)==(l1));
			if (t2) {
				t2 = (T172x6273(GE_void(a1)));
				t2 = ((T1)(!(t2)));
				if (t2) {
					t2 = (T174f12(C));
					R = ((T1)(!(t2)));
				} else {
					t2 = (T174f12(C));
					t2 = ((T1)(!(t2)));
					if (t2) {
						R = EIF_FALSE;
					} else {
						l3 = (T172x6265(GE_void(a1)));
						t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a37:((T56*)(a4))->a37));
						t2 = ((((T174*)(C))->a1)==(t1));
						if (!(t2)) {
							t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a83:((T56*)(a4))->a51));
							t2 = ((((T174*)(C))->a1)==(t1));
						}
						if (!(t2)) {
							t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a85:((T56*)(a4))->a52));
							t2 = ((((T174*)(C))->a1)==(t1));
						}
						if (!(t2)) {
							t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a84:((T56*)(a4))->a53));
							t2 = ((((T174*)(C))->a1)==(t1));
						}
						if (t2) {
							R = (((((T0*)(GE_void(l3)))->id==173)?T173f9(l3, ((T174*)(C))->a2, a3, a2, a4):T429f11(l3, ((T174*)(C))->a2, a3, a2, a4)));
						} else {
							R = (((((T0*)(GE_void(l3)))->id==173)?T173f9(l3, ((T174*)(C))->a2, a3, a2, a4):T429f11(l3, ((T174*)(C))->a2, a3, a2, a4)));
						}
					}
				}
			} else {
				t2 = (T174f6(C));
				t2 = ((T1)(!(t2)));
				if (t2) {
					t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a3:((T56*)(a4))->a3));
					t2 = ((l1)==(t1));
					if (t2) {
						R = EIF_TRUE;
					} else {
						t2 = (T172x6276(GE_void(a1)));
						if (t2) {
							t3 = (((((T0*)(GE_void(a4)))->id==53)?T53f153(a4):T56f152(a4)));
							if (t3) {
								t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a36:((T56*)(a4))->a36));
								t4 = (T174f13(C));
								t2 = (T63f14(GE_void(t1), t4));
							} else {
								t2 = EIF_FALSE;
							}
						}
						if (t2) {
							R = EIF_FALSE;
						} else {
							t2 = (((((T0*)(GE_void(a4)))->id==53)?T53f153(a4):T56f152(a4)));
							if (t2) {
								t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a36:((T56*)(a4))->a36));
								t4 = (T174f14(C));
								t2 = (T63f14(GE_void(t1), t4));
							}
							if (t2) {
								t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a9:((T56*)(a4))->a9));
								t3 = ((l1)==(t1));
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a12:((T56*)(a4))->a12));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a13:((T56*)(a4))->a13));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a10:((T56*)(a4))->a10));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a11:((T56*)(a4))->a11));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a18:((T56*)(a4))->a18));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a14:((T56*)(a4))->a14));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a15:((T56*)(a4))->a15));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a16:((T56*)(a4))->a16));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a17:((T56*)(a4))->a17));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a23:((T56*)(a4))->a23));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a19:((T56*)(a4))->a19));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a20:((T56*)(a4))->a20));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a21:((T56*)(a4))->a21));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a22:((T56*)(a4))->a22));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a26:((T56*)(a4))->a26));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a27:((T56*)(a4))->a27));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a24:((T56*)(a4))->a24));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a25:((T56*)(a4))->a25));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a28:((T56*)(a4))->a28));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a35:((T56*)(a4))->a35));
									t2 = ((l1)==(t1));
								} else {
									t2 = EIF_TRUE;
								}
							}
							if (t2) {
								R = EIF_FALSE;
							} else {
								t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a64:((T56*)(a4))->a55));
								T60f164(GE_void(l1), t1);
								l2 = (T60f58(GE_void(l1), C, a4));
								t2 = ((l2)!=(EIF_VOID));
								if (t2) {
									l3 = (T172x6265(GE_void(a1)));
									t2 = ((l3)!=(EIF_VOID));
									if (t2) {
										l2 = (T158x6424T0(GE_void(l2), l3));
									}
									R = (T158x6372T0T0T0T0(GE_void(l2), C, a3, a2, a4));
								}
							}
						}
					}
				}
			}
		}
	}
	return R;
}

/* ET_GENERIC_CLASS_TYPE.ise_5_7_62488 */
unsigned char ge253os1737 = '\0';
T0* ge253ov1737;
T0* T174f14(T0* C)
{
	T0* R = 0;
	if (ge253os1737) {
		return ge253ov1737;
	} else {
		ge253os1737 = '\1';
	}
	R = T63c17((T6)(GE_int32(5)), (T6)(GE_int32(7)), (T6)(GE_int32(62488)), (T6)(GE_int32(0)));
	ge253ov1737 = R;
	return R;
}

/* ET_GENERIC_CLASS_TYPE.ise_5_6_latest */
T0* T174f13(T0* C)
{
	T0* R = 0;
	if (ge253os1732) {
		return ge253ov1732;
	} else {
		ge253os1732 = '\1';
	}
	R = T63c18((T6)(GE_int32(5)), (T6)(GE_int32(6)));
	ge253ov1732 = R;
	return R;
}

/* ET_CLASS_TYPE.conforms_from_class_type */
T1 T172f14(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T1 t2;
	T1 t3;
	T0* t4;
	l1 = (T172x6330T0(GE_void(a1), a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a5:((T56*)(a4))->a5));
	t2 = ((l1)==(t1));
	if (t2) {
		R = EIF_FALSE;
	} else {
		t2 = ((a1)==(C));
		if (t2) {
			t2 = ((a2)==(a3));
		}
		if (t2) {
			R = EIF_TRUE;
		} else {
			t2 = ((((T172*)(C))->a3)==(l1));
			if (t2) {
				t2 = (T172x6273(GE_void(a1)));
				t2 = ((T1)(!(t2)));
				if (t2) {
					t2 = (T172f24(C));
					R = ((T1)(!(t2)));
				} else {
					t2 = (T172f24(C));
					t2 = ((T1)(!(t2)));
					if (t2) {
						R = EIF_FALSE;
					} else {
						l3 = (T172x6265(GE_void(a1)));
						t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a37:((T56*)(a4))->a37));
						t2 = ((((T172*)(C))->a3)==(t1));
						if (!(t2)) {
							t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a83:((T56*)(a4))->a51));
							t2 = ((((T172*)(C))->a3)==(t1));
						}
						if (!(t2)) {
							t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a85:((T56*)(a4))->a52));
							t2 = ((((T172*)(C))->a3)==(t1));
						}
						if (!(t2)) {
							t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a84:((T56*)(a4))->a53));
							t2 = ((((T172*)(C))->a3)==(t1));
						}
						if (t2) {
							t1 = (T172f5(C));
							R = (((((T0*)(GE_void(l3)))->id==429)?T429f11(l3, t1, a3, a2, a4):T173f9(l3, t1, a3, a2, a4)));
						} else {
							t1 = (T172f5(C));
							R = (((((T0*)(GE_void(l3)))->id==429)?T429f11(l3, t1, a3, a2, a4):T173f9(l3, t1, a3, a2, a4)));
						}
					}
				}
			} else {
				t2 = (T172f22(C));
				t2 = ((T1)(!(t2)));
				if (t2) {
					t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a3:((T56*)(a4))->a3));
					t2 = ((l1)==(t1));
					if (t2) {
						R = EIF_TRUE;
					} else {
						t2 = (T172x6276(GE_void(a1)));
						if (t2) {
							t3 = (((((T0*)(GE_void(a4)))->id==53)?T53f153(a4):T56f152(a4)));
							if (t3) {
								t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a36:((T56*)(a4))->a36));
								t4 = (T172f29(C));
								t2 = (T63f14(GE_void(t1), t4));
							} else {
								t2 = EIF_FALSE;
							}
						}
						if (t2) {
							R = EIF_FALSE;
						} else {
							t2 = (((((T0*)(GE_void(a4)))->id==53)?T53f153(a4):T56f152(a4)));
							if (t2) {
								t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a36:((T56*)(a4))->a36));
								t4 = (T172f30(C));
								t2 = (T63f14(GE_void(t1), t4));
							}
							if (t2) {
								t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a9:((T56*)(a4))->a9));
								t3 = ((l1)==(t1));
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a12:((T56*)(a4))->a12));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a13:((T56*)(a4))->a13));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a10:((T56*)(a4))->a10));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a11:((T56*)(a4))->a11));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a18:((T56*)(a4))->a18));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a14:((T56*)(a4))->a14));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a15:((T56*)(a4))->a15));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a16:((T56*)(a4))->a16));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a17:((T56*)(a4))->a17));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a23:((T56*)(a4))->a23));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a19:((T56*)(a4))->a19));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a20:((T56*)(a4))->a20));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a21:((T56*)(a4))->a21));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a22:((T56*)(a4))->a22));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a26:((T56*)(a4))->a26));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a27:((T56*)(a4))->a27));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a24:((T56*)(a4))->a24));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a25:((T56*)(a4))->a25));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a28:((T56*)(a4))->a28));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a35:((T56*)(a4))->a35));
									t2 = ((l1)==(t1));
								} else {
									t2 = EIF_TRUE;
								}
							}
							if (t2) {
								R = EIF_FALSE;
							} else {
								t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a64:((T56*)(a4))->a55));
								T60f164(GE_void(l1), t1);
								l2 = (T60f58(GE_void(l1), C, a4));
								t2 = ((l2)!=(EIF_VOID));
								if (t2) {
									l3 = (T172x6265(GE_void(a1)));
									t2 = ((l3)!=(EIF_VOID));
									if (t2) {
										l2 = (T158x6424T0(GE_void(l2), l3));
									}
									R = (T158x6372T0T0T0T0(GE_void(l2), C, a3, a2, a4));
								}
							}
						}
					}
				}
			}
		}
	}
	return R;
}

/* ET_CLASS_TYPE.ise_5_7_62488 */
T0* T172f30(T0* C)
{
	T0* R = 0;
	if (ge253os1737) {
		return ge253ov1737;
	} else {
		ge253os1737 = '\1';
	}
	R = T63c17((T6)(GE_int32(5)), (T6)(GE_int32(7)), (T6)(GE_int32(62488)), (T6)(GE_int32(0)));
	ge253ov1737 = R;
	return R;
}

/* ET_CLASS_TYPE.ise_5_6_latest */
T0* T172f29(T0* C)
{
	T0* R = 0;
	if (ge253os1732) {
		return ge253ov1732;
	} else {
		ge253os1732 = '\1';
	}
	R = T63c18((T6)(GE_int32(5)), (T6)(GE_int32(6)));
	ge253ov1732 = R;
	return R;
}

/* ET_CLASS.conforms_from_class_type */
T1 T60f53(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T1 t2;
	T1 t3;
	T0* t4;
	l1 = (T172x6330T0(GE_void(a1), a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a5:((T56*)(a4))->a5));
	t2 = ((l1)==(t1));
	if (t2) {
		R = EIF_FALSE;
	} else {
		t2 = ((a1)==(C));
		if (t2) {
			t2 = ((a2)==(a3));
		}
		if (t2) {
			R = EIF_TRUE;
		} else {
			t2 = ((((T60*)(C))->a8)==(l1));
			if (t2) {
				t2 = (T172x6273(GE_void(a1)));
				t2 = ((T1)(!(t2)));
				if (t2) {
					t2 = (T60f73(C));
					R = ((T1)(!(t2)));
				} else {
					t2 = (T60f73(C));
					t2 = ((T1)(!(t2)));
					if (t2) {
						R = EIF_FALSE;
					} else {
						l3 = (T172x6265(GE_void(a1)));
						t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a37:((T56*)(a4))->a37));
						t2 = ((((T60*)(C))->a8)==(t1));
						if (!(t2)) {
							t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a83:((T56*)(a4))->a51));
							t2 = ((((T60*)(C))->a8)==(t1));
						}
						if (!(t2)) {
							t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a85:((T56*)(a4))->a52));
							t2 = ((((T60*)(C))->a8)==(t1));
						}
						if (!(t2)) {
							t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a84:((T56*)(a4))->a53));
							t2 = ((((T60*)(C))->a8)==(t1));
						}
						if (t2) {
							R = (((((T0*)(GE_void(l3)))->id==173)?T173f9(l3, ((T60*)(C))->a11, a3, a2, a4):T429f11(l3, ((T60*)(C))->a11, a3, a2, a4)));
						} else {
							R = (((((T0*)(GE_void(l3)))->id==173)?T173f9(l3, ((T60*)(C))->a11, a3, a2, a4):T429f11(l3, ((T60*)(C))->a11, a3, a2, a4)));
						}
					}
				}
			} else {
				t2 = (T60f64(C));
				t2 = ((T1)(!(t2)));
				if (t2) {
					t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a3:((T56*)(a4))->a3));
					t2 = ((l1)==(t1));
					if (t2) {
						R = EIF_TRUE;
					} else {
						t2 = (T172x6276(GE_void(a1)));
						if (t2) {
							t3 = (((((T0*)(GE_void(a4)))->id==53)?T53f153(a4):T56f152(a4)));
							if (t3) {
								t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a36:((T56*)(a4))->a36));
								t4 = (T60f59(C));
								t2 = (T63f14(GE_void(t1), t4));
							} else {
								t2 = EIF_FALSE;
							}
						}
						if (t2) {
							R = EIF_FALSE;
						} else {
							t2 = (((((T0*)(GE_void(a4)))->id==53)?T53f153(a4):T56f152(a4)));
							if (t2) {
								t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a36:((T56*)(a4))->a36));
								t4 = (T60f60(C));
								t2 = (T63f14(GE_void(t1), t4));
							}
							if (t2) {
								t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a9:((T56*)(a4))->a9));
								t3 = ((l1)==(t1));
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a12:((T56*)(a4))->a12));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a13:((T56*)(a4))->a13));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a10:((T56*)(a4))->a10));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a11:((T56*)(a4))->a11));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a18:((T56*)(a4))->a18));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a14:((T56*)(a4))->a14));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a15:((T56*)(a4))->a15));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a16:((T56*)(a4))->a16));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a17:((T56*)(a4))->a17));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a23:((T56*)(a4))->a23));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a19:((T56*)(a4))->a19));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a20:((T56*)(a4))->a20));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a21:((T56*)(a4))->a21));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a22:((T56*)(a4))->a22));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a26:((T56*)(a4))->a26));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a27:((T56*)(a4))->a27));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a24:((T56*)(a4))->a24));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a25:((T56*)(a4))->a25));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a28:((T56*)(a4))->a28));
									t3 = ((l1)==(t1));
								}
								if (!(t3)) {
									t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a35:((T56*)(a4))->a35));
									t2 = ((l1)==(t1));
								} else {
									t2 = EIF_TRUE;
								}
							}
							if (t2) {
								R = EIF_FALSE;
							} else {
								t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a64:((T56*)(a4))->a55));
								T60f164(GE_void(l1), t1);
								l2 = (T60f58(GE_void(l1), C, a4));
								t2 = ((l2)!=(EIF_VOID));
								if (t2) {
									l3 = (T172x6265(GE_void(a1)));
									t2 = ((l3)!=(EIF_VOID));
									if (t2) {
										l2 = (T158x6424T0(GE_void(l2), l3));
									}
									R = (T158x6372T0T0T0T0(GE_void(l2), C, a3, a2, a4));
								}
							}
						}
					}
				}
			}
		}
	}
	return R;
}

/* ET_CLASS.ise_5_7_62488 */
T0* T60f60(T0* C)
{
	T0* R = 0;
	if (ge253os1737) {
		return ge253ov1737;
	} else {
		ge253os1737 = '\1';
	}
	R = T63c17((T6)(GE_int32(5)), (T6)(GE_int32(7)), (T6)(GE_int32(62488)), (T6)(GE_int32(0)));
	ge253ov1737 = R;
	return R;
}

/* ET_CLASS.ise_5_6_latest */
T0* T60f59(T0* C)
{
	T0* R = 0;
	if (ge253os1732) {
		return ge253ov1732;
	} else {
		ge253os1732 = '\1';
	}
	R = T63c18((T6)(GE_int32(5)), (T6)(GE_int32(6)));
	ge253ov1732 = R;
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.conforms_from_formal_parameter_type */
T1 T957f28(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* l7 = 0;
	T0* l8 = 0;
	T0* l9 = 0;
	T0* l10 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	T0* t4;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T957*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			l3 = (T957x22348(GE_void(l2)));
			l4 = (T957x22348(GE_void(a1)));
			t2 = ((l3)==(l4));
			if (t2) {
				R = EIF_TRUE;
			} else {
				t3 = (T168x6426(GE_void(a3)));
				l5 = (T158x6330T0(GE_void(t3), a4));
				l6 = (((T60*)(GE_void(l5)))->a11);
				t2 = ((l6)!=(EIF_VOID));
				if (t2) {
					t1 = (((T429*)(GE_void(l6)))->a1);
					t2 = (T6f13(&l4, t1));
				}
				if (t2) {
					l7 = (T429f7(GE_void(l6), l4));
					l8 = (((((T0*)(GE_void(l7)))->id==561)?T561f8(l7):((T569*)(l7))->a2));
					t2 = ((l8)!=(EIF_VOID));
					if (t2) {
						l9 = (((((T0*)(GE_void(l7)))->id==561)?T561f7(l7):((T569*)(l7))->a7));
						t2 = ((l9)!=(EIF_VOID));
						if (t2) {
							t2 = (((((T0*)(GE_void(a4)))->id==53)?T53f153(a4):T56f152(a4)));
							if (t2) {
								t3 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a36:((T56*)(a4))->a36));
								t4 = (T957f40(C));
								t2 = (T63f14(GE_void(t3), t4));
							}
							if (t2) {
								t2 = (T957x6347T0T0(GE_void(a1), a2, a4));
								if (t2) {
									t3 = (T168x6426(GE_void(a3)));
									t2 = (T957f39(C, t3, a4));
								}
								if (t2) {
									t3 = (T168x6426(GE_void(a3)));
									R = (T167x6377T0T0T0T0(GE_void(l8), C, t3, a2, a4));
								}
							} else {
								t3 = (T168x6426(GE_void(a3)));
								R = (T167x6372T0T0T0T0(GE_void(l8), C, t3, a2, a4));
							}
						} else {
							if ((l8)==EIF_VOID) {
								l2 = EIF_VOID;
							} else {
								switch (((T0*)(l8))->id) {
								case 957:
									l2 = l8;
									break;
								default:
									l2 = EIF_VOID;
								}
							}
							t2 = ((l2)!=(EIF_VOID));
							if (t2) {
								t1 = (((T429*)(GE_void(l6)))->a1);
								l10 = T905c5((T6)(GE_int32(1)), t1);
								T905f6(GE_void(l10), EIF_TRUE, l4);
								l4 = (T957x22348(GE_void(l2)));
								R = ((l3)==(l4));
								if (!(R)) {
									t2 = (T905f4(GE_void(l10), l4));
								} else {
									t2 = EIF_TRUE;
								}
								while (!(t2)) {
									T905f6(GE_void(l10), EIF_TRUE, l4);
									t1 = (((T429*)(GE_void(l6)))->a1);
									t2 = (T6f13(&l4, t1));
									if (t2) {
										l7 = (T429f7(GE_void(l6), l4));
										t3 = (((((T0*)(GE_void(l7)))->id==561)?T561f8(l7):((T569*)(l7))->a2));
										if ((t3)==EIF_VOID) {
											l2 = EIF_VOID;
										} else {
											switch (((T0*)(t3))->id) {
											case 957:
												l2 = t3;
												break;
											default:
												l2 = EIF_VOID;
											}
										}
										t2 = ((l2)!=(EIF_VOID));
										if (t2) {
											l4 = (T957x22348(GE_void(l2)));
											R = ((l3)==(l4));
										} else {
											R = EIF_FALSE;
										}
									} else {
										R = EIF_FALSE;
									}
									if (!(R)) {
										t2 = (T905f4(GE_void(l10), l4));
									} else {
										t2 = EIF_TRUE;
									}
								}
							} else {
								R = EIF_FALSE;
							}
						}
					}
				} else {
					R = EIF_FALSE;
				}
			}
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6375T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.ise_5_6_latest */
T0* T957f40(T0* C)
{
	T0* R = 0;
	if (ge253os1732) {
		return ge253ov1732;
	} else {
		ge253os1732 = '\1';
	}
	R = T63c18((T6)(GE_int32(5)), (T6)(GE_int32(6)));
	ge253ov1732 = R;
	return R;
}

/* ET_LIKE_CURRENT.conforms_from_formal_parameter_type */
T1 T720f29(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	R = (T168x6459T0T0T0(GE_void(a3), a1, a2, a4));
	return R;
}

/* ET_LIKE_FEATURE.conforms_from_formal_parameter_type */
T1 T718f27(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((((T718*)(C))->a3)==((T6)(GE_int32(0))));
	if (t1) {
		R = EIF_FALSE;
	} else {
		t1 = (T718f36(C));
		if (t1) {
			l1 = (T168x6428T0(GE_void(a3), a4));
			if (((T718*)(C))->a4) {
				l2 = (T60f67(GE_void(l1), ((T718*)(C))->a3));
			} else {
				l2 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			}
			t1 = ((l2)!=(EIF_VOID));
			if (t1) {
				l4 = (T201x12784(GE_void(l2)));
				l5 = (T718f38(C));
				t1 = ((l4)==(EIF_VOID));
				if (!(t1)) {
					t2 = (((T236*)(GE_void(l4)))->a3);
					t1 = (T6f1(&l5, t2));
				}
				if (t1) {
					R = EIF_FALSE;
				} else {
					t3 = (T236f11(GE_void(l4), l5));
					t3 = (((((T0*)(GE_void(t3)))->id==242)?T242f4(t3):T964f4(t3)));
					R = (T167x6375T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
				}
			} else {
				R = EIF_FALSE;
			}
		} else {
			l1 = (T168x6428T0(GE_void(a3), a4));
			l3 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			t1 = ((l3)!=(EIF_VOID));
			if (t1) {
				t3 = (T160x12783(GE_void(l3)));
				R = (T167x6375T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
			} else {
				R = EIF_FALSE;
			}
		}
	}
	return R;
}

/* ET_BIT_FEATURE.conforms_from_formal_parameter_type */
T1 T582f29(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T6 l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T0* t4;
	l1 = (T957x22348(GE_void(a1)));
	t1 = (T168x6428T0(GE_void(a2), a4));
	l3 = (((T60*)(GE_void(t1)))->a11);
	t2 = ((l3)==(EIF_VOID));
	if (!(t2)) {
		t3 = (((T429*)(GE_void(l3)))->a1);
		t2 = (T6f1(&l1, t3));
	}
	if (t2) {
		R = EIF_FALSE;
	} else {
		l2 = (T429f7(GE_void(l3), l1));
		l4 = (((((T0*)(GE_void(l2)))->id==561)?T561f8(l2):((T569*)(l2))->a2));
		t2 = ((l4)==(EIF_VOID));
		if (t2) {
			l6 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a45:((T56*)(a4))->a45));
			t2 = (((((T0*)(GE_void(a4)))->id==53)?T53f153(a4):T56f152(a4)));
			if (t2) {
				t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a36:((T56*)(a4))->a36));
				t4 = (T582f46(C));
				t2 = (T63f14(GE_void(t1), t4));
			}
			if (t2) {
				t2 = (T957x6347T0T0(GE_void(a1), a2, a4));
				if (t2) {
					t2 = (T582f47(C, a3, a4));
				}
				if (t2) {
					R = (T582f22(C, l6, a2, a3, a4));
				}
			} else {
				R = (T582f22(C, l6, a2, a3, a4));
			}
		} else {
			l5 = (((((T0*)(GE_void(l2)))->id==561)?T561f7(l2):((T569*)(l2))->a7));
			t2 = ((l5)!=(EIF_VOID));
			if (t2) {
				t2 = (((((T0*)(GE_void(a4)))->id==53)?T53f153(a4):T56f152(a4)));
				if (t2) {
					t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a36:((T56*)(a4))->a36));
					t4 = (T582f46(C));
					t2 = (T63f14(GE_void(t1), t4));
				}
				if (t2) {
					t2 = (T957x6347T0T0(GE_void(a1), a2, a4));
					if (t2) {
						t2 = (T582f47(C, a3, a4));
					}
					if (t2) {
						R = (T158x6372T0T0T0T0(GE_void(l5), C, a3, a2, a4));
					}
				} else {
					R = (T158x6372T0T0T0T0(GE_void(l5), C, a3, a2, a4));
				}
			} else {
				R = EIF_FALSE;
			}
		}
	}
	return R;
}

/* ET_BIT_FEATURE.ise_5_6_latest */
T0* T582f46(T0* C)
{
	T0* R = 0;
	if (ge253os1732) {
		return ge253ov1732;
	} else {
		ge253os1732 = '\1';
	}
	R = T63c18((T6)(GE_int32(5)), (T6)(GE_int32(6)));
	ge253ov1732 = R;
	return R;
}

/* ET_BIT_N.conforms_from_formal_parameter_type */
T1 T581f29(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T6 l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T0* t4;
	l1 = (T957x22348(GE_void(a1)));
	t1 = (T168x6428T0(GE_void(a2), a4));
	l3 = (((T60*)(GE_void(t1)))->a11);
	t2 = ((l3)==(EIF_VOID));
	if (!(t2)) {
		t3 = (((T429*)(GE_void(l3)))->a1);
		t2 = (T6f1(&l1, t3));
	}
	if (t2) {
		R = EIF_FALSE;
	} else {
		l2 = (T429f7(GE_void(l3), l1));
		l4 = (((((T0*)(GE_void(l2)))->id==561)?T561f8(l2):((T569*)(l2))->a2));
		t2 = ((l4)==(EIF_VOID));
		if (t2) {
			l6 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a45:((T56*)(a4))->a45));
			t2 = (((((T0*)(GE_void(a4)))->id==53)?T53f153(a4):T56f152(a4)));
			if (t2) {
				t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a36:((T56*)(a4))->a36));
				t4 = (T581f44(C));
				t2 = (T63f14(GE_void(t1), t4));
			}
			if (t2) {
				t2 = (T957x6347T0T0(GE_void(a1), a2, a4));
				if (t2) {
					t2 = (T581f45(C, a3, a4));
				}
				if (t2) {
					R = (T581f23(C, l6, a2, a3, a4));
				}
			} else {
				R = (T581f23(C, l6, a2, a3, a4));
			}
		} else {
			l5 = (((((T0*)(GE_void(l2)))->id==561)?T561f7(l2):((T569*)(l2))->a7));
			t2 = ((l5)!=(EIF_VOID));
			if (t2) {
				t2 = (((((T0*)(GE_void(a4)))->id==53)?T53f153(a4):T56f152(a4)));
				if (t2) {
					t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a36:((T56*)(a4))->a36));
					t4 = (T581f44(C));
					t2 = (T63f14(GE_void(t1), t4));
				}
				if (t2) {
					t2 = (T957x6347T0T0(GE_void(a1), a2, a4));
					if (t2) {
						t2 = (T581f45(C, a3, a4));
					}
					if (t2) {
						R = (T158x6372T0T0T0T0(GE_void(l5), C, a3, a2, a4));
					}
				} else {
					R = (T158x6372T0T0T0T0(GE_void(l5), C, a3, a2, a4));
				}
			} else {
				R = EIF_FALSE;
			}
		}
	}
	return R;
}

/* ET_BIT_N.ise_5_6_latest */
T0* T581f44(T0* C)
{
	T0* R = 0;
	if (ge253os1732) {
		return ge253ov1732;
	} else {
		ge253os1732 = '\1';
	}
	R = T63c18((T6)(GE_int32(5)), (T6)(GE_int32(6)));
	ge253ov1732 = R;
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.conforms_from_formal_parameter_type */
T1 T569f20(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* l7 = 0;
	T0* l8 = 0;
	T0* l9 = 0;
	T0* l10 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	T0* t4;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T569*)(C))->a6, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			l3 = (T957x22348(GE_void(l2)));
			l4 = (T957x22348(GE_void(a1)));
			t2 = ((l3)==(l4));
			if (t2) {
				R = EIF_TRUE;
			} else {
				t3 = (T168x6426(GE_void(a3)));
				l5 = (T158x6330T0(GE_void(t3), a4));
				l6 = (((T60*)(GE_void(l5)))->a11);
				t2 = ((l6)!=(EIF_VOID));
				if (t2) {
					t1 = (((T429*)(GE_void(l6)))->a1);
					t2 = (T6f13(&l4, t1));
				}
				if (t2) {
					l7 = (T429f7(GE_void(l6), l4));
					l8 = (((((T0*)(GE_void(l7)))->id==561)?T561f8(l7):((T569*)(l7))->a2));
					t2 = ((l8)!=(EIF_VOID));
					if (t2) {
						l9 = (((((T0*)(GE_void(l7)))->id==561)?T561f7(l7):((T569*)(l7))->a7));
						t2 = ((l9)!=(EIF_VOID));
						if (t2) {
							t2 = (((((T0*)(GE_void(a4)))->id==53)?T53f153(a4):T56f152(a4)));
							if (t2) {
								t3 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a36:((T56*)(a4))->a36));
								t4 = (T569f29(C));
								t2 = (T63f14(GE_void(t3), t4));
							}
							if (t2) {
								t2 = (T957x6347T0T0(GE_void(a1), a2, a4));
								if (t2) {
									t3 = (T168x6426(GE_void(a3)));
									t2 = (T569f28(C, t3, a4));
								}
								if (t2) {
									t3 = (T168x6426(GE_void(a3)));
									R = (T167x6377T0T0T0T0(GE_void(l8), C, t3, a2, a4));
								}
							} else {
								t3 = (T168x6426(GE_void(a3)));
								R = (T167x6372T0T0T0T0(GE_void(l8), C, t3, a2, a4));
							}
						} else {
							if ((l8)==EIF_VOID) {
								l2 = EIF_VOID;
							} else {
								switch (((T0*)(l8))->id) {
								case 957:
									l2 = l8;
									break;
								default:
									l2 = EIF_VOID;
								}
							}
							t2 = ((l2)!=(EIF_VOID));
							if (t2) {
								t1 = (((T429*)(GE_void(l6)))->a1);
								l10 = T905c5((T6)(GE_int32(1)), t1);
								T905f6(GE_void(l10), EIF_TRUE, l4);
								l4 = (T957x22348(GE_void(l2)));
								R = ((l3)==(l4));
								if (!(R)) {
									t2 = (T905f4(GE_void(l10), l4));
								} else {
									t2 = EIF_TRUE;
								}
								while (!(t2)) {
									T905f6(GE_void(l10), EIF_TRUE, l4);
									t1 = (((T429*)(GE_void(l6)))->a1);
									t2 = (T6f13(&l4, t1));
									if (t2) {
										l7 = (T429f7(GE_void(l6), l4));
										t3 = (((((T0*)(GE_void(l7)))->id==561)?T561f8(l7):((T569*)(l7))->a2));
										if ((t3)==EIF_VOID) {
											l2 = EIF_VOID;
										} else {
											switch (((T0*)(t3))->id) {
											case 957:
												l2 = t3;
												break;
											default:
												l2 = EIF_VOID;
											}
										}
										t2 = ((l2)!=(EIF_VOID));
										if (t2) {
											l4 = (T957x22348(GE_void(l2)));
											R = ((l3)==(l4));
										} else {
											R = EIF_FALSE;
										}
									} else {
										R = EIF_FALSE;
									}
									if (!(R)) {
										t2 = (T905f4(GE_void(l10), l4));
									} else {
										t2 = EIF_TRUE;
									}
								}
							} else {
								R = EIF_FALSE;
							}
						}
					}
				} else {
					R = EIF_FALSE;
				}
			}
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6375T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.ise_5_6_latest */
T0* T569f29(T0* C)
{
	T0* R = 0;
	if (ge253os1732) {
		return ge253ov1732;
	} else {
		ge253os1732 = '\1';
	}
	R = T63c18((T6)(GE_int32(5)), (T6)(GE_int32(6)));
	ge253ov1732 = R;
	return R;
}

/* ET_FORMAL_PARAMETER.conforms_from_formal_parameter_type */
T1 T561f24(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* l7 = 0;
	T0* l8 = 0;
	T0* l9 = 0;
	T0* l10 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	T0* t4;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T561*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			l3 = (T957x22348(GE_void(l2)));
			l4 = (T957x22348(GE_void(a1)));
			t2 = ((l3)==(l4));
			if (t2) {
				R = EIF_TRUE;
			} else {
				t3 = (T168x6426(GE_void(a3)));
				l5 = (T158x6330T0(GE_void(t3), a4));
				l6 = (((T60*)(GE_void(l5)))->a11);
				t2 = ((l6)!=(EIF_VOID));
				if (t2) {
					t1 = (((T429*)(GE_void(l6)))->a1);
					t2 = (T6f13(&l4, t1));
				}
				if (t2) {
					l7 = (T429f7(GE_void(l6), l4));
					l8 = (((((T0*)(GE_void(l7)))->id==561)?T561f8(l7):((T569*)(l7))->a2));
					t2 = ((l8)!=(EIF_VOID));
					if (t2) {
						l9 = (((((T0*)(GE_void(l7)))->id==561)?T561f7(l7):((T569*)(l7))->a7));
						t2 = ((l9)!=(EIF_VOID));
						if (t2) {
							t2 = (((((T0*)(GE_void(a4)))->id==53)?T53f153(a4):T56f152(a4)));
							if (t2) {
								t3 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a36:((T56*)(a4))->a36));
								t4 = (T561f27(C));
								t2 = (T63f14(GE_void(t3), t4));
							}
							if (t2) {
								t2 = (T957x6347T0T0(GE_void(a1), a2, a4));
								if (t2) {
									t3 = (T168x6426(GE_void(a3)));
									t2 = (T561f23(C, t3, a4));
								}
								if (t2) {
									t3 = (T168x6426(GE_void(a3)));
									R = (T167x6377T0T0T0T0(GE_void(l8), C, t3, a2, a4));
								}
							} else {
								t3 = (T168x6426(GE_void(a3)));
								R = (T167x6372T0T0T0T0(GE_void(l8), C, t3, a2, a4));
							}
						} else {
							if ((l8)==EIF_VOID) {
								l2 = EIF_VOID;
							} else {
								switch (((T0*)(l8))->id) {
								case 957:
									l2 = l8;
									break;
								default:
									l2 = EIF_VOID;
								}
							}
							t2 = ((l2)!=(EIF_VOID));
							if (t2) {
								t1 = (((T429*)(GE_void(l6)))->a1);
								l10 = T905c5((T6)(GE_int32(1)), t1);
								T905f6(GE_void(l10), EIF_TRUE, l4);
								l4 = (T957x22348(GE_void(l2)));
								R = ((l3)==(l4));
								if (!(R)) {
									t2 = (T905f4(GE_void(l10), l4));
								} else {
									t2 = EIF_TRUE;
								}
								while (!(t2)) {
									T905f6(GE_void(l10), EIF_TRUE, l4);
									t1 = (((T429*)(GE_void(l6)))->a1);
									t2 = (T6f13(&l4, t1));
									if (t2) {
										l7 = (T429f7(GE_void(l6), l4));
										t3 = (((((T0*)(GE_void(l7)))->id==561)?T561f8(l7):((T569*)(l7))->a2));
										if ((t3)==EIF_VOID) {
											l2 = EIF_VOID;
										} else {
											switch (((T0*)(t3))->id) {
											case 957:
												l2 = t3;
												break;
											default:
												l2 = EIF_VOID;
											}
										}
										t2 = ((l2)!=(EIF_VOID));
										if (t2) {
											l4 = (T957x22348(GE_void(l2)));
											R = ((l3)==(l4));
										} else {
											R = EIF_FALSE;
										}
									} else {
										R = EIF_FALSE;
									}
									if (!(R)) {
										t2 = (T905f4(GE_void(l10), l4));
									} else {
										t2 = EIF_TRUE;
									}
								}
							} else {
								R = EIF_FALSE;
							}
						}
					}
				} else {
					R = EIF_FALSE;
				}
			}
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6375T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER.ise_5_6_latest */
T0* T561f27(T0* C)
{
	T0* R = 0;
	if (ge253os1732) {
		return ge253ov1732;
	} else {
		ge253os1732 = '\1';
	}
	R = T63c18((T6)(GE_int32(5)), (T6)(GE_int32(6)));
	ge253ov1732 = R;
	return R;
}

/* ET_TUPLE_TYPE.conforms_from_formal_parameter_type */
T1 T181f35(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T6 l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T0* t4;
	l1 = (T957x22348(GE_void(a1)));
	t1 = (T168x6428T0(GE_void(a2), a4));
	l3 = (((T60*)(GE_void(t1)))->a11);
	t2 = ((l3)==(EIF_VOID));
	if (!(t2)) {
		t3 = (((T429*)(GE_void(l3)))->a1);
		t2 = (T6f1(&l1, t3));
	}
	if (t2) {
		R = EIF_FALSE;
	} else {
		l2 = (T429f7(GE_void(l3), l1));
		l4 = (((((T0*)(GE_void(l2)))->id==561)?T561f8(l2):((T569*)(l2))->a2));
		t2 = ((l4)==(EIF_VOID));
		if (t2) {
			l6 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a45:((T56*)(a4))->a45));
			t2 = (((((T0*)(GE_void(a4)))->id==53)?T53f153(a4):T56f152(a4)));
			if (t2) {
				t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a36:((T56*)(a4))->a36));
				t4 = (T181f64(C));
				t2 = (T63f14(GE_void(t1), t4));
			}
			if (t2) {
				t2 = (T957x6347T0T0(GE_void(a1), a2, a4));
				if (t2) {
					t2 = (T181f50(C, a3, a4));
				}
				if (t2) {
					R = (T181f7(C, l6, a2, a3, a4));
				}
			} else {
				R = (T181f7(C, l6, a2, a3, a4));
			}
		} else {
			l5 = (((((T0*)(GE_void(l2)))->id==561)?T561f7(l2):((T569*)(l2))->a7));
			t2 = ((l5)!=(EIF_VOID));
			if (t2) {
				t2 = (((((T0*)(GE_void(a4)))->id==53)?T53f153(a4):T56f152(a4)));
				if (t2) {
					t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a36:((T56*)(a4))->a36));
					t4 = (T181f64(C));
					t2 = (T63f14(GE_void(t1), t4));
				}
				if (t2) {
					t2 = (T957x6347T0T0(GE_void(a1), a2, a4));
					if (t2) {
						t2 = (T181f50(C, a3, a4));
					}
					if (t2) {
						R = (T158x6372T0T0T0T0(GE_void(l5), C, a3, a2, a4));
					}
				} else {
					R = (T158x6372T0T0T0T0(GE_void(l5), C, a3, a2, a4));
				}
			} else {
				R = EIF_FALSE;
			}
		}
	}
	return R;
}

/* ET_TUPLE_TYPE.ise_5_6_latest */
T0* T181f64(T0* C)
{
	T0* R = 0;
	if (ge253os1732) {
		return ge253ov1732;
	} else {
		ge253os1732 = '\1';
	}
	R = T63c18((T6)(GE_int32(5)), (T6)(GE_int32(6)));
	ge253ov1732 = R;
	return R;
}

/* ET_GENERIC_CLASS_TYPE.conforms_from_formal_parameter_type */
T1 T174f41(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T6 l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T0* t4;
	l1 = (T957x22348(GE_void(a1)));
	t1 = (T168x6428T0(GE_void(a2), a4));
	l3 = (((T60*)(GE_void(t1)))->a11);
	t2 = ((l3)==(EIF_VOID));
	if (!(t2)) {
		t3 = (((T429*)(GE_void(l3)))->a1);
		t2 = (T6f1(&l1, t3));
	}
	if (t2) {
		R = EIF_FALSE;
	} else {
		l2 = (T429f7(GE_void(l3), l1));
		l4 = (((((T0*)(GE_void(l2)))->id==561)?T561f8(l2):((T569*)(l2))->a2));
		t2 = ((l4)==(EIF_VOID));
		if (t2) {
			l6 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a45:((T56*)(a4))->a45));
			t2 = (((((T0*)(GE_void(a4)))->id==53)?T53f153(a4):T56f152(a4)));
			if (t2) {
				t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a36:((T56*)(a4))->a36));
				t4 = (T174f13(C));
				t2 = (T63f14(GE_void(t1), t4));
			}
			if (t2) {
				t2 = (T957x6347T0T0(GE_void(a1), a2, a4));
				if (t2) {
					t2 = (T174f60(C, a3, a4));
				}
				if (t2) {
					R = (T174f11(C, l6, a2, a3, a4));
				}
			} else {
				R = (T174f11(C, l6, a2, a3, a4));
			}
		} else {
			l5 = (((((T0*)(GE_void(l2)))->id==561)?T561f7(l2):((T569*)(l2))->a7));
			t2 = ((l5)!=(EIF_VOID));
			if (t2) {
				t2 = (((((T0*)(GE_void(a4)))->id==53)?T53f153(a4):T56f152(a4)));
				if (t2) {
					t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a36:((T56*)(a4))->a36));
					t4 = (T174f13(C));
					t2 = (T63f14(GE_void(t1), t4));
				}
				if (t2) {
					t2 = (T957x6347T0T0(GE_void(a1), a2, a4));
					if (t2) {
						t2 = (T174f60(C, a3, a4));
					}
					if (t2) {
						R = (T158x6372T0T0T0T0(GE_void(l5), C, a3, a2, a4));
					}
				} else {
					R = (T158x6372T0T0T0T0(GE_void(l5), C, a3, a2, a4));
				}
			} else {
				R = EIF_FALSE;
			}
		}
	}
	return R;
}

/* ET_CLASS_TYPE.conforms_from_formal_parameter_type */
T1 T172f38(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T6 l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T0* t4;
	l1 = (T957x22348(GE_void(a1)));
	t1 = (T168x6428T0(GE_void(a2), a4));
	l3 = (((T60*)(GE_void(t1)))->a11);
	t2 = ((l3)==(EIF_VOID));
	if (!(t2)) {
		t3 = (((T429*)(GE_void(l3)))->a1);
		t2 = (T6f1(&l1, t3));
	}
	if (t2) {
		R = EIF_FALSE;
	} else {
		l2 = (T429f7(GE_void(l3), l1));
		l4 = (((((T0*)(GE_void(l2)))->id==561)?T561f8(l2):((T569*)(l2))->a2));
		t2 = ((l4)==(EIF_VOID));
		if (t2) {
			l6 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a45:((T56*)(a4))->a45));
			t2 = (((((T0*)(GE_void(a4)))->id==53)?T53f153(a4):T56f152(a4)));
			if (t2) {
				t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a36:((T56*)(a4))->a36));
				t4 = (T172f29(C));
				t2 = (T63f14(GE_void(t1), t4));
			}
			if (t2) {
				t2 = (T957x6347T0T0(GE_void(a1), a2, a4));
				if (t2) {
					t2 = (T172f54(C, a3, a4));
				}
				if (t2) {
					R = (T172f14(C, l6, a2, a3, a4));
				}
			} else {
				R = (T172f14(C, l6, a2, a3, a4));
			}
		} else {
			l5 = (((((T0*)(GE_void(l2)))->id==561)?T561f7(l2):((T569*)(l2))->a7));
			t2 = ((l5)!=(EIF_VOID));
			if (t2) {
				t2 = (((((T0*)(GE_void(a4)))->id==53)?T53f153(a4):T56f152(a4)));
				if (t2) {
					t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a36:((T56*)(a4))->a36));
					t4 = (T172f29(C));
					t2 = (T63f14(GE_void(t1), t4));
				}
				if (t2) {
					t2 = (T957x6347T0T0(GE_void(a1), a2, a4));
					if (t2) {
						t2 = (T172f54(C, a3, a4));
					}
					if (t2) {
						R = (T158x6372T0T0T0T0(GE_void(l5), C, a3, a2, a4));
					}
				} else {
					R = (T158x6372T0T0T0T0(GE_void(l5), C, a3, a2, a4));
				}
			} else {
				R = EIF_FALSE;
			}
		}
	}
	return R;
}

/* ET_CLASS.conforms_from_formal_parameter_type */
T1 T60f105(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T6 l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T0* t4;
	l1 = (T957x22348(GE_void(a1)));
	t1 = (T168x6428T0(GE_void(a2), a4));
	l3 = (((T60*)(GE_void(t1)))->a11);
	t2 = ((l3)==(EIF_VOID));
	if (!(t2)) {
		t3 = (((T429*)(GE_void(l3)))->a1);
		t2 = (T6f1(&l1, t3));
	}
	if (t2) {
		R = EIF_FALSE;
	} else {
		l2 = (T429f7(GE_void(l3), l1));
		l4 = (((((T0*)(GE_void(l2)))->id==561)?T561f8(l2):((T569*)(l2))->a2));
		t2 = ((l4)==(EIF_VOID));
		if (t2) {
			l6 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a45:((T56*)(a4))->a45));
			t2 = (((((T0*)(GE_void(a4)))->id==53)?T53f153(a4):T56f152(a4)));
			if (t2) {
				t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a36:((T56*)(a4))->a36));
				t4 = (T60f59(C));
				t2 = (T63f14(GE_void(t1), t4));
			}
			if (t2) {
				t2 = (T957x6347T0T0(GE_void(a1), a2, a4));
				if (t2) {
					t2 = (T60f134(C, a3, a4));
				}
				if (t2) {
					R = (T60f53(C, l6, a2, a3, a4));
				}
			} else {
				R = (T60f53(C, l6, a2, a3, a4));
			}
		} else {
			l5 = (((((T0*)(GE_void(l2)))->id==561)?T561f7(l2):((T569*)(l2))->a7));
			t2 = ((l5)!=(EIF_VOID));
			if (t2) {
				t2 = (((((T0*)(GE_void(a4)))->id==53)?T53f153(a4):T56f152(a4)));
				if (t2) {
					t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a36:((T56*)(a4))->a36));
					t4 = (T60f59(C));
					t2 = (T63f14(GE_void(t1), t4));
				}
				if (t2) {
					t2 = (T957x6347T0T0(GE_void(a1), a2, a4));
					if (t2) {
						t2 = (T60f134(C, a3, a4));
					}
					if (t2) {
						R = (T158x6372T0T0T0T0(GE_void(l5), C, a3, a2, a4));
					}
				} else {
					R = (T158x6372T0T0T0T0(GE_void(l5), C, a3, a2, a4));
				}
			} else {
				R = EIF_FALSE;
			}
		}
	}
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.conforms_from_bit_type */
T1 T957f33(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T957*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6373T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_LIKE_CURRENT.conforms_from_bit_type */
T1 T720f34(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	R = (T168x6457T0T0T0(GE_void(a3), a1, a2, a4));
	return R;
}

/* ET_LIKE_FEATURE.conforms_from_bit_type */
T1 T718f22(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((((T718*)(C))->a3)==((T6)(GE_int32(0))));
	if (t1) {
		R = EIF_FALSE;
	} else {
		t1 = (T718f36(C));
		if (t1) {
			l1 = (T168x6428T0(GE_void(a3), a4));
			if (((T718*)(C))->a4) {
				l2 = (T60f67(GE_void(l1), ((T718*)(C))->a3));
			} else {
				l2 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			}
			t1 = ((l2)!=(EIF_VOID));
			if (t1) {
				l4 = (T201x12784(GE_void(l2)));
				l5 = (T718f38(C));
				t1 = ((l4)==(EIF_VOID));
				if (!(t1)) {
					t2 = (((T236*)(GE_void(l4)))->a3);
					t1 = (T6f1(&l5, t2));
				}
				if (t1) {
					R = EIF_FALSE;
				} else {
					t3 = (T236f11(GE_void(l4), l5));
					t3 = (((((T0*)(GE_void(t3)))->id==242)?T242f4(t3):T964f4(t3)));
					R = (T167x6373T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
				}
			} else {
				R = EIF_FALSE;
			}
		} else {
			l1 = (T168x6428T0(GE_void(a3), a4));
			l3 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			t1 = ((l3)!=(EIF_VOID));
			if (t1) {
				t3 = (T160x12783(GE_void(l3)));
				R = (T167x6373T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
			} else {
				R = EIF_FALSE;
			}
		}
	}
	return R;
}

/* ET_BIT_FEATURE.conforms_from_bit_type */
T1 T582f24(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		T582f103(C);
		t1 = (T582f45(C));
		t1 = ((T1)(!(t1)));
		if (t1) {
			if (((T0*)(a1))->id==581) {
				T581f97(a1);
			} else {
				T582f103(a1);
			}
			t1 = (((((T0*)(a1))->id==581)?T581f5(a1):T582f45(a1)));
			t1 = ((T1)(!(t1)));
			if (t1) {
				t2 = (((((T0*)(a1))->id==581)?((T581*)(a1))->a2:((T582*)(a1))->a3));
				R = (T6f13(&t2, ((T582*)(C))->a3));
			}
		}
	}
	return R;
}

/* ET_BIT_N.conforms_from_bit_type */
T1 T581f43(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		T581f97(C);
		t1 = (T581f5(C));
		t1 = ((T1)(!(t1)));
		if (t1) {
			if (((T0*)(a1))->id==581) {
				T581f97(a1);
			} else {
				T582f103(a1);
			}
			t1 = (((((T0*)(a1))->id==581)?T581f5(a1):T582f45(a1)));
			t1 = ((T1)(!(t1)));
			if (t1) {
				t2 = (((((T0*)(a1))->id==581)?((T581*)(a1))->a2:((T582*)(a1))->a3));
				R = (T6f13(&t2, ((T581*)(C))->a2));
			}
		}
	}
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.conforms_from_bit_type */
T1 T569f31(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T569*)(C))->a6, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6373T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER.conforms_from_bit_type */
T1 T561f29(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T561*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6373T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_TUPLE_TYPE.conforms_from_bit_type */
T1 T181f39(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	l1 = (((((T0*)(a1))->id==581)?T581f17(a1, a4):T582f15(a1, a4)));
	t1 = (T60f72(GE_void(l1)));
	if (t1) {
		R = (T181f7(C, l1, a2, a3, a4));
	}
	t1 = ((T1)(!(R)));
	if (t1) {
		l2 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a4:((T56*)(a4))->a4));
		R = (T181f7(C, l2, a2, a3, a4));
	}
	return R;
}

/* ET_GENERIC_CLASS_TYPE.conforms_from_bit_type */
T1 T174f46(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	l1 = (((((T0*)(a1))->id==581)?T581f17(a1, a4):T582f15(a1, a4)));
	t1 = (T60f72(GE_void(l1)));
	if (t1) {
		R = (T174f11(C, l1, a2, a3, a4));
	}
	t1 = ((T1)(!(R)));
	if (t1) {
		l2 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a4:((T56*)(a4))->a4));
		R = (T174f11(C, l2, a2, a3, a4));
	}
	return R;
}

/* ET_CLASS_TYPE.conforms_from_bit_type */
T1 T172f42(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	l1 = (((((T0*)(a1))->id==581)?T581f17(a1, a4):T582f15(a1, a4)));
	t1 = (T60f72(GE_void(l1)));
	if (t1) {
		R = (T172f14(C, l1, a2, a3, a4));
	}
	t1 = ((T1)(!(R)));
	if (t1) {
		l2 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a4:((T56*)(a4))->a4));
		R = (T172f14(C, l2, a2, a3, a4));
	}
	return R;
}

/* ET_CLASS.conforms_from_bit_type */
T1 T60f110(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	l1 = (((((T0*)(a1))->id==581)?T581f17(a1, a4):T582f15(a1, a4)));
	t1 = (T60f72(GE_void(l1)));
	if (t1) {
		R = (T60f53(C, l1, a2, a3, a4));
	}
	t1 = ((T1)(!(R)));
	if (t1) {
		l2 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a4:((T56*)(a4))->a4));
		R = (T60f53(C, l2, a2, a3, a4));
	}
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.conforms_from_tuple_type */
T1 T957f23(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T957*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6376T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_LIKE_CURRENT.conforms_from_tuple_type */
T1 T720f24(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	R = (T168x6460T0T0T0(GE_void(a3), a1, a2, a4));
	return R;
}

/* ET_LIKE_FEATURE.conforms_from_tuple_type */
T1 T718f21(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((((T718*)(C))->a3)==((T6)(GE_int32(0))));
	if (t1) {
		R = EIF_FALSE;
	} else {
		t1 = (T718f36(C));
		if (t1) {
			l1 = (T168x6428T0(GE_void(a3), a4));
			if (((T718*)(C))->a4) {
				l2 = (T60f67(GE_void(l1), ((T718*)(C))->a3));
			} else {
				l2 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			}
			t1 = ((l2)!=(EIF_VOID));
			if (t1) {
				l4 = (T201x12784(GE_void(l2)));
				l5 = (T718f38(C));
				t1 = ((l4)==(EIF_VOID));
				if (!(t1)) {
					t2 = (((T236*)(GE_void(l4)))->a3);
					t1 = (T6f1(&l5, t2));
				}
				if (t1) {
					R = EIF_FALSE;
				} else {
					t3 = (T236f11(GE_void(l4), l5));
					t3 = (((((T0*)(GE_void(t3)))->id==242)?T242f4(t3):T964f4(t3)));
					R = (T167x6376T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
				}
			} else {
				R = EIF_FALSE;
			}
		} else {
			l1 = (T168x6428T0(GE_void(a3), a4));
			l3 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			t1 = ((l3)!=(EIF_VOID));
			if (t1) {
				t3 = (T160x12783(GE_void(l3)));
				R = (T167x6376T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
			} else {
				R = EIF_FALSE;
			}
		}
	}
	return R;
}

/* ET_BIT_FEATURE.conforms_from_tuple_type */
T1 T582f23(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	T0* t2;
	l1 = (T181f6(a1, a4));
	t1 = (T60f72(GE_void(l1)));
	if (t1) {
		R = (T582f22(C, l1, a2, a3, a4));
	}
	t1 = ((T1)(!(R)));
	if (t1) {
		t2 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a80:((T56*)(a4))->a50));
		R = (T582f22(C, t2, a2, a3, a4));
	}
	return R;
}

/* ET_BIT_N.conforms_from_tuple_type */
T1 T581f24(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	T0* t2;
	l1 = (T181f6(a1, a4));
	t1 = (T60f72(GE_void(l1)));
	if (t1) {
		R = (T581f23(C, l1, a2, a3, a4));
	}
	t1 = ((T1)(!(R)));
	if (t1) {
		t2 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a80:((T56*)(a4))->a50));
		R = (T581f23(C, t2, a2, a3, a4));
	}
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.conforms_from_tuple_type */
T1 T569f19(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T569*)(C))->a6, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6376T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER.conforms_from_tuple_type */
T1 T561f17(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T561*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6376T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_TUPLE_TYPE.conforms_from_tuple_type */
T1 T181f11(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		t1 = ((a2)==(a3));
	}
	if (t1) {
		R = EIF_TRUE;
	} else {
		l1 = ((T181*)(C))->a1;
		l2 = (((T181*)(a1))->a1);
		t1 = ((l1)==(EIF_VOID));
		if (t1) {
			R = EIF_TRUE;
		} else {
			t1 = ((l2)==(EIF_VOID));
			if (t1) {
				R = (T173f10(GE_void(l1)));
			} else {
				R = (T173f11(GE_void(l2), l1, a3, a2, a4));
			}
		}
	}
	return R;
}

/* ET_GENERIC_CLASS_TYPE.conforms_from_tuple_type */
T1 T174f16(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	T0* t2;
	l1 = (T181f6(a1, a4));
	t1 = (T60f72(GE_void(l1)));
	if (t1) {
		R = (T174f11(C, l1, a2, a3, a4));
	}
	t1 = ((T1)(!(R)));
	if (t1) {
		t2 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a80:((T56*)(a4))->a50));
		R = (T174f11(C, t2, a2, a3, a4));
	}
	return R;
}

/* ET_CLASS_TYPE.conforms_from_tuple_type */
T1 T172f25(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	T0* t2;
	l1 = (T181f6(a1, a4));
	t1 = (T60f72(GE_void(l1)));
	if (t1) {
		R = (T172f14(C, l1, a2, a3, a4));
	}
	t1 = ((T1)(!(R)));
	if (t1) {
		t2 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a80:((T56*)(a4))->a50));
		R = (T172f14(C, t2, a2, a3, a4));
	}
	return R;
}

/* ET_CLASS.conforms_from_tuple_type */
T1 T60f54(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	T0* t2;
	l1 = (T181f6(a1, a4));
	t1 = (T60f72(GE_void(l1)));
	if (t1) {
		R = (T60f53(C, l1, a2, a3, a4));
	}
	t1 = ((T1)(!(R)));
	if (t1) {
		t2 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a80:((T56*)(a4))->a50));
		R = (T60f53(C, t2, a2, a3, a4));
	}
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.base_type */
T0* T957f8(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T6 l7 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a1), a2));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a1), ((T957*)(C))->a2, a2));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t3 = (T168x6426(GE_void(a1)));
			l3 = (T158x6330T0(GE_void(t3), a2));
			l4 = (((T60*)(GE_void(l3)))->a11);
			l7 = (T957x22348(GE_void(l2)));
			t2 = ((l4)!=(EIF_VOID));
			if (t2) {
				t1 = (((T429*)(GE_void(l4)))->a1);
				t2 = (T6f13(&l7, t1));
			}
			if (t2) {
				l5 = (T429f7(GE_void(l4), l7));
				l6 = (((((T0*)(GE_void(l5)))->id==561)?T561f7(l5):((T569*)(l5))->a7));
				t2 = ((l6)!=(EIF_VOID));
				if (t2) {
					R = l6;
				} else {
					R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a45:((T56*)(a2))->a45));
				}
			} else {
				R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
			}
		} else {
			if ((l1)==EIF_VOID) {
				R = EIF_VOID;
			} else {
				switch (((T0*)(l1))->id) {
				case 561:
				case 569:
				case 957:
					R = EIF_VOID;
					break;
				default:
					R = l1;
				}
			}
			t2 = ((R)==(EIF_VOID));
			if (t2) {
				R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
			}
		}
	} else {
		R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
	}
	return R;
}

/* ET_LIKE_CURRENT.base_type */
T0* T720f8(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = (T168x6429T0(GE_void(a1), a2));
	return R;
}

/* ET_LIKE_FEATURE.base_type */
T0* T718f12(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((((T718*)(C))->a3)==((T6)(GE_int32(0))));
	if (t1) {
		R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
	} else {
		t1 = (T718f36(C));
		if (t1) {
			l1 = (T168x6428T0(GE_void(a1), a2));
			if (((T718*)(C))->a4) {
				l2 = (T60f67(GE_void(l1), ((T718*)(C))->a3));
			} else {
				l2 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			}
			t1 = ((l2)!=(EIF_VOID));
			if (t1) {
				l4 = (T201x12784(GE_void(l2)));
				l5 = (T718f38(C));
				t1 = ((l4)==(EIF_VOID));
				if (!(t1)) {
					t2 = (((T236*)(GE_void(l4)))->a3);
					t1 = (T6f1(&l5, t2));
				}
				if (t1) {
					R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
				} else {
					t3 = (T236f11(GE_void(l4), l5));
					t3 = (((((T0*)(GE_void(t3)))->id==242)?T242f4(t3):T964f4(t3)));
					R = (T167x6332T0T0(GE_void(t3), a1, a2));
				}
			} else {
				R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
			}
		} else {
			l1 = (T168x6428T0(GE_void(a1), a2));
			l3 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			t1 = ((l3)!=(EIF_VOID));
			if (t1) {
				t3 = (T160x12783(GE_void(l3)));
				R = (T167x6332T0T0(GE_void(t3), a1, a2));
			} else {
				R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
			}
		}
	}
	return R;
}

/* ET_BIT_FEATURE.base_type */
T0* T582f14(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T582*)(C))->a4)!=(EIF_VOID));
	if (t1) {
		R = C;
	} else {
		R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
	}
	return R;
}

/* ET_BIT_N.base_type */
T0* T581f16(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T581*)(C))->a1)!=(EIF_VOID));
	if (t1) {
		R = C;
	} else {
		R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
	}
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.base_type */
T0* T569f12(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T6 l7 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a1), a2));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a1), ((T569*)(C))->a6, a2));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t3 = (T168x6426(GE_void(a1)));
			l3 = (T158x6330T0(GE_void(t3), a2));
			l4 = (((T60*)(GE_void(l3)))->a11);
			l7 = (T957x22348(GE_void(l2)));
			t2 = ((l4)!=(EIF_VOID));
			if (t2) {
				t1 = (((T429*)(GE_void(l4)))->a1);
				t2 = (T6f13(&l7, t1));
			}
			if (t2) {
				l5 = (T429f7(GE_void(l4), l7));
				l6 = (((((T0*)(GE_void(l5)))->id==561)?T561f7(l5):((T569*)(l5))->a7));
				t2 = ((l6)!=(EIF_VOID));
				if (t2) {
					R = l6;
				} else {
					R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a45:((T56*)(a2))->a45));
				}
			} else {
				R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
			}
		} else {
			if ((l1)==EIF_VOID) {
				R = EIF_VOID;
			} else {
				switch (((T0*)(l1))->id) {
				case 561:
				case 569:
				case 957:
					R = EIF_VOID;
					break;
				default:
					R = l1;
				}
			}
			t2 = ((R)==(EIF_VOID));
			if (t2) {
				R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
			}
		}
	} else {
		R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
	}
	return R;
}

/* ET_FORMAL_PARAMETER.base_type */
T0* T561f10(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T6 l7 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a1), a2));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a1), ((T561*)(C))->a2, a2));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t3 = (T168x6426(GE_void(a1)));
			l3 = (T158x6330T0(GE_void(t3), a2));
			l4 = (((T60*)(GE_void(l3)))->a11);
			l7 = (T957x22348(GE_void(l2)));
			t2 = ((l4)!=(EIF_VOID));
			if (t2) {
				t1 = (((T429*)(GE_void(l4)))->a1);
				t2 = (T6f13(&l7, t1));
			}
			if (t2) {
				l5 = (T429f7(GE_void(l4), l7));
				l6 = (((((T0*)(GE_void(l5)))->id==561)?T561f7(l5):((T569*)(l5))->a7));
				t2 = ((l6)!=(EIF_VOID));
				if (t2) {
					R = l6;
				} else {
					R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a45:((T56*)(a2))->a45));
				}
			} else {
				R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
			}
		} else {
			if ((l1)==EIF_VOID) {
				R = EIF_VOID;
			} else {
				switch (((T0*)(l1))->id) {
				case 561:
				case 569:
				case 957:
					R = EIF_VOID;
					break;
				default:
					R = l1;
				}
			}
			t2 = ((R)==(EIF_VOID));
			if (t2) {
				R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
			}
		}
	} else {
		R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
	}
	return R;
}

/* ET_TUPLE_TYPE.base_type */
T0* T181f9(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		R = C;
	} else {
		R = C;
		l1 = ((T181*)(C))->a1;
		t1 = ((l1)!=(EIF_VOID));
		if (t1) {
			l2 = (T173f8(GE_void(l1), a1, a2));
			t1 = ((l2)!=(l1));
			if (t1) {
				R = T181c89(l2);
				T181f90(GE_void(R), ((T181*)(C))->a2);
			}
		}
	}
	return R;
}

/* ET_ACTUAL_PARAMETER_LIST.named_types */
T0* T173f8(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* l7 = 0;
	T0* l8 = 0;
	T1 t1;
	T0* t2;
	R = C;
	l3 = ((T6)((((T173*)(C))->a3)-((T6)(GE_int32(1)))));
	l1 = (T6)(GE_int32(0));
	t1 = (T6f1(&l1, l3));
	while (!(t1)) {
		t2 = (((T713*)(GE_void(((T173*)(C))->a4)))->z2[l1]);
		l4 = (T177x6409(GE_void(t2)));
		l6 = (T714x6410(GE_void(l4)));
		t1 = ((l6)!=(l7));
		if (t1) {
			l8 = (T167x6337T0T0(GE_void(l6), a1, a2));
			l7 = l6;
		}
		l5 = (T714x6405T0(GE_void(l4), l8));
		t1 = ((R)!=(C));
		if (t1) {
			T173f24(GE_void(R), l5);
		} else {
			t1 = ((l4)!=(l5));
			if (t1) {
				R = T173c23(((T173*)(C))->a3);
				T173f26(GE_void(R), ((T173*)(C))->a1);
				T173f27(GE_void(R), ((T173*)(C))->a2);
				l2 = (T6)(GE_int32(0));
				t1 = (T6f12(&l2, l1));
				while (!(t1)) {
					t2 = (((T713*)(GE_void(((T173*)(C))->a4)))->z2[l2]);
					t2 = (T177x6409(GE_void(t2)));
					T173f24(GE_void(R), t2);
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
					t1 = (T6f12(&l2, l1));
				}
				T173f24(GE_void(R), l5);
			}
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l3));
	}
	return R;
}

/* ET_GENERIC_CLASS_TYPE.base_type */
T0* T174f9(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		R = C;
	} else {
		R = C;
		l1 = ((T174*)(C))->a2;
		t1 = ((l1)!=(EIF_VOID));
		if (t1) {
			l2 = (((((T0*)(GE_void(l1)))->id==173)?T173f8(l1, a1, a2):T429f17(l1, a1, a2)));
			t1 = ((l2)!=(l1));
			if (t1) {
				l3 = T174c95(((T174*)(C))->a3, ((T174*)(C))->a4, l2, ((T174*)(C))->a1);
				T174f96(GE_void(l3), C);
				R = l3;
			}
		}
	}
	return R;
}

/* ET_FORMAL_PARAMETER_LIST.named_types */
T0* T429f17(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CLASS_TYPE.base_type */
T0* T172f9(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		R = C;
	} else {
		R = C;
		l1 = (T172f5(C));
		t1 = ((l1)!=(EIF_VOID));
		if (t1) {
			l2 = ((GE_void(l1), a1, a2, (T0*)0));
			t1 = ((l2)!=(l1));
			if (t1) {
				l3 = T174c95(((T172*)(C))->a1, ((T172*)(C))->a2, l2, ((T172*)(C))->a3);
				T174f96(GE_void(l3), C);
				R = l3;
			}
		}
	}
	return R;
}

/* ET_CLASS.base_type */
T0* T60f45(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		R = C;
	} else {
		R = C;
		l1 = ((T60*)(C))->a11;
		t1 = ((l1)!=(EIF_VOID));
		if (t1) {
			l2 = (T429f17(GE_void(l1), a1, a2));
			t1 = ((l2)!=(l1));
			if (t1) {
				l3 = T174c95(((T60*)(C))->a13, ((T60*)(C))->a1, l2, ((T60*)(C))->a8);
				T174f96(GE_void(l3), C);
				R = l3;
			}
		}
	}
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.same_base_class_type */
T1 T957f18(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T957*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6369T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_LIKE_CURRENT.same_base_class_type */
T1 T720f19(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	R = (T168x6452T0T0T0(GE_void(a3), a1, a2, a4));
	return R;
}

/* ET_LIKE_FEATURE.same_base_class_type */
T1 T718f14(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((((T718*)(C))->a3)==((T6)(GE_int32(0))));
	if (t1) {
		R = EIF_FALSE;
	} else {
		t1 = (T718f36(C));
		if (t1) {
			l1 = (T168x6428T0(GE_void(a3), a4));
			if (((T718*)(C))->a4) {
				l2 = (T60f67(GE_void(l1), ((T718*)(C))->a3));
			} else {
				l2 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			}
			t1 = ((l2)!=(EIF_VOID));
			if (t1) {
				l4 = (T201x12784(GE_void(l2)));
				l5 = (T718f38(C));
				t1 = ((l4)==(EIF_VOID));
				if (!(t1)) {
					t2 = (((T236*)(GE_void(l4)))->a3);
					t1 = (T6f1(&l5, t2));
				}
				if (t1) {
					R = EIF_FALSE;
				} else {
					t3 = (T236f11(GE_void(l4), l5));
					t3 = (((((T0*)(GE_void(t3)))->id==242)?T242f4(t3):T964f4(t3)));
					R = (T167x6369T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
				}
			} else {
				R = EIF_FALSE;
			}
		} else {
			l1 = (T168x6428T0(GE_void(a3), a4));
			l3 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			t1 = ((l3)!=(EIF_VOID));
			if (t1) {
				t3 = (T160x12783(GE_void(l3)));
				R = (T167x6369T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
			} else {
				R = EIF_FALSE;
			}
		}
	}
	return R;
}

/* ET_BIT_FEATURE.same_base_class_type */
T1 T582f16(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_BIT_N.same_base_class_type */
T1 T581f18(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.same_base_class_type */
T1 T569f14(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T569*)(C))->a6, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6369T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER.same_base_class_type */
T1 T561f12(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T561*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6369T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_TUPLE_TYPE.same_base_class_type */
T1 T181f19(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_GENERIC_CLASS_TYPE.same_base_class_type */
T1 T174f23(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T1 t2;
	T1 t3;
	T1 t4;
	l2 = (T172x6330T0(a1, a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a5:((T56*)(a4))->a5));
	t2 = ((l2)==(t1));
	if (t2) {
		R = EIF_FALSE;
	} else {
		t2 = ((a1)==(C));
		if (t2) {
			t2 = ((a2)==(a3));
		}
		if (t2) {
			R = EIF_TRUE;
		} else {
			t2 = ((((T174*)(C))->a1)==(l2));
			if (t2) {
				t3 = (T174f6(C));
				t4 = (T172x6276(a1));
				t2 = ((t3)==(t4));
			}
			if (t2) {
				t3 = (T174f25(C));
				t4 = (T172x6243(a1));
				t2 = ((t3)==(t4));
			}
			if (t2) {
				t2 = (T172x6273(a1));
				t2 = ((T1)(!(t2)));
				if (t2) {
					t2 = (T174f12(C));
					R = ((T1)(!(t2)));
				} else {
					t2 = (T174f12(C));
					t2 = ((T1)(!(t2)));
					if (t2) {
					} else {
						l1 = (T172x6265(a1));
						R = (((((T0*)(GE_void(((T174*)(C))->a2)))->id==173)?T173f16(((T174*)(C))->a2, l1, a2, a3, a4):T429f18(((T174*)(C))->a2, l1, a2, a3, a4)));
					}
				}
			}
		}
	}
	return R;
}

/* ET_CLASS_TYPE.same_base_class_type */
T1 T172f19(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T1 t2;
	T1 t3;
	T1 t4;
	l2 = (T172x6330T0(a1, a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a5:((T56*)(a4))->a5));
	t2 = ((l2)==(t1));
	if (t2) {
		R = EIF_FALSE;
	} else {
		t2 = ((a1)==(C));
		if (t2) {
			t2 = ((a2)==(a3));
		}
		if (t2) {
			R = EIF_TRUE;
		} else {
			t2 = ((((T172*)(C))->a3)==(l2));
			if (t2) {
				t3 = (T172f22(C));
				t4 = (T172x6276(a1));
				t2 = ((t3)==(t4));
			}
			if (t2) {
				t3 = (T172f23(C));
				t4 = (T172x6243(a1));
				t2 = ((t3)==(t4));
			}
			if (t2) {
				t2 = (T172x6273(a1));
				t2 = ((T1)(!(t2)));
				if (t2) {
					t2 = (T172f24(C));
					R = ((T1)(!(t2)));
				} else {
					t2 = (T172f24(C));
					t2 = ((T1)(!(t2)));
					if (t2) {
					} else {
						l1 = (T172x6265(a1));
						t1 = (T172f5(C));
						R = ((GE_void(t1), l1, a2, a3, a4, (T1)0));
					}
				}
			}
		}
	}
	return R;
}

/* ET_CLASS.same_base_class_type */
T1 T60f88(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T1 t2;
	T1 t3;
	T1 t4;
	l2 = (T172x6330T0(a1, a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a5:((T56*)(a4))->a5));
	t2 = ((l2)==(t1));
	if (t2) {
		R = EIF_FALSE;
	} else {
		t2 = ((a1)==(C));
		if (t2) {
			t2 = ((a2)==(a3));
		}
		if (t2) {
			R = EIF_TRUE;
		} else {
			t2 = ((((T60*)(C))->a8)==(l2));
			if (t2) {
				t3 = (T60f64(C));
				t4 = (T172x6276(a1));
				t2 = ((t3)==(t4));
			}
			if (t2) {
				t3 = (T60f93(C));
				t4 = (T172x6243(a1));
				t2 = ((t3)==(t4));
			}
			if (t2) {
				t2 = (T172x6273(a1));
				t2 = ((T1)(!(t2)));
				if (t2) {
					t2 = (T60f73(C));
					R = ((T1)(!(t2)));
				} else {
					t2 = (T60f73(C));
					t2 = ((T1)(!(t2)));
					if (t2) {
					} else {
						l1 = (T172x6265(a1));
						R = (T429f18(GE_void(((T60*)(C))->a11), l1, a2, a3, a4));
					}
				}
			}
		}
	}
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.same_base_tuple_type */
T1 T957f22(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T957*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6371T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_LIKE_CURRENT.same_base_tuple_type */
T1 T720f23(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	R = (T168x6454T0T0T0(GE_void(a3), a1, a2, a4));
	return R;
}

/* ET_LIKE_FEATURE.same_base_tuple_type */
T1 T718f15(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((((T718*)(C))->a3)==((T6)(GE_int32(0))));
	if (t1) {
		R = EIF_FALSE;
	} else {
		t1 = (T718f36(C));
		if (t1) {
			l1 = (T168x6428T0(GE_void(a3), a4));
			if (((T718*)(C))->a4) {
				l2 = (T60f67(GE_void(l1), ((T718*)(C))->a3));
			} else {
				l2 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			}
			t1 = ((l2)!=(EIF_VOID));
			if (t1) {
				l4 = (T201x12784(GE_void(l2)));
				l5 = (T718f38(C));
				t1 = ((l4)==(EIF_VOID));
				if (!(t1)) {
					t2 = (((T236*)(GE_void(l4)))->a3);
					t1 = (T6f1(&l5, t2));
				}
				if (t1) {
					R = EIF_FALSE;
				} else {
					t3 = (T236f11(GE_void(l4), l5));
					t3 = (((((T0*)(GE_void(t3)))->id==242)?T242f4(t3):T964f4(t3)));
					R = (T167x6371T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
				}
			} else {
				R = EIF_FALSE;
			}
		} else {
			l1 = (T168x6428T0(GE_void(a3), a4));
			l3 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			t1 = ((l3)!=(EIF_VOID));
			if (t1) {
				t3 = (T160x12783(GE_void(l3)));
				R = (T167x6371T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
			} else {
				R = EIF_FALSE;
			}
		}
	}
	return R;
}

/* ET_BIT_FEATURE.same_base_tuple_type */
T1 T582f17(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_BIT_N.same_base_tuple_type */
T1 T581f19(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.same_base_tuple_type */
T1 T569f15(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T569*)(C))->a6, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6371T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER.same_base_tuple_type */
T1 T561f13(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T561*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6371T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_TUPLE_TYPE.same_base_tuple_type */
T1 T181f21(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		t1 = ((a2)==(a3));
	}
	if (t1) {
		R = EIF_TRUE;
	} else {
		l1 = (((T181*)(a1))->a1);
		t1 = ((l1)==(EIF_VOID));
		if (t1) {
			t1 = ((((T181*)(C))->a1)==(EIF_VOID));
			if (!(t1)) {
				R = (T173f10(GE_void(((T181*)(C))->a1)));
			} else {
				R = EIF_TRUE;
			}
		} else {
			t1 = ((((T181*)(C))->a1)==(EIF_VOID));
			if (t1) {
				R = (T173f10(GE_void(l1)));
			} else {
				R = (T173f16(GE_void(((T181*)(C))->a1), l1, a2, a3, a4));
			}
		}
	}
	return R;
}

/* ET_GENERIC_CLASS_TYPE.same_base_tuple_type */
T1 T174f33(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CLASS_TYPE.same_base_tuple_type */
T1 T172f31(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CLASS.same_base_tuple_type */
T1 T60f97(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.same_base_bit_type */
T1 T957f34(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T957*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6368T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_LIKE_CURRENT.same_base_bit_type */
T1 T720f35(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	R = (T168x6451T0T0T0(GE_void(a3), a1, a2, a4));
	return R;
}

/* ET_LIKE_FEATURE.same_base_bit_type */
T1 T718f16(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((((T718*)(C))->a3)==((T6)(GE_int32(0))));
	if (t1) {
		R = EIF_FALSE;
	} else {
		t1 = (T718f36(C));
		if (t1) {
			l1 = (T168x6428T0(GE_void(a3), a4));
			if (((T718*)(C))->a4) {
				l2 = (T60f67(GE_void(l1), ((T718*)(C))->a3));
			} else {
				l2 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			}
			t1 = ((l2)!=(EIF_VOID));
			if (t1) {
				l4 = (T201x12784(GE_void(l2)));
				l5 = (T718f38(C));
				t1 = ((l4)==(EIF_VOID));
				if (!(t1)) {
					t2 = (((T236*)(GE_void(l4)))->a3);
					t1 = (T6f1(&l5, t2));
				}
				if (t1) {
					R = EIF_FALSE;
				} else {
					t3 = (T236f11(GE_void(l4), l5));
					t3 = (((((T0*)(GE_void(t3)))->id==242)?T242f4(t3):T964f4(t3)));
					R = (T167x6368T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
				}
			} else {
				R = EIF_FALSE;
			}
		} else {
			l1 = (T168x6428T0(GE_void(a3), a4));
			l3 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			t1 = ((l3)!=(EIF_VOID));
			if (t1) {
				t3 = (T160x12783(GE_void(l3)));
				R = (T167x6368T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
			} else {
				R = EIF_FALSE;
			}
		}
	}
	return R;
}

/* ET_BIT_FEATURE.same_base_bit_type */
T1 T582f18(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	R = (T582f44(C, a1, a2, a3, a4));
	return R;
}

/* ET_BIT_N.same_base_bit_type */
T1 T581f48(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	R = (T581f49(C, a1, a2, a3, a4));
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.same_base_bit_type */
T1 T569f32(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T569*)(C))->a6, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6368T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER.same_base_bit_type */
T1 T561f30(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T561*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			R = EIF_FALSE;
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6368T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_TUPLE_TYPE.same_base_bit_type */
T1 T181f40(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_GENERIC_CLASS_TYPE.same_base_bit_type */
T1 T174f47(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CLASS_TYPE.same_base_bit_type */
T1 T172f43(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_CLASS.same_base_bit_type */
T1 T60f111(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.last_leaf */
T0* T957f55(T0* C)
{
	T0* R = 0;
	R = ((T957*)(C))->a1;
	return R;
}

/* ET_LIKE_CURRENT.last_leaf */
T0* T720f57(T0* C)
{
	T0* R = 0;
	R = ((T720*)(C))->a2;
	return R;
}

/* ET_LIKE_FEATURE.last_leaf */
T0* T718f61(T0* C)
{
	T0* R = 0;
	R = (T129f87(GE_void(((T718*)(C))->a2)));
	return R;
}

/* ET_BIT_FEATURE.last_leaf */
T0* T582f93(T0* C)
{
	T0* R = 0;
	R = ((T582*)(C))->a2;
	return R;
}

/* ET_BIT_N.last_leaf */
T0* T581f92(T0* C)
{
	T0* R = 0;
	R = ((T581*)(C))->a1;
	return R;
}

/* ET_TUPLE_TYPE.last_leaf */
T0* T181f85(T0* C)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T181*)(C))->a1)!=(EIF_VOID));
	if (t1) {
		R = (T173f21(GE_void(((T181*)(C))->a1)));
	} else {
		R = ((T181*)(C))->a2;
	}
	return R;
}

/* ET_ACTUAL_PARAMETER_LIST.last_leaf */
T0* T173f21(T0* C)
{
	T0* R = 0;
	R = ((T173*)(C))->a2;
	return R;
}

/* ET_GENERIC_CLASS_TYPE.last_leaf */
T0* T174f90(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = ((T174*)(C))->a2;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (((((T0*)(GE_void(l1)))->id==173)?T173f21(l1):T429f23(l1)));
	} else {
		R = (T129f87(GE_void(((T174*)(C))->a4)));
	}
	return R;
}

/* ET_FORMAL_PARAMETER_LIST.last_leaf */
T0* T429f23(T0* C)
{
	T0* R = 0;
	R = ((T429*)(C))->a4;
	return R;
}

/* ET_CLASS_TYPE.last_leaf */
T0* T172f89(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = (T172f5(C));
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = ((GE_void(l1), (T0*)0));
	} else {
		R = (T129f87(GE_void(((T172*)(C))->a2)));
	}
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.base_type_index_of_label */
T6 T957f54(T0* C, T0* a1, T0* a2, T0* a3)
{
	T6 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T6 l7 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a2), a3));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a2), ((T957*)(C))->a2, a3));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t3 = (T168x6426(GE_void(a2)));
			l3 = (T158x6330T0(GE_void(t3), a3));
			l4 = (((T60*)(GE_void(l3)))->a11);
			l7 = (T957x22348(GE_void(l2)));
			t2 = ((l4)!=(EIF_VOID));
			if (t2) {
				t1 = (((T429*)(GE_void(l4)))->a1);
				t2 = (T6f13(&l7, t1));
			}
			if (t2) {
				l5 = (T429f7(GE_void(l4), l7));
				l6 = (((((T0*)(GE_void(l5)))->id==561)?T561f7(l5):((T569*)(l5))->a7));
				t2 = ((l6)!=(EIF_VOID));
				if (t2) {
					t3 = (T168x6426(GE_void(a2)));
					R = (T158x6336T0T0T0(GE_void(l6), a1, t3, a3));
				} else {
					R = (T6)(GE_int32(0));
				}
			} else {
				R = (T6)(GE_int32(0));
			}
		} else {
			t3 = (T168x6426(GE_void(a2)));
			R = (T960x6336T0T0T0(GE_void(l1), a1, t3, a3));
		}
	} else {
		R = (T6)(GE_int32(0));
	}
	return R;
}

/* ET_LIKE_CURRENT.base_type_index_of_label */
T6 T720f56(T0* C, T0* a1, T0* a2, T0* a3)
{
	T6 R = 0;
	R = (T168x6432T0T0(GE_void(a2), a1, a3));
	return R;
}

/* ET_LIKE_FEATURE.base_type_index_of_label */
T6 T718f60(T0* C, T0* a1, T0* a2, T0* a3)
{
	T6 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((((T718*)(C))->a3)==((T6)(GE_int32(0))));
	if (t1) {
		R = (T6)(GE_int32(0));
	} else {
		t1 = (T718f36(C));
		if (t1) {
			l1 = (T168x6428T0(GE_void(a2), a3));
			if (((T718*)(C))->a4) {
				l2 = (T60f67(GE_void(l1), ((T718*)(C))->a3));
			} else {
				l2 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			}
			t1 = ((l2)!=(EIF_VOID));
			if (t1) {
				l4 = (T201x12784(GE_void(l2)));
				l5 = (T718f38(C));
				t1 = ((l4)==(EIF_VOID));
				if (!(t1)) {
					t2 = (((T236*)(GE_void(l4)))->a3);
					t1 = (T6f1(&l5, t2));
				}
				if (t1) {
					R = (T6)(GE_int32(0));
				} else {
					t3 = (T236f11(GE_void(l4), l5));
					t3 = (((((T0*)(GE_void(t3)))->id==242)?T242f4(t3):T964f4(t3)));
					R = (T167x6336T0T0T0(GE_void(t3), a1, a2, a3));
				}
			} else {
				R = (T6)(GE_int32(0));
			}
		} else {
			l1 = (T168x6428T0(GE_void(a2), a3));
			l3 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			t1 = ((l3)!=(EIF_VOID));
			if (t1) {
				t3 = (T160x12783(GE_void(l3)));
				R = (T167x6336T0T0T0(GE_void(t3), a1, a2, a3));
			} else {
				R = (T6)(GE_int32(0));
			}
		}
	}
	return R;
}

/* ET_BIT_FEATURE.base_type_index_of_label */
T6 T582f91(T0* C, T0* a1, T0* a2, T0* a3)
{
	T6 R = 0;
	R = (T582f94(C, a1));
	return R;
}

/* ET_BIT_FEATURE.index_of_label */
T6 T582f94(T0* C, T0* a1)
{
	T6 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = (T582f38(C));
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = ((GE_void(l1), a1, (T6)0));
	}
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.base_type_index_of_label */
T6 T569f63(T0* C, T0* a1, T0* a2, T0* a3)
{
	T6 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T6 l7 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a2), a3));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a2), ((T569*)(C))->a6, a3));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t3 = (T168x6426(GE_void(a2)));
			l3 = (T158x6330T0(GE_void(t3), a3));
			l4 = (((T60*)(GE_void(l3)))->a11);
			l7 = (T957x22348(GE_void(l2)));
			t2 = ((l4)!=(EIF_VOID));
			if (t2) {
				t1 = (((T429*)(GE_void(l4)))->a1);
				t2 = (T6f13(&l7, t1));
			}
			if (t2) {
				l5 = (T429f7(GE_void(l4), l7));
				l6 = (((((T0*)(GE_void(l5)))->id==561)?T561f7(l5):((T569*)(l5))->a7));
				t2 = ((l6)!=(EIF_VOID));
				if (t2) {
					t3 = (T168x6426(GE_void(a2)));
					R = (T158x6336T0T0T0(GE_void(l6), a1, t3, a3));
				} else {
					R = (T6)(GE_int32(0));
				}
			} else {
				R = (T6)(GE_int32(0));
			}
		} else {
			t3 = (T168x6426(GE_void(a2)));
			R = (T960x6336T0T0T0(GE_void(l1), a1, t3, a3));
		}
	} else {
		R = (T6)(GE_int32(0));
	}
	return R;
}

/* ET_FORMAL_PARAMETER.base_type_index_of_label */
T6 T561f61(T0* C, T0* a1, T0* a2, T0* a3)
{
	T6 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T6 l7 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a2), a3));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a2), ((T561*)(C))->a2, a3));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t3 = (T168x6426(GE_void(a2)));
			l3 = (T158x6330T0(GE_void(t3), a3));
			l4 = (((T60*)(GE_void(l3)))->a11);
			l7 = (T957x22348(GE_void(l2)));
			t2 = ((l4)!=(EIF_VOID));
			if (t2) {
				t1 = (((T429*)(GE_void(l4)))->a1);
				t2 = (T6f13(&l7, t1));
			}
			if (t2) {
				l5 = (T429f7(GE_void(l4), l7));
				l6 = (((((T0*)(GE_void(l5)))->id==561)?T561f7(l5):((T569*)(l5))->a7));
				t2 = ((l6)!=(EIF_VOID));
				if (t2) {
					t3 = (T168x6426(GE_void(a2)));
					R = (T158x6336T0T0T0(GE_void(l6), a1, t3, a3));
				} else {
					R = (T6)(GE_int32(0));
				}
			} else {
				R = (T6)(GE_int32(0));
			}
		} else {
			t3 = (T168x6426(GE_void(a2)));
			R = (T960x6336T0T0T0(GE_void(l1), a1, t3, a3));
		}
	} else {
		R = (T6)(GE_int32(0));
	}
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.to_text */
T0* T957f4(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(15)));
	T957f58(C, R);
	return R;
}

/* ET_LIKE_CURRENT.to_text */
T0* T720f5(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(15)));
	T720f64(C, R);
	return R;
}

/* ET_LIKE_FEATURE.to_text */
T0* T718f5(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(15)));
	T718f68(C, R);
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.to_text */
T0* T569f58(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(15)));
	T569f73(C, R);
	return R;
}

/* ET_FORMAL_PARAMETER.to_text */
T0* T561f56(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(15)));
	T561f69(C, R);
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.base_class */
T0* T957f7(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T6 l7 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a1), a2));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a1), ((T957*)(C))->a2, a2));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t3 = (T168x6426(GE_void(a1)));
			l3 = (T158x6330T0(GE_void(t3), a2));
			l4 = (((T60*)(GE_void(l3)))->a11);
			l7 = (T957x22348(GE_void(l2)));
			t2 = ((l4)!=(EIF_VOID));
			if (t2) {
				t1 = (((T429*)(GE_void(l4)))->a1);
				t2 = (T6f13(&l7, t1));
			}
			if (t2) {
				l5 = (T429f7(GE_void(l4), l7));
				l6 = (((((T0*)(GE_void(l5)))->id==561)?T561f7(l5):((T569*)(l5))->a7));
				t2 = ((l6)!=(EIF_VOID));
				if (t2) {
					R = (T158x6330T0(GE_void(l6), a2));
				} else {
					R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a4:((T56*)(a2))->a4));
				}
			} else {
				R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
			}
		} else {
			t3 = (T168x6426(GE_void(a1)));
			R = (T960x6331T0T0(GE_void(l1), t3, a2));
		}
	} else {
		R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
	}
	return R;
}

/* ET_LIKE_CURRENT.base_class */
T0* T720f7(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = (T168x6428T0(GE_void(a1), a2));
	return R;
}

/* ET_LIKE_FEATURE.base_class */
T0* T718f11(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((((T718*)(C))->a3)==((T6)(GE_int32(0))));
	if (t1) {
		R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
	} else {
		t1 = (T718f36(C));
		if (t1) {
			l1 = (T168x6428T0(GE_void(a1), a2));
			if (((T718*)(C))->a4) {
				l2 = (T60f67(GE_void(l1), ((T718*)(C))->a3));
			} else {
				l2 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			}
			t1 = ((l2)!=(EIF_VOID));
			if (t1) {
				l4 = (T201x12784(GE_void(l2)));
				l5 = (T718f38(C));
				t1 = ((l4)==(EIF_VOID));
				if (!(t1)) {
					t2 = (((T236*)(GE_void(l4)))->a3);
					t1 = (T6f1(&l5, t2));
				}
				if (t1) {
					R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
				} else {
					t3 = (T236f11(GE_void(l4), l5));
					t3 = (((((T0*)(GE_void(t3)))->id==242)?T242f4(t3):T964f4(t3)));
					R = (T167x6331T0T0(GE_void(t3), a1, a2));
				}
			} else {
				R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
			}
		} else {
			l1 = (T168x6428T0(GE_void(a1), a2));
			l3 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
			t1 = ((l3)!=(EIF_VOID));
			if (t1) {
				t3 = (T160x12783(GE_void(l3)));
				R = (T167x6331T0T0(GE_void(t3), a1, a2));
			} else {
				R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
			}
		}
	}
	return R;
}

/* ET_BIT_FEATURE.base_class */
T0* T582f13(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a81:((T56*)(a2))->a83));
	return R;
}

/* ET_BIT_N.base_class */
T0* T581f15(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a81:((T56*)(a2))->a83));
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.base_class */
T0* T569f11(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T6 l7 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a1), a2));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a1), ((T569*)(C))->a6, a2));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t3 = (T168x6426(GE_void(a1)));
			l3 = (T158x6330T0(GE_void(t3), a2));
			l4 = (((T60*)(GE_void(l3)))->a11);
			l7 = (T957x22348(GE_void(l2)));
			t2 = ((l4)!=(EIF_VOID));
			if (t2) {
				t1 = (((T429*)(GE_void(l4)))->a1);
				t2 = (T6f13(&l7, t1));
			}
			if (t2) {
				l5 = (T429f7(GE_void(l4), l7));
				l6 = (((((T0*)(GE_void(l5)))->id==561)?T561f7(l5):((T569*)(l5))->a7));
				t2 = ((l6)!=(EIF_VOID));
				if (t2) {
					R = (T158x6330T0(GE_void(l6), a2));
				} else {
					R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a4:((T56*)(a2))->a4));
				}
			} else {
				R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
			}
		} else {
			t3 = (T168x6426(GE_void(a1)));
			R = (T960x6331T0T0(GE_void(l1), t3, a2));
		}
	} else {
		R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
	}
	return R;
}

/* ET_FORMAL_PARAMETER.base_class */
T0* T561f9(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T6 l7 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a1), a2));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a1), ((T561*)(C))->a2, a2));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t3 = (T168x6426(GE_void(a1)));
			l3 = (T158x6330T0(GE_void(t3), a2));
			l4 = (((T60*)(GE_void(l3)))->a11);
			l7 = (T957x22348(GE_void(l2)));
			t2 = ((l4)!=(EIF_VOID));
			if (t2) {
				t1 = (((T429*)(GE_void(l4)))->a1);
				t2 = (T6f13(&l7, t1));
			}
			if (t2) {
				l5 = (T429f7(GE_void(l4), l7));
				l6 = (((((T0*)(GE_void(l5)))->id==561)?T561f7(l5):((T569*)(l5))->a7));
				t2 = ((l6)!=(EIF_VOID));
				if (t2) {
					R = (T158x6330T0(GE_void(l6), a2));
				} else {
					R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a4:((T56*)(a2))->a4));
				}
			} else {
				R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
			}
		} else {
			t3 = (T168x6426(GE_void(a1)));
			R = (T960x6331T0T0(GE_void(l1), t3, a2));
		}
	} else {
		R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
	}
	return R;
}

/* ET_TUPLE_TYPE.base_class */
T0* T181f3(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a80:((T56*)(a2))->a50));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.base_class */
T0* T174f8(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = ((T174*)(C))->a1;
	return R;
}

/* ET_CLASS_TYPE.base_class */
T0* T172f8(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = ((T172*)(C))->a3;
	return R;
}

/* ET_CLASS.base_class */
T0* T60f77(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = ((T60*)(C))->a8;
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.position */
T0* T957f27(T0* C)
{
	T0* R = 0;
	R = (T129f34(GE_void(((T957*)(C))->a1)));
	return R;
}

/* ET_LIKE_CURRENT.position */
T0* T720f28(T0* C)
{
	T0* R = 0;
	T1 t1;
	R = (T179f9(GE_void(((T720*)(C))->a1)));
	t1 = (((((T0*)(GE_void(R)))->id==179)?T179f15(R):T198f20(R)));
	if (t1) {
		R = (T198f11(GE_void(((T720*)(C))->a2)));
	}
	return R;
}

/* ET_LIKE_FEATURE.position */
T0* T718f9(T0* C)
{
	T0* R = 0;
	T1 t1;
	R = (T179f9(GE_void(((T718*)(C))->a1)));
	t1 = (((((T0*)(GE_void(R)))->id==179)?T179f15(R):T129f47(R)));
	if (t1) {
		R = (T129f34(GE_void(((T718*)(C))->a2)));
	}
	return R;
}

/* ET_BIT_FEATURE.position */
T0* T582f11(T0* C)
{
	T0* R = 0;
	T1 t1;
	R = (T129f34(GE_void(((T582*)(C))->a1)));
	t1 = (T129f47(GE_void(R)));
	if (t1) {
		R = (T129f34(GE_void(((T582*)(C))->a2)));
	}
	return R;
}

/* ET_BIT_N.position */
T0* T581f8(T0* C)
{
	T0* R = 0;
	T1 t1;
	R = (T129f34(GE_void(((T581*)(C))->a3)));
	t1 = (T274x11970(GE_void(R)));
	if (t1) {
		R = (T481x6392(GE_void(((T581*)(C))->a1)));
	}
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.position */
T0* T569f59(T0* C)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T569*)(C))->a4)!=(EIF_VOID));
	if (t1) {
		R = (T179f9(GE_void(((T569*)(C))->a4)));
	} else {
		R = (T129f34(GE_void(((T569*)(C))->a5)));
	}
	return R;
}

/* ET_FORMAL_PARAMETER.position */
T0* T561f57(T0* C)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T561*)(C))->a3)!=(EIF_VOID));
	if (t1) {
		R = (T179f9(GE_void(((T561*)(C))->a3)));
	} else {
		R = (T129f34(GE_void(((T561*)(C))->a1)));
	}
	return R;
}

/* ET_TUPLE_TYPE.position */
T0* T181f31(T0* C)
{
	T0* R = 0;
	R = (T129f34(GE_void(((T181*)(C))->a2)));
	return R;
}

/* ET_FORMAL_PARAMETER_TYPE.same_named_type */
T1 T957f9(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T957*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T957*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t3 = (T168x6426(GE_void(a3)));
			R = (T167x6366T0T0T0T0(GE_void(a1), l2, t3, a2, a4));
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6356T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_LIKE_CURRENT.same_named_type */
T1 T720f9(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		t1 = ((a2)==(a3));
	}
	if (t1) {
		R = EIF_TRUE;
	} else {
		R = (T168x6444T0T0T0(GE_void(a3), a1, a2, a4));
	}
	return R;
}

/* ET_LIKE_FEATURE.same_named_type */
T1 T718f17(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((a1)==(C));
	if (t1) {
		t1 = ((a2)==(a3));
	}
	if (t1) {
		R = EIF_TRUE;
	} else {
		t1 = ((((T718*)(C))->a3)==((T6)(GE_int32(0))));
		if (t1) {
			R = EIF_FALSE;
		} else {
			t1 = (T718f36(C));
			if (t1) {
				l1 = (T168x6428T0(GE_void(a3), a4));
				l2 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
				t1 = ((l2)!=(EIF_VOID));
				if (t1) {
					l4 = (T201x12784(GE_void(l2)));
					l5 = (T718f38(C));
					t1 = ((l4)==(EIF_VOID));
					if (!(t1)) {
						t2 = (((T236*)(GE_void(l4)))->a3);
						t1 = (T6f1(&l5, t2));
					}
					if (t1) {
						R = EIF_FALSE;
					} else {
						t3 = (T236f11(GE_void(l4), l5));
						t3 = (((((T0*)(GE_void(t3)))->id==242)?T242f4(t3):T964f4(t3)));
						R = (T167x6356T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
					}
				} else {
					R = EIF_FALSE;
				}
			} else {
				l1 = (T168x6428T0(GE_void(a3), a4));
				l3 = (T60f71(GE_void(l1), ((T718*)(C))->a3));
				t1 = ((l3)!=(EIF_VOID));
				if (t1) {
					t3 = (T160x12783(GE_void(l3)));
					R = (T167x6356T0T0T0T0(GE_void(t3), a1, a2, a3, a4));
				} else {
					R = EIF_FALSE;
				}
			}
		}
	}
	return R;
}

/* ET_BIT_FEATURE.same_named_type */
T1 T582f19(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		R = (T167x6364T0T0T0T0(GE_void(a1), C, a3, a2, a4));
	}
	return R;
}

/* ET_BIT_N.same_named_type */
T1 T581f20(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		R = (T167x6364T0T0T0T0(GE_void(a1), C, a3, a2, a4));
	}
	return R;
}

/* ET_CONSTRAINED_FORMAL_PARAMETER.same_named_type */
T1 T569f22(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T569*)(C))->a6), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T569*)(C))->a6, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t3 = (T168x6426(GE_void(a3)));
			R = (T167x6366T0T0T0T0(GE_void(a1), l2, t3, a2, a4));
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6356T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_FORMAL_PARAMETER.same_named_type */
T1 T561f19(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T168x6434T0(GE_void(a3), a4));
	t2 = (T6f13(&(((T561*)(C))->a2), t1));
	if (t2) {
		l1 = (T168x6430T6T0(GE_void(a3), ((T561*)(C))->a2, a4));
		if ((l1)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 561:
			case 569:
			case 957:
				l2 = l1;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t3 = (T168x6426(GE_void(a3)));
			R = (T167x6366T0T0T0T0(GE_void(a1), l2, t3, a2, a4));
		} else {
			t3 = (T168x6426(GE_void(a3)));
			R = (T960x6356T0T0T0T0(GE_void(l1), a1, a2, t3, a4));
		}
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_TUPLE_TYPE.same_named_type */
T1 T181f23(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		t1 = ((a2)==(a3));
	}
	if (t1) {
		R = EIF_TRUE;
	} else {
		R = (T167x6367T0T0T0T0(GE_void(a1), C, a3, a2, a4));
	}
	return R;
}

/* ET_GENERIC_CLASS_TYPE.same_named_type */
T1 T174f27(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	l1 = (T167x6330T0(GE_void(a1), a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a5:((T56*)(a4))->a5));
	t2 = ((l1)==(t1));
	if (t2) {
		R = EIF_FALSE;
	} else {
		t2 = ((a1)==(C));
		if (t2) {
			t2 = ((a2)==(a3));
		}
		if (t2) {
			R = EIF_TRUE;
		} else {
			R = (T167x6365T0T0T0T0(GE_void(a1), C, a3, a2, a4));
		}
	}
	return R;
}

/* ET_CLASS_TYPE.same_named_type */
T1 T172f10(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	l1 = (T167x6330T0(GE_void(a1), a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a5:((T56*)(a4))->a5));
	t2 = ((l1)==(t1));
	if (t2) {
		R = EIF_FALSE;
	} else {
		t2 = ((a1)==(C));
		if (t2) {
			t2 = ((a2)==(a3));
		}
		if (t2) {
			R = EIF_TRUE;
		} else {
			R = (T167x6365T0T0T0T0(GE_void(a1), C, a3, a2, a4));
		}
	}
	return R;
}

/* ET_CLASS.same_named_type */
T1 T60f84(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	l1 = (T167x6330T0(GE_void(a1), a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a5:((T56*)(a4))->a5));
	t2 = ((l1)==(t1));
	if (t2) {
		R = EIF_FALSE;
	} else {
		t2 = ((a1)==(C));
		if (t2) {
			t2 = ((a2)==(a3));
		}
		if (t2) {
			R = EIF_TRUE;
		} else {
			R = (T167x6365T0T0T0T0(GE_void(a1), C, a3, a2, a4));
		}
	}
	return R;
}

/* ET_EXTERNAL_PROCEDURE.new_synonym */
T0* T671f31(T0* C, T0* a1)
{
	T0* R = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	R = T671c72(a1, ((T671*)(C))->a3, ((T671*)(C))->a1, ((T671*)(C))->a2);
	T671f75(GE_void(R), ((T671*)(C))->a11);
	T671f76(GE_void(R), ((T671*)(C))->a12);
	T671f77(GE_void(R), ((T671*)(C))->a13);
	T671f78(GE_void(R), ((T671*)(C))->a14);
	T671f79(GE_void(R), ((T671*)(C))->a7);
	T671f74(GE_void(R), ((T671*)(C))->a10);
	T671f91(GE_void(R), ((T671*)(C))->a6);
	T671f92(GE_void(R), ((T671*)(C))->a23);
	T671f93(GE_void(R), ((T671*)(C))->a24);
	T671f80(GE_void(R), ((T671*)(C))->a15);
	T671f94(GE_void(R), C);
	t1 = (T671f35(C));
	if (t1) {
		t2 = (T671f32(C));
		t3 = ((T6)(GE_int32(1)));
		T671f73(GE_void(R), t3);
	}
	return R;
}

/* ET_EXTERNAL_PROCEDURE.set_synonym */
void T671f94(T0* C, T0* a1)
{
	((T671*)(C))->a29 = a1;
}

/* ET_ONCE_PROCEDURE.new_synonym */
T0* T670f40(T0* C, T0* a1)
{
	T0* R = 0;
	R = T670c69(a1, ((T670*)(C))->a3, ((T670*)(C))->a6);
	T670f71(GE_void(R), ((T670*)(C))->a9);
	T670f72(GE_void(R), ((T670*)(C))->a10);
	T670f73(GE_void(R), ((T670*)(C))->a11);
	T670f74(GE_void(R), ((T670*)(C))->a12);
	T670f75(GE_void(R), ((T670*)(C))->a13);
	T670f76(GE_void(R), ((T670*)(C))->a14);
	T670f77(GE_void(R), ((T670*)(C))->a5);
	T670f70(GE_void(R), ((T670*)(C))->a8);
	T670f89(GE_void(R), ((T670*)(C))->a4);
	T670f90(GE_void(R), ((T670*)(C))->a22);
	T670f91(GE_void(R), ((T670*)(C))->a23);
	T670f78(GE_void(R), ((T670*)(C))->a15);
	T670f92(GE_void(R), C);
	return R;
}

/* ET_ONCE_PROCEDURE.set_synonym */
void T670f92(T0* C, T0* a1)
{
	((T670*)(C))->a29 = a1;
}

/* ET_DEFERRED_PROCEDURE.new_synonym */
T0* T332f33(T0* C, T0* a1)
{
	T0* R = 0;
	R = T332c68(a1, ((T332*)(C))->a2, ((T332*)(C))->a8);
	T332f70(GE_void(R), ((T332*)(C))->a10);
	T332f71(GE_void(R), ((T332*)(C))->a11);
	T332f72(GE_void(R), ((T332*)(C))->a12);
	T332f73(GE_void(R), ((T332*)(C))->a7);
	T332f69(GE_void(R), ((T332*)(C))->a9);
	T332f85(GE_void(R), ((T332*)(C))->a4);
	T332f86(GE_void(R), ((T332*)(C))->a6);
	T332f87(GE_void(R), ((T332*)(C))->a19);
	T332f88(GE_void(R), ((T332*)(C))->a20);
	T332f74(GE_void(R), ((T332*)(C))->a13);
	T332f89(GE_void(R), C);
	return R;
}

/* ET_DEFERRED_PROCEDURE.set_synonym */
void T332f89(T0* C, T0* a1)
{
	((T332*)(C))->a27 = a1;
}

/* ET_DO_PROCEDURE.new_synonym */
T0* T326f35(T0* C, T0* a1)
{
	T0* R = 0;
	R = T326c69(a1, ((T326*)(C))->a2, ((T326*)(C))->a7);
	T326f71(GE_void(R), ((T326*)(C))->a9);
	T326f72(GE_void(R), ((T326*)(C))->a10);
	T326f73(GE_void(R), ((T326*)(C))->a11);
	T326f74(GE_void(R), ((T326*)(C))->a12);
	T326f75(GE_void(R), ((T326*)(C))->a13);
	T326f76(GE_void(R), ((T326*)(C))->a14);
	T326f77(GE_void(R), ((T326*)(C))->a6);
	T326f70(GE_void(R), ((T326*)(C))->a8);
	T326f89(GE_void(R), ((T326*)(C))->a5);
	T326f90(GE_void(R), ((T326*)(C))->a21);
	T326f91(GE_void(R), ((T326*)(C))->a22);
	T326f78(GE_void(R), ((T326*)(C))->a15);
	T326f92(GE_void(R), C);
	return R;
}

/* ET_DO_PROCEDURE.set_synonym */
void T326f92(T0* C, T0* a1)
{
	((T326*)(C))->a29 = a1;
}

/* ET_EXTERNAL_PROCEDURE.is_deferred */
T1 T671f42(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ONCE_PROCEDURE.is_deferred */
T1 T670f41(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DO_PROCEDURE.is_deferred */
T1 T326f41(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_EXTERNAL_PROCEDURE.is_frozen */
T1 T671f30(T0* C)
{
	T1 R = 0;
	R = ((((T671*)(C))->a22)!=(EIF_VOID));
	return R;
}

/* ET_ONCE_PROCEDURE.is_frozen */
T1 T670f30(T0* C)
{
	T1 R = 0;
	R = ((((T670*)(C))->a24)!=(EIF_VOID));
	return R;
}

/* ET_DEFERRED_PROCEDURE.is_frozen */
T1 T332f28(T0* C)
{
	T1 R = 0;
	R = ((((T332*)(C))->a22)!=(EIF_VOID));
	return R;
}

/* ET_DO_PROCEDURE.is_frozen */
T1 T326f30(T0* C)
{
	T1 R = 0;
	R = ((((T326*)(C))->a24)!=(EIF_VOID));
	return R;
}

/* ET_EXTERNAL_PROCEDURE.has_seed */
T1 T671f38(T0* C, T6 a1)
{
	T1 R = 0;
	T1 t1;
	t1 = ((((T671*)(C))->a16)==(a1));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t1 = ((((T671*)(C))->a21)!=(EIF_VOID));
		if (t1) {
			R = (T1222f7(GE_void(((T671*)(C))->a21), a1));
		}
	}
	return R;
}

/* ET_ONCE_PROCEDURE.has_seed */
T1 T670f37(T0* C, T6 a1)
{
	T1 R = 0;
	T1 t1;
	t1 = ((((T670*)(C))->a16)==(a1));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t1 = ((((T670*)(C))->a21)!=(EIF_VOID));
		if (t1) {
			R = (T1222f7(GE_void(((T670*)(C))->a21), a1));
		}
	}
	return R;
}

/* ET_DEFERRED_PROCEDURE.has_seed */
T1 T332f35(T0* C, T6 a1)
{
	T1 R = 0;
	T1 t1;
	t1 = ((((T332*)(C))->a14)==(a1));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t1 = ((((T332*)(C))->a21)!=(EIF_VOID));
		if (t1) {
			R = (T1222f7(GE_void(((T332*)(C))->a21), a1));
		}
	}
	return R;
}

/* ET_DO_PROCEDURE.has_seed */
T1 T326f37(T0* C, T6 a1)
{
	T1 R = 0;
	T1 t1;
	t1 = ((((T326*)(C))->a16)==(a1));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t1 = ((((T326*)(C))->a23)!=(EIF_VOID));
		if (t1) {
			R = (T1222f7(GE_void(((T326*)(C))->a23), a1));
		}
	}
	return R;
}

/* ET_EXTERNAL_PROCEDURE.is_creation_exported_to */
T1 T671f43(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	T0* t1;
	T1 t2;
	T1 t3;
	T6 t4;
	t1 = (T671f40(C));
	t2 = (T60f140(GE_void(a2), t1, a1, a3));
	if (t2) {
		R = EIF_TRUE;
	} else {
		t1 = (((T60*)(GE_void(a2)))->a26);
		t2 = ((t1)==(EIF_VOID));
		if (t2) {
			t3 = (T60f80(GE_void(a2)));
			t2 = ((T1)(!(t3)));
		}
		if (t2) {
			t1 = (((((T0*)(GE_void(a3)))->id==53)?((T53*)(a3))->a65:((T56*)(a3))->a72));
			T60f164(GE_void(a2), t1);
			t4 = (((((T0*)(GE_void(a3)))->id==53)?((T53*)(a3))->a8:((T56*)(a3))->a8));
			R = (T671f38(C, t4));
		}
	}
	return R;
}

/* ET_CLASS.is_creation_exported_to */
T1 T60f140(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	T1 t1;
	t1 = ((((T60*)(C))->a26)!=(EIF_VOID));
	if (t1) {
		R = (T531f8(GE_void(((T60*)(C))->a26), a1, a2, a3));
	}
	return R;
}

/* ET_CREATOR_LIST.is_exported_to */
T1 T531f8(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	l2 = ((T6)((((T531*)(C))->a1)-((T6)(GE_int32(1)))));
	l1 = (T6)(GE_int32(0));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (((T625*)(GE_void(((T531*)(C))->a2)))->z2[l1]);
		t1 = (T624f13(GE_void(t2), a1, a2, a3));
		if (t1) {
			R = EIF_TRUE;
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_CREATOR.is_exported_to */
T1 T624f13(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	T1 t1;
	t1 = (T624f9(C));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t1 = (((((T0*)(GE_void(((T624*)(C))->a2)))->id==447)?T447f8(((T624*)(C))->a2, a2, a3):T448f11(((T624*)(C))->a2, a2, a3)));
		if (t1) {
			R = (T624f10(C, a1));
		}
	}
	return R;
}

/* ET_CLIENTS.has_descendant */
T1 T448f11(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T1 t2;
	T1 t3;
	t1 = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a3:((T56*)(a2))->a3));
	t2 = ((a1)==(t1));
	if (t2) {
		R = EIF_TRUE;
	} else {
		t2 = (T60f72(GE_void(a1)));
		t2 = ((T1)(!(t2)));
		if (t2) {
			if (((T0*)(GE_void(a2)))->id==53) {
				T53f204(a2);
			} else {
				T56f196(a2);
			}
		}
		t2 = (T60f72(GE_void(a1)));
		t2 = ((T1)(!(t2)));
		if (t2) {
			R = (T448f7(C, a1));
		} else {
			t1 = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a64:((T56*)(a2))->a55));
			T60f164(GE_void(a1), t1);
			t2 = (((T60*)(GE_void(a1)))->a23);
			if (t2) {
				t3 = (((T60*)(GE_void(a1)))->a24);
				t2 = ((T1)(!(t3)));
			}
			if (t2) {
				l2 = ((T6)((((T448*)(C))->a3)-((T6)(GE_int32(1)))));
				l1 = (T6)(GE_int32(0));
				t2 = (T6f1(&l1, l2));
				while (!(t2)) {
					t1 = (((T619*)(GE_void(((T448*)(C))->a4)))->z2[l1]);
					l3 = (T129f54(GE_void(t1)));
					t2 = (((((T0*)(GE_void(a2)))->id==53)?T53f160(a2, l3):T56f156(a2, l3)));
					if (t2) {
						t1 = (((((T0*)(GE_void(a2)))->id==53)?T53f159(a2, l3):T56f151(a2, l3)));
						t2 = (T60f157(GE_void(a1), t1, a2));
						if (t2) {
							R = EIF_TRUE;
							l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
						} else {
							l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
						}
					} else {
						l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
					}
					t2 = (T6f1(&l1, l2));
				}
			}
		}
	}
	return R;
}

/* ET_CLASS.has_ancestor */
T1 T60f157(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* t1;
	T1 t2;
	t1 = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a5:((T56*)(a2))->a5));
	t2 = ((C)==(t1));
	if (t2) {
		R = EIF_FALSE;
	} else {
		t2 = ((a1)==(C));
		if (t2) {
			R = EIF_TRUE;
		} else {
			t1 = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a3:((T56*)(a2))->a3));
			t2 = ((C)==(t1));
			if (t2) {
				R = EIF_TRUE;
			} else {
				R = (T324f6(GE_void(((T60*)(C))->a3), a1, a2));
			}
		}
	}
	return R;
}

/* ET_BASE_TYPE_LIST.has_class */
T1 T324f6(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	l2 = ((T324*)(C))->a1;
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (((T1007*)(GE_void(((T324*)(C))->a2)))->z2[l1]);
		t2 = (T158x6330T0(GE_void(t2), a2));
		t1 = ((t2)==(a1));
		if (t1) {
			R = EIF_TRUE;
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* ET_CLASS_NAME_LIST.has_descendant */
T1 T447f8(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T1 t2;
	T1 t3;
	t1 = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a3:((T56*)(a2))->a3));
	t2 = ((a1)==(t1));
	if (t2) {
		R = EIF_TRUE;
	} else {
		t2 = (T60f72(GE_void(a1)));
		t2 = ((T1)(!(t2)));
		if (t2) {
			if (((T0*)(GE_void(a2)))->id==53) {
				T53f204(a2);
			} else {
				T56f196(a2);
			}
		}
		t2 = (T60f72(GE_void(a1)));
		t2 = ((T1)(!(t2)));
		if (t2) {
			R = (T447f5(C, a1));
		} else {
			t1 = (((((T0*)(GE_void(a2)))->id==53)?((T53*)(a2))->a64:((T56*)(a2))->a55));
			T60f164(GE_void(a1), t1);
			t2 = (((T60*)(GE_void(a1)))->a23);
			if (t2) {
				t3 = (((T60*)(GE_void(a1)))->a24);
				t2 = ((T1)(!(t3)));
			}
			if (t2) {
				l2 = ((T6)((((T447*)(C))->a1)-((T6)(GE_int32(1)))));
				l1 = (T6)(GE_int32(0));
				t2 = (T6f1(&l1, l2));
				while (!(t2)) {
					t1 = (((T619*)(GE_void(((T447*)(C))->a2)))->z2[l1]);
					l3 = (T129f54(GE_void(t1)));
					t2 = (((((T0*)(GE_void(a2)))->id==53)?T53f160(a2, l3):T56f156(a2, l3)));
					if (t2) {
						t1 = (((((T0*)(GE_void(a2)))->id==53)?T53f159(a2, l3):T56f151(a2, l3)));
						t2 = (T60f157(GE_void(a1), t1, a2));
						if (t2) {
							R = EIF_TRUE;
							l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
						} else {
							l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
						}
					} else {
						l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
					}
					t2 = (T6f1(&l1, l2));
				}
			}
		}
	}
	return R;
}

/* ET_ONCE_PROCEDURE.is_creation_exported_to */
T1 T670f42(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	T0* t1;
	T1 t2;
	T1 t3;
	T6 t4;
	t1 = (T670f39(C));
	t2 = (T60f140(GE_void(a2), t1, a1, a3));
	if (t2) {
		R = EIF_TRUE;
	} else {
		t1 = (((T60*)(GE_void(a2)))->a26);
		t2 = ((t1)==(EIF_VOID));
		if (t2) {
			t3 = (T60f80(GE_void(a2)));
			t2 = ((T1)(!(t3)));
		}
		if (t2) {
			t1 = (((((T0*)(GE_void(a3)))->id==53)?((T53*)(a3))->a65:((T56*)(a3))->a72));
			T60f164(GE_void(a2), t1);
			t4 = (((((T0*)(GE_void(a3)))->id==53)?((T53*)(a3))->a8:((T56*)(a3))->a8));
			R = (T670f37(C, t4));
		}
	}
	return R;
}

/* ET_DEFERRED_PROCEDURE.is_creation_exported_to */
T1 T332f40(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	T0* t1;
	T1 t2;
	T1 t3;
	T6 t4;
	t1 = (T332f37(C));
	t2 = (T60f140(GE_void(a2), t1, a1, a3));
	if (t2) {
		R = EIF_TRUE;
	} else {
		t1 = (((T60*)(GE_void(a2)))->a26);
		t2 = ((t1)==(EIF_VOID));
		if (t2) {
			t3 = (T60f80(GE_void(a2)));
			t2 = ((T1)(!(t3)));
		}
		if (t2) {
			t1 = (((((T0*)(GE_void(a3)))->id==53)?((T53*)(a3))->a65:((T56*)(a3))->a72));
			T60f164(GE_void(a2), t1);
			t4 = (((((T0*)(GE_void(a3)))->id==53)?((T53*)(a3))->a8:((T56*)(a3))->a8));
			R = (T332f35(C, t4));
		}
	}
	return R;
}

/* ET_DO_PROCEDURE.is_creation_exported_to */
T1 T326f42(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	T0* t1;
	T1 t2;
	T1 t3;
	T6 t4;
	t1 = (T326f36(C));
	t2 = (T60f140(GE_void(a2), t1, a1, a3));
	if (t2) {
		R = EIF_TRUE;
	} else {
		t1 = (((T60*)(GE_void(a2)))->a26);
		t2 = ((t1)==(EIF_VOID));
		if (t2) {
			t3 = (T60f80(GE_void(a2)));
			t2 = ((T1)(!(t3)));
		}
		if (t2) {
			t1 = (((((T0*)(GE_void(a3)))->id==53)?((T53*)(a3))->a65:((T56*)(a3))->a72));
			T60f164(GE_void(a2), t1);
			t4 = (((((T0*)(GE_void(a3)))->id==53)?((T53*)(a3))->a8:((T56*)(a3))->a8));
			R = (T326f37(C, t4));
		}
	}
	return R;
}

/* ET_EXTERNAL_PROCEDURE.name */
T0* T671f40(T0* C)
{
	T0* R = 0;
	R = (T327x11895(GE_void(((T671*)(C))->a4)));
	return R;
}

/* ET_ONCE_PROCEDURE.name */
T0* T670f39(T0* C)
{
	T0* R = 0;
	R = (T327x11895(GE_void(((T670*)(C))->a1)));
	return R;
}

/* ET_DEFERRED_PROCEDURE.name */
T0* T332f37(T0* C)
{
	T0* R = 0;
	R = (T327x11895(GE_void(((T332*)(C))->a3)));
	return R;
}

/* ET_DO_PROCEDURE.name */
T0* T326f36(T0* C)
{
	T0* R = 0;
	R = (T327x11895(GE_void(((T326*)(C))->a3)));
	return R;
}

/* ET_EXTERNAL_PROCEDURE.overloaded_name */
T0* T671f61(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T671f64(C));
	R = (T327x11895(GE_void(t1)));
	return R;
}

/* ET_EXTERNAL_PROCEDURE.overloaded_extended_name */
T0* T671f64(T0* C)
{
	T0* R = 0;
	R = ((T671*)(C))->a4;
	return R;
}

/* ET_ONCE_PROCEDURE.overloaded_name */
T0* T670f58(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T670f61(C));
	R = (T327x11895(GE_void(t1)));
	return R;
}

/* ET_ONCE_PROCEDURE.overloaded_extended_name */
T0* T670f61(T0* C)
{
	T0* R = 0;
	R = ((T670*)(C))->a1;
	return R;
}

/* ET_DEFERRED_PROCEDURE.overloaded_name */
T0* T332f57(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T332f60(C));
	R = (T327x11895(GE_void(t1)));
	return R;
}

/* ET_DEFERRED_PROCEDURE.overloaded_extended_name */
T0* T332f60(T0* C)
{
	T0* R = 0;
	R = ((T332*)(C))->a3;
	return R;
}

/* ET_DO_PROCEDURE.overloaded_name */
T0* T326f58(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T326f61(C));
	R = (T327x11895(GE_void(t1)));
	return R;
}

/* ET_DO_PROCEDURE.overloaded_extended_name */
T0* T326f61(T0* C)
{
	T0* R = 0;
	R = ((T326*)(C))->a3;
	return R;
}

/* ET_EXTERNAL_PROCEDURE.alias_name */
T0* T671f39(T0* C)
{
	T0* R = 0;
	R = (T327x11896(GE_void(((T671*)(C))->a4)));
	return R;
}

/* ET_ONCE_PROCEDURE.alias_name */
T0* T670f38(T0* C)
{
	T0* R = 0;
	R = (T327x11896(GE_void(((T670*)(C))->a1)));
	return R;
}

/* ET_DEFERRED_PROCEDURE.alias_name */
T0* T332f36(T0* C)
{
	T0* R = 0;
	R = (T327x11896(GE_void(((T332*)(C))->a3)));
	return R;
}

/* ET_DO_PROCEDURE.alias_name */
T0* T326f38(T0* C)
{
	T0* R = 0;
	R = (T327x11896(GE_void(((T326*)(C))->a3)));
	return R;
}

/* ET_EXTERNAL_PROCEDURE.overloaded_alias_name */
T0* T671f62(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T671f64(C));
	R = (T327x11896(GE_void(t1)));
	return R;
}

/* ET_ONCE_PROCEDURE.overloaded_alias_name */
T0* T670f59(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T670f61(C));
	R = (T327x11896(GE_void(t1)));
	return R;
}

/* ET_DEFERRED_PROCEDURE.overloaded_alias_name */
T0* T332f58(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T332f60(C));
	R = (T327x11896(GE_void(t1)));
	return R;
}

/* ET_DO_PROCEDURE.overloaded_alias_name */
T0* T326f59(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T326f61(C));
	R = (T327x11896(GE_void(t1)));
	return R;
}

/* ET_EXTERNAL_PROCEDURE.arguments_count */
T6 T671f50(T0* C)
{
	T6 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = ((T671*)(C))->a3;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (((T236*)(GE_void(l1)))->a3);
	}
	return R;
}

/* ET_ONCE_PROCEDURE.arguments_count */
T6 T670f48(T0* C)
{
	T6 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = ((T670*)(C))->a3;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (((T236*)(GE_void(l1)))->a3);
	}
	return R;
}

/* ET_DEFERRED_PROCEDURE.arguments_count */
T6 T332f46(T0* C)
{
	T6 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = ((T332*)(C))->a2;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (((T236*)(GE_void(l1)))->a3);
	}
	return R;
}

/* ET_DO_PROCEDURE.arguments_count */
T6 T326f48(T0* C)
{
	T6 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = ((T326*)(C))->a2;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (((T236*)(GE_void(l1)))->a3);
	}
	return R;
}

/* ET_EXTERNAL_PROCEDURE.is_exported_to */
T1 T671f49(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	R = (((((T0*)(GE_void(((T671*)(C))->a7)))->id==447)?T447f8(((T671*)(C))->a7, a1, a2):T448f11(((T671*)(C))->a7, a1, a2)));
	return R;
}

/* ET_ONCE_PROCEDURE.is_exported_to */
T1 T670f47(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	R = (((((T0*)(GE_void(((T670*)(C))->a5)))->id==447)?T447f8(((T670*)(C))->a5, a1, a2):T448f11(((T670*)(C))->a5, a1, a2)));
	return R;
}

/* ET_DEFERRED_PROCEDURE.is_exported_to */
T1 T332f45(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	R = (((((T0*)(GE_void(((T332*)(C))->a7)))->id==447)?T447f8(((T332*)(C))->a7, a1, a2):T448f11(((T332*)(C))->a7, a1, a2)));
	return R;
}

/* ET_DO_PROCEDURE.is_exported_to */
T1 T326f47(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	R = (((((T0*)(GE_void(((T326*)(C))->a6)))->id==447)?T447f8(((T326*)(C))->a6, a1, a2):T448f11(((T326*)(C))->a6, a1, a2)));
	return R;
}

/* ET_DEFERRED_FUNCTION.new_synonym */
T0* T665f46(T0* C, T0* a1)
{
	T0* R = 0;
	R = T665c69(a1, ((T665*)(C))->a4, ((T665*)(C))->a5, ((T665*)(C))->a8);
	T665f71(GE_void(R), ((T665*)(C))->a11);
	T665f72(GE_void(R), ((T665*)(C))->a12);
	T665f73(GE_void(R), ((T665*)(C))->a13);
	T665f74(GE_void(R), ((T665*)(C))->a14);
	T665f75(GE_void(R), ((T665*)(C))->a7);
	T665f70(GE_void(R), ((T665*)(C))->a10);
	T665f87(GE_void(R), ((T665*)(C))->a1);
	T665f88(GE_void(R), ((T665*)(C))->a6);
	T665f89(GE_void(R), ((T665*)(C))->a22);
	T665f90(GE_void(R), ((T665*)(C))->a23);
	T665f76(GE_void(R), ((T665*)(C))->a15);
	T665f91(GE_void(R), C);
	return R;
}

/* ET_DEFERRED_FUNCTION.set_synonym */
void T665f91(T0* C, T0* a1)
{
	((T665*)(C))->a29 = a1;
}

/* ET_ONCE_FUNCTION.new_synonym */
T0* T664f48(T0* C, T0* a1)
{
	T0* R = 0;
	R = T664c70(a1, ((T664*)(C))->a3, ((T664*)(C))->a4, ((T664*)(C))->a7);
	T664f72(GE_void(R), ((T664*)(C))->a10);
	T664f73(GE_void(R), ((T664*)(C))->a11);
	T664f74(GE_void(R), ((T664*)(C))->a12);
	T664f75(GE_void(R), ((T664*)(C))->a13);
	T664f76(GE_void(R), ((T664*)(C))->a14);
	T664f77(GE_void(R), ((T664*)(C))->a15);
	T664f78(GE_void(R), ((T664*)(C))->a16);
	T664f79(GE_void(R), ((T664*)(C))->a6);
	T664f71(GE_void(R), ((T664*)(C))->a9);
	T664f91(GE_void(R), ((T664*)(C))->a5);
	T664f92(GE_void(R), ((T664*)(C))->a24);
	T664f93(GE_void(R), ((T664*)(C))->a25);
	T664f80(GE_void(R), ((T664*)(C))->a17);
	T664f94(GE_void(R), C);
	return R;
}

/* ET_ONCE_FUNCTION.set_synonym */
void T664f94(T0* C, T0* a1)
{
	((T664*)(C))->a31 = a1;
}

/* ET_DO_FUNCTION.new_synonym */
T0* T662f48(T0* C, T0* a1)
{
	T0* R = 0;
	R = T662c70(a1, ((T662*)(C))->a3, ((T662*)(C))->a4, ((T662*)(C))->a7);
	T662f72(GE_void(R), ((T662*)(C))->a10);
	T662f73(GE_void(R), ((T662*)(C))->a11);
	T662f74(GE_void(R), ((T662*)(C))->a12);
	T662f75(GE_void(R), ((T662*)(C))->a13);
	T662f76(GE_void(R), ((T662*)(C))->a14);
	T662f77(GE_void(R), ((T662*)(C))->a15);
	T662f78(GE_void(R), ((T662*)(C))->a16);
	T662f79(GE_void(R), ((T662*)(C))->a6);
	T662f71(GE_void(R), ((T662*)(C))->a9);
	T662f91(GE_void(R), ((T662*)(C))->a5);
	T662f92(GE_void(R), ((T662*)(C))->a24);
	T662f93(GE_void(R), ((T662*)(C))->a25);
	T662f80(GE_void(R), ((T662*)(C))->a17);
	T662f94(GE_void(R), C);
	return R;
}

/* ET_DO_FUNCTION.set_synonym */
void T662f94(T0* C, T0* a1)
{
	((T662*)(C))->a31 = a1;
}

/* ET_ATTRIBUTE.new_synonym */
T0* T261f40(T0* C, T0* a1)
{
	T0* R = 0;
	R = T261c66(a1, ((T261*)(C))->a3, ((T261*)(C))->a5);
	T261f67(GE_void(R), ((T261*)(C))->a7);
	T261f68(GE_void(R), ((T261*)(C))->a4);
	T261f75(GE_void(R), ((T261*)(C))->a12);
	T261f76(GE_void(R), ((T261*)(C))->a13);
	T261f77(GE_void(R), ((T261*)(C))->a14);
	T261f78(GE_void(R), C);
	return R;
}

/* ET_ATTRIBUTE.set_synonym */
void T261f78(T0* C, T0* a1)
{
	((T261*)(C))->a20 = a1;
}

/* ET_UNIQUE_ATTRIBUTE.new_synonym */
T0* T260f42(T0* C, T0* a1)
{
	T0* R = 0;
	R = T260c68(a1, ((T260*)(C))->a3, ((T260*)(C))->a7);
	T260f69(GE_void(R), ((T260*)(C))->a9);
	T260f70(GE_void(R), ((T260*)(C))->a6);
	T260f77(GE_void(R), ((T260*)(C))->a4);
	T260f78(GE_void(R), ((T260*)(C))->a5);
	T260f79(GE_void(R), ((T260*)(C))->a15);
	T260f80(GE_void(R), ((T260*)(C))->a16);
	T260f81(GE_void(R), ((T260*)(C))->a17);
	T260f82(GE_void(R), C);
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.set_synonym */
void T260f82(T0* C, T0* a1)
{
	((T260*)(C))->a22 = a1;
}

/* ET_CONSTANT_ATTRIBUTE.new_synonym */
T0* T258f42(T0* C, T0* a1)
{
	T0* R = 0;
	R = T258c68(a1, ((T258*)(C))->a3, ((T258*)(C))->a5, ((T258*)(C))->a7);
	T258f69(GE_void(R), ((T258*)(C))->a9);
	T258f70(GE_void(R), ((T258*)(C))->a6);
	T258f77(GE_void(R), ((T258*)(C))->a4);
	T258f78(GE_void(R), ((T258*)(C))->a14);
	T258f79(GE_void(R), ((T258*)(C))->a15);
	T258f80(GE_void(R), ((T258*)(C))->a16);
	T258f81(GE_void(R), C);
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.set_synonym */
void T258f81(T0* C, T0* a1)
{
	((T258*)(C))->a22 = a1;
}

/* ET_EXTERNAL_FUNCTION.new_synonym */
T0* T176f40(T0* C, T0* a1)
{
	T0* R = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	R = T176c73(a1, ((T176*)(C))->a3, ((T176*)(C))->a5, ((T176*)(C))->a1, ((T176*)(C))->a2);
	T176f76(GE_void(R), ((T176*)(C))->a12);
	T176f77(GE_void(R), ((T176*)(C))->a13);
	T176f78(GE_void(R), ((T176*)(C))->a14);
	T176f79(GE_void(R), ((T176*)(C))->a15);
	T176f80(GE_void(R), ((T176*)(C))->a16);
	T176f81(GE_void(R), ((T176*)(C))->a8);
	T176f75(GE_void(R), ((T176*)(C))->a11);
	T176f89(GE_void(R), ((T176*)(C))->a7);
	T176f90(GE_void(R), ((T176*)(C))->a21);
	T176f91(GE_void(R), ((T176*)(C))->a22);
	T176f82(GE_void(R), ((T176*)(C))->a17);
	T176f92(GE_void(R), C);
	t1 = (T176f38(C));
	if (t1) {
		t2 = (T176f47(C));
		t3 = ((T6)(GE_int32(1)));
		T176f74(GE_void(R), t3);
	}
	return R;
}

/* ET_EXTERNAL_FUNCTION.set_synonym */
void T176f92(T0* C, T0* a1)
{
	((T176*)(C))->a29 = a1;
}

/* ET_ONCE_FUNCTION.is_deferred */
T1 T664f49(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DO_FUNCTION.is_deferred */
T1 T662f49(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ATTRIBUTE.is_deferred */
T1 T261f43(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.is_deferred */
T1 T260f25(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.is_deferred */
T1 T258f45(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_EXTERNAL_FUNCTION.is_deferred */
T1 T176f49(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DEFERRED_FUNCTION.is_frozen */
T1 T665f30(T0* C)
{
	T1 R = 0;
	R = ((((T665*)(C))->a24)!=(EIF_VOID));
	return R;
}

/* ET_ONCE_FUNCTION.is_frozen */
T1 T664f32(T0* C)
{
	T1 R = 0;
	R = ((((T664*)(C))->a26)!=(EIF_VOID));
	return R;
}

/* ET_DO_FUNCTION.is_frozen */
T1 T662f32(T0* C)
{
	T1 R = 0;
	R = ((((T662*)(C))->a26)!=(EIF_VOID));
	return R;
}

/* ET_ATTRIBUTE.is_frozen */
T1 T261f23(T0* C)
{
	T1 R = 0;
	R = ((((T261*)(C))->a15)!=(EIF_VOID));
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.is_frozen */
T1 T260f26(T0* C)
{
	T1 R = 0;
	R = ((((T260*)(C))->a18)!=(EIF_VOID));
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.is_frozen */
T1 T258f25(T0* C)
{
	T1 R = 0;
	R = ((((T258*)(C))->a17)!=(EIF_VOID));
	return R;
}

/* ET_EXTERNAL_FUNCTION.is_frozen */
T1 T176f32(T0* C)
{
	T1 R = 0;
	R = ((((T176*)(C))->a24)!=(EIF_VOID));
	return R;
}

/* ET_DEFERRED_FUNCTION.is_bracketable */
T1 T665f33(T0* C)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((((T665*)(C))->a4)!=(EIF_VOID));
	if (t1) {
		t2 = (((T236*)(GE_void(((T665*)(C))->a4)))->a3);
		R = (T6f1(&t2, (T6)(GE_int32(0))));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_ONCE_FUNCTION.is_bracketable */
T1 T664f35(T0* C)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((((T664*)(C))->a3)!=(EIF_VOID));
	if (t1) {
		t2 = (((T236*)(GE_void(((T664*)(C))->a3)))->a3);
		R = (T6f1(&t2, (T6)(GE_int32(0))));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_DO_FUNCTION.is_bracketable */
T1 T662f35(T0* C)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((((T662*)(C))->a3)!=(EIF_VOID));
	if (t1) {
		t2 = (((T236*)(GE_void(((T662*)(C))->a3)))->a3);
		R = (T6f1(&t2, (T6)(GE_int32(0))));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_ATTRIBUTE.is_bracketable */
T1 T261f26(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.is_bracketable */
T1 T260f29(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.is_bracketable */
T1 T258f28(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_EXTERNAL_FUNCTION.is_bracketable */
T1 T176f35(T0* C)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((((T176*)(C))->a3)!=(EIF_VOID));
	if (t1) {
		t2 = (((T236*)(GE_void(((T176*)(C))->a3)))->a3);
		R = (T6f1(&t2, (T6)(GE_int32(0))));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_DEFERRED_FUNCTION.is_prefixable */
T1 T665f31(T0* C)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((((T665*)(C))->a4)==(EIF_VOID));
	if (!(t1)) {
		t2 = (((T236*)(GE_void(((T665*)(C))->a4)))->a3);
		R = ((t2)==((T6)(GE_int32(0))));
	} else {
		R = EIF_TRUE;
	}
	return R;
}

/* ET_ONCE_FUNCTION.is_prefixable */
T1 T664f33(T0* C)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((((T664*)(C))->a3)==(EIF_VOID));
	if (!(t1)) {
		t2 = (((T236*)(GE_void(((T664*)(C))->a3)))->a3);
		R = ((t2)==((T6)(GE_int32(0))));
	} else {
		R = EIF_TRUE;
	}
	return R;
}

/* ET_DO_FUNCTION.is_prefixable */
T1 T662f33(T0* C)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((((T662*)(C))->a3)==(EIF_VOID));
	if (!(t1)) {
		t2 = (((T236*)(GE_void(((T662*)(C))->a3)))->a3);
		R = ((t2)==((T6)(GE_int32(0))));
	} else {
		R = EIF_TRUE;
	}
	return R;
}

/* ET_EXTERNAL_FUNCTION.is_prefixable */
T1 T176f33(T0* C)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((((T176*)(C))->a3)==(EIF_VOID));
	if (!(t1)) {
		t2 = (((T236*)(GE_void(((T176*)(C))->a3)))->a3);
		R = ((t2)==((T6)(GE_int32(0))));
	} else {
		R = EIF_TRUE;
	}
	return R;
}

/* ET_DEFERRED_FUNCTION.is_infixable */
T1 T665f32(T0* C)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((((T665*)(C))->a4)!=(EIF_VOID));
	if (t1) {
		t2 = (((T236*)(GE_void(((T665*)(C))->a4)))->a3);
		R = ((t2)==((T6)(GE_int32(1))));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_ONCE_FUNCTION.is_infixable */
T1 T664f34(T0* C)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((((T664*)(C))->a3)!=(EIF_VOID));
	if (t1) {
		t2 = (((T236*)(GE_void(((T664*)(C))->a3)))->a3);
		R = ((t2)==((T6)(GE_int32(1))));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_DO_FUNCTION.is_infixable */
T1 T662f34(T0* C)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((((T662*)(C))->a3)!=(EIF_VOID));
	if (t1) {
		t2 = (((T236*)(GE_void(((T662*)(C))->a3)))->a3);
		R = ((t2)==((T6)(GE_int32(1))));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_ATTRIBUTE.is_infixable */
T1 T261f25(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.is_infixable */
T1 T260f28(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.is_infixable */
T1 T258f27(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_EXTERNAL_FUNCTION.is_infixable */
T1 T176f34(T0* C)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((((T176*)(C))->a3)!=(EIF_VOID));
	if (t1) {
		t2 = (((T236*)(GE_void(((T176*)(C))->a3)))->a3);
		R = ((t2)==((T6)(GE_int32(1))));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_DEFERRED_FUNCTION.is_once */
T1 T665f34(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DO_FUNCTION.is_once */
T1 T662f36(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ATTRIBUTE.is_once */
T1 T261f27(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.is_once */
T1 T260f30(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.is_once */
T1 T258f29(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_EXTERNAL_FUNCTION.is_once */
T1 T176f36(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DEFERRED_FUNCTION.is_constant_attribute */
T1 T665f40(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ONCE_FUNCTION.is_constant_attribute */
T1 T664f42(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DO_FUNCTION.is_constant_attribute */
T1 T662f42(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ATTRIBUTE.is_constant_attribute */
T1 T261f33(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.is_constant_attribute */
T1 T260f36(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_EXTERNAL_FUNCTION.is_constant_attribute */
T1 T176f43(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DEFERRED_FUNCTION.is_unique_attribute */
T1 T665f42(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ONCE_FUNCTION.is_unique_attribute */
T1 T664f44(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DO_FUNCTION.is_unique_attribute */
T1 T662f44(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ATTRIBUTE.is_unique_attribute */
T1 T261f35(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.is_unique_attribute */
T1 T258f37(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_EXTERNAL_FUNCTION.is_unique_attribute */
T1 T176f44(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DEFERRED_FUNCTION.has_seed */
T1 T665f43(T0* C, T6 a1)
{
	T1 R = 0;
	T1 t1;
	t1 = ((((T665*)(C))->a16)==(a1));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t1 = ((((T665*)(C))->a21)!=(EIF_VOID));
		if (t1) {
			R = (T1222f7(GE_void(((T665*)(C))->a21), a1));
		}
	}
	return R;
}

/* ET_ONCE_FUNCTION.has_seed */
T1 T664f45(T0* C, T6 a1)
{
	T1 R = 0;
	T1 t1;
	t1 = ((((T664*)(C))->a18)==(a1));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t1 = ((((T664*)(C))->a23)!=(EIF_VOID));
		if (t1) {
			R = (T1222f7(GE_void(((T664*)(C))->a23), a1));
		}
	}
	return R;
}

/* ET_DO_FUNCTION.has_seed */
T1 T662f45(T0* C, T6 a1)
{
	T1 R = 0;
	T1 t1;
	t1 = ((((T662*)(C))->a18)==(a1));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t1 = ((((T662*)(C))->a23)!=(EIF_VOID));
		if (t1) {
			R = (T1222f7(GE_void(((T662*)(C))->a23), a1));
		}
	}
	return R;
}

/* ET_ATTRIBUTE.has_seed */
T1 T261f37(T0* C, T6 a1)
{
	T1 R = 0;
	T1 t1;
	t1 = ((((T261*)(C))->a8)==(a1));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t1 = ((((T261*)(C))->a11)!=(EIF_VOID));
		if (t1) {
			R = (T1222f7(GE_void(((T261*)(C))->a11), a1));
		}
	}
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.has_seed */
T1 T260f40(T0* C, T6 a1)
{
	T1 R = 0;
	T1 t1;
	t1 = ((((T260*)(C))->a10)==(a1));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t1 = ((((T260*)(C))->a14)!=(EIF_VOID));
		if (t1) {
			R = (T1222f7(GE_void(((T260*)(C))->a14), a1));
		}
	}
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.has_seed */
T1 T258f39(T0* C, T6 a1)
{
	T1 R = 0;
	T1 t1;
	t1 = ((((T258*)(C))->a10)==(a1));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t1 = ((((T258*)(C))->a13)!=(EIF_VOID));
		if (t1) {
			R = (T1222f7(GE_void(((T258*)(C))->a13), a1));
		}
	}
	return R;
}

/* ET_EXTERNAL_FUNCTION.has_seed */
T1 T176f45(T0* C, T6 a1)
{
	T1 R = 0;
	T1 t1;
	t1 = ((((T176*)(C))->a18)==(a1));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t1 = ((((T176*)(C))->a23)!=(EIF_VOID));
		if (t1) {
			R = (T1222f7(GE_void(((T176*)(C))->a23), a1));
		}
	}
	return R;
}

/* ET_DEFERRED_FUNCTION.is_attribute */
T1 T665f39(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_ONCE_FUNCTION.is_attribute */
T1 T664f41(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DO_FUNCTION.is_attribute */
T1 T662f41(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.is_attribute */
T1 T260f34(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.is_attribute */
T1 T258f34(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_EXTERNAL_FUNCTION.is_attribute */
T1 T176f42(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DEFERRED_FUNCTION.arguments_count */
T6 T665f35(T0* C)
{
	T6 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = ((T665*)(C))->a4;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (((T236*)(GE_void(l1)))->a3);
	}
	return R;
}

/* ET_ONCE_FUNCTION.arguments_count */
T6 T664f37(T0* C)
{
	T6 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = ((T664*)(C))->a3;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (((T236*)(GE_void(l1)))->a3);
	}
	return R;
}

/* ET_DO_FUNCTION.arguments_count */
T6 T662f37(T0* C)
{
	T6 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = ((T662*)(C))->a3;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (((T236*)(GE_void(l1)))->a3);
	}
	return R;
}

/* ET_ATTRIBUTE.arguments_count */
T6 T261f28(T0* C)
{
	T6 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = (T261f36(C));
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = ((GE_void(l1), (T6)0));
	}
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.arguments_count */
T6 T260f31(T0* C)
{
	T6 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = (T260f39(C));
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = ((GE_void(l1), (T6)0));
	}
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.arguments_count */
T6 T258f30(T0* C)
{
	T6 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = (T258f38(C));
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = ((GE_void(l1), (T6)0));
	}
	return R;
}

/* ET_EXTERNAL_FUNCTION.arguments_count */
T6 T176f37(T0* C)
{
	T6 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = ((T176*)(C))->a3;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (((T236*)(GE_void(l1)))->a3);
	}
	return R;
}

/* ET_DEFERRED_FUNCTION.is_exported_to */
T1 T665f52(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	R = (((((T0*)(GE_void(((T665*)(C))->a7)))->id==447)?T447f8(((T665*)(C))->a7, a1, a2):T448f11(((T665*)(C))->a7, a1, a2)));
	return R;
}

/* ET_ONCE_FUNCTION.is_exported_to */
T1 T664f53(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	R = (((((T0*)(GE_void(((T664*)(C))->a6)))->id==447)?T447f8(((T664*)(C))->a6, a1, a2):T448f11(((T664*)(C))->a6, a1, a2)));
	return R;
}

/* ET_DO_FUNCTION.is_exported_to */
T1 T662f53(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	R = (((((T0*)(GE_void(((T662*)(C))->a6)))->id==447)?T447f8(((T662*)(C))->a6, a1, a2):T448f11(((T662*)(C))->a6, a1, a2)));
	return R;
}

/* ET_ATTRIBUTE.is_exported_to */
T1 T261f48(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	R = (((((T0*)(GE_void(((T261*)(C))->a4)))->id==447)?T447f8(((T261*)(C))->a4, a1, a2):T448f11(((T261*)(C))->a4, a1, a2)));
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.is_exported_to */
T1 T260f50(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	R = (((((T0*)(GE_void(((T260*)(C))->a6)))->id==447)?T447f8(((T260*)(C))->a6, a1, a2):T448f11(((T260*)(C))->a6, a1, a2)));
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.is_exported_to */
T1 T258f50(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	R = (((((T0*)(GE_void(((T258*)(C))->a6)))->id==447)?T447f8(((T258*)(C))->a6, a1, a2):T448f11(((T258*)(C))->a6, a1, a2)));
	return R;
}

/* ET_EXTERNAL_FUNCTION.is_exported_to */
T1 T176f56(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	R = (((((T0*)(GE_void(((T176*)(C))->a8)))->id==447)?T447f8(((T176*)(C))->a8, a1, a2):T448f11(((T176*)(C))->a8, a1, a2)));
	return R;
}

/* ET_ATTRIBUTE.arguments */
T0* T261f36(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.arguments */
T0* T260f39(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.arguments */
T0* T258f38(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_DEFERRED_FUNCTION.name */
T0* T665f45(T0* C)
{
	T0* R = 0;
	R = (T327x11895(GE_void(((T665*)(C))->a2)));
	return R;
}

/* ET_ONCE_FUNCTION.name */
T0* T664f39(T0* C)
{
	T0* R = 0;
	R = (T327x11895(GE_void(((T664*)(C))->a1)));
	return R;
}

/* ET_DO_FUNCTION.name */
T0* T662f39(T0* C)
{
	T0* R = 0;
	R = (T327x11895(GE_void(((T662*)(C))->a1)));
	return R;
}

/* ET_ATTRIBUTE.name */
T0* T261f39(T0* C)
{
	T0* R = 0;
	R = (T327x11895(GE_void(((T261*)(C))->a1)));
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.name */
T0* T260f35(T0* C)
{
	T0* R = 0;
	R = (T327x11895(GE_void(((T260*)(C))->a1)));
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.name */
T0* T258f41(T0* C)
{
	T0* R = 0;
	R = (T327x11895(GE_void(((T258*)(C))->a1)));
	return R;
}

/* ET_EXTERNAL_FUNCTION.name */
T0* T176f48(T0* C)
{
	T0* R = 0;
	R = (T327x11895(GE_void(((T176*)(C))->a4)));
	return R;
}

/* ET_DEFERRED_FUNCTION.overloaded_name */
T0* T665f62(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T665f64(C));
	R = (T327x11895(GE_void(t1)));
	return R;
}

/* ET_DEFERRED_FUNCTION.overloaded_extended_name */
T0* T665f64(T0* C)
{
	T0* R = 0;
	R = ((T665*)(C))->a2;
	return R;
}

/* ET_ONCE_FUNCTION.overloaded_name */
T0* T664f63(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T664f65(C));
	R = (T327x11895(GE_void(t1)));
	return R;
}

/* ET_ONCE_FUNCTION.overloaded_extended_name */
T0* T664f65(T0* C)
{
	T0* R = 0;
	R = ((T664*)(C))->a1;
	return R;
}

/* ET_DO_FUNCTION.overloaded_name */
T0* T662f63(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T662f65(C));
	R = (T327x11895(GE_void(t1)));
	return R;
}

/* ET_DO_FUNCTION.overloaded_extended_name */
T0* T662f65(T0* C)
{
	T0* R = 0;
	R = ((T662*)(C))->a1;
	return R;
}

/* ET_ATTRIBUTE.overloaded_name */
T0* T261f58(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T261f60(C));
	R = (T327x11895(GE_void(t1)));
	return R;
}

/* ET_ATTRIBUTE.overloaded_extended_name */
T0* T261f60(T0* C)
{
	T0* R = 0;
	R = ((T261*)(C))->a1;
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.overloaded_name */
T0* T260f60(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T260f62(C));
	R = (T327x11895(GE_void(t1)));
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.overloaded_extended_name */
T0* T260f62(T0* C)
{
	T0* R = 0;
	R = ((T260*)(C))->a1;
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.overloaded_name */
T0* T258f60(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T258f62(C));
	R = (T327x11895(GE_void(t1)));
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.overloaded_extended_name */
T0* T258f62(T0* C)
{
	T0* R = 0;
	R = ((T258*)(C))->a1;
	return R;
}

/* ET_EXTERNAL_FUNCTION.overloaded_name */
T0* T176f66(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T176f68(C));
	R = (T327x11895(GE_void(t1)));
	return R;
}

/* ET_EXTERNAL_FUNCTION.overloaded_extended_name */
T0* T176f68(T0* C)
{
	T0* R = 0;
	R = ((T176*)(C))->a4;
	return R;
}

/* ET_DEFERRED_FUNCTION.alias_name */
T0* T665f44(T0* C)
{
	T0* R = 0;
	R = (T327x11896(GE_void(((T665*)(C))->a2)));
	return R;
}

/* ET_ONCE_FUNCTION.alias_name */
T0* T664f46(T0* C)
{
	T0* R = 0;
	R = (T327x11896(GE_void(((T664*)(C))->a1)));
	return R;
}

/* ET_DO_FUNCTION.alias_name */
T0* T662f46(T0* C)
{
	T0* R = 0;
	R = (T327x11896(GE_void(((T662*)(C))->a1)));
	return R;
}

/* ET_ATTRIBUTE.alias_name */
T0* T261f38(T0* C)
{
	T0* R = 0;
	R = (T327x11896(GE_void(((T261*)(C))->a1)));
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.alias_name */
T0* T260f41(T0* C)
{
	T0* R = 0;
	R = (T327x11896(GE_void(((T260*)(C))->a1)));
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.alias_name */
T0* T258f40(T0* C)
{
	T0* R = 0;
	R = (T327x11896(GE_void(((T258*)(C))->a1)));
	return R;
}

/* ET_EXTERNAL_FUNCTION.alias_name */
T0* T176f46(T0* C)
{
	T0* R = 0;
	R = (T327x11896(GE_void(((T176*)(C))->a4)));
	return R;
}

/* ET_DEFERRED_FUNCTION.overloaded_alias_name */
T0* T665f63(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T665f64(C));
	R = (T327x11896(GE_void(t1)));
	return R;
}

/* ET_ONCE_FUNCTION.overloaded_alias_name */
T0* T664f64(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T664f65(C));
	R = (T327x11896(GE_void(t1)));
	return R;
}

/* ET_DO_FUNCTION.overloaded_alias_name */
T0* T662f64(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T662f65(C));
	R = (T327x11896(GE_void(t1)));
	return R;
}

/* ET_ATTRIBUTE.overloaded_alias_name */
T0* T261f59(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T261f60(C));
	R = (T327x11896(GE_void(t1)));
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.overloaded_alias_name */
T0* T260f61(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T260f62(C));
	R = (T327x11896(GE_void(t1)));
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.overloaded_alias_name */
T0* T258f61(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T258f62(C));
	R = (T327x11896(GE_void(t1)));
	return R;
}

/* ET_EXTERNAL_FUNCTION.overloaded_alias_name */
T0* T176f67(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T176f68(C));
	R = (T327x11896(GE_void(t1)));
	return R;
}

/* ET_DEFERRED_FUNCTION.type */
T0* T665f41(T0* C)
{
	T0* R = 0;
	R = (T648x6423(GE_void(((T665*)(C))->a5)));
	return R;
}

/* ET_ONCE_FUNCTION.type */
T0* T664f43(T0* C)
{
	T0* R = 0;
	R = (T648x6423(GE_void(((T664*)(C))->a4)));
	return R;
}

/* ET_DO_FUNCTION.type */
T0* T662f43(T0* C)
{
	T0* R = 0;
	R = (T648x6423(GE_void(((T662*)(C))->a4)));
	return R;
}

/* ET_ATTRIBUTE.type */
T0* T261f34(T0* C)
{
	T0* R = 0;
	R = (T648x6423(GE_void(((T261*)(C))->a3)));
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.type */
T0* T260f37(T0* C)
{
	T0* R = 0;
	R = (T648x6423(GE_void(((T260*)(C))->a3)));
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.type */
T0* T258f36(T0* C)
{
	T0* R = 0;
	R = (T648x6423(GE_void(((T258*)(C))->a3)));
	return R;
}

/* ET_EXTERNAL_FUNCTION.type */
T0* T176f41(T0* C)
{
	T0* R = 0;
	R = (T648x6423(GE_void(((T176*)(C))->a5)));
	return R;
}

/* ET_DEFERRED_FUNCTION.lower_name */
T0* T665f38(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T665f45(C));
	R = (T169x11854(GE_void(t1)));
	return R;
}

/* ET_ONCE_FUNCTION.lower_name */
T0* T664f40(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T664f39(C));
	R = (T169x11854(GE_void(t1)));
	return R;
}

/* ET_DO_FUNCTION.lower_name */
T0* T662f40(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T662f39(C));
	R = (T169x11854(GE_void(t1)));
	return R;
}

/* ET_ATTRIBUTE.lower_name */
T0* T261f31(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T261f39(C));
	R = (T169x11854(GE_void(t1)));
	return R;
}

/* ET_UNIQUE_ATTRIBUTE.lower_name */
T0* T260f33(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T260f35(C));
	R = (T169x11854(GE_void(t1)));
	return R;
}

/* ET_CONSTANT_ATTRIBUTE.lower_name */
T0* T258f33(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T258f41(C));
	R = (T169x11854(GE_void(t1)));
	return R;
}

/* ET_EXTERNAL_FUNCTION.lower_name */
T0* T176f39(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T176f48(C));
	R = (T169x11854(GE_void(t1)));
	return R;
}

/* ET_BIT_FEATURE.same_base_type */
T1 T582f43(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		R = (T167x6368T0T0T0T0(GE_void(a1), C, a3, a2, a4));
	}
	return R;
}

/* ET_BIT_N.same_base_type */
T1 T581f41(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		R = (T167x6368T0T0T0T0(GE_void(a1), C, a3, a2, a4));
	}
	return R;
}

/* ET_TUPLE_TYPE.same_base_type */
T1 T181f15(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		t1 = ((a2)==(a3));
	}
	if (t1) {
		R = EIF_TRUE;
	} else {
		R = (T167x6371T0T0T0T0(GE_void(a1), C, a3, a2, a4));
	}
	return R;
}

/* ET_GENERIC_CLASS_TYPE.same_base_type */
T1 T174f19(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	l1 = (T167x6330T0(GE_void(a1), a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a5:((T56*)(a4))->a5));
	t2 = ((l1)==(t1));
	if (t2) {
		R = EIF_FALSE;
	} else {
		t2 = ((a1)==(C));
		if (t2) {
			t2 = ((a2)==(a3));
		}
		if (t2) {
			R = EIF_TRUE;
		} else {
			R = (T167x6369T0T0T0T0(GE_void(a1), C, a3, a2, a4));
		}
	}
	return R;
}

/* ET_CLASS_TYPE.same_base_type */
T1 T172f26(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	l1 = (T167x6330T0(GE_void(a1), a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a5:((T56*)(a4))->a5));
	t2 = ((l1)==(t1));
	if (t2) {
		R = EIF_FALSE;
	} else {
		t2 = ((a1)==(C));
		if (t2) {
			t2 = ((a2)==(a3));
		}
		if (t2) {
			R = EIF_TRUE;
		} else {
			R = (T167x6369T0T0T0T0(GE_void(a1), C, a3, a2, a4));
		}
	}
	return R;
}

/* ET_CLASS.same_base_type */
T1 T60f82(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	l1 = (T167x6330T0(GE_void(a1), a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a5:((T56*)(a4))->a5));
	t2 = ((l1)==(t1));
	if (t2) {
		R = EIF_FALSE;
	} else {
		t2 = ((a1)==(C));
		if (t2) {
			t2 = ((a2)==(a3));
		}
		if (t2) {
			R = EIF_TRUE;
		} else {
			R = (T167x6369T0T0T0T0(GE_void(a1), C, a3, a2, a4));
		}
	}
	return R;
}

/* ET_GENERIC_CLASS_TYPE.is_expanded */
T1 T174f6(T0* C)
{
	T1 R = 0;
	T1 t1;
	t1 = ((((T174*)(C))->a3)!=(EIF_VOID));
	if (t1) {
		R = (T179f10(GE_void(((T174*)(C))->a3)));
	} else {
		R = (T60f64(GE_void(((T174*)(C))->a1)));
	}
	return R;
}

/* ET_CLASS_TYPE.is_expanded */
T1 T172f22(T0* C)
{
	T1 R = 0;
	T1 t1;
	t1 = ((((T172*)(C))->a1)!=(EIF_VOID));
	if (t1) {
		R = (T179f10(GE_void(((T172*)(C))->a1)));
	} else {
		R = (T60f64(GE_void(((T172*)(C))->a3)));
	}
	return R;
}

/* ET_CLASS.is_expanded */
T1 T60f64(T0* C)
{
	T1 R = 0;
	R = (T60f56(C));
	return R;
}

/* ET_CLASS.has_expanded_mark */
T1 T60f56(T0* C)
{
	T1 R = 0;
	T1 t1;
	t1 = ((((T60*)(C))->a13)!=(EIF_VOID));
	if (t1) {
		R = (T179f10(GE_void(((T60*)(C))->a13)));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_GENERIC_CLASS_TYPE.same_syntactical_type */
T1 T174f26(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	l1 = (T167x6330T0(GE_void(a1), a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a5:((T56*)(a4))->a5));
	t2 = ((l1)==(t1));
	if (t2) {
		R = EIF_FALSE;
	} else {
		t2 = ((a1)==(C));
		if (t2) {
			t2 = ((a2)==(a3));
		}
		if (t2) {
			R = EIF_TRUE;
		} else {
			R = (T167x6359T0T0T0T0(GE_void(a1), C, a3, a2, a4));
		}
	}
	return R;
}

/* ET_CLASS_TYPE.same_syntactical_type */
T1 T172f7(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	l1 = (T167x6330T0(GE_void(a1), a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a5:((T56*)(a4))->a5));
	t2 = ((l1)==(t1));
	if (t2) {
		R = EIF_FALSE;
	} else {
		t2 = ((a1)==(C));
		if (t2) {
			t2 = ((a2)==(a3));
		}
		if (t2) {
			R = EIF_TRUE;
		} else {
			R = (T167x6359T0T0T0T0(GE_void(a1), C, a3, a2, a4));
		}
	}
	return R;
}

/* ET_CLASS.same_syntactical_type */
T1 T60f83(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	l1 = (T167x6330T0(GE_void(a1), a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a5:((T56*)(a4))->a5));
	t2 = ((l1)==(t1));
	if (t2) {
		R = EIF_FALSE;
	} else {
		t2 = ((a1)==(C));
		if (t2) {
			t2 = ((a2)==(a3));
		}
		if (t2) {
			R = EIF_TRUE;
		} else {
			R = (T167x6359T0T0T0T0(GE_void(a1), C, a3, a2, a4));
		}
	}
	return R;
}

/* ET_GENERIC_CLASS_TYPE.position */
T0* T174f37(T0* C)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T174*)(C))->a3)!=(EIF_VOID));
	if (t1) {
		R = (T179f9(GE_void(((T174*)(C))->a3)));
	} else {
		R = (T129f34(GE_void(((T174*)(C))->a4)));
	}
	return R;
}

/* ET_CLASS_TYPE.position */
T0* T172f34(T0* C)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T172*)(C))->a1)!=(EIF_VOID));
	if (t1) {
		R = (T179f9(GE_void(((T172*)(C))->a1)));
	} else {
		R = (T129f34(GE_void(((T172*)(C))->a2)));
	}
	return R;
}

/* ET_CLASS.position */
T0* T60f100(T0* C)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T60*)(C))->a40)!=(EIF_VOID));
	if (t1) {
		R = ((GE_void(((T60*)(C))->a40), (T0*)0));
	} else {
		t1 = ((((T60*)(C))->a13)!=(EIF_VOID));
		if (t1) {
			R = (T179f9(GE_void(((T60*)(C))->a13)));
		} else {
			R = (T179f9(GE_void(((T60*)(C))->a6)));
		}
	}
	return R;
}

/* ET_BIT_FEATURE.unaliased_to_text */
T0* T582f27(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(15)));
	T582f102(C, R);
	return R;
}

/* ET_BIT_N.unaliased_to_text */
T0* T581f27(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(15)));
	T581f102(C, R);
	return R;
}

/* ET_TUPLE_TYPE.unaliased_to_text */
T0* T181f4(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(15)));
	T181f91(C, R);
	return R;
}

/* ET_GENERIC_CLASS_TYPE.unaliased_to_text */
T0* T174f15(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(15)));
	T174f97(C, R);
	return R;
}

/* ET_CLASS_TYPE.unaliased_to_text */
T0* T172f16(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(15)));
	T172f95(C, R);
	return R;
}

/* ET_CLASS.unaliased_to_text */
T0* T60f61(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(15)));
	T60f163(C, R);
	return R;
}

/* ET_BIT_FEATURE.context_same_named_type */
T1 T582f65(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T582f19(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_N.context_same_named_type */
T1 T581f64(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T581f20(C, a1, a2, C, a3));
	return R;
}

/* ET_TUPLE_TYPE.context_same_named_type */
T1 T181f53(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T181f23(C, a1, a2, C, a3));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.context_same_named_type */
T1 T174f64(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T174f27(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS_TYPE.context_same_named_type */
T1 T172f60(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T172f10(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS.context_same_named_type */
T1 T60f116(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T60f84(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_FEATURE.context_named_type */
T0* T582f59(T0* C, T0* a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_BIT_N.context_named_type */
T0* T581f58(T0* C, T0* a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_TUPLE_TYPE.context_named_type */
T0* T181f46(T0* C, T0* a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_GENERIC_CLASS_TYPE.context_named_type */
T0* T174f55(T0* C, T0* a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CLASS_TYPE.context_named_type */
T0* T172f49(T0* C, T0* a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CLASS.context_named_type */
T0* T60f130(T0* C, T0* a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_BIT_FEATURE.context_base_type_actual_count */
T6 T582f40(T0* C, T0* a1)
{
	T6 R = 0;
	R = (T582f48(C, C, a1));
	return R;
}

/* ET_BIT_N.context_base_type_actual_count */
T6 T581f38(T0* C, T0* a1)
{
	T6 R = 0;
	R = (T581f46(C, C, a1));
	return R;
}

/* ET_TUPLE_TYPE.context_base_type_actual_count */
T6 T181f32(T0* C, T0* a1)
{
	T6 R = 0;
	R = (T181f62(C, C, a1));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.context_base_type_actual_count */
T6 T174f38(T0* C, T0* a1)
{
	T6 R = 0;
	R = (T174f67(C, C, a1));
	return R;
}

/* ET_CLASS_TYPE.context_base_type_actual_count */
T6 T172f35(T0* C, T0* a1)
{
	T6 R = 0;
	R = (T172f63(C, C, a1));
	return R;
}

/* ET_CLASS.context_base_type_actual_count */
T6 T60f101(T0* C, T0* a1)
{
	T6 R = 0;
	R = (T60f135(C, C, a1));
	return R;
}

/* ET_BIT_FEATURE.context_base_type_actual */
T0* T582f41(T0* C, T6 a1, T0* a2)
{
	T0* R = 0;
	R = (T582f49(C, a1, C, a2));
	return R;
}

/* ET_BIT_N.context_base_type_actual */
T0* T581f39(T0* C, T6 a1, T0* a2)
{
	T0* R = 0;
	R = (T581f47(C, a1, C, a2));
	return R;
}

/* ET_TUPLE_TYPE.context_base_type_actual */
T0* T181f33(T0* C, T6 a1, T0* a2)
{
	T0* R = 0;
	R = (T181f63(C, a1, C, a2));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.context_base_type_actual */
T0* T174f39(T0* C, T6 a1, T0* a2)
{
	T0* R = 0;
	R = (T174f68(C, a1, C, a2));
	return R;
}

/* ET_CLASS_TYPE.context_base_type_actual */
T0* T172f36(T0* C, T6 a1, T0* a2)
{
	T0* R = 0;
	R = (T172f64(C, a1, C, a2));
	return R;
}

/* ET_CLASS.context_base_type_actual */
T0* T60f102(T0* C, T6 a1, T0* a2)
{
	T0* R = 0;
	R = (T60f136(C, a1, C, a2));
	return R;
}

/* ET_BIT_FEATURE.context_same_named_formal_parameter_type */
T1 T582f63(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T582f33(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_N.context_same_named_formal_parameter_type */
T1 T581f62(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T581f32(C, a1, a2, C, a3));
	return R;
}

/* ET_TUPLE_TYPE.context_same_named_formal_parameter_type */
T1 T181f51(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T181f36(C, a1, a2, C, a3));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.context_same_named_formal_parameter_type */
T1 T174f62(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T174f42(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS_TYPE.context_same_named_formal_parameter_type */
T1 T172f58(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T172f39(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS.context_same_named_formal_parameter_type */
T1 T60f126(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T60f106(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_FEATURE.context_base_class */
T0* T582f54(T0* C, T0* a1)
{
	T0* R = 0;
	R = (T582f15(C, a1));
	return R;
}

/* ET_BIT_N.context_base_class */
T0* T581f53(T0* C, T0* a1)
{
	T0* R = 0;
	R = (T581f17(C, a1));
	return R;
}

/* ET_TUPLE_TYPE.context_base_class */
T0* T181f41(T0* C, T0* a1)
{
	T0* R = 0;
	R = (T181f6(C, a1));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.context_base_class */
T0* T174f49(T0* C, T0* a1)
{
	T0* R = 0;
	R = (T174f10(C, a1));
	return R;
}

/* ET_CLASS_TYPE.context_base_class */
T0* T172f44(T0* C, T0* a1)
{
	T0* R = 0;
	R = (T172f13(C, a1));
	return R;
}

/* ET_CLASS.context_base_class */
T0* T60f113(T0* C, T0* a1)
{
	T0* R = 0;
	R = (T60f52(C, a1));
	return R;
}

/* ET_BIT_FEATURE.context_same_named_class_type */
T1 T582f64(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T582f30(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_N.context_same_named_class_type */
T1 T581f63(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T581f30(C, a1, a2, C, a3));
	return R;
}

/* ET_TUPLE_TYPE.context_same_named_class_type */
T1 T181f52(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T181f20(C, a1, a2, C, a3));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.context_same_named_class_type */
T1 T174f63(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T174f35(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS_TYPE.context_same_named_class_type */
T1 T172f59(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T172f32(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS.context_same_named_class_type */
T1 T60f123(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T60f90(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_FEATURE.context_same_named_tuple_type */
T1 T582f66(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T582f31(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_N.context_same_named_tuple_type */
T1 T581f65(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T581f31(C, a1, a2, C, a3));
	return R;
}

/* ET_TUPLE_TYPE.context_same_named_tuple_type */
T1 T181f54(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T181f30(C, a1, a2, C, a3));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.context_same_named_tuple_type */
T1 T174f65(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T174f36(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS_TYPE.context_same_named_tuple_type */
T1 T172f61(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T172f33(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS.context_same_named_tuple_type */
T1 T60f124(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T60f99(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_FEATURE.context_same_named_bit_type */
T1 T582f67(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T582f32(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_N.context_same_named_bit_type */
T1 T581f66(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T581f42(C, a1, a2, C, a3));
	return R;
}

/* ET_TUPLE_TYPE.context_same_named_bit_type */
T1 T181f55(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T181f38(C, a1, a2, C, a3));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.context_same_named_bit_type */
T1 T174f66(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T174f45(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS_TYPE.context_same_named_bit_type */
T1 T172f62(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T172f41(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS.context_same_named_bit_type */
T1 T60f127(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T60f109(C, a1, a2, C, a3));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.upper_name */
T0* T174f56(T0* C)
{
	T0* R = 0;
	R = (T129f18(GE_void(((T174*)(C))->a4)));
	return R;
}

/* ET_CLASS_TYPE.upper_name */
T0* T172f50(T0* C)
{
	T0* R = 0;
	R = (T129f18(GE_void(((T172*)(C))->a2)));
	return R;
}

/* ET_CLASS.upper_name */
T0* T60f66(T0* C)
{
	T0* R = 0;
	R = (T129f18(GE_void(((T60*)(C))->a1)));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.resolved_formal_parameters */
T0* T174f17(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T1 t1;
	R = C;
	l1 = ((T174*)(C))->a2;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		l2 = (((((T0*)(GE_void(l1)))->id==173)?T173f13(l1, a1):T429f13(l1, a1)));
		t1 = ((l2)!=(l1));
		if (t1) {
			l3 = T174c95(((T174*)(C))->a3, ((T174*)(C))->a4, l2, ((T174*)(C))->a1);
			T174f96(GE_void(l3), C);
			R = l3;
		}
	}
	return R;
}

/* ET_FORMAL_PARAMETER_LIST.resolved_formal_parameters */
T0* T429f13(T0* C, T0* a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CLASS_TYPE.resolved_formal_parameters */
T0* T172f17(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T1 t1;
	R = C;
	l1 = (T172f5(C));
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		l2 = ((GE_void(l1), a1, (T0*)0));
		t1 = ((l2)!=(l1));
		if (t1) {
			l3 = T174c95(((T172*)(C))->a1, ((T172*)(C))->a2, l2, ((T172*)(C))->a3);
			T174f96(GE_void(l3), C);
			R = l3;
		}
	}
	return R;
}

/* ET_CLASS.resolved_formal_parameters */
T0* T60f62(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T1 t1;
	R = C;
	l1 = ((T60*)(C))->a11;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		l2 = (T429f13(GE_void(l1), a1));
		t1 = ((l2)!=(l1));
		if (t1) {
			l3 = T174c95(((T60*)(C))->a13, ((T60*)(C))->a1, l2, ((T60*)(C))->a8);
			T174f96(GE_void(l3), C);
			R = l3;
		}
	}
	return R;
}

/* ET_BIT_FEATURE.conforms_to_context */
T1 T582f95(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* t1;
	t1 = (T582f37(C));
	t1 = (T170f413(GE_void(t1)));
	R = (T582f87(C, t1, a1, a2));
	return R;
}

/* ET_BIT_N.conforms_to_context */
T1 T581f94(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* t1;
	t1 = (T581f6(C));
	t1 = (T170f413(GE_void(t1)));
	R = (T581f86(C, t1, a1, a2));
	return R;
}

/* ET_TUPLE_TYPE.conforms_to_context */
T1 T181f86(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* t1;
	t1 = (T181f12(C));
	t1 = (T170f413(GE_void(t1)));
	R = (T181f80(C, t1, a1, a2));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.conforms_to_context */
T1 T174f91(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* t1;
	t1 = (T174f93(C));
	t1 = (T170f413(GE_void(t1)));
	R = (T174f85(C, t1, a1, a2));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.tokens */
T0* T174f93(T0* C)
{
	T0* R = 0;
	if (ge769os2852) {
		return ge769ov2852;
	} else {
		ge769os2852 = '\1';
	}
	R = T170c921();
	ge769ov2852 = R;
	return R;
}

/* ET_CLASS_TYPE.conforms_to_context */
T1 T172f90(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* t1;
	t1 = (T172f92(C));
	t1 = (T170f413(GE_void(t1)));
	R = (T172f85(C, t1, a1, a2));
	return R;
}

/* ET_CLASS_TYPE.tokens */
T0* T172f92(T0* C)
{
	T0* R = 0;
	if (ge769os2852) {
		return ge769ov2852;
	} else {
		ge769os2852 = '\1';
	}
	R = T170c921();
	ge769ov2852 = R;
	return R;
}

/* ET_CLASS.conforms_to_context */
T1 T60f160(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* t1;
	t1 = (T60f63(C));
	t1 = (T170f413(GE_void(t1)));
	R = (T60f118(C, t1, a1, a2));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.is_generic */
T1 T174f12(T0* C)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = ((T174*)(C))->a2;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		t1 = (((((T0*)(GE_void(l1)))->id==173)?T173f10(l1):T429f12(l1)));
		R = ((T1)(!(t1)));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_CLASS_TYPE.is_generic */
T1 T172f24(T0* C)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = (T172f5(C));
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		t1 = ((GE_void(l1), (T1)0));
		R = ((T1)(!(t1)));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_CLASS.is_generic */
T1 T60f73(T0* C)
{
	T1 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = ((T60*)(C))->a11;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		t1 = (T429f12(GE_void(l1)));
		R = ((T1)(!(t1)));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_BIT_N.reference_conforms_to_type */
T1 T581f59(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		R = (T167x6378T0T0T0T0(GE_void(a1), C, a3, a2, a4));
	}
	return R;
}

/* ET_TUPLE_TYPE.reference_conforms_to_type */
T1 T181f47(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		t1 = ((a2)==(a3));
	}
	if (t1) {
		R = EIF_TRUE;
	} else {
		R = (T167x6381T0T0T0T0(GE_void(a1), C, a3, a2, a4));
	}
	return R;
}

/* ET_GENERIC_CLASS_TYPE.reference_conforms_to_type */
T1 T174f57(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	l1 = (T167x6330T0(GE_void(a1), a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a5:((T56*)(a4))->a5));
	t2 = ((l1)==(t1));
	if (t2) {
		R = EIF_FALSE;
	} else {
		t2 = ((a1)==(C));
		if (t2) {
			t2 = ((a2)==(a3));
		}
		if (t2) {
			R = EIF_TRUE;
		} else {
			R = (T167x6379T0T0T0T0(GE_void(a1), C, a3, a2, a4));
		}
	}
	return R;
}

/* ET_CLASS_TYPE.reference_conforms_to_type */
T1 T172f51(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	l1 = (T167x6330T0(GE_void(a1), a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a5:((T56*)(a4))->a5));
	t2 = ((l1)==(t1));
	if (t2) {
		R = EIF_FALSE;
	} else {
		t2 = ((a1)==(C));
		if (t2) {
			t2 = ((a2)==(a3));
		}
		if (t2) {
			R = EIF_TRUE;
		} else {
			R = (T167x6379T0T0T0T0(GE_void(a1), C, a3, a2, a4));
		}
	}
	return R;
}

/* ET_CLASS.reference_conforms_to_type */
T1 T60f131(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	l1 = (T167x6330T0(GE_void(a1), a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a5:((T56*)(a4))->a5));
	t2 = ((l1)==(t1));
	if (t2) {
		R = EIF_FALSE;
	} else {
		t2 = ((a1)==(C));
		if (t2) {
			t2 = ((a2)==(a3));
		}
		if (t2) {
			R = EIF_TRUE;
		} else {
			R = (T167x6379T0T0T0T0(GE_void(a1), C, a3, a2, a4));
		}
	}
	return R;
}

/* ET_BIT_FEATURE.actual_parameters */
T0* T582f38(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_BIT_N.actual_parameters */
T0* T581f36(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_CLASS_TYPE.actual_parameters */
T0* T172f5(T0* C)
{
	T0* R = 0;
	return R;
}

/* ET_BIT_FEATURE.conforms_to_type */
T1 T582f25(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		R = (T167x6373T0T0T0T0(GE_void(a1), C, a3, a2, a4));
	}
	return R;
}

/* ET_BIT_N.conforms_to_type */
T1 T581f25(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		R = (T167x6373T0T0T0T0(GE_void(a1), C, a3, a2, a4));
	}
	return R;
}

/* ET_TUPLE_TYPE.conforms_to_type */
T1 T181f8(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==(C));
	if (t1) {
		t1 = ((a2)==(a3));
	}
	if (t1) {
		R = EIF_TRUE;
	} else {
		R = (T167x6376T0T0T0T0(GE_void(a1), C, a3, a2, a4));
	}
	return R;
}

/* ET_GENERIC_CLASS_TYPE.conforms_to_type */
T1 T174f7(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	l1 = (T167x6330T0(GE_void(a1), a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a5:((T56*)(a4))->a5));
	t2 = ((l1)==(t1));
	if (t2) {
		R = EIF_FALSE;
	} else {
		t2 = ((a1)==(C));
		if (t2) {
			t2 = ((a2)==(a3));
		}
		if (t2) {
			R = EIF_TRUE;
		} else {
			R = (T167x6374T0T0T0T0(GE_void(a1), C, a3, a2, a4));
		}
	}
	return R;
}

/* ET_CLASS_TYPE.conforms_to_type */
T1 T172f12(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	l1 = (T167x6330T0(GE_void(a1), a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a5:((T56*)(a4))->a5));
	t2 = ((l1)==(t1));
	if (t2) {
		R = EIF_FALSE;
	} else {
		t2 = ((a1)==(C));
		if (t2) {
			t2 = ((a2)==(a3));
		}
		if (t2) {
			R = EIF_TRUE;
		} else {
			R = (T167x6374T0T0T0T0(GE_void(a1), C, a3, a2, a4));
		}
	}
	return R;
}

/* ET_CLASS.conforms_to_type */
T1 T60f65(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	l1 = (T167x6330T0(GE_void(a1), a4));
	t1 = (((((T0*)(GE_void(a4)))->id==53)?((T53*)(a4))->a5:((T56*)(a4))->a5));
	t2 = ((l1)==(t1));
	if (t2) {
		R = EIF_FALSE;
	} else {
		t2 = ((a1)==(C));
		if (t2) {
			t2 = ((a2)==(a3));
		}
		if (t2) {
			R = EIF_TRUE;
		} else {
			R = (T167x6374T0T0T0T0(GE_void(a1), C, a3, a2, a4));
		}
	}
	return R;
}

/* ET_BIT_FEATURE.context_base_type_index_of_label */
T6 T582f90(T0* C, T0* a1, T0* a2)
{
	T6 R = 0;
	R = (T582f94(C, a1));
	return R;
}

/* ET_BIT_N.context_base_type_index_of_label */
T6 T581f89(T0* C, T0* a1, T0* a2)
{
	T6 R = 0;
	R = (T581f93(C, a1));
	return R;
}

/* ET_BIT_N.index_of_label */
T6 T581f93(T0* C, T0* a1)
{
	T6 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = (T581f36(C));
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = ((GE_void(l1), a1, (T6)0));
	}
	return R;
}

/* ET_TUPLE_TYPE.context_base_type_index_of_label */
T6 T181f82(T0* C, T0* a1, T0* a2)
{
	T6 R = 0;
	R = (T181f87(C, a1));
	return R;
}

/* ET_TUPLE_TYPE.index_of_label */
T6 T181f87(T0* C, T0* a1)
{
	T6 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = ((T181*)(C))->a1;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (T173f22(GE_void(l1), a1));
	}
	return R;
}

/* ET_ACTUAL_PARAMETER_LIST.index_of_label */
T6 T173f22(T0* C, T0* a1)
{
	T6 R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	l3 = ((T6)((((T173*)(C))->a3)-((T6)(GE_int32(1)))));
	l2 = (T6)(GE_int32(0));
	t1 = (T6f1(&l2, l3));
	while (!(t1)) {
		t2 = (((T713*)(GE_void(((T173*)(C))->a4)))->z2[l2]);
		l1 = (T177x6411(GE_void(t2)));
		t1 = ((l1)!=(EIF_VOID));
		if (t1) {
			t1 = (T129f35(GE_void(a1), l1));
		}
		if (t1) {
			R = ((T6)((((T173*)(C))->a3)-(l2)));
			l2 = ((T6)((l3)+((T6)(GE_int32(1)))));
		} else {
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l2, l3));
	}
	return R;
}

/* ET_GENERIC_CLASS_TYPE.context_base_type_index_of_label */
T6 T174f87(T0* C, T0* a1, T0* a2)
{
	T6 R = 0;
	R = (T174f92(C, a1));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.index_of_label */
T6 T174f92(T0* C, T0* a1)
{
	T6 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = ((T174*)(C))->a2;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (((((T0*)(GE_void(l1)))->id==173)?T173f22(l1, a1):T429f22(l1, a1)));
	}
	return R;
}

/* ET_FORMAL_PARAMETER_LIST.index_of_label */
T6 T429f22(T0* C, T0* a1)
{
	T6 R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	l3 = ((T6)((((T429*)(C))->a1)-((T6)(GE_int32(1)))));
	l2 = (T6)(GE_int32(0));
	t1 = (T6f1(&l2, l3));
	while (!(t1)) {
		t2 = (((T564*)(GE_void(((T429*)(C))->a2)))->z2[l2]);
		l1 = (((((T0*)(GE_void(t2)))->id==561)?T561f64(t2):T569f66(t2)));
		t1 = ((l1)!=(EIF_VOID));
		if (t1) {
			t1 = (T129f35(GE_void(a1), l1));
		}
		if (t1) {
			R = ((T6)((((T429*)(C))->a1)-(l2)));
			l2 = ((T6)((l3)+((T6)(GE_int32(1)))));
		} else {
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l2, l3));
	}
	return R;
}

/* ET_CLASS_TYPE.context_base_type_index_of_label */
T6 T172f86(T0* C, T0* a1, T0* a2)
{
	T6 R = 0;
	R = (T172f91(C, a1));
	return R;
}

/* ET_CLASS_TYPE.index_of_label */
T6 T172f91(T0* C, T0* a1)
{
	T6 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = (T172f5(C));
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = ((GE_void(l1), a1, (T6)0));
	}
	return R;
}

/* ET_CLASS.context_base_type_index_of_label */
T6 T60f154(T0* C, T0* a1, T0* a2)
{
	T6 R = 0;
	R = (T60f159(C, a1));
	return R;
}

/* ET_CLASS.index_of_label */
T6 T60f159(T0* C, T0* a1)
{
	T6 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = ((T60*)(C))->a11;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (T429f22(GE_void(l1), a1));
	}
	return R;
}

/* ET_BIT_FEATURE.context_is_type_reference */
T1 T582f92(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T582f47(C, C, a1));
	return R;
}

/* ET_BIT_N.context_is_type_reference */
T1 T581f91(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T581f45(C, C, a1));
	return R;
}

/* ET_TUPLE_TYPE.context_is_type_reference */
T1 T181f84(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T181f50(C, C, a1));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.context_is_type_reference */
T1 T174f89(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T174f60(C, C, a1));
	return R;
}

/* ET_CLASS_TYPE.context_is_type_reference */
T1 T172f88(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T172f54(C, C, a1));
	return R;
}

/* ET_CLASS.context_is_type_reference */
T1 T60f156(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T60f134(C, C, a1));
	return R;
}

/* ET_BIT_FEATURE.context_conforms_to_type */
T1 T582f87(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T582f25(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_N.context_conforms_to_type */
T1 T581f86(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T581f25(C, a1, a2, C, a3));
	return R;
}

/* ET_TUPLE_TYPE.context_conforms_to_type */
T1 T181f80(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T181f8(C, a1, a2, C, a3));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.context_conforms_to_type */
T1 T174f85(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T174f7(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS_TYPE.context_conforms_to_type */
T1 T172f85(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T172f12(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS.context_conforms_to_type */
T1 T60f118(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T60f65(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_FEATURE.context_conforms_from_class_type */
T1 T582f82(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T582f22(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_N.context_conforms_from_class_type */
T1 T581f81(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T581f23(C, a1, a2, C, a3));
	return R;
}

/* ET_TUPLE_TYPE.context_conforms_from_class_type */
T1 T181f75(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T181f7(C, a1, a2, C, a3));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.context_conforms_from_class_type */
T1 T174f80(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T174f11(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS_TYPE.context_conforms_from_class_type */
T1 T172f80(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T172f14(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS.context_conforms_from_class_type */
T1 T60f117(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T60f53(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_FEATURE.context_conforms_from_formal_parameter_type */
T1 T582f85(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T582f29(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_N.context_conforms_from_formal_parameter_type */
T1 T581f84(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T581f29(C, a1, a2, C, a3));
	return R;
}

/* ET_TUPLE_TYPE.context_conforms_from_formal_parameter_type */
T1 T181f78(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T181f35(C, a1, a2, C, a3));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.context_conforms_from_formal_parameter_type */
T1 T174f83(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T174f41(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS_TYPE.context_conforms_from_formal_parameter_type */
T1 T172f83(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T172f38(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS.context_conforms_from_formal_parameter_type */
T1 T60f125(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T60f105(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_FEATURE.context_conforms_from_bit_type */
T1 T582f84(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T582f24(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_N.context_conforms_from_bit_type */
T1 T581f83(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T581f43(C, a1, a2, C, a3));
	return R;
}

/* ET_TUPLE_TYPE.context_conforms_from_bit_type */
T1 T181f77(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T181f39(C, a1, a2, C, a3));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.context_conforms_from_bit_type */
T1 T174f82(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T174f46(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS_TYPE.context_conforms_from_bit_type */
T1 T172f82(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T172f42(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS.context_conforms_from_bit_type */
T1 T60f128(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T60f110(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_FEATURE.context_conforms_from_tuple_type */
T1 T582f83(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T582f23(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_N.context_conforms_from_tuple_type */
T1 T581f82(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T581f24(C, a1, a2, C, a3));
	return R;
}

/* ET_TUPLE_TYPE.context_conforms_from_tuple_type */
T1 T181f76(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T181f11(C, a1, a2, C, a3));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.context_conforms_from_tuple_type */
T1 T174f81(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T174f16(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS_TYPE.context_conforms_from_tuple_type */
T1 T172f81(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T172f25(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS.context_conforms_from_tuple_type */
T1 T60f122(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T60f54(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_FEATURE.context_base_type */
T0* T582f55(T0* C, T0* a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_BIT_N.context_base_type */
T0* T581f54(T0* C, T0* a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_TUPLE_TYPE.context_base_type */
T0* T181f42(T0* C, T0* a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_GENERIC_CLASS_TYPE.context_base_type */
T0* T174f51(T0* C, T0* a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CLASS_TYPE.context_base_type */
T0* T172f45(T0* C, T0* a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_CLASS.context_base_type */
T0* T60f115(T0* C, T0* a1)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_BIT_FEATURE.context_same_base_class_type */
T1 T582f56(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T582f16(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_N.context_same_base_class_type */
T1 T581f55(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T581f18(C, a1, a2, C, a3));
	return R;
}

/* ET_TUPLE_TYPE.context_same_base_class_type */
T1 T181f43(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T181f19(C, a1, a2, C, a3));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.context_same_base_class_type */
T1 T174f52(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T174f23(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS_TYPE.context_same_base_class_type */
T1 T172f46(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T172f19(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS.context_same_base_class_type */
T1 T60f119(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T60f88(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_FEATURE.context_same_base_tuple_type */
T1 T582f57(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T582f17(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_N.context_same_base_tuple_type */
T1 T581f56(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T581f19(C, a1, a2, C, a3));
	return R;
}

/* ET_TUPLE_TYPE.context_same_base_tuple_type */
T1 T181f44(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T181f21(C, a1, a2, C, a3));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.context_same_base_tuple_type */
T1 T174f53(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T174f33(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS_TYPE.context_same_base_tuple_type */
T1 T172f47(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T172f31(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS.context_same_base_tuple_type */
T1 T60f121(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T60f97(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_FEATURE.context_same_base_bit_type */
T1 T582f58(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T582f18(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_N.context_same_base_bit_type */
T1 T581f57(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T581f48(C, a1, a2, C, a3));
	return R;
}

/* ET_TUPLE_TYPE.context_same_base_bit_type */
T1 T181f45(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T181f40(C, a1, a2, C, a3));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.context_same_base_bit_type */
T1 T174f54(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T174f47(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS_TYPE.context_same_base_bit_type */
T1 T172f48(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T172f43(C, a1, a2, C, a3));
	return R;
}

/* ET_CLASS.context_same_base_bit_type */
T1 T60f129(T0* C, T0* a1, T0* a2, T0* a3)
{
	T1 R = 0;
	R = (T60f111(C, a1, a2, C, a3));
	return R;
}

/* ET_BIT_N.base_type_actual */
T0* T581f47(T0* C, T6 a1, T0* a2, T0* a3)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	t1 = (T581f36(C));
	l1 = ((GE_void(t1), a1, (T0*)0));
	t2 = ((a2)==(C));
	if (t2) {
		R = l1;
	}
	t2 = ((R)==(EIF_VOID));
	if (t2) {
		R = ((GE_void(l1), a2, a3, (T0*)0));
	}
	return R;
}

/* ET_TUPLE_TYPE.base_type_actual */
T0* T181f63(T0* C, T6 a1, T0* a2, T0* a3)
{
	T0* R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = (T173f7(GE_void(((T181*)(C))->a1), a1));
	t1 = ((a2)==(C));
	if (t1) {
		if ((l1)==EIF_VOID) {
			R = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 720:
			case 718:
				R = EIF_VOID;
				break;
			default:
				R = l1;
			}
		}
	}
	t1 = ((R)==(EIF_VOID));
	if (t1) {
		R = (T167x6337T0T0(GE_void(l1), a2, a3));
	}
	return R;
}

/* ET_GENERIC_CLASS_TYPE.base_type_actual */
T0* T174f68(T0* C, T6 a1, T0* a2, T0* a3)
{
	T0* R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = (((((T0*)(GE_void(((T174*)(C))->a2)))->id==173)?T173f7(((T174*)(C))->a2, a1):T429f10(((T174*)(C))->a2, a1)));
	t1 = ((a2)==(C));
	if (t1) {
		if ((l1)==EIF_VOID) {
			R = EIF_VOID;
		} else {
			switch (((T0*)(l1))->id) {
			case 720:
			case 718:
				R = EIF_VOID;
				break;
			default:
				R = l1;
			}
		}
	}
	t1 = ((R)==(EIF_VOID));
	if (t1) {
		R = (T167x6337T0T0(GE_void(l1), a2, a3));
	}
	return R;
}

/* ET_CLASS_TYPE.base_type_actual */
T0* T172f64(T0* C, T6 a1, T0* a2, T0* a3)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	t1 = (T172f5(C));
	l1 = ((GE_void(t1), a1, (T0*)0));
	t2 = ((a2)==(C));
	if (t2) {
		R = l1;
	}
	t2 = ((R)==(EIF_VOID));
	if (t2) {
		R = ((GE_void(l1), a2, a3, (T0*)0));
	}
	return R;
}

/* ET_CLASS.base_type_actual */
T0* T60f136(T0* C, T6 a1, T0* a2, T0* a3)
{
	T0* R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = (T429f10(GE_void(((T60*)(C))->a11), a1));
	t1 = ((a2)==(C));
	if (t1) {
		R = l1;
	}
	t1 = ((R)==(EIF_VOID));
	if (t1) {
		R = (((((T0*)(GE_void(l1)))->id==561)?T561f34(l1, a2, a3):T569f36(l1, a2, a3)));
	}
	return R;
}

/* ET_BIT_FEATURE.actual_parameter_count */
T6 T582f52(T0* C)
{
	T6 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = (T582f38(C));
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = ((GE_void(l1), (T6)0));
	}
	return R;
}

/* ET_BIT_N.actual_parameter_count */
T6 T581f51(T0* C)
{
	T6 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = (T581f36(C));
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = ((GE_void(l1), (T6)0));
	}
	return R;
}

/* ET_TUPLE_TYPE.actual_parameter_count */
T6 T181f10(T0* C)
{
	T6 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = ((T181*)(C))->a1;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (((T173*)(GE_void(l1)))->a3);
	}
	return R;
}

/* ET_GENERIC_CLASS_TYPE.actual_parameter_count */
T6 T174f69(T0* C)
{
	T6 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = ((T174*)(C))->a2;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (((((T0*)(GE_void(l1)))->id==173)?((T173*)(l1))->a3:((T429*)(l1))->a1));
	}
	return R;
}

/* ET_CLASS_TYPE.actual_parameter_count */
T6 T172f65(T0* C)
{
	T6 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = (T172f5(C));
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = ((GE_void(l1), (T6)0));
	}
	return R;
}

/* ET_CLASS.actual_parameter_count */
T6 T60f104(T0* C)
{
	T6 R = 0;
	T0* l1 = 0;
	T1 t1;
	l1 = ((T60*)(C))->a11;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (((T429*)(GE_void(l1)))->a1);
	}
	return R;
}

/* ET_BIT_N.base_type_index_of_label */
T6 T581f90(T0* C, T0* a1, T0* a2, T0* a3)
{
	T6 R = 0;
	R = (T581f93(C, a1));
	return R;
}

/* ET_TUPLE_TYPE.base_type_index_of_label */
T6 T181f83(T0* C, T0* a1, T0* a2, T0* a3)
{
	T6 R = 0;
	R = (T181f87(C, a1));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.base_type_index_of_label */
T6 T174f88(T0* C, T0* a1, T0* a2, T0* a3)
{
	T6 R = 0;
	R = (T174f92(C, a1));
	return R;
}

/* ET_CLASS_TYPE.base_type_index_of_label */
T6 T172f87(T0* C, T0* a1, T0* a2, T0* a3)
{
	T6 R = 0;
	R = (T172f91(C, a1));
	return R;
}

/* ET_CLASS.base_type_index_of_label */
T6 T60f155(T0* C, T0* a1, T0* a2, T0* a3)
{
	T6 R = 0;
	R = (T60f159(C, a1));
	return R;
}

/* ET_BIT_FEATURE.direct_base_class */
T0* T582f15(T0* C, T0* a1)
{
	T0* R = 0;
	R = (((((T0*)(GE_void(a1)))->id==53)?((T53*)(a1))->a81:((T56*)(a1))->a83));
	return R;
}

/* ET_BIT_N.direct_base_class */
T0* T581f17(T0* C, T0* a1)
{
	T0* R = 0;
	R = (((((T0*)(GE_void(a1)))->id==53)?((T53*)(a1))->a81:((T56*)(a1))->a83));
	return R;
}

/* ET_TUPLE_TYPE.direct_base_class */
T0* T181f6(T0* C, T0* a1)
{
	T0* R = 0;
	R = (((((T0*)(GE_void(a1)))->id==53)?((T53*)(a1))->a80:((T56*)(a1))->a50));
	return R;
}

/* ET_GENERIC_CLASS_TYPE.direct_base_class */
T0* T174f10(T0* C, T0* a1)
{
	T0* R = 0;
	R = ((T174*)(C))->a1;
	return R;
}

/* ET_CLASS_TYPE.direct_base_class */
T0* T172f13(T0* C, T0* a1)
{
	T0* R = 0;
	R = ((T172*)(C))->a3;
	return R;
}

/* ET_CLASS.direct_base_class */
T0* T60f52(T0* C, T0* a1)
{
	T0* R = 0;
	R = ((T60*)(C))->a8;
	return R;
}

/* ET_BIT_FEATURE.to_text */
T0* T582f7(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(15)));
	T582f101(C, R);
	return R;
}

/* ET_BIT_N.to_text */
T0* T581f9(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(15)));
	T581f99(C, R);
	return R;
}

/* ET_TUPLE_TYPE.to_text */
T0* T181f14(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(15)));
	T181f92(C, R);
	return R;
}

/* ET_GENERIC_CLASS_TYPE.to_text */
T0* T174f18(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(15)));
	T174f98(C, R);
	return R;
}

/* ET_CLASS_TYPE.to_text */
T0* T172f6(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(15)));
	T172f97(C, R);
	return R;
}

/* ET_CLASS.to_text */
T0* T60f81(T0* C)
{
	T0* R = 0;
	R = T17c36((T6)(GE_int32(15)));
	T60f214(C, R);
	return R;
}

/* ET_DYNAMIC_PROCEDURE_TYPE.static_type */
T0* T234f45(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DYNAMIC_FUNCTION_TYPE.static_type */
T0* T233f45(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DYNAMIC_SPECIAL_TYPE.static_type */
T0* T229f43(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DYNAMIC_TUPLE_TYPE.static_type */
T0* T215f43(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DYNAMIC_TYPE.static_type */
T0* T157f28(T0* C)
{
	T0* R = 0;
	R = C;
	return R;
}

/* ET_DYNAMIC_PROCEDURE_TYPE.is_generic */
T1 T234f43(T0* C)
{
	T1 R = 0;
	R = (T60f73(GE_void(((T234*)(C))->a7)));
	return R;
}

/* ET_DYNAMIC_FUNCTION_TYPE.is_generic */
T1 T233f43(T0* C)
{
	T1 R = 0;
	R = (T60f73(GE_void(((T233*)(C))->a7)));
	return R;
}

/* ET_DYNAMIC_SPECIAL_TYPE.is_generic */
T1 T229f42(T0* C)
{
	T1 R = 0;
	R = (T60f73(GE_void(((T229*)(C))->a7)));
	return R;
}

/* ET_DYNAMIC_TUPLE_TYPE.is_generic */
T1 T215f42(T0* C)
{
	T1 R = 0;
	R = (T60f73(GE_void(((T215*)(C))->a7)));
	return R;
}

/* ET_DYNAMIC_TYPE.is_generic */
T1 T157f25(T0* C)
{
	T1 R = 0;
	R = (T60f73(GE_void(((T157*)(C))->a6)));
	return R;
}

/* ET_DYNAMIC_PROCEDURE_TYPE.hash_code */
T6 T234f54(T0* C)
{
	T6 R = 0;
	R = (T60f78(GE_void(((T234*)(C))->a7)));
	return R;
}

/* ET_DYNAMIC_FUNCTION_TYPE.hash_code */
T6 T233f55(T0* C)
{
	T6 R = 0;
	R = (T60f78(GE_void(((T233*)(C))->a7)));
	return R;
}

/* ET_DYNAMIC_SPECIAL_TYPE.hash_code */
T6 T229f53(T0* C)
{
	T6 R = 0;
	R = (T60f78(GE_void(((T229*)(C))->a7)));
	return R;
}

/* ET_DYNAMIC_TUPLE_TYPE.hash_code */
T6 T215f53(T0* C)
{
	T6 R = 0;
	R = (T60f78(GE_void(((T215*)(C))->a7)));
	return R;
}

/* ET_DYNAMIC_TYPE.hash_code */
T6 T157f55(T0* C)
{
	T6 R = 0;
	R = (T60f78(GE_void(((T157*)(C))->a6)));
	return R;
}

/* ET_DYNAMIC_PROCEDURE_TYPE.has_nested_reference_attributes */
T1 T234f58(T0* C)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T0* t2;
	if (((T234*)(C))->a13) {
		R = EIF_TRUE;
	} else {
		((T234*)(C))->a13 = EIF_TRUE;
		l2 = ((T234*)(C))->a4;
		l1 = (T6)(GE_int32(1));
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T218f4(GE_void(((T234*)(C))->a5), l1));
			t2 = (((((T0*)(GE_void(t2)))->id==163)?((T163*)(t2))->a4:((T220*)(t2))->a10));
			l3 = (T175x12377(GE_void(t2)));
			t1 = (T157x12373(GE_void(l3)));
			if (t1) {
				t1 = (T157x12349(GE_void(l3)));
			}
			if (t1) {
				R = EIF_TRUE;
				l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
			} else {
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			}
			t1 = (T6f1(&l1, l2));
		}
		((T234*)(C))->a13 = EIF_FALSE;
	}
	return R;
}

/* ET_DYNAMIC_FUNCTION_TYPE.has_nested_reference_attributes */
T1 T233f59(T0* C)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T0* t2;
	if (((T233*)(C))->a14) {
		R = EIF_TRUE;
	} else {
		((T233*)(C))->a14 = EIF_TRUE;
		l2 = ((T233*)(C))->a4;
		l1 = (T6)(GE_int32(1));
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T218f4(GE_void(((T233*)(C))->a5), l1));
			t2 = (((((T0*)(GE_void(t2)))->id==163)?((T163*)(t2))->a4:((T220*)(t2))->a10));
			l3 = (T175x12377(GE_void(t2)));
			t1 = (T157x12373(GE_void(l3)));
			if (t1) {
				t1 = (T157x12349(GE_void(l3)));
			}
			if (t1) {
				R = EIF_TRUE;
				l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
			} else {
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			}
			t1 = (T6f1(&l1, l2));
		}
		((T233*)(C))->a14 = EIF_FALSE;
	}
	return R;
}

/* ET_DYNAMIC_SPECIAL_TYPE.has_nested_reference_attributes */
T1 T229f61(T0* C)
{
	T1 R = 0;
	T0* t1;
	T1 t2;
	if (((T229*)(C))->a9) {
		R = EIF_TRUE;
	} else {
		((T229*)(C))->a9 = EIF_TRUE;
		t1 = (T175x12377(GE_void(((T229*)(C))->a8)));
		t2 = (T157x12349(GE_void(t1)));
		if (t2) {
			R = EIF_TRUE;
		}
		((T229*)(C))->a9 = EIF_FALSE;
	}
	return R;
}

/* ET_DYNAMIC_TUPLE_TYPE.has_nested_reference_attributes */
T1 T215f58(T0* C)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T0* t2;
	if (((T215*)(C))->a9) {
		R = EIF_TRUE;
	} else {
		((T215*)(C))->a9 = EIF_TRUE;
		l2 = (((T184*)(GE_void(((T215*)(C))->a8)))->a1);
		l1 = (T6)(GE_int32(1));
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T184f4(GE_void(((T215*)(C))->a8), l1));
			l3 = (T175x12377(GE_void(t2)));
			t1 = (T157x12373(GE_void(l3)));
			if (t1) {
				t1 = (T157x12349(GE_void(l3)));
			}
			if (t1) {
				R = EIF_TRUE;
				l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
			} else {
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			}
			t1 = (T6f1(&l1, l2));
		}
		((T215*)(C))->a9 = EIF_FALSE;
	}
	return R;
}

/* ET_DYNAMIC_TYPE.has_nested_reference_attributes */
T1 T157f59(T0* C)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T0* t2;
	if (((T157*)(C))->a12) {
		R = EIF_TRUE;
	} else {
		((T157*)(C))->a12 = EIF_TRUE;
		l2 = ((T157*)(C))->a4;
		l1 = (T6)(GE_int32(1));
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T218f4(GE_void(((T157*)(C))->a5), l1));
			t2 = (((((T0*)(GE_void(t2)))->id==163)?((T163*)(t2))->a4:((T220*)(t2))->a10));
			l3 = (T175x12377(GE_void(t2)));
			t1 = (T157x12373(GE_void(l3)));
			if (t1) {
				t1 = (T157x12349(GE_void(l3)));
			}
			if (t1) {
				R = EIF_TRUE;
				l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
			} else {
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			}
			t1 = (T6f1(&l1, l2));
		}
		((T157*)(C))->a12 = EIF_FALSE;
	}
	return R;
}

/* ET_DYNAMIC_PROCEDURE_TYPE.seeded_dynamic_query */
T0* T234f44(T0* C, T6 a1, T0* a2)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	t1 = (T234f48(C));
	t2 = ((((T234*)(C))->a5)==(t1));
	if (t2) {
		l3 = (T60f71(GE_void(((T234*)(C))->a7), a1));
		t2 = ((l3)!=(EIF_VOID));
		if (t2) {
			t1 = (((T60*)(GE_void(((T234*)(C))->a7)))->a4);
			t3 = (((T159*)(GE_void(t1)))->a1);
			((T234*)(C))->a5 = T218c8(t3);
			R = (T234f55(C, l3, a2));
			t2 = (((((T0*)(GE_void(R)))->id==163)?T163f31(R, a2):T220f19(R, a2)));
			if (t2) {
				T234f72(C, R, a2);
			} else {
				T218f9(GE_void(((T234*)(C))->a5), R);
			}
		}
	} else {
		l2 = (((T218*)(GE_void(((T234*)(C))->a5)))->a1);
		l1 = (T6)(GE_int32(1));
		t2 = (T6f1(&l1, l2));
		while (!(t2)) {
			l4 = (T218f4(GE_void(((T234*)(C))->a5), l1));
			t1 = (((((T0*)(GE_void(l4)))->id==163)?((T163*)(l4))->a1:((T220*)(l4))->a3));
			t2 = (T201x12780T6(GE_void(t1), a1));
			if (t2) {
				R = l4;
				l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
			} else {
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			}
			t2 = (T6f1(&l1, l2));
		}
		t2 = ((R)==(EIF_VOID));
		if (t2) {
			l3 = (T60f71(GE_void(((T234*)(C))->a7), a1));
			t2 = ((l3)!=(EIF_VOID));
			if (t2) {
				R = (T234f55(C, l3, a2));
				t2 = (((((T0*)(GE_void(R)))->id==163)?T163f31(R, a2):T220f19(R, a2)));
				if (t2) {
					T234f72(C, R, a2);
				} else {
					T218f10(GE_void(((T234*)(C))->a5), R);
				}
			}
		}
	}
	return R;
}

/* ET_DYNAMIC_FEATURE_LIST.force_last */
void T218f10(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (T218f6(C));
	t2 = (T6f12(&(((T218*)(C))->a1), t1));
	if (t2) {
		t1 = (T218f6(C));
		t1 = ((T6)((t1)+((T6)(GE_int32(1)))));
		l1 = ((T6)((t1)*((T6)(GE_int32(2)))));
		t2 = ((((T218*)(C))->a2)==(EIF_VOID));
		if (t2) {
			t3 = (T218f5(C));
			t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			((T218*)(C))->a2 = (T890f1(GE_void(t3), t1));
		} else {
			t3 = (T218f5(C));
			t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			((T218*)(C))->a2 = (T890f2(GE_void(t3), ((T218*)(C))->a2, t1));
		}
	}
	((T218*)(C))->a1 = ((T6)((((T218*)(C))->a1)+((T6)(GE_int32(1)))));
	((T889*)(GE_void(((T218*)(C))->a2)))->z2[((T218*)(C))->a1] = (a1);
}

/* ET_DYNAMIC_FEATURE_LIST.fixed_array */
unsigned char ge910os16580 = '\0';
T0* ge910ov16580;
T0* T218f5(T0* C)
{
	T0* R = 0;
	if (ge910os16580) {
		return ge910ov16580;
	} else {
		ge910os16580 = '\1';
	}
	R = T890c3();
	ge910ov16580 = R;
	return R;
}

/* ET_DYNAMIC_FEATURE_LIST.capacity */
T6 T218f6(T0* C)
{
	T6 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((((T218*)(C))->a2)!=(EIF_VOID));
	if (t1) {
		t2 = (((T889*)(GE_void(((T218*)(C))->a2)))->z1);
		R = ((T6)((t2)-((T6)(GE_int32(1)))));
	}
	return R;
}

/* ET_DYNAMIC_FEATURE_LIST.put_last */
void T218f9(T0* C, T0* a1)
{
	((T218*)(C))->a1 = ((T6)((((T218*)(C))->a1)+((T6)(GE_int32(1)))));
	((T889*)(GE_void(((T218*)(C))->a2)))->z2[((T218*)(C))->a1] = (a1);
}

/* ET_DYNAMIC_PROCEDURE_TYPE.put_attribute */
void T234f72(T0* C, T0* a1, T0* a2)
{
	T0* l1 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	((T234*)(C))->a4 = ((T6)((((T234*)(C))->a4)+((T6)(GE_int32(1)))));
	t1 = (((T218*)(GE_void(((T234*)(C))->a5)))->a1);
	t2 = ((T1)((t1)<(((T234*)(C))->a4)));
	if (t2) {
		T218f10(GE_void(((T234*)(C))->a5), a1);
	} else {
		t3 = (T218f4(GE_void(((T234*)(C))->a5), ((T234*)(C))->a4));
		T218f10(GE_void(((T234*)(C))->a5), t3);
		T218f12(GE_void(((T234*)(C))->a5), a1, ((T234*)(C))->a4);
	}
	t3 = (((((T0*)(GE_void(a1)))->id==163)?((T163*)(a1))->a4:((T220*)(a1))->a10));
	l1 = (T175x12377(GE_void(t3)));
	t2 = (T157x12373(GE_void(l1)));
	t2 = ((T1)(!(t2)));
	if (t2) {
		((T234*)(C))->a13 = EIF_TRUE;
	} else {
		t2 = (T157x12325(GE_void(l1)));
		if (t2) {
			((T234*)(C))->a14 = EIF_TRUE;
		}
	}
}

/* ET_DYNAMIC_FEATURE_LIST.put */
void T218f12(T0* C, T0* a1, T6 a2)
{
	((T889*)(GE_void(((T218*)(C))->a2)))->z2[a2] = (a1);
}

/* ET_DYNAMIC_PROCEDURE_TYPE.new_dynamic_query */
T0* T234f55(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = T163c47(a1, C, a2);
	return R;
}

/* ET_DYNAMIC_FEATURE_LIST.make_with_capacity */
T0* T218c8(T6 a1)
{
	T0* C;
	T1 t1;
	T0* t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T218));
	*(T218*)C = GE_default218;
	((T218*)(C))->a1 = (T6)(GE_int32(0));
	t1 = (T6f1(&a1, (T6)(GE_int32(0))));
	if (t1) {
		t2 = (T218f5(C));
		t3 = ((T6)((a1)+((T6)(GE_int32(1)))));
		((T218*)(C))->a2 = (T890f1(GE_void(t2), t3));
	} else {
		((T218*)(C))->a2 = EIF_VOID;
	}
	return C;
}

/* ET_DYNAMIC_FUNCTION_TYPE.seeded_dynamic_query */
T0* T233f44(T0* C, T6 a1, T0* a2)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	t1 = (T233f48(C));
	t2 = ((((T233*)(C))->a5)==(t1));
	if (t2) {
		l3 = (T60f71(GE_void(((T233*)(C))->a7), a1));
		t2 = ((l3)!=(EIF_VOID));
		if (t2) {
			t1 = (((T60*)(GE_void(((T233*)(C))->a7)))->a4);
			t3 = (((T159*)(GE_void(t1)))->a1);
			((T233*)(C))->a5 = T218c8(t3);
			R = (T233f54(C, l3, a2));
			t2 = (((((T0*)(GE_void(R)))->id==163)?T163f31(R, a2):T220f19(R, a2)));
			if (t2) {
				T233f72(C, R, a2);
			} else {
				T218f9(GE_void(((T233*)(C))->a5), R);
			}
		}
	} else {
		l2 = (((T218*)(GE_void(((T233*)(C))->a5)))->a1);
		l1 = (T6)(GE_int32(1));
		t2 = (T6f1(&l1, l2));
		while (!(t2)) {
			l4 = (T218f4(GE_void(((T233*)(C))->a5), l1));
			t1 = (((((T0*)(GE_void(l4)))->id==163)?((T163*)(l4))->a1:((T220*)(l4))->a3));
			t2 = (T201x12780T6(GE_void(t1), a1));
			if (t2) {
				R = l4;
				l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
			} else {
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			}
			t2 = (T6f1(&l1, l2));
		}
		t2 = ((R)==(EIF_VOID));
		if (t2) {
			l3 = (T60f71(GE_void(((T233*)(C))->a7), a1));
			t2 = ((l3)!=(EIF_VOID));
			if (t2) {
				R = (T233f54(C, l3, a2));
				t2 = (((((T0*)(GE_void(R)))->id==163)?T163f31(R, a2):T220f19(R, a2)));
				if (t2) {
					T233f72(C, R, a2);
				} else {
					T218f10(GE_void(((T233*)(C))->a5), R);
				}
			}
		}
	}
	return R;
}

/* ET_DYNAMIC_FUNCTION_TYPE.put_attribute */
void T233f72(T0* C, T0* a1, T0* a2)
{
	T0* l1 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	((T233*)(C))->a4 = ((T6)((((T233*)(C))->a4)+((T6)(GE_int32(1)))));
	t1 = (((T218*)(GE_void(((T233*)(C))->a5)))->a1);
	t2 = ((T1)((t1)<(((T233*)(C))->a4)));
	if (t2) {
		T218f10(GE_void(((T233*)(C))->a5), a1);
	} else {
		t3 = (T218f4(GE_void(((T233*)(C))->a5), ((T233*)(C))->a4));
		T218f10(GE_void(((T233*)(C))->a5), t3);
		T218f12(GE_void(((T233*)(C))->a5), a1, ((T233*)(C))->a4);
	}
	t3 = (((((T0*)(GE_void(a1)))->id==163)?((T163*)(a1))->a4:((T220*)(a1))->a10));
	l1 = (T175x12377(GE_void(t3)));
	t2 = (T157x12373(GE_void(l1)));
	t2 = ((T1)(!(t2)));
	if (t2) {
		((T233*)(C))->a14 = EIF_TRUE;
	} else {
		t2 = (T157x12325(GE_void(l1)));
		if (t2) {
			((T233*)(C))->a15 = EIF_TRUE;
		}
	}
}

/* ET_DYNAMIC_FUNCTION_TYPE.new_dynamic_query */
T0* T233f54(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 t1;
	T0* t2;
	T0* t3;
	T6 t4;
	T1 t5;
	R = (T233f54p1(C, a1, a2));
	t1 = (((T163*)(GE_void(R)))->a7);
	t2 = (T233f56(C));
	t3 = (T233f56(C));
	t4 = ((T6)(GE_int32(1)));
	t4 = (T170f24(GE_void(t2), t4));
	t5 = ((t1)==(t4));
	if (t5) {
		t2 = (((T58*)(GE_void(a2)))->a7);
		if (((T0*)(GE_void(t2)))->id==64) {
			T64f260(t2, C, R);
		} else {
			T155f18(t2, C, R);
		}
		l1 = (((T163*)(GE_void(R)))->a4);
		t5 = ((l1)!=(EIF_VOID));
		if (t5) {
			t2 = (T175x12377(GE_void(l1)));
			t3 = (T175x12377(GE_void(((T233*)(C))->a8)));
			t5 = ((t2)==(t3));
		}
		if (t5) {
			T163f51(GE_void(R), ((T233*)(C))->a8);
		}
	}
	return R;
}

/* ET_DYNAMIC_FEATURE.set_result_type_set */
void T163f51(T0* C, T0* a1)
{
	((T163*)(C))->a4 = a1;
}

/* ET_DYNAMIC_NULL_TYPE_SET_BUILDER.build_agent_call */
void T155f18(T0* C, T0* a1, T0* a2)
{
}

/* ET_DYNAMIC_PUSH_TYPE_SET_BUILDER.build_agent_call */
void T64f260(T0* C, T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T0* t2;
	l1 = (((T163*)(GE_void(a2)))->a2);
	t1 = (T184f7(GE_void(l1)));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = (T184f4(GE_void(l1), (T6)(GE_int32(1))));
		t2 = (T175x12377(GE_void(t2)));
		l3 = T943c13(t2, a1);
		T943f14(GE_void(l3));
		l2 = T184c8((T6)(GE_int32(1)));
		T184f11(GE_void(l2), l3);
		T163f50(GE_void(a2), l2);
	}
}

/* ET_DYNAMIC_AGENT_OPERAND_PUSH_TYPE_SET.make */
T0* T943c13(T0* a1, T0* a2)
{
	T0* C;
	T1 t1;
	C = (T0*)GE_alloc(sizeof(T943));
	*(T943*)C = GE_default943;
	((T943*)(C))->a1 = a1;
	t1 = (T157x12373(GE_void(a1)));
	if (t1) {
		T943f15(C, a1);
	}
	((T943*)(C))->a2 = a2;
	return C;
}

/* ET_DYNAMIC_FUNCTION_TYPE.tokens */
T0* T233f56(T0* C)
{
	T0* R = 0;
	if (ge769os2852) {
		return ge769ov2852;
	} else {
		ge769os2852 = '\1';
	}
	R = T170c921();
	ge769ov2852 = R;
	return R;
}

/* ET_DYNAMIC_FUNCTION_TYPE.new_dynamic_query */
T0* T233f54p1(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = T163c47(a1, C, a2);
	return R;
}

/* ET_DYNAMIC_SPECIAL_TYPE.seeded_dynamic_query */
T0* T229f56(T0* C, T6 a1, T0* a2)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	t1 = (T229f46(C));
	t2 = ((((T229*)(C))->a5)==(t1));
	if (t2) {
		l3 = (T60f71(GE_void(((T229*)(C))->a7), a1));
		t2 = ((l3)!=(EIF_VOID));
		if (t2) {
			t1 = (((T60*)(GE_void(((T229*)(C))->a7)))->a4);
			t3 = (((T159*)(GE_void(t1)))->a1);
			((T229*)(C))->a5 = T218c8(t3);
			R = (T229f52(C, l3, a2));
			t2 = (((((T0*)(GE_void(R)))->id==163)?T163f31(R, a2):T220f19(R, a2)));
			if (t2) {
				T229f71(C, R, a2);
			} else {
				T218f9(GE_void(((T229*)(C))->a5), R);
			}
		}
	} else {
		l2 = (((T218*)(GE_void(((T229*)(C))->a5)))->a1);
		l1 = (T6)(GE_int32(1));
		t2 = (T6f1(&l1, l2));
		while (!(t2)) {
			l4 = (T218f4(GE_void(((T229*)(C))->a5), l1));
			t1 = (((((T0*)(GE_void(l4)))->id==163)?((T163*)(l4))->a1:((T220*)(l4))->a3));
			t2 = (T201x12780T6(GE_void(t1), a1));
			if (t2) {
				R = l4;
				l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
			} else {
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			}
			t2 = (T6f1(&l1, l2));
		}
		t2 = ((R)==(EIF_VOID));
		if (t2) {
			l3 = (T60f71(GE_void(((T229*)(C))->a7), a1));
			t2 = ((l3)!=(EIF_VOID));
			if (t2) {
				R = (T229f52(C, l3, a2));
				t2 = (((((T0*)(GE_void(R)))->id==163)?T163f31(R, a2):T220f19(R, a2)));
				if (t2) {
					T229f71(C, R, a2);
				} else {
					T218f10(GE_void(((T229*)(C))->a5), R);
				}
			}
		}
	}
	return R;
}

/* ET_DYNAMIC_SPECIAL_TYPE.put_attribute */
void T229f71(T0* C, T0* a1, T0* a2)
{
	T0* l1 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	((T229*)(C))->a4 = ((T6)((((T229*)(C))->a4)+((T6)(GE_int32(1)))));
	t1 = (((T218*)(GE_void(((T229*)(C))->a5)))->a1);
	t2 = ((T1)((t1)<(((T229*)(C))->a4)));
	if (t2) {
		T218f10(GE_void(((T229*)(C))->a5), a1);
	} else {
		t3 = (T218f4(GE_void(((T229*)(C))->a5), ((T229*)(C))->a4));
		T218f10(GE_void(((T229*)(C))->a5), t3);
		T218f12(GE_void(((T229*)(C))->a5), a1, ((T229*)(C))->a4);
	}
	t3 = (((((T0*)(GE_void(a1)))->id==163)?((T163*)(a1))->a4:((T220*)(a1))->a10));
	l1 = (T175x12377(GE_void(t3)));
	t2 = (T157x12373(GE_void(l1)));
	t2 = ((T1)(!(t2)));
	if (t2) {
		((T229*)(C))->a9 = EIF_TRUE;
	} else {
		t2 = (T157x12325(GE_void(l1)));
		if (t2) {
			((T229*)(C))->a10 = EIF_TRUE;
		}
	}
}

/* ET_DYNAMIC_SPECIAL_TYPE.new_dynamic_query */
T0* T229f52(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T1 t2;
	T0* t3;
	R = (T229f52p1(C, a1, a2));
	l1 = (T160x12782(GE_void(a1)));
	t1 = (T229f54(C));
	t1 = (T170f23(GE_void(t1)));
	t2 = (T169x11851T0(GE_void(l1), t1));
	if (t2) {
		l2 = (((T163*)(GE_void(R)))->a4);
		t2 = ((l2)!=(EIF_VOID));
		if (t2) {
			t1 = (T175x12377(GE_void(l2)));
			t3 = (T175x12377(GE_void(((T229*)(C))->a8)));
			t2 = ((t1)==(t3));
		}
		if (t2) {
			T163f51(GE_void(R), ((T229*)(C))->a8);
		}
	}
	return R;
}

/* ET_DYNAMIC_SPECIAL_TYPE.tokens */
T0* T229f54(T0* C)
{
	T0* R = 0;
	if (ge769os2852) {
		return ge769ov2852;
	} else {
		ge769os2852 = '\1';
	}
	R = T170c921();
	ge769ov2852 = R;
	return R;
}

/* ET_DYNAMIC_SPECIAL_TYPE.new_dynamic_query */
T0* T229f52p1(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = T163c47(a1, C, a2);
	return R;
}

/* ET_DYNAMIC_TUPLE_TYPE.seeded_dynamic_query */
T0* T215f56(T0* C, T6 a1, T0* a2)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	t1 = (T215f46(C));
	t2 = ((((T215*)(C))->a5)==(t1));
	if (t2) {
		l3 = (T60f71(GE_void(((T215*)(C))->a7), a1));
		t2 = ((l3)!=(EIF_VOID));
		if (t2) {
			t1 = (((T60*)(GE_void(((T215*)(C))->a7)))->a4);
			t3 = (((T159*)(GE_void(t1)))->a1);
			((T215*)(C))->a5 = T218c8(t3);
			R = (T215f52(C, l3, a2));
			t2 = (((((T0*)(GE_void(R)))->id==163)?T163f31(R, a2):T220f19(R, a2)));
			if (t2) {
				T215f71(C, R, a2);
			} else {
				T218f9(GE_void(((T215*)(C))->a5), R);
			}
		}
	} else {
		l2 = (((T218*)(GE_void(((T215*)(C))->a5)))->a1);
		l1 = (T6)(GE_int32(1));
		t2 = (T6f1(&l1, l2));
		while (!(t2)) {
			l4 = (T218f4(GE_void(((T215*)(C))->a5), l1));
			t1 = (((((T0*)(GE_void(l4)))->id==163)?((T163*)(l4))->a1:((T220*)(l4))->a3));
			t2 = (T201x12780T6(GE_void(t1), a1));
			if (t2) {
				R = l4;
				l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
			} else {
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			}
			t2 = (T6f1(&l1, l2));
		}
		t2 = ((R)==(EIF_VOID));
		if (t2) {
			l3 = (T60f71(GE_void(((T215*)(C))->a7), a1));
			t2 = ((l3)!=(EIF_VOID));
			if (t2) {
				R = (T215f52(C, l3, a2));
				t2 = (((((T0*)(GE_void(R)))->id==163)?T163f31(R, a2):T220f19(R, a2)));
				if (t2) {
					T215f71(C, R, a2);
				} else {
					T218f10(GE_void(((T215*)(C))->a5), R);
				}
			}
		}
	}
	return R;
}

/* ET_DYNAMIC_TUPLE_TYPE.put_attribute */
void T215f71(T0* C, T0* a1, T0* a2)
{
	T0* l1 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	((T215*)(C))->a4 = ((T6)((((T215*)(C))->a4)+((T6)(GE_int32(1)))));
	t1 = (((T218*)(GE_void(((T215*)(C))->a5)))->a1);
	t2 = ((T1)((t1)<(((T215*)(C))->a4)));
	if (t2) {
		T218f10(GE_void(((T215*)(C))->a5), a1);
	} else {
		t3 = (T218f4(GE_void(((T215*)(C))->a5), ((T215*)(C))->a4));
		T218f10(GE_void(((T215*)(C))->a5), t3);
		T218f12(GE_void(((T215*)(C))->a5), a1, ((T215*)(C))->a4);
	}
	t3 = (((((T0*)(GE_void(a1)))->id==163)?((T163*)(a1))->a4:((T220*)(a1))->a10));
	l1 = (T175x12377(GE_void(t3)));
	t2 = (T157x12373(GE_void(l1)));
	t2 = ((T1)(!(t2)));
	if (t2) {
		((T215*)(C))->a9 = EIF_TRUE;
	} else {
		t2 = (T157x12325(GE_void(l1)));
		if (t2) {
			((T215*)(C))->a10 = EIF_TRUE;
		}
	}
}

/* ET_DYNAMIC_TUPLE_TYPE.new_dynamic_query */
T0* T215f52(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T1 t1;
	T0* t2;
	T1 t3;
	R = (T215f52p1(C, a1, a2));
	l1 = (T160x12782(GE_void(a1)));
	t1 = (T163f23(GE_void(R)));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = (T215f54(C));
		t2 = (T170f23(GE_void(t2)));
		t3 = (T169x11851T0(GE_void(l1), t2));
		if (!(t3)) {
			t2 = (T215f54(C));
			t2 = (T170f49(GE_void(t2)));
			t3 = (T169x11851T0(GE_void(l1), t2));
		}
		if (!(t3)) {
			t2 = (T215f54(C));
			t2 = (T170f50(GE_void(t2)));
			t1 = (T169x11851T0(GE_void(l1), t2));
		} else {
			t1 = EIF_TRUE;
		}
	}
	if (t1) {
		t2 = (((T58*)(GE_void(a2)))->a7);
		if (((T0*)(GE_void(t2)))->id==64) {
			T64f259(t2, C, R);
		} else {
			T155f17(t2, C, R);
		}
	}
	return R;
}

/* ET_DYNAMIC_NULL_TYPE_SET_BUILDER.build_tuple_item */
void T155f17(T0* C, T0* a1, T0* a2)
{
}

/* ET_DYNAMIC_PUSH_TYPE_SET_BUILDER.build_tuple_item */
void T64f259(T0* C, T0* a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	l3 = (((T163*)(GE_void(a2)))->a4);
	t1 = ((l3)!=(EIF_VOID));
	if (t1) {
		l4 = (((T215*)(a1))->a8);
		l2 = (((T184*)(GE_void(l4)))->a1);
		l1 = (T6)(GE_int32(1));
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T184f4(GE_void(l4), l1));
			T175x12379T0T0(GE_void(t2), l3, ((T64*)(C))->a2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
	}
}

/* ET_TOKEN_CONSTANTS.infix_at_feature_name */
unsigned char ge774os13803 = '\0';
T0* ge774ov13803;
T0* T170f49(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge774os13803) {
		return ge774ov13803;
	} else {
		ge774os13803 = '\1';
	}
	l1 = T513c31(ge774ov14222);
	R = T678c60(l1);
	ge774ov13803 = R;
	return R;
}

/* ET_DYNAMIC_TUPLE_TYPE.tokens */
T0* T215f54(T0* C)
{
	T0* R = 0;
	if (ge769os2852) {
		return ge769ov2852;
	} else {
		ge769os2852 = '\1';
	}
	R = T170c921();
	ge769ov2852 = R;
	return R;
}

/* ET_DYNAMIC_TUPLE_TYPE.new_dynamic_query */
T0* T215f52p1(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = T163c47(a1, C, a2);
	return R;
}

/* ET_DYNAMIC_TYPE.seeded_dynamic_query */
T0* T157f24(T0* C, T6 a1, T0* a2)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	t1 = (T157f19(C));
	t2 = ((((T157*)(C))->a5)==(t1));
	if (t2) {
		l3 = (T60f71(GE_void(((T157*)(C))->a6), a1));
		t2 = ((l3)!=(EIF_VOID));
		if (t2) {
			t1 = (((T60*)(GE_void(((T157*)(C))->a6)))->a4);
			t3 = (((T159*)(GE_void(t1)))->a1);
			((T157*)(C))->a5 = T218c8(t3);
			R = (T157f20(C, l3, a2));
			t2 = (((((T0*)(GE_void(R)))->id==163)?T163f31(R, a2):T220f19(R, a2)));
			if (t2) {
				T157f68(C, R, a2);
			} else {
				T218f9(GE_void(((T157*)(C))->a5), R);
			}
		}
	} else {
		l2 = (((T218*)(GE_void(((T157*)(C))->a5)))->a1);
		l1 = (T6)(GE_int32(1));
		t2 = (T6f1(&l1, l2));
		while (!(t2)) {
			l4 = (T218f4(GE_void(((T157*)(C))->a5), l1));
			t1 = (((((T0*)(GE_void(l4)))->id==163)?((T163*)(l4))->a1:((T220*)(l4))->a3));
			t2 = (T201x12780T6(GE_void(t1), a1));
			if (t2) {
				R = l4;
				l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
			} else {
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			}
			t2 = (T6f1(&l1, l2));
		}
		t2 = ((R)==(EIF_VOID));
		if (t2) {
			l3 = (T60f71(GE_void(((T157*)(C))->a6), a1));
			t2 = ((l3)!=(EIF_VOID));
			if (t2) {
				R = (T157f20(C, l3, a2));
				t2 = (((((T0*)(GE_void(R)))->id==163)?T163f31(R, a2):T220f19(R, a2)));
				if (t2) {
					T157f68(C, R, a2);
				} else {
					T218f10(GE_void(((T157*)(C))->a5), R);
				}
			}
		}
	}
	return R;
}

/* ET_DYNAMIC_TYPE.put_attribute */
void T157f68(T0* C, T0* a1, T0* a2)
{
	T0* l1 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	((T157*)(C))->a4 = ((T6)((((T157*)(C))->a4)+((T6)(GE_int32(1)))));
	t1 = (((T218*)(GE_void(((T157*)(C))->a5)))->a1);
	t2 = ((T1)((t1)<(((T157*)(C))->a4)));
	if (t2) {
		T218f10(GE_void(((T157*)(C))->a5), a1);
	} else {
		t3 = (T218f4(GE_void(((T157*)(C))->a5), ((T157*)(C))->a4));
		T218f10(GE_void(((T157*)(C))->a5), t3);
		T218f12(GE_void(((T157*)(C))->a5), a1, ((T157*)(C))->a4);
	}
	t3 = (((((T0*)(GE_void(a1)))->id==163)?((T163*)(a1))->a4:((T220*)(a1))->a10));
	l1 = (T175x12377(GE_void(t3)));
	t2 = (T157x12373(GE_void(l1)));
	t2 = ((T1)(!(t2)));
	if (t2) {
		((T157*)(C))->a12 = EIF_TRUE;
	} else {
		t2 = (T157x12325(GE_void(l1)));
		if (t2) {
			((T157*)(C))->a13 = EIF_TRUE;
		}
	}
}

/* ET_DYNAMIC_TYPE.new_dynamic_query */
T0* T157f20(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = T163c47(a1, C, a2);
	return R;
}

/* ET_DYNAMIC_PROCEDURE_TYPE.is_builtin_attribute */
T1 T234f19(T0* C, T0* a1, T6 a2, T0* a3)
{
	T1 R = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = ((T6)((a2)/((T6)(GE_int32(100)))));
	switch (t1) {
	case (T6)(T6)(GE_int32(5)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a9);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(3)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a12);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(4)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a13);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(16)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a28);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(6)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a15);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(7)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a16);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(8)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a17);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(9)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a18);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(10)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a20);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(11)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a21);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(12)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a22);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(13)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a23);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(14)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a26);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(15)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a27);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(23)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(14))));
		if (t2) {
			R = EIF_TRUE;
		}
		break;
	default:
		R = EIF_FALSE;
		break;
	}
	return R;
}

/* ET_DYNAMIC_FUNCTION_TYPE.is_builtin_attribute */
T1 T233f19(T0* C, T0* a1, T6 a2, T0* a3)
{
	T1 R = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = ((T6)((a2)/((T6)(GE_int32(100)))));
	switch (t1) {
	case (T6)(T6)(GE_int32(5)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a9);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(3)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a12);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(4)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a13);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(16)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a28);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(6)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a15);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(7)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a16);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(8)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a17);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(9)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a18);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(10)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a20);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(11)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a21);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(12)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a22);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(13)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a23);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(14)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a26);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(15)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a27);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(23)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(14))));
		if (t2) {
			R = EIF_TRUE;
		}
		break;
	default:
		R = EIF_FALSE;
		break;
	}
	return R;
}

/* ET_DYNAMIC_SPECIAL_TYPE.is_builtin_attribute */
T1 T229f19(T0* C, T0* a1, T6 a2, T0* a3)
{
	T1 R = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = ((T6)((a2)/((T6)(GE_int32(100)))));
	switch (t1) {
	case (T6)(T6)(GE_int32(5)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a9);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(3)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a12);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(4)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a13);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(16)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a28);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(6)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a15);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(7)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a16);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(8)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a17);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(9)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a18);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(10)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a20);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(11)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a21);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(12)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a22);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(13)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a23);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(14)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a26);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(15)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a27);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(23)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(14))));
		if (t2) {
			R = EIF_TRUE;
		}
		break;
	default:
		R = EIF_FALSE;
		break;
	}
	return R;
}

/* ET_DYNAMIC_TUPLE_TYPE.is_builtin_attribute */
T1 T215f18(T0* C, T0* a1, T6 a2, T0* a3)
{
	T1 R = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = ((T6)((a2)/((T6)(GE_int32(100)))));
	switch (t1) {
	case (T6)(T6)(GE_int32(5)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a9);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(3)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a12);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(4)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a13);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(16)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a28);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(6)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a15);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(7)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a16);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(8)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a17);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(9)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a18);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(10)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a20);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(11)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a21);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(12)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a22);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(13)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a23);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(14)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a26);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(15)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a27);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(23)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(14))));
		if (t2) {
			R = EIF_TRUE;
		}
		break;
	default:
		R = EIF_FALSE;
		break;
	}
	return R;
}

/* ET_DYNAMIC_TYPE.is_builtin_attribute */
T1 T157f31(T0* C, T0* a1, T6 a2, T0* a3)
{
	T1 R = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = ((T6)((a2)/((T6)(GE_int32(100)))));
	switch (t1) {
	case (T6)(T6)(GE_int32(5)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a9);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(3)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a12);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(4)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a13);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(16)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a28);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(6)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a15);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(7)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a16);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(8)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a17);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(9)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a18);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(10)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a20);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(11)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a21);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(12)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a22);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(13)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a23);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(14)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a26);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(15)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(1))));
		if (t2) {
			t3 = (((T58*)(GE_void(a3)))->a27);
			R = ((C)!=(t3));
		}
		break;
	case (T6)(T6)(GE_int32(23)):
		t1 = ((T6)((a2)%((T6)(GE_int32(100)))));
		t2 = ((t1)==((T6)(GE_int32(14))));
		if (t2) {
			R = EIF_TRUE;
		}
		break;
	default:
		R = EIF_FALSE;
		break;
	}
	return R;
}

/* ET_DYNAMIC_PROCEDURE_TYPE.is_special */
T1 T234f56(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DYNAMIC_FUNCTION_TYPE.is_special */
T1 T233f57(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DYNAMIC_TUPLE_TYPE.is_special */
T1 T215f55(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DYNAMIC_TYPE.is_special */
T1 T157f58(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DYNAMIC_PROCEDURE_TYPE.is_expanded */
T1 T234f49(T0* C)
{
	T1 R = 0;
	R = (T158x6276(GE_void(((T234*)(C))->a2)));
	return R;
}

/* ET_DYNAMIC_FUNCTION_TYPE.is_expanded */
T1 T233f49(T0* C)
{
	T1 R = 0;
	R = (T158x6276(GE_void(((T233*)(C))->a2)));
	return R;
}

/* ET_DYNAMIC_SPECIAL_TYPE.is_expanded */
T1 T229f47(T0* C)
{
	T1 R = 0;
	R = (T158x6276(GE_void(((T229*)(C))->a2)));
	return R;
}

/* ET_DYNAMIC_TUPLE_TYPE.is_expanded */
T1 T215f47(T0* C)
{
	T1 R = 0;
	R = (T158x6276(GE_void(((T215*)(C))->a2)));
	return R;
}

/* ET_DYNAMIC_TYPE.is_expanded */
T1 T157f21(T0* C)
{
	T1 R = 0;
	R = (T158x6276(GE_void(((T157*)(C))->a1)));
	return R;
}

/* ET_DYNAMIC_PROCEDURE_TYPE.dynamic_procedure */
T0* T234f47(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	t1 = (T234f48(C));
	t2 = ((((T234*)(C))->a6)==(t1));
	if (t2) {
		t1 = (((T60*)(GE_void(((T234*)(C))->a7)))->a5);
		t3 = (((T161*)(GE_void(t1)))->a1);
		((T234*)(C))->a6 = T218c8(t3);
		R = (T234f53(C, a1, a2));
		T218f9(GE_void(((T234*)(C))->a6), R);
	} else {
		l2 = (((T218*)(GE_void(((T234*)(C))->a6)))->a1);
		l1 = (T6)(GE_int32(1));
		t2 = (T6f1(&l1, l2));
		while (!(t2)) {
			l3 = (T218f4(GE_void(((T234*)(C))->a6), l1));
			t1 = (((((T0*)(GE_void(l3)))->id==163)?((T163*)(l3))->a1:((T220*)(l3))->a3));
			t2 = ((t1)==(a1));
			if (t2) {
				R = l3;
				l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
			} else {
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			}
			t2 = (T6f1(&l1, l2));
		}
		t2 = ((R)==(EIF_VOID));
		if (t2) {
			R = (T234f53(C, a1, a2));
			T218f10(GE_void(((T234*)(C))->a6), R);
		}
	}
	return R;
}

/* ET_DYNAMIC_PROCEDURE_TYPE.new_dynamic_procedure */
T0* T234f53(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T6 t1;
	T0* t2;
	T0* t3;
	T6 t4;
	T1 t5;
	R = (T234f53p1(C, a1, a2));
	t1 = (((T163*)(GE_void(R)))->a7);
	t2 = (T234f18(C));
	t3 = (T234f18(C));
	t4 = ((T6)(GE_int32(1)));
	t4 = (T170f22(GE_void(t2), t4));
	t5 = ((t1)==(t4));
	if (t5) {
		t2 = (((T58*)(GE_void(a2)))->a7);
		if (((T0*)(GE_void(t2)))->id==64) {
			T64f260(t2, C, R);
		} else {
			T155f18(t2, C, R);
		}
	}
	return R;
}

/* ET_DYNAMIC_PROCEDURE_TYPE.tokens */
T0* T234f18(T0* C)
{
	T0* R = 0;
	if (ge769os2852) {
		return ge769ov2852;
	} else {
		ge769os2852 = '\1';
	}
	R = T170c921();
	ge769ov2852 = R;
	return R;
}

/* ET_DYNAMIC_PROCEDURE_TYPE.new_dynamic_procedure */
T0* T234f53p1(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = T163c47(a1, C, a2);
	return R;
}

/* ET_DYNAMIC_FUNCTION_TYPE.dynamic_procedure */
T0* T233f47(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	t1 = (T233f48(C));
	t2 = ((((T233*)(C))->a6)==(t1));
	if (t2) {
		t1 = (((T60*)(GE_void(((T233*)(C))->a7)))->a5);
		t3 = (((T161*)(GE_void(t1)))->a1);
		((T233*)(C))->a6 = T218c8(t3);
		R = (T233f50(C, a1, a2));
		T218f9(GE_void(((T233*)(C))->a6), R);
	} else {
		l2 = (((T218*)(GE_void(((T233*)(C))->a6)))->a1);
		l1 = (T6)(GE_int32(1));
		t2 = (T6f1(&l1, l2));
		while (!(t2)) {
			l3 = (T218f4(GE_void(((T233*)(C))->a6), l1));
			t1 = (((((T0*)(GE_void(l3)))->id==163)?((T163*)(l3))->a1:((T220*)(l3))->a3));
			t2 = ((t1)==(a1));
			if (t2) {
				R = l3;
				l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
			} else {
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			}
			t2 = (T6f1(&l1, l2));
		}
		t2 = ((R)==(EIF_VOID));
		if (t2) {
			R = (T233f50(C, a1, a2));
			T218f10(GE_void(((T233*)(C))->a6), R);
		}
	}
	return R;
}

/* ET_DYNAMIC_FUNCTION_TYPE.new_dynamic_procedure */
T0* T233f50(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T6 t1;
	T0* t2;
	T0* t3;
	T6 t4;
	T1 t5;
	R = (T233f50p1(C, a1, a2));
	t1 = (((T163*)(GE_void(R)))->a7);
	t2 = (T233f56(C));
	t3 = (T233f56(C));
	t4 = ((T6)(GE_int32(2)));
	t4 = (T170f24(GE_void(t2), t4));
	t5 = ((t1)==(t4));
	if (t5) {
		t2 = (((T58*)(GE_void(a2)))->a7);
		if (((T0*)(GE_void(t2)))->id==64) {
			T64f260(t2, C, R);
		} else {
			T155f18(t2, C, R);
		}
	}
	return R;
}

/* ET_DYNAMIC_FUNCTION_TYPE.new_dynamic_procedure */
T0* T233f50p1(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = T163c47(a1, C, a2);
	return R;
}

/* ET_DYNAMIC_SPECIAL_TYPE.dynamic_procedure */
T0* T229f45(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	t1 = (T229f46(C));
	t2 = ((((T229*)(C))->a6)==(t1));
	if (t2) {
		t1 = (((T60*)(GE_void(((T229*)(C))->a7)))->a5);
		t3 = (((T161*)(GE_void(t1)))->a1);
		((T229*)(C))->a6 = T218c8(t3);
		R = (T229f48(C, a1, a2));
		T218f9(GE_void(((T229*)(C))->a6), R);
	} else {
		l2 = (((T218*)(GE_void(((T229*)(C))->a6)))->a1);
		l1 = (T6)(GE_int32(1));
		t2 = (T6f1(&l1, l2));
		while (!(t2)) {
			l3 = (T218f4(GE_void(((T229*)(C))->a6), l1));
			t1 = (((((T0*)(GE_void(l3)))->id==163)?((T163*)(l3))->a1:((T220*)(l3))->a3));
			t2 = ((t1)==(a1));
			if (t2) {
				R = l3;
				l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
			} else {
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			}
			t2 = (T6f1(&l1, l2));
		}
		t2 = ((R)==(EIF_VOID));
		if (t2) {
			R = (T229f48(C, a1, a2));
			T218f10(GE_void(((T229*)(C))->a6), R);
		}
	}
	return R;
}

/* ET_DYNAMIC_SPECIAL_TYPE.new_dynamic_procedure */
T0* T229f48(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T6 l4 = 0;
	T6 l5 = 0;
	T0* t1;
	T1 t2;
	R = (T229f48p1(C, a1, a2));
	l1 = (T162x12782(GE_void(a1)));
	t1 = (T229f54(C));
	t1 = (T170f47(GE_void(t1)));
	t2 = (T169x11851T0(GE_void(l1), t1));
	if (t2) {
		l2 = (((T163*)(GE_void(R)))->a2);
		l5 = (((T184*)(GE_void(l2)))->a1);
		l3 = T184c8(l5);
		T184f11(GE_void(l3), ((T229*)(C))->a8);
		l4 = (T6)(GE_int32(2));
		t2 = (T6f1(&l4, l5));
		while (!(t2)) {
			t1 = (T184f4(GE_void(l2), l4));
			T184f11(GE_void(l3), t1);
			l4 = ((T6)((l4)+((T6)(GE_int32(1)))));
			t2 = (T6f1(&l4, l5));
		}
		T163f50(GE_void(R), l3);
	}
	return R;
}

/* ET_DYNAMIC_SPECIAL_TYPE.new_dynamic_procedure */
T0* T229f48p1(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = T163c47(a1, C, a2);
	return R;
}

/* ET_DYNAMIC_TUPLE_TYPE.dynamic_procedure */
T0* T215f45(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	t1 = (T215f46(C));
	t2 = ((((T215*)(C))->a6)==(t1));
	if (t2) {
		t1 = (((T60*)(GE_void(((T215*)(C))->a7)))->a5);
		t3 = (((T161*)(GE_void(t1)))->a1);
		((T215*)(C))->a6 = T218c8(t3);
		R = (T215f48(C, a1, a2));
		T218f9(GE_void(((T215*)(C))->a6), R);
	} else {
		l2 = (((T218*)(GE_void(((T215*)(C))->a6)))->a1);
		l1 = (T6)(GE_int32(1));
		t2 = (T6f1(&l1, l2));
		while (!(t2)) {
			l3 = (T218f4(GE_void(((T215*)(C))->a6), l1));
			t1 = (((((T0*)(GE_void(l3)))->id==163)?((T163*)(l3))->a1:((T220*)(l3))->a3));
			t2 = ((t1)==(a1));
			if (t2) {
				R = l3;
				l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
			} else {
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			}
			t2 = (T6f1(&l1, l2));
		}
		t2 = ((R)==(EIF_VOID));
		if (t2) {
			R = (T215f48(C, a1, a2));
			T218f10(GE_void(((T215*)(C))->a6), R);
		}
	}
	return R;
}

/* ET_DYNAMIC_TUPLE_TYPE.new_dynamic_procedure */
T0* T215f48(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T1 t1;
	T0* t2;
	T1 t3;
	R = (T215f48p1(C, a1, a2));
	l1 = (T162x12782(GE_void(a1)));
	t1 = (T163f23(GE_void(R)));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = (T215f54(C));
		t2 = (T170f47(GE_void(t2)));
		t3 = (T169x11851T0(GE_void(l1), t2));
		if (!(t3)) {
			t2 = (T215f54(C));
			t2 = (T170f48(GE_void(t2)));
			t1 = (T169x11851T0(GE_void(l1), t2));
		} else {
			t1 = EIF_TRUE;
		}
	}
	if (t1) {
		t2 = (((T58*)(GE_void(a2)))->a7);
		if (((T0*)(GE_void(t2)))->id==64) {
			T64f258(t2, C, R);
		} else {
			T155f16(t2, C, R);
		}
	}
	return R;
}

/* ET_DYNAMIC_NULL_TYPE_SET_BUILDER.build_tuple_put */
void T155f16(T0* C, T0* a1, T0* a2)
{
}

/* ET_DYNAMIC_PUSH_TYPE_SET_BUILDER.build_tuple_put */
void T64f258(T0* C, T0* a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	l3 = (((T163*)(GE_void(a2)))->a2);
	t1 = (((T184*)(GE_void(l3)))->a1);
	t2 = (T6f1(&t1, (T6)(GE_int32(1))));
	if (t2) {
		l4 = (T184f4(GE_void(l3), (T6)(GE_int32(1))));
		l5 = (((T215*)(a1))->a8);
		l2 = (((T184*)(GE_void(l5)))->a1);
		l1 = (T6)(GE_int32(1));
		t2 = (T6f1(&l1, l2));
		while (!(t2)) {
			t3 = (T184f4(GE_void(l5), l1));
			T175x12379T0T0(GE_void(l4), t3, ((T64*)(C))->a2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t2 = (T6f1(&l1, l2));
		}
	}
}

/* ET_DYNAMIC_TUPLE_TYPE.new_dynamic_procedure */
T0* T215f48p1(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = T163c47(a1, C, a2);
	return R;
}

/* ET_DYNAMIC_TYPE.dynamic_procedure */
T0* T157f26(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	t1 = (T157f19(C));
	t2 = ((((T157*)(C))->a7)==(t1));
	if (t2) {
		t1 = (((T60*)(GE_void(((T157*)(C))->a6)))->a5);
		t3 = (((T161*)(GE_void(t1)))->a1);
		((T157*)(C))->a7 = T218c8(t3);
		R = (T157f22(C, a1, a2));
		T218f9(GE_void(((T157*)(C))->a7), R);
	} else {
		l2 = (((T218*)(GE_void(((T157*)(C))->a7)))->a1);
		l1 = (T6)(GE_int32(1));
		t2 = (T6f1(&l1, l2));
		while (!(t2)) {
			l3 = (T218f4(GE_void(((T157*)(C))->a7), l1));
			t1 = (((((T0*)(GE_void(l3)))->id==163)?((T163*)(l3))->a1:((T220*)(l3))->a3));
			t2 = ((t1)==(a1));
			if (t2) {
				R = l3;
				l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
			} else {
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			}
			t2 = (T6f1(&l1, l2));
		}
		t2 = ((R)==(EIF_VOID));
		if (t2) {
			R = (T157f22(C, a1, a2));
			T218f10(GE_void(((T157*)(C))->a7), R);
		}
	}
	return R;
}

/* ET_DYNAMIC_TYPE.new_dynamic_procedure */
T0* T157f22(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	R = T163c47(a1, C, a2);
	return R;
}

/* ET_DYNAMIC_PROCEDURE_TYPE.dynamic_query */
T0* T234f42(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	t1 = (T234f48(C));
	t2 = ((((T234*)(C))->a5)==(t1));
	if (t2) {
		t1 = (((T60*)(GE_void(((T234*)(C))->a7)))->a4);
		t3 = (((T159*)(GE_void(t1)))->a1);
		((T234*)(C))->a5 = T218c8(t3);
		R = (T234f55(C, a1, a2));
		t2 = (((((T0*)(GE_void(R)))->id==163)?T163f31(R, a2):T220f19(R, a2)));
		if (t2) {
			T234f72(C, R, a2);
		} else {
			T218f9(GE_void(((T234*)(C))->a5), R);
		}
	} else {
		l2 = (((T218*)(GE_void(((T234*)(C))->a5)))->a1);
		l1 = (T6)(GE_int32(1));
		t2 = (T6f1(&l1, l2));
		while (!(t2)) {
			l3 = (T218f4(GE_void(((T234*)(C))->a5), l1));
			t1 = (((((T0*)(GE_void(l3)))->id==163)?((T163*)(l3))->a1:((T220*)(l3))->a3));
			t2 = ((t1)==(a1));
			if (t2) {
				R = l3;
				l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
			} else {
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			}
			t2 = (T6f1(&l1, l2));
		}
		t2 = ((R)==(EIF_VOID));
		if (t2) {
			R = (T234f55(C, a1, a2));
			t2 = (((((T0*)(GE_void(R)))->id==163)?T163f31(R, a2):T220f19(R, a2)));
			if (t2) {
				T234f72(C, R, a2);
			} else {
				T218f10(GE_void(((T234*)(C))->a5), R);
			}
		}
	}
	return R;
}

/* ET_DYNAMIC_FUNCTION_TYPE.dynamic_query */
T0* T233f20(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	t1 = (T233f48(C));
	t2 = ((((T233*)(C))->a5)==(t1));
	if (t2) {
		t1 = (((T60*)(GE_void(((T233*)(C))->a7)))->a4);
		t3 = (((T159*)(GE_void(t1)))->a1);
		((T233*)(C))->a5 = T218c8(t3);
		R = (T233f54(C, a1, a2));
		t2 = (((((T0*)(GE_void(R)))->id==163)?T163f31(R, a2):T220f19(R, a2)));
		if (t2) {
			T233f72(C, R, a2);
		} else {
			T218f9(GE_void(((T233*)(C))->a5), R);
		}
	} else {
		l2 = (((T218*)(GE_void(((T233*)(C))->a5)))->a1);
		l1 = (T6)(GE_int32(1));
		t2 = (T6f1(&l1, l2));
		while (!(t2)) {
			l3 = (T218f4(GE_void(((T233*)(C))->a5), l1));
			t1 = (((((T0*)(GE_void(l3)))->id==163)?((T163*)(l3))->a1:((T220*)(l3))->a3));
			t2 = ((t1)==(a1));
			if (t2) {
				R = l3;
				l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
			} else {
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			}
			t2 = (T6f1(&l1, l2));
		}
		t2 = ((R)==(EIF_VOID));
		if (t2) {
			R = (T233f54(C, a1, a2));
			t2 = (((((T0*)(GE_void(R)))->id==163)?T163f31(R, a2):T220f19(R, a2)));
			if (t2) {
				T233f72(C, R, a2);
			} else {
				T218f10(GE_void(((T233*)(C))->a5), R);
			}
		}
	}
	return R;
}

/* ET_DYNAMIC_SPECIAL_TYPE.dynamic_query */
T0* T229f18(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	t1 = (T229f46(C));
	t2 = ((((T229*)(C))->a5)==(t1));
	if (t2) {
		t1 = (((T60*)(GE_void(((T229*)(C))->a7)))->a4);
		t3 = (((T159*)(GE_void(t1)))->a1);
		((T229*)(C))->a5 = T218c8(t3);
		R = (T229f52(C, a1, a2));
		t2 = (((((T0*)(GE_void(R)))->id==163)?T163f31(R, a2):T220f19(R, a2)));
		if (t2) {
			T229f71(C, R, a2);
		} else {
			T218f9(GE_void(((T229*)(C))->a5), R);
		}
	} else {
		l2 = (((T218*)(GE_void(((T229*)(C))->a5)))->a1);
		l1 = (T6)(GE_int32(1));
		t2 = (T6f1(&l1, l2));
		while (!(t2)) {
			l3 = (T218f4(GE_void(((T229*)(C))->a5), l1));
			t1 = (((((T0*)(GE_void(l3)))->id==163)?((T163*)(l3))->a1:((T220*)(l3))->a3));
			t2 = ((t1)==(a1));
			if (t2) {
				R = l3;
				l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
			} else {
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			}
			t2 = (T6f1(&l1, l2));
		}
		t2 = ((R)==(EIF_VOID));
		if (t2) {
			R = (T229f52(C, a1, a2));
			t2 = (((((T0*)(GE_void(R)))->id==163)?T163f31(R, a2):T220f19(R, a2)));
			if (t2) {
				T229f71(C, R, a2);
			} else {
				T218f10(GE_void(((T229*)(C))->a5), R);
			}
		}
	}
	return R;
}

/* ET_DYNAMIC_TUPLE_TYPE.dynamic_query */
T0* T215f41(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	t1 = (T215f46(C));
	t2 = ((((T215*)(C))->a5)==(t1));
	if (t2) {
		t1 = (((T60*)(GE_void(((T215*)(C))->a7)))->a4);
		t3 = (((T159*)(GE_void(t1)))->a1);
		((T215*)(C))->a5 = T218c8(t3);
		R = (T215f52(C, a1, a2));
		t2 = (((((T0*)(GE_void(R)))->id==163)?T163f31(R, a2):T220f19(R, a2)));
		if (t2) {
			T215f71(C, R, a2);
		} else {
			T218f9(GE_void(((T215*)(C))->a5), R);
		}
	} else {
		l2 = (((T218*)(GE_void(((T215*)(C))->a5)))->a1);
		l1 = (T6)(GE_int32(1));
		t2 = (T6f1(&l1, l2));
		while (!(t2)) {
			l3 = (T218f4(GE_void(((T215*)(C))->a5), l1));
			t1 = (((((T0*)(GE_void(l3)))->id==163)?((T163*)(l3))->a1:((T220*)(l3))->a3));
			t2 = ((t1)==(a1));
			if (t2) {
				R = l3;
				l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
			} else {
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			}
			t2 = (T6f1(&l1, l2));
		}
		t2 = ((R)==(EIF_VOID));
		if (t2) {
			R = (T215f52(C, a1, a2));
			t2 = (((((T0*)(GE_void(R)))->id==163)?T163f31(R, a2):T220f19(R, a2)));
			if (t2) {
				T215f71(C, R, a2);
			} else {
				T218f10(GE_void(((T215*)(C))->a5), R);
			}
		}
	}
	return R;
}

/* ET_DYNAMIC_TYPE.dynamic_query */
T0* T157f27(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	t1 = (T157f19(C));
	t2 = ((((T157*)(C))->a5)==(t1));
	if (t2) {
		t1 = (((T60*)(GE_void(((T157*)(C))->a6)))->a4);
		t3 = (((T159*)(GE_void(t1)))->a1);
		((T157*)(C))->a5 = T218c8(t3);
		R = (T157f20(C, a1, a2));
		t2 = (((((T0*)(GE_void(R)))->id==163)?T163f31(R, a2):T220f19(R, a2)));
		if (t2) {
			T157f68(C, R, a2);
		} else {
			T218f9(GE_void(((T157*)(C))->a5), R);
		}
	} else {
		l2 = (((T218*)(GE_void(((T157*)(C))->a5)))->a1);
		l1 = (T6)(GE_int32(1));
		t2 = (T6f1(&l1, l2));
		while (!(t2)) {
			l3 = (T218f4(GE_void(((T157*)(C))->a5), l1));
			t1 = (((((T0*)(GE_void(l3)))->id==163)?((T163*)(l3))->a1:((T220*)(l3))->a3));
			t2 = ((t1)==(a1));
			if (t2) {
				R = l3;
				l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
			} else {
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			}
			t2 = (T6f1(&l1, l2));
		}
		t2 = ((R)==(EIF_VOID));
		if (t2) {
			R = (T157f20(C, a1, a2));
			t2 = (((((T0*)(GE_void(R)))->id==163)?T163f31(R, a2):T220f19(R, a2)));
			if (t2) {
				T157f68(C, R, a2);
			} else {
				T218f10(GE_void(((T157*)(C))->a5), R);
			}
		}
	}
	return R;
}

/* ET_DYNAMIC_SPECIAL_TYPE.is_agent_type */
T1 T229f64(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DYNAMIC_TUPLE_TYPE.is_agent_type */
T1 T215f64(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DYNAMIC_TYPE.is_agent_type */
T1 T157f62(T0* C)
{
	T1 R = 0;
	return R;
}

/* ET_DYNAMIC_PROCEDURE_TYPE.conforms_to_type */
T1 T234f46(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	l1 = (((T58*)(GE_void(a2)))->a3);
	l2 = (((((T0*)(GE_void(l1)))->id==53)?((T53*)(l1))->a4:((T56*)(l1))->a4));
	t1 = (T157x12335(GE_void(a1)));
	R = (T158x6372T0T0T0T0(GE_void(((T234*)(C))->a2), t1, l2, l2, l1));
	return R;
}

/* ET_DYNAMIC_FUNCTION_TYPE.conforms_to_type */
T1 T233f46(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	l1 = (((T58*)(GE_void(a2)))->a3);
	l2 = (((((T0*)(GE_void(l1)))->id==53)?((T53*)(l1))->a4:((T56*)(l1))->a4));
	t1 = (T157x12335(GE_void(a1)));
	R = (T158x6372T0T0T0T0(GE_void(((T233*)(C))->a2), t1, l2, l2, l1));
	return R;
}

/* ET_DYNAMIC_SPECIAL_TYPE.conforms_to_type */
T1 T229f44(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	l1 = (((T58*)(GE_void(a2)))->a3);
	l2 = (((((T0*)(GE_void(l1)))->id==53)?((T53*)(l1))->a4:((T56*)(l1))->a4));
	t1 = (T157x12335(GE_void(a1)));
	R = (T158x6372T0T0T0T0(GE_void(((T229*)(C))->a2), t1, l2, l2, l1));
	return R;
}

/* ET_DYNAMIC_TUPLE_TYPE.conforms_to_type */
T1 T215f44(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	l1 = (((T58*)(GE_void(a2)))->a3);
	l2 = (((((T0*)(GE_void(l1)))->id==53)?((T53*)(l1))->a4:((T56*)(l1))->a4));
	t1 = (T157x12335(GE_void(a1)));
	R = (T158x6372T0T0T0T0(GE_void(((T215*)(C))->a2), t1, l2, l2, l1));
	return R;
}

/* ET_DYNAMIC_TYPE.conforms_to_type */
T1 T157f23(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	l1 = (((T58*)(GE_void(a2)))->a3);
	l2 = (((((T0*)(GE_void(l1)))->id==53)?((T53*)(l1))->a4:((T56*)(l1))->a4));
	t1 = (T157x12335(GE_void(a1)));
	R = (T158x6372T0T0T0T0(GE_void(((T157*)(C))->a1), t1, l2, l2, l1));
	return R;
}

/* ET_DYNAMIC_PROCEDURE_TYPE.seeded_dynamic_procedure */
T0* T234f57(T0* C, T6 a1, T0* a2)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	t1 = (T234f48(C));
	t2 = ((((T234*)(C))->a6)==(t1));
	if (t2) {
		l3 = (T60f67(GE_void(((T234*)(C))->a7), a1));
		t2 = ((l3)!=(EIF_VOID));
		if (t2) {
			t1 = (((T60*)(GE_void(((T234*)(C))->a7)))->a5);
			t3 = (((T161*)(GE_void(t1)))->a1);
			((T234*)(C))->a6 = T218c8(t3);
			R = (T234f53(C, l3, a2));
			T218f9(GE_void(((T234*)(C))->a6), R);
		}
	} else {
		l2 = (((T218*)(GE_void(((T234*)(C))->a6)))->a1);
		l1 = (T6)(GE_int32(1));
		t2 = (T6f1(&l1, l2));
		while (!(t2)) {
			l4 = (T218f4(GE_void(((T234*)(C))->a6), l1));
			t1 = (((((T0*)(GE_void(l4)))->id==163)?((T163*)(l4))->a1:((T220*)(l4))->a3));
			t2 = (T201x12780T6(GE_void(t1), a1));
			if (t2) {
				R = l4;
				l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
			} else {
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			}
			t2 = (T6f1(&l1, l2));
		}
		t2 = ((R)==(EIF_VOID));
		if (t2) {
			l3 = (T60f67(GE_void(((T234*)(C))->a7), a1));
			t2 = ((l3)!=(EIF_VOID));
			if (t2) {
				R = (T234f53(C, l3, a2));
				T218f10(GE_void(((T234*)(C))->a6), R);
			}
		}
	}
	return R;
}

/* ET_DYNAMIC_FUNCTION_TYPE.seeded_dynamic_procedure */
T0* T233f58(T0* C, T6 a1, T0* a2)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	t1 = (T233f48(C));
	t2 = ((((T233*)(C))->a6)==(t1));
	if (t2) {
		l3 = (T60f67(GE_void(((T233*)(C))->a7), a1));
		t2 = ((l3)!=(EIF_VOID));
		if (t2) {
			t1 = (((T60*)(GE_void(((T233*)(C))->a7)))->a5);
			t3 = (((T161*)(GE_void(t1)))->a1);
			((T233*)(C))->a6 = T218c8(t3);
			R = (T233f50(C, l3, a2));
			T218f9(GE_void(((T233*)(C))->a6), R);
		}
	} else {
		l2 = (((T218*)(GE_void(((T233*)(C))->a6)))->a1);
		l1 = (T6)(GE_int32(1));
		t2 = (T6f1(&l1, l2));
		while (!(t2)) {
			l4 = (T218f4(GE_void(((T233*)(C))->a6), l1));
			t1 = (((((T0*)(GE_void(l4)))->id==163)?((T163*)(l4))->a1:((T220*)(l4))->a3));
			t2 = (T201x12780T6(GE_void(t1), a1));
			if (t2) {
				R = l4;
				l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
			} else {
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			}
			t2 = (T6f1(&l1, l2));
		}
		t2 = ((R)==(EIF_VOID));
		if (t2) {
			l3 = (T60f67(GE_void(((T233*)(C))->a7), a1));
			t2 = ((l3)!=(EIF_VOID));
			if (t2) {
				R = (T233f50(C, l3, a2));
				T218f10(GE_void(((T233*)(C))->a6), R);
			}
		}
	}
	return R;
}

/* ET_DYNAMIC_SPECIAL_TYPE.seeded_dynamic_procedure */
T0* T229f57(T0* C, T6 a1, T0* a2)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	t1 = (T229f46(C));
	t2 = ((((T229*)(C))->a6)==(t1));
	if (t2) {
		l3 = (T60f67(GE_void(((T229*)(C))->a7), a1));
		t2 = ((l3)!=(EIF_VOID));
		if (t2) {
			t1 = (((T60*)(GE_void(((T229*)(C))->a7)))->a5);
			t3 = (((T161*)(GE_void(t1)))->a1);
			((T229*)(C))->a6 = T218c8(t3);
			R = (T229f48(C, l3, a2));
			T218f9(GE_void(((T229*)(C))->a6), R);
		}
	} else {
		l2 = (((T218*)(GE_void(((T229*)(C))->a6)))->a1);
		l1 = (T6)(GE_int32(1));
		t2 = (T6f1(&l1, l2));
		while (!(t2)) {
			l4 = (T218f4(GE_void(((T229*)(C))->a6), l1));
			t1 = (((((T0*)(GE_void(l4)))->id==163)?((T163*)(l4))->a1:((T220*)(l4))->a3));
			t2 = (T201x12780T6(GE_void(t1), a1));
			if (t2) {
				R = l4;
				l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
			} else {
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			}
			t2 = (T6f1(&l1, l2));
		}
		t2 = ((R)==(EIF_VOID));
		if (t2) {
			l3 = (T60f67(GE_void(((T229*)(C))->a7), a1));
			t2 = ((l3)!=(EIF_VOID));
			if (t2) {
				R = (T229f48(C, l3, a2));
				T218f10(GE_void(((T229*)(C))->a6), R);
			}
		}
	}
	return R;
}

/* ET_DYNAMIC_TUPLE_TYPE.seeded_dynamic_procedure */
T0* T215f57(T0* C, T6 a1, T0* a2)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	t1 = (T215f46(C));
	t2 = ((((T215*)(C))->a6)==(t1));
	if (t2) {
		l3 = (T60f67(GE_void(((T215*)(C))->a7), a1));
		t2 = ((l3)!=(EIF_VOID));
		if (t2) {
			t1 = (((T60*)(GE_void(((T215*)(C))->a7)))->a5);
			t3 = (((T161*)(GE_void(t1)))->a1);
			((T215*)(C))->a6 = T218c8(t3);
			R = (T215f48(C, l3, a2));
			T218f9(GE_void(((T215*)(C))->a6), R);
		}
	} else {
		l2 = (((T218*)(GE_void(((T215*)(C))->a6)))->a1);
		l1 = (T6)(GE_int32(1));
		t2 = (T6f1(&l1, l2));
		while (!(t2)) {
			l4 = (T218f4(GE_void(((T215*)(C))->a6), l1));
			t1 = (((((T0*)(GE_void(l4)))->id==163)?((T163*)(l4))->a1:((T220*)(l4))->a3));
			t2 = (T201x12780T6(GE_void(t1), a1));
			if (t2) {
				R = l4;
				l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
			} else {
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			}
			t2 = (T6f1(&l1, l2));
		}
		t2 = ((R)==(EIF_VOID));
		if (t2) {
			l3 = (T60f67(GE_void(((T215*)(C))->a7), a1));
			t2 = ((l3)!=(EIF_VOID));
			if (t2) {
				R = (T215f48(C, l3, a2));
				T218f10(GE_void(((T215*)(C))->a6), R);
			}
		}
	}
	return R;
}

/* ET_DYNAMIC_TYPE.seeded_dynamic_procedure */
T0* T157f32(T0* C, T6 a1, T0* a2)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	t1 = (T157f19(C));
	t2 = ((((T157*)(C))->a7)==(t1));
	if (t2) {
		l3 = (T60f67(GE_void(((T157*)(C))->a6), a1));
		t2 = ((l3)!=(EIF_VOID));
		if (t2) {
			t1 = (((T60*)(GE_void(((T157*)(C))->a6)))->a5);
			t3 = (((T161*)(GE_void(t1)))->a1);
			((T157*)(C))->a7 = T218c8(t3);
			R = (T157f22(C, l3, a2));
			T218f9(GE_void(((T157*)(C))->a7), R);
		}
	} else {
		l2 = (((T218*)(GE_void(((T157*)(C))->a7)))->a1);
		l1 = (T6)(GE_int32(1));
		t2 = (T6f1(&l1, l2));
		while (!(t2)) {
			l4 = (T218f4(GE_void(((T157*)(C))->a7), l1));
			t1 = (((((T0*)(GE_void(l4)))->id==163)?((T163*)(l4))->a1:((T220*)(l4))->a3));
			t2 = (T201x12780T6(GE_void(t1), a1));
			if (t2) {
				R = l4;
				l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
			} else {
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			}
			t2 = (T6f1(&l1, l2));
		}
		t2 = ((R)==(EIF_VOID));
		if (t2) {
			l3 = (T60f67(GE_void(((T157*)(C))->a6), a1));
			t2 = ((l3)!=(EIF_VOID));
			if (t2) {
				R = (T157f22(C, l3, a2));
				T218f10(GE_void(((T157*)(C))->a7), R);
			}
		}
	}
	return R;
}

/* ET_XACE_MULTIPLE_LIBRARY_PREFIX_ERROR.default_message */
T0* T1461f5(T0* C)
{
	T0* R = 0;
	R = (T1461f3(C, ge1023ov4009));
	return R;
}

/* ET_XACE_MULTIPLE_LIBRARY_PREFIX_ERROR.message */
T0* T1461f3(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T2 l5 = 0;
	T1 l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	T0* t5;
	l2 = (T6)(GE_int32(1));
	l4 = (((T17*)(a1))->a2);
	t1 = (T1461f4(C));
	R = (T26f7(GE_void(t1), a1, l4));
	t2 = (T6f1(&l2, l4));
	while (!(t2)) {
		l5 = (T17f10(a1, l2));
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t2 = ((l5)!=((T2)('$')));
		if (t2) {
			t2 = ((l5)!=((T2)('\000')));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, l5);
				} else {
					T949f58(R, l5);
				}
			} else {
				t1 = (T1461f4(C));
				t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
				t4 = ((T6)((l2)-((T6)(GE_int32(1)))));
				R = (T26f5(GE_void(t1), R, a1, t3, t4));
			}
		} else {
			t2 = (T6f1(&l2, l4));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, (T2)('$'));
				} else {
					T949f58(R, (T2)('$'));
				}
			} else {
				l5 = (T17f10(a1, l2));
				t2 = ((l5)==((T2)('$')));
				if (t2) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f39(R, (T2)('$'));
					} else {
						T949f58(R, (T2)('$'));
					}
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					t1 = (T1461f4(C));
					l1 = (T26f7(GE_void(t1), a1, (T6)(GE_int32(5))));
					t2 = ((l5)==((T2)('{')));
					if (t2) {
						l7 = EIF_TRUE;
						l8 = EIF_FALSE;
						l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l8);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							t2 = ((l5)==((T2)('}')));
							if (t2) {
								l8 = EIF_TRUE;
							} else {
								t2 = ((l5)!=((T2)('\000')));
								if (t2) {
									if (((T0*)(GE_void(l1)))->id==17) {
										T17f39(l1, l5);
									} else {
										T949f58(l1, l5);
									}
								} else {
									t1 = (T1461f4(C));
									T26f20(GE_void(t1), l1, a1, l2, l2);
								}
							}
							l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l8);
							}
						}
					} else {
						l7 = EIF_FALSE;
						l8 = EIF_FALSE;
						l6 = EIF_FALSE;
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l6);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							switch (l5) {
							case (T2)'0':
							case (T2)'1':
							case (T2)'2':
							case (T2)'3':
							case (T2)'4':
							case (T2)'5':
							case (T2)'6':
							case (T2)'7':
							case (T2)'8':
							case (T2)'9':
								if (((T0*)(GE_void(l1)))->id==17) {
									T17f39(l1, l5);
								} else {
									T949f58(l1, l5);
								}
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
								break;
							default:
								l6 = EIF_TRUE;
								break;
							}
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l6);
							}
						}
					}
					t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f23(l1):T949f35(l1)));
					if (t2) {
						l3 = (((((T0*)(GE_void(l1)))->id==17)?T17f16(l1):T949f36(l1)));
						t2 = (T86f4(GE_void(((T1461*)(C))->a1), l3));
						if (t2) {
							t1 = (T1461f4(C));
							t5 = (T86f5(GE_void(((T1461*)(C))->a1), l3));
							R = (T26f8(GE_void(t1), R, t5));
						} else {
							t2 = ((l3)==((T6)(GE_int32(0))));
							if (t2) {
								t1 = (T1461f4(C));
								t5 = (T1461f6(C));
								t5 = (((T23*)(GE_void(t5)))->a1);
								R = (T26f8(GE_void(t1), R, t5));
							} else {
								if (((T0*)(GE_void(R)))->id==17) {
									T17f39(R, (T2)('$'));
								} else {
									T949f58(R, (T2)('$'));
								}
								if (l7) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('{'));
									} else {
										T949f58(R, (T2)('{'));
									}
								}
								t1 = (T1461f4(C));
								R = (T26f8(GE_void(t1), R, l1));
								if (l8) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('}'));
									} else {
										T949f58(R, (T2)('}'));
									}
								}
							}
						}
					} else {
						if (((T0*)(GE_void(R)))->id==17) {
							T17f39(R, (T2)('$'));
						} else {
							T949f58(R, (T2)('$'));
						}
						if (l7) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('{'));
							} else {
								T949f58(R, (T2)('{'));
							}
						}
						t1 = (T1461f4(C));
						R = (T26f8(GE_void(t1), R, l1));
						if (l8) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('}'));
							} else {
								T949f58(R, (T2)('}'));
							}
						}
					}
				}
			}
		}
		t2 = (T6f1(&l2, l4));
	}
	return R;
}

/* ET_XACE_MULTIPLE_LIBRARY_PREFIX_ERROR.arguments */
T0* T1461f6(T0* C)
{
	T0* R = 0;
	if (ge324os1721) {
		return ge324ov1721;
	} else {
		ge324os1721 = '\1';
	}
	R = T23c4();
	ge324ov1721 = R;
	return R;
}

/* ARRAY [STRING_8].valid_index */
T1 T86f4(T0* C, T6 a1)
{
	T1 R = 0;
	T1 t1;
	t1 = (T6f13(&(((T86*)(C))->a2), a1));
	if (t1) {
		R = (T6f13(&a1, ((T86*)(C))->a3));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* ET_XACE_MULTIPLE_LIBRARY_PREFIX_ERROR.string_ */
T0* T1461f4(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* ET_DOTNET_ASSEMBLY_ERROR.default_message */
T0* T1391f12(T0* C)
{
	T0* R = 0;
	R = (T1391f7(C, ((T1391*)(C))->a1));
	return R;
}

/* ET_DOTNET_ASSEMBLY_ERROR.message */
T0* T1391f7(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T2 l5 = 0;
	T1 l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	T0* t5;
	l2 = (T6)(GE_int32(1));
	l4 = (((T17*)(GE_void(a1)))->a2);
	t1 = (T1391f9(C));
	R = (T26f7(GE_void(t1), a1, l4));
	t2 = (T6f1(&l2, l4));
	while (!(t2)) {
		l5 = (T17f10(GE_void(a1), l2));
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t2 = ((l5)!=((T2)('$')));
		if (t2) {
			t2 = ((l5)!=((T2)('\000')));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, l5);
				} else {
					T949f58(R, l5);
				}
			} else {
				t1 = (T1391f9(C));
				t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
				t4 = ((T6)((l2)-((T6)(GE_int32(1)))));
				R = (T26f5(GE_void(t1), R, a1, t3, t4));
			}
		} else {
			t2 = (T6f1(&l2, l4));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, (T2)('$'));
				} else {
					T949f58(R, (T2)('$'));
				}
			} else {
				l5 = (T17f10(GE_void(a1), l2));
				t2 = ((l5)==((T2)('$')));
				if (t2) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f39(R, (T2)('$'));
					} else {
						T949f58(R, (T2)('$'));
					}
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					t1 = (T1391f9(C));
					l1 = (T26f7(GE_void(t1), a1, (T6)(GE_int32(5))));
					t2 = ((l5)==((T2)('{')));
					if (t2) {
						l7 = EIF_TRUE;
						l8 = EIF_FALSE;
						l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l8);
						}
						while (!(t2)) {
							l5 = (T17f10(GE_void(a1), l2));
							t2 = ((l5)==((T2)('}')));
							if (t2) {
								l8 = EIF_TRUE;
							} else {
								t2 = ((l5)!=((T2)('\000')));
								if (t2) {
									if (((T0*)(GE_void(l1)))->id==17) {
										T17f39(l1, l5);
									} else {
										T949f58(l1, l5);
									}
								} else {
									t1 = (T1391f9(C));
									T26f20(GE_void(t1), l1, a1, l2, l2);
								}
							}
							l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l8);
							}
						}
					} else {
						l7 = EIF_FALSE;
						l8 = EIF_FALSE;
						l6 = EIF_FALSE;
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l6);
						}
						while (!(t2)) {
							l5 = (T17f10(GE_void(a1), l2));
							switch (l5) {
							case (T2)'0':
							case (T2)'1':
							case (T2)'2':
							case (T2)'3':
							case (T2)'4':
							case (T2)'5':
							case (T2)'6':
							case (T2)'7':
							case (T2)'8':
							case (T2)'9':
								if (((T0*)(GE_void(l1)))->id==17) {
									T17f39(l1, l5);
								} else {
									T949f58(l1, l5);
								}
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
								break;
							default:
								l6 = EIF_TRUE;
								break;
							}
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l6);
							}
						}
					}
					t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f23(l1):T949f35(l1)));
					if (t2) {
						l3 = (((((T0*)(GE_void(l1)))->id==17)?T17f16(l1):T949f36(l1)));
						t2 = (T86f4(GE_void(((T1391*)(C))->a2), l3));
						if (t2) {
							t1 = (T1391f9(C));
							t5 = (T86f5(GE_void(((T1391*)(C))->a2), l3));
							R = (T26f8(GE_void(t1), R, t5));
						} else {
							t2 = ((l3)==((T6)(GE_int32(0))));
							if (t2) {
								t1 = (T1391f9(C));
								t5 = (T1391f6(C));
								t5 = (((T23*)(GE_void(t5)))->a1);
								R = (T26f8(GE_void(t1), R, t5));
							} else {
								if (((T0*)(GE_void(R)))->id==17) {
									T17f39(R, (T2)('$'));
								} else {
									T949f58(R, (T2)('$'));
								}
								if (l7) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('{'));
									} else {
										T949f58(R, (T2)('{'));
									}
								}
								t1 = (T1391f9(C));
								R = (T26f8(GE_void(t1), R, l1));
								if (l8) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('}'));
									} else {
										T949f58(R, (T2)('}'));
									}
								}
							}
						}
					} else {
						if (((T0*)(GE_void(R)))->id==17) {
							T17f39(R, (T2)('$'));
						} else {
							T949f58(R, (T2)('$'));
						}
						if (l7) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('{'));
							} else {
								T949f58(R, (T2)('{'));
							}
						}
						t1 = (T1391f9(C));
						R = (T26f8(GE_void(t1), R, l1));
						if (l8) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('}'));
							} else {
								T949f58(R, (T2)('}'));
							}
						}
					}
				}
			}
		}
		t2 = (T6f1(&l2, l4));
	}
	return R;
}

/* ET_DOTNET_ASSEMBLY_ERROR.arguments */
T0* T1391f6(T0* C)
{
	T0* R = 0;
	if (ge324os1721) {
		return ge324ov1721;
	} else {
		ge324os1721 = '\1';
	}
	R = T23c4();
	ge324ov1721 = R;
	return R;
}

/* ET_DOTNET_ASSEMBLY_ERROR.string_ */
T0* T1391f9(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* ET_XACE_INVALID_EXPRESSION_ERROR.default_message */
T0* T1209f5(T0* C)
{
	T0* R = 0;
	R = (T1209f3(C, ge1020ov4009));
	return R;
}

/* ET_XACE_INVALID_EXPRESSION_ERROR.message */
T0* T1209f3(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T2 l5 = 0;
	T1 l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	T0* t5;
	l2 = (T6)(GE_int32(1));
	l4 = (((T17*)(a1))->a2);
	t1 = (T1209f4(C));
	R = (T26f7(GE_void(t1), a1, l4));
	t2 = (T6f1(&l2, l4));
	while (!(t2)) {
		l5 = (T17f10(a1, l2));
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t2 = ((l5)!=((T2)('$')));
		if (t2) {
			t2 = ((l5)!=((T2)('\000')));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, l5);
				} else {
					T949f58(R, l5);
				}
			} else {
				t1 = (T1209f4(C));
				t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
				t4 = ((T6)((l2)-((T6)(GE_int32(1)))));
				R = (T26f5(GE_void(t1), R, a1, t3, t4));
			}
		} else {
			t2 = (T6f1(&l2, l4));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, (T2)('$'));
				} else {
					T949f58(R, (T2)('$'));
				}
			} else {
				l5 = (T17f10(a1, l2));
				t2 = ((l5)==((T2)('$')));
				if (t2) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f39(R, (T2)('$'));
					} else {
						T949f58(R, (T2)('$'));
					}
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					t1 = (T1209f4(C));
					l1 = (T26f7(GE_void(t1), a1, (T6)(GE_int32(5))));
					t2 = ((l5)==((T2)('{')));
					if (t2) {
						l7 = EIF_TRUE;
						l8 = EIF_FALSE;
						l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l8);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							t2 = ((l5)==((T2)('}')));
							if (t2) {
								l8 = EIF_TRUE;
							} else {
								t2 = ((l5)!=((T2)('\000')));
								if (t2) {
									if (((T0*)(GE_void(l1)))->id==17) {
										T17f39(l1, l5);
									} else {
										T949f58(l1, l5);
									}
								} else {
									t1 = (T1209f4(C));
									T26f20(GE_void(t1), l1, a1, l2, l2);
								}
							}
							l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l8);
							}
						}
					} else {
						l7 = EIF_FALSE;
						l8 = EIF_FALSE;
						l6 = EIF_FALSE;
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l6);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							switch (l5) {
							case (T2)'0':
							case (T2)'1':
							case (T2)'2':
							case (T2)'3':
							case (T2)'4':
							case (T2)'5':
							case (T2)'6':
							case (T2)'7':
							case (T2)'8':
							case (T2)'9':
								if (((T0*)(GE_void(l1)))->id==17) {
									T17f39(l1, l5);
								} else {
									T949f58(l1, l5);
								}
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
								break;
							default:
								l6 = EIF_TRUE;
								break;
							}
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l6);
							}
						}
					}
					t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f23(l1):T949f35(l1)));
					if (t2) {
						l3 = (((((T0*)(GE_void(l1)))->id==17)?T17f16(l1):T949f36(l1)));
						t2 = (T86f4(GE_void(((T1209*)(C))->a1), l3));
						if (t2) {
							t1 = (T1209f4(C));
							t5 = (T86f5(GE_void(((T1209*)(C))->a1), l3));
							R = (T26f8(GE_void(t1), R, t5));
						} else {
							t2 = ((l3)==((T6)(GE_int32(0))));
							if (t2) {
								t1 = (T1209f4(C));
								t5 = (T1209f6(C));
								t5 = (((T23*)(GE_void(t5)))->a1);
								R = (T26f8(GE_void(t1), R, t5));
							} else {
								if (((T0*)(GE_void(R)))->id==17) {
									T17f39(R, (T2)('$'));
								} else {
									T949f58(R, (T2)('$'));
								}
								if (l7) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('{'));
									} else {
										T949f58(R, (T2)('{'));
									}
								}
								t1 = (T1209f4(C));
								R = (T26f8(GE_void(t1), R, l1));
								if (l8) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('}'));
									} else {
										T949f58(R, (T2)('}'));
									}
								}
							}
						}
					} else {
						if (((T0*)(GE_void(R)))->id==17) {
							T17f39(R, (T2)('$'));
						} else {
							T949f58(R, (T2)('$'));
						}
						if (l7) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('{'));
							} else {
								T949f58(R, (T2)('{'));
							}
						}
						t1 = (T1209f4(C));
						R = (T26f8(GE_void(t1), R, l1));
						if (l8) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('}'));
							} else {
								T949f58(R, (T2)('}'));
							}
						}
					}
				}
			}
		}
		t2 = (T6f1(&l2, l4));
	}
	return R;
}

/* ET_XACE_INVALID_EXPRESSION_ERROR.arguments */
T0* T1209f6(T0* C)
{
	T0* R = 0;
	if (ge324os1721) {
		return ge324ov1721;
	} else {
		ge324os1721 = '\1';
	}
	R = T23c4();
	ge324ov1721 = R;
	return R;
}

/* ET_XACE_INVALID_EXPRESSION_ERROR.string_ */
T0* T1209f4(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* UT_TOO_MANY_INCLUDES_ERROR.default_message */
T0* T1011f5(T0* C)
{
	T0* R = 0;
	R = (T1011f3(C, ge231ov4009));
	return R;
}

/* UT_TOO_MANY_INCLUDES_ERROR.message */
T0* T1011f3(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T2 l5 = 0;
	T1 l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	T0* t5;
	l2 = (T6)(GE_int32(1));
	l4 = (((T17*)(a1))->a2);
	t1 = (T1011f4(C));
	R = (T26f7(GE_void(t1), a1, l4));
	t2 = (T6f1(&l2, l4));
	while (!(t2)) {
		l5 = (T17f10(a1, l2));
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t2 = ((l5)!=((T2)('$')));
		if (t2) {
			t2 = ((l5)!=((T2)('\000')));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, l5);
				} else {
					T949f58(R, l5);
				}
			} else {
				t1 = (T1011f4(C));
				t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
				t4 = ((T6)((l2)-((T6)(GE_int32(1)))));
				R = (T26f5(GE_void(t1), R, a1, t3, t4));
			}
		} else {
			t2 = (T6f1(&l2, l4));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, (T2)('$'));
				} else {
					T949f58(R, (T2)('$'));
				}
			} else {
				l5 = (T17f10(a1, l2));
				t2 = ((l5)==((T2)('$')));
				if (t2) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f39(R, (T2)('$'));
					} else {
						T949f58(R, (T2)('$'));
					}
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					t1 = (T1011f4(C));
					l1 = (T26f7(GE_void(t1), a1, (T6)(GE_int32(5))));
					t2 = ((l5)==((T2)('{')));
					if (t2) {
						l7 = EIF_TRUE;
						l8 = EIF_FALSE;
						l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l8);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							t2 = ((l5)==((T2)('}')));
							if (t2) {
								l8 = EIF_TRUE;
							} else {
								t2 = ((l5)!=((T2)('\000')));
								if (t2) {
									if (((T0*)(GE_void(l1)))->id==17) {
										T17f39(l1, l5);
									} else {
										T949f58(l1, l5);
									}
								} else {
									t1 = (T1011f4(C));
									T26f20(GE_void(t1), l1, a1, l2, l2);
								}
							}
							l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l8);
							}
						}
					} else {
						l7 = EIF_FALSE;
						l8 = EIF_FALSE;
						l6 = EIF_FALSE;
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l6);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							switch (l5) {
							case (T2)'0':
							case (T2)'1':
							case (T2)'2':
							case (T2)'3':
							case (T2)'4':
							case (T2)'5':
							case (T2)'6':
							case (T2)'7':
							case (T2)'8':
							case (T2)'9':
								if (((T0*)(GE_void(l1)))->id==17) {
									T17f39(l1, l5);
								} else {
									T949f58(l1, l5);
								}
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
								break;
							default:
								l6 = EIF_TRUE;
								break;
							}
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l6);
							}
						}
					}
					t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f23(l1):T949f35(l1)));
					if (t2) {
						l3 = (((((T0*)(GE_void(l1)))->id==17)?T17f16(l1):T949f36(l1)));
						t2 = (T86f4(GE_void(((T1011*)(C))->a1), l3));
						if (t2) {
							t1 = (T1011f4(C));
							t5 = (T86f5(GE_void(((T1011*)(C))->a1), l3));
							R = (T26f8(GE_void(t1), R, t5));
						} else {
							t2 = ((l3)==((T6)(GE_int32(0))));
							if (t2) {
								t1 = (T1011f4(C));
								t5 = (T1011f6(C));
								t5 = (((T23*)(GE_void(t5)))->a1);
								R = (T26f8(GE_void(t1), R, t5));
							} else {
								if (((T0*)(GE_void(R)))->id==17) {
									T17f39(R, (T2)('$'));
								} else {
									T949f58(R, (T2)('$'));
								}
								if (l7) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('{'));
									} else {
										T949f58(R, (T2)('{'));
									}
								}
								t1 = (T1011f4(C));
								R = (T26f8(GE_void(t1), R, l1));
								if (l8) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('}'));
									} else {
										T949f58(R, (T2)('}'));
									}
								}
							}
						}
					} else {
						if (((T0*)(GE_void(R)))->id==17) {
							T17f39(R, (T2)('$'));
						} else {
							T949f58(R, (T2)('$'));
						}
						if (l7) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('{'));
							} else {
								T949f58(R, (T2)('{'));
							}
						}
						t1 = (T1011f4(C));
						R = (T26f8(GE_void(t1), R, l1));
						if (l8) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('}'));
							} else {
								T949f58(R, (T2)('}'));
							}
						}
					}
				}
			}
		}
		t2 = (T6f1(&l2, l4));
	}
	return R;
}

/* UT_TOO_MANY_INCLUDES_ERROR.arguments */
T0* T1011f6(T0* C)
{
	T0* R = 0;
	if (ge324os1721) {
		return ge324ov1721;
	} else {
		ge324os1721 = '\1';
	}
	R = T23c4();
	ge324ov1721 = R;
	return R;
}

/* UT_TOO_MANY_INCLUDES_ERROR.string_ */
T0* T1011f4(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* UT_SYNTAX_ERROR.default_message */
T0* T1010f5(T0* C)
{
	T0* R = 0;
	R = (T1010f3(C, ge230ov4009));
	return R;
}

/* UT_SYNTAX_ERROR.message */
T0* T1010f3(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T2 l5 = 0;
	T1 l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	T0* t5;
	l2 = (T6)(GE_int32(1));
	l4 = (((T17*)(a1))->a2);
	t1 = (T1010f4(C));
	R = (T26f7(GE_void(t1), a1, l4));
	t2 = (T6f1(&l2, l4));
	while (!(t2)) {
		l5 = (T17f10(a1, l2));
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t2 = ((l5)!=((T2)('$')));
		if (t2) {
			t2 = ((l5)!=((T2)('\000')));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, l5);
				} else {
					T949f58(R, l5);
				}
			} else {
				t1 = (T1010f4(C));
				t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
				t4 = ((T6)((l2)-((T6)(GE_int32(1)))));
				R = (T26f5(GE_void(t1), R, a1, t3, t4));
			}
		} else {
			t2 = (T6f1(&l2, l4));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, (T2)('$'));
				} else {
					T949f58(R, (T2)('$'));
				}
			} else {
				l5 = (T17f10(a1, l2));
				t2 = ((l5)==((T2)('$')));
				if (t2) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f39(R, (T2)('$'));
					} else {
						T949f58(R, (T2)('$'));
					}
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					t1 = (T1010f4(C));
					l1 = (T26f7(GE_void(t1), a1, (T6)(GE_int32(5))));
					t2 = ((l5)==((T2)('{')));
					if (t2) {
						l7 = EIF_TRUE;
						l8 = EIF_FALSE;
						l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l8);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							t2 = ((l5)==((T2)('}')));
							if (t2) {
								l8 = EIF_TRUE;
							} else {
								t2 = ((l5)!=((T2)('\000')));
								if (t2) {
									if (((T0*)(GE_void(l1)))->id==17) {
										T17f39(l1, l5);
									} else {
										T949f58(l1, l5);
									}
								} else {
									t1 = (T1010f4(C));
									T26f20(GE_void(t1), l1, a1, l2, l2);
								}
							}
							l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l8);
							}
						}
					} else {
						l7 = EIF_FALSE;
						l8 = EIF_FALSE;
						l6 = EIF_FALSE;
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l6);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							switch (l5) {
							case (T2)'0':
							case (T2)'1':
							case (T2)'2':
							case (T2)'3':
							case (T2)'4':
							case (T2)'5':
							case (T2)'6':
							case (T2)'7':
							case (T2)'8':
							case (T2)'9':
								if (((T0*)(GE_void(l1)))->id==17) {
									T17f39(l1, l5);
								} else {
									T949f58(l1, l5);
								}
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
								break;
							default:
								l6 = EIF_TRUE;
								break;
							}
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l6);
							}
						}
					}
					t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f23(l1):T949f35(l1)));
					if (t2) {
						l3 = (((((T0*)(GE_void(l1)))->id==17)?T17f16(l1):T949f36(l1)));
						t2 = (T86f4(GE_void(((T1010*)(C))->a1), l3));
						if (t2) {
							t1 = (T1010f4(C));
							t5 = (T86f5(GE_void(((T1010*)(C))->a1), l3));
							R = (T26f8(GE_void(t1), R, t5));
						} else {
							t2 = ((l3)==((T6)(GE_int32(0))));
							if (t2) {
								t1 = (T1010f4(C));
								t5 = (T1010f6(C));
								t5 = (((T23*)(GE_void(t5)))->a1);
								R = (T26f8(GE_void(t1), R, t5));
							} else {
								if (((T0*)(GE_void(R)))->id==17) {
									T17f39(R, (T2)('$'));
								} else {
									T949f58(R, (T2)('$'));
								}
								if (l7) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('{'));
									} else {
										T949f58(R, (T2)('{'));
									}
								}
								t1 = (T1010f4(C));
								R = (T26f8(GE_void(t1), R, l1));
								if (l8) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('}'));
									} else {
										T949f58(R, (T2)('}'));
									}
								}
							}
						}
					} else {
						if (((T0*)(GE_void(R)))->id==17) {
							T17f39(R, (T2)('$'));
						} else {
							T949f58(R, (T2)('$'));
						}
						if (l7) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('{'));
							} else {
								T949f58(R, (T2)('{'));
							}
						}
						t1 = (T1010f4(C));
						R = (T26f8(GE_void(t1), R, l1));
						if (l8) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('}'));
							} else {
								T949f58(R, (T2)('}'));
							}
						}
					}
				}
			}
		}
		t2 = (T6f1(&l2, l4));
	}
	return R;
}

/* UT_SYNTAX_ERROR.arguments */
T0* T1010f6(T0* C)
{
	T0* R = 0;
	if (ge324os1721) {
		return ge324ov1721;
	} else {
		ge324os1721 = '\1';
	}
	R = T23c4();
	ge324ov1721 = R;
	return R;
}

/* UT_SYNTAX_ERROR.string_ */
T0* T1010f4(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* ET_XACE_ATTRIBUTE_OBSOLETED_BY_ELEMENT_WARNING.default_message */
T0* T937f5(T0* C)
{
	T0* R = 0;
	R = (T937f3(C, ge1014ov4009));
	return R;
}

/* ET_XACE_ATTRIBUTE_OBSOLETED_BY_ELEMENT_WARNING.message */
T0* T937f3(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T2 l5 = 0;
	T1 l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	T0* t5;
	l2 = (T6)(GE_int32(1));
	l4 = (((T17*)(a1))->a2);
	t1 = (T937f4(C));
	R = (T26f7(GE_void(t1), a1, l4));
	t2 = (T6f1(&l2, l4));
	while (!(t2)) {
		l5 = (T17f10(a1, l2));
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t2 = ((l5)!=((T2)('$')));
		if (t2) {
			t2 = ((l5)!=((T2)('\000')));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, l5);
				} else {
					T949f58(R, l5);
				}
			} else {
				t1 = (T937f4(C));
				t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
				t4 = ((T6)((l2)-((T6)(GE_int32(1)))));
				R = (T26f5(GE_void(t1), R, a1, t3, t4));
			}
		} else {
			t2 = (T6f1(&l2, l4));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, (T2)('$'));
				} else {
					T949f58(R, (T2)('$'));
				}
			} else {
				l5 = (T17f10(a1, l2));
				t2 = ((l5)==((T2)('$')));
				if (t2) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f39(R, (T2)('$'));
					} else {
						T949f58(R, (T2)('$'));
					}
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					t1 = (T937f4(C));
					l1 = (T26f7(GE_void(t1), a1, (T6)(GE_int32(5))));
					t2 = ((l5)==((T2)('{')));
					if (t2) {
						l7 = EIF_TRUE;
						l8 = EIF_FALSE;
						l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l8);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							t2 = ((l5)==((T2)('}')));
							if (t2) {
								l8 = EIF_TRUE;
							} else {
								t2 = ((l5)!=((T2)('\000')));
								if (t2) {
									if (((T0*)(GE_void(l1)))->id==17) {
										T17f39(l1, l5);
									} else {
										T949f58(l1, l5);
									}
								} else {
									t1 = (T937f4(C));
									T26f20(GE_void(t1), l1, a1, l2, l2);
								}
							}
							l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l8);
							}
						}
					} else {
						l7 = EIF_FALSE;
						l8 = EIF_FALSE;
						l6 = EIF_FALSE;
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l6);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							switch (l5) {
							case (T2)'0':
							case (T2)'1':
							case (T2)'2':
							case (T2)'3':
							case (T2)'4':
							case (T2)'5':
							case (T2)'6':
							case (T2)'7':
							case (T2)'8':
							case (T2)'9':
								if (((T0*)(GE_void(l1)))->id==17) {
									T17f39(l1, l5);
								} else {
									T949f58(l1, l5);
								}
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
								break;
							default:
								l6 = EIF_TRUE;
								break;
							}
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l6);
							}
						}
					}
					t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f23(l1):T949f35(l1)));
					if (t2) {
						l3 = (((((T0*)(GE_void(l1)))->id==17)?T17f16(l1):T949f36(l1)));
						t2 = (T86f4(GE_void(((T937*)(C))->a1), l3));
						if (t2) {
							t1 = (T937f4(C));
							t5 = (T86f5(GE_void(((T937*)(C))->a1), l3));
							R = (T26f8(GE_void(t1), R, t5));
						} else {
							t2 = ((l3)==((T6)(GE_int32(0))));
							if (t2) {
								t1 = (T937f4(C));
								t5 = (T937f6(C));
								t5 = (((T23*)(GE_void(t5)))->a1);
								R = (T26f8(GE_void(t1), R, t5));
							} else {
								if (((T0*)(GE_void(R)))->id==17) {
									T17f39(R, (T2)('$'));
								} else {
									T949f58(R, (T2)('$'));
								}
								if (l7) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('{'));
									} else {
										T949f58(R, (T2)('{'));
									}
								}
								t1 = (T937f4(C));
								R = (T26f8(GE_void(t1), R, l1));
								if (l8) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('}'));
									} else {
										T949f58(R, (T2)('}'));
									}
								}
							}
						}
					} else {
						if (((T0*)(GE_void(R)))->id==17) {
							T17f39(R, (T2)('$'));
						} else {
							T949f58(R, (T2)('$'));
						}
						if (l7) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('{'));
							} else {
								T949f58(R, (T2)('{'));
							}
						}
						t1 = (T937f4(C));
						R = (T26f8(GE_void(t1), R, l1));
						if (l8) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('}'));
							} else {
								T949f58(R, (T2)('}'));
							}
						}
					}
				}
			}
		}
		t2 = (T6f1(&l2, l4));
	}
	return R;
}

/* ET_XACE_ATTRIBUTE_OBSOLETED_BY_ELEMENT_WARNING.arguments */
T0* T937f6(T0* C)
{
	T0* R = 0;
	if (ge324os1721) {
		return ge324ov1721;
	} else {
		ge324os1721 = '\1';
	}
	R = T23c4();
	ge324ov1721 = R;
	return R;
}

/* ET_XACE_ATTRIBUTE_OBSOLETED_BY_ELEMENT_WARNING.string_ */
T0* T937f4(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* ET_XACE_UNKNOWN_OPTION_NAME_WARNING.default_message */
T0* T936f5(T0* C)
{
	T0* R = 0;
	R = (T936f3(C, ge1030ov4009));
	return R;
}

/* ET_XACE_UNKNOWN_OPTION_NAME_WARNING.message */
T0* T936f3(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T2 l5 = 0;
	T1 l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	T0* t5;
	l2 = (T6)(GE_int32(1));
	l4 = (((T17*)(a1))->a2);
	t1 = (T936f4(C));
	R = (T26f7(GE_void(t1), a1, l4));
	t2 = (T6f1(&l2, l4));
	while (!(t2)) {
		l5 = (T17f10(a1, l2));
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t2 = ((l5)!=((T2)('$')));
		if (t2) {
			t2 = ((l5)!=((T2)('\000')));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, l5);
				} else {
					T949f58(R, l5);
				}
			} else {
				t1 = (T936f4(C));
				t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
				t4 = ((T6)((l2)-((T6)(GE_int32(1)))));
				R = (T26f5(GE_void(t1), R, a1, t3, t4));
			}
		} else {
			t2 = (T6f1(&l2, l4));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, (T2)('$'));
				} else {
					T949f58(R, (T2)('$'));
				}
			} else {
				l5 = (T17f10(a1, l2));
				t2 = ((l5)==((T2)('$')));
				if (t2) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f39(R, (T2)('$'));
					} else {
						T949f58(R, (T2)('$'));
					}
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					t1 = (T936f4(C));
					l1 = (T26f7(GE_void(t1), a1, (T6)(GE_int32(5))));
					t2 = ((l5)==((T2)('{')));
					if (t2) {
						l7 = EIF_TRUE;
						l8 = EIF_FALSE;
						l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l8);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							t2 = ((l5)==((T2)('}')));
							if (t2) {
								l8 = EIF_TRUE;
							} else {
								t2 = ((l5)!=((T2)('\000')));
								if (t2) {
									if (((T0*)(GE_void(l1)))->id==17) {
										T17f39(l1, l5);
									} else {
										T949f58(l1, l5);
									}
								} else {
									t1 = (T936f4(C));
									T26f20(GE_void(t1), l1, a1, l2, l2);
								}
							}
							l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l8);
							}
						}
					} else {
						l7 = EIF_FALSE;
						l8 = EIF_FALSE;
						l6 = EIF_FALSE;
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l6);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							switch (l5) {
							case (T2)'0':
							case (T2)'1':
							case (T2)'2':
							case (T2)'3':
							case (T2)'4':
							case (T2)'5':
							case (T2)'6':
							case (T2)'7':
							case (T2)'8':
							case (T2)'9':
								if (((T0*)(GE_void(l1)))->id==17) {
									T17f39(l1, l5);
								} else {
									T949f58(l1, l5);
								}
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
								break;
							default:
								l6 = EIF_TRUE;
								break;
							}
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l6);
							}
						}
					}
					t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f23(l1):T949f35(l1)));
					if (t2) {
						l3 = (((((T0*)(GE_void(l1)))->id==17)?T17f16(l1):T949f36(l1)));
						t2 = (T86f4(GE_void(((T936*)(C))->a1), l3));
						if (t2) {
							t1 = (T936f4(C));
							t5 = (T86f5(GE_void(((T936*)(C))->a1), l3));
							R = (T26f8(GE_void(t1), R, t5));
						} else {
							t2 = ((l3)==((T6)(GE_int32(0))));
							if (t2) {
								t1 = (T936f4(C));
								t5 = (T936f6(C));
								t5 = (((T23*)(GE_void(t5)))->a1);
								R = (T26f8(GE_void(t1), R, t5));
							} else {
								if (((T0*)(GE_void(R)))->id==17) {
									T17f39(R, (T2)('$'));
								} else {
									T949f58(R, (T2)('$'));
								}
								if (l7) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('{'));
									} else {
										T949f58(R, (T2)('{'));
									}
								}
								t1 = (T936f4(C));
								R = (T26f8(GE_void(t1), R, l1));
								if (l8) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('}'));
									} else {
										T949f58(R, (T2)('}'));
									}
								}
							}
						}
					} else {
						if (((T0*)(GE_void(R)))->id==17) {
							T17f39(R, (T2)('$'));
						} else {
							T949f58(R, (T2)('$'));
						}
						if (l7) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('{'));
							} else {
								T949f58(R, (T2)('{'));
							}
						}
						t1 = (T936f4(C));
						R = (T26f8(GE_void(t1), R, l1));
						if (l8) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('}'));
							} else {
								T949f58(R, (T2)('}'));
							}
						}
					}
				}
			}
		}
		t2 = (T6f1(&l2, l4));
	}
	return R;
}

/* ET_XACE_UNKNOWN_OPTION_NAME_WARNING.arguments */
T0* T936f6(T0* C)
{
	T0* R = 0;
	if (ge324os1721) {
		return ge324ov1721;
	} else {
		ge324os1721 = '\1';
	}
	R = T23c4();
	ge324ov1721 = R;
	return R;
}

/* ET_XACE_UNKNOWN_OPTION_NAME_WARNING.string_ */
T0* T936f4(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* ET_XACE_OBSOLETE_EXCLUDE_ELEMENT_WARNING.default_message */
T0* T935f5(T0* C)
{
	T0* R = 0;
	R = (T935f3(C, ge1027ov4009));
	return R;
}

/* ET_XACE_OBSOLETE_EXCLUDE_ELEMENT_WARNING.message */
T0* T935f3(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T2 l5 = 0;
	T1 l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	T0* t5;
	l2 = (T6)(GE_int32(1));
	l4 = (((T17*)(a1))->a2);
	t1 = (T935f4(C));
	R = (T26f7(GE_void(t1), a1, l4));
	t2 = (T6f1(&l2, l4));
	while (!(t2)) {
		l5 = (T17f10(a1, l2));
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t2 = ((l5)!=((T2)('$')));
		if (t2) {
			t2 = ((l5)!=((T2)('\000')));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, l5);
				} else {
					T949f58(R, l5);
				}
			} else {
				t1 = (T935f4(C));
				t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
				t4 = ((T6)((l2)-((T6)(GE_int32(1)))));
				R = (T26f5(GE_void(t1), R, a1, t3, t4));
			}
		} else {
			t2 = (T6f1(&l2, l4));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, (T2)('$'));
				} else {
					T949f58(R, (T2)('$'));
				}
			} else {
				l5 = (T17f10(a1, l2));
				t2 = ((l5)==((T2)('$')));
				if (t2) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f39(R, (T2)('$'));
					} else {
						T949f58(R, (T2)('$'));
					}
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					t1 = (T935f4(C));
					l1 = (T26f7(GE_void(t1), a1, (T6)(GE_int32(5))));
					t2 = ((l5)==((T2)('{')));
					if (t2) {
						l7 = EIF_TRUE;
						l8 = EIF_FALSE;
						l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l8);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							t2 = ((l5)==((T2)('}')));
							if (t2) {
								l8 = EIF_TRUE;
							} else {
								t2 = ((l5)!=((T2)('\000')));
								if (t2) {
									if (((T0*)(GE_void(l1)))->id==17) {
										T17f39(l1, l5);
									} else {
										T949f58(l1, l5);
									}
								} else {
									t1 = (T935f4(C));
									T26f20(GE_void(t1), l1, a1, l2, l2);
								}
							}
							l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l8);
							}
						}
					} else {
						l7 = EIF_FALSE;
						l8 = EIF_FALSE;
						l6 = EIF_FALSE;
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l6);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							switch (l5) {
							case (T2)'0':
							case (T2)'1':
							case (T2)'2':
							case (T2)'3':
							case (T2)'4':
							case (T2)'5':
							case (T2)'6':
							case (T2)'7':
							case (T2)'8':
							case (T2)'9':
								if (((T0*)(GE_void(l1)))->id==17) {
									T17f39(l1, l5);
								} else {
									T949f58(l1, l5);
								}
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
								break;
							default:
								l6 = EIF_TRUE;
								break;
							}
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l6);
							}
						}
					}
					t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f23(l1):T949f35(l1)));
					if (t2) {
						l3 = (((((T0*)(GE_void(l1)))->id==17)?T17f16(l1):T949f36(l1)));
						t2 = (T86f4(GE_void(((T935*)(C))->a1), l3));
						if (t2) {
							t1 = (T935f4(C));
							t5 = (T86f5(GE_void(((T935*)(C))->a1), l3));
							R = (T26f8(GE_void(t1), R, t5));
						} else {
							t2 = ((l3)==((T6)(GE_int32(0))));
							if (t2) {
								t1 = (T935f4(C));
								t5 = (T935f6(C));
								t5 = (((T23*)(GE_void(t5)))->a1);
								R = (T26f8(GE_void(t1), R, t5));
							} else {
								if (((T0*)(GE_void(R)))->id==17) {
									T17f39(R, (T2)('$'));
								} else {
									T949f58(R, (T2)('$'));
								}
								if (l7) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('{'));
									} else {
										T949f58(R, (T2)('{'));
									}
								}
								t1 = (T935f4(C));
								R = (T26f8(GE_void(t1), R, l1));
								if (l8) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('}'));
									} else {
										T949f58(R, (T2)('}'));
									}
								}
							}
						}
					} else {
						if (((T0*)(GE_void(R)))->id==17) {
							T17f39(R, (T2)('$'));
						} else {
							T949f58(R, (T2)('$'));
						}
						if (l7) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('{'));
							} else {
								T949f58(R, (T2)('{'));
							}
						}
						t1 = (T935f4(C));
						R = (T26f8(GE_void(t1), R, l1));
						if (l8) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('}'));
							} else {
								T949f58(R, (T2)('}'));
							}
						}
					}
				}
			}
		}
		t2 = (T6f1(&l2, l4));
	}
	return R;
}

/* ET_XACE_OBSOLETE_EXCLUDE_ELEMENT_WARNING.arguments */
T0* T935f6(T0* C)
{
	T0* R = 0;
	if (ge324os1721) {
		return ge324ov1721;
	} else {
		ge324os1721 = '\1';
	}
	R = T23c4();
	ge324ov1721 = R;
	return R;
}

/* ET_XACE_OBSOLETE_EXCLUDE_ELEMENT_WARNING.string_ */
T0* T935f4(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* ET_XACE_OBSOLETE_CLUSTER_ELEMENT_WARNING.default_message */
T0* T934f5(T0* C)
{
	T0* R = 0;
	R = (T934f3(C, ge1026ov4009));
	return R;
}

/* ET_XACE_OBSOLETE_CLUSTER_ELEMENT_WARNING.message */
T0* T934f3(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T2 l5 = 0;
	T1 l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	T0* t5;
	l2 = (T6)(GE_int32(1));
	l4 = (((T17*)(a1))->a2);
	t1 = (T934f4(C));
	R = (T26f7(GE_void(t1), a1, l4));
	t2 = (T6f1(&l2, l4));
	while (!(t2)) {
		l5 = (T17f10(a1, l2));
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t2 = ((l5)!=((T2)('$')));
		if (t2) {
			t2 = ((l5)!=((T2)('\000')));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, l5);
				} else {
					T949f58(R, l5);
				}
			} else {
				t1 = (T934f4(C));
				t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
				t4 = ((T6)((l2)-((T6)(GE_int32(1)))));
				R = (T26f5(GE_void(t1), R, a1, t3, t4));
			}
		} else {
			t2 = (T6f1(&l2, l4));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, (T2)('$'));
				} else {
					T949f58(R, (T2)('$'));
				}
			} else {
				l5 = (T17f10(a1, l2));
				t2 = ((l5)==((T2)('$')));
				if (t2) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f39(R, (T2)('$'));
					} else {
						T949f58(R, (T2)('$'));
					}
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					t1 = (T934f4(C));
					l1 = (T26f7(GE_void(t1), a1, (T6)(GE_int32(5))));
					t2 = ((l5)==((T2)('{')));
					if (t2) {
						l7 = EIF_TRUE;
						l8 = EIF_FALSE;
						l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l8);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							t2 = ((l5)==((T2)('}')));
							if (t2) {
								l8 = EIF_TRUE;
							} else {
								t2 = ((l5)!=((T2)('\000')));
								if (t2) {
									if (((T0*)(GE_void(l1)))->id==17) {
										T17f39(l1, l5);
									} else {
										T949f58(l1, l5);
									}
								} else {
									t1 = (T934f4(C));
									T26f20(GE_void(t1), l1, a1, l2, l2);
								}
							}
							l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l8);
							}
						}
					} else {
						l7 = EIF_FALSE;
						l8 = EIF_FALSE;
						l6 = EIF_FALSE;
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l6);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							switch (l5) {
							case (T2)'0':
							case (T2)'1':
							case (T2)'2':
							case (T2)'3':
							case (T2)'4':
							case (T2)'5':
							case (T2)'6':
							case (T2)'7':
							case (T2)'8':
							case (T2)'9':
								if (((T0*)(GE_void(l1)))->id==17) {
									T17f39(l1, l5);
								} else {
									T949f58(l1, l5);
								}
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
								break;
							default:
								l6 = EIF_TRUE;
								break;
							}
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l6);
							}
						}
					}
					t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f23(l1):T949f35(l1)));
					if (t2) {
						l3 = (((((T0*)(GE_void(l1)))->id==17)?T17f16(l1):T949f36(l1)));
						t2 = (T86f4(GE_void(((T934*)(C))->a1), l3));
						if (t2) {
							t1 = (T934f4(C));
							t5 = (T86f5(GE_void(((T934*)(C))->a1), l3));
							R = (T26f8(GE_void(t1), R, t5));
						} else {
							t2 = ((l3)==((T6)(GE_int32(0))));
							if (t2) {
								t1 = (T934f4(C));
								t5 = (T934f6(C));
								t5 = (((T23*)(GE_void(t5)))->a1);
								R = (T26f8(GE_void(t1), R, t5));
							} else {
								if (((T0*)(GE_void(R)))->id==17) {
									T17f39(R, (T2)('$'));
								} else {
									T949f58(R, (T2)('$'));
								}
								if (l7) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('{'));
									} else {
										T949f58(R, (T2)('{'));
									}
								}
								t1 = (T934f4(C));
								R = (T26f8(GE_void(t1), R, l1));
								if (l8) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('}'));
									} else {
										T949f58(R, (T2)('}'));
									}
								}
							}
						}
					} else {
						if (((T0*)(GE_void(R)))->id==17) {
							T17f39(R, (T2)('$'));
						} else {
							T949f58(R, (T2)('$'));
						}
						if (l7) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('{'));
							} else {
								T949f58(R, (T2)('{'));
							}
						}
						t1 = (T934f4(C));
						R = (T26f8(GE_void(t1), R, l1));
						if (l8) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('}'));
							} else {
								T949f58(R, (T2)('}'));
							}
						}
					}
				}
			}
		}
		t2 = (T6f1(&l2, l4));
	}
	return R;
}

/* ET_XACE_OBSOLETE_CLUSTER_ELEMENT_WARNING.arguments */
T0* T934f6(T0* C)
{
	T0* R = 0;
	if (ge324os1721) {
		return ge324ov1721;
	} else {
		ge324os1721 = '\1';
	}
	R = T23c4();
	ge324ov1721 = R;
	return R;
}

/* ET_XACE_OBSOLETE_CLUSTER_ELEMENT_WARNING.string_ */
T0* T934f4(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* ET_XACE_MISSING_ELEMENT_ERROR.default_message */
T0* T933f5(T0* C)
{
	T0* R = 0;
	R = (T933f3(C, ge1022ov4009));
	return R;
}

/* ET_XACE_MISSING_ELEMENT_ERROR.message */
T0* T933f3(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T2 l5 = 0;
	T1 l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	T0* t5;
	l2 = (T6)(GE_int32(1));
	l4 = (((T17*)(a1))->a2);
	t1 = (T933f4(C));
	R = (T26f7(GE_void(t1), a1, l4));
	t2 = (T6f1(&l2, l4));
	while (!(t2)) {
		l5 = (T17f10(a1, l2));
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t2 = ((l5)!=((T2)('$')));
		if (t2) {
			t2 = ((l5)!=((T2)('\000')));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, l5);
				} else {
					T949f58(R, l5);
				}
			} else {
				t1 = (T933f4(C));
				t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
				t4 = ((T6)((l2)-((T6)(GE_int32(1)))));
				R = (T26f5(GE_void(t1), R, a1, t3, t4));
			}
		} else {
			t2 = (T6f1(&l2, l4));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, (T2)('$'));
				} else {
					T949f58(R, (T2)('$'));
				}
			} else {
				l5 = (T17f10(a1, l2));
				t2 = ((l5)==((T2)('$')));
				if (t2) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f39(R, (T2)('$'));
					} else {
						T949f58(R, (T2)('$'));
					}
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					t1 = (T933f4(C));
					l1 = (T26f7(GE_void(t1), a1, (T6)(GE_int32(5))));
					t2 = ((l5)==((T2)('{')));
					if (t2) {
						l7 = EIF_TRUE;
						l8 = EIF_FALSE;
						l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l8);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							t2 = ((l5)==((T2)('}')));
							if (t2) {
								l8 = EIF_TRUE;
							} else {
								t2 = ((l5)!=((T2)('\000')));
								if (t2) {
									if (((T0*)(GE_void(l1)))->id==17) {
										T17f39(l1, l5);
									} else {
										T949f58(l1, l5);
									}
								} else {
									t1 = (T933f4(C));
									T26f20(GE_void(t1), l1, a1, l2, l2);
								}
							}
							l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l8);
							}
						}
					} else {
						l7 = EIF_FALSE;
						l8 = EIF_FALSE;
						l6 = EIF_FALSE;
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l6);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							switch (l5) {
							case (T2)'0':
							case (T2)'1':
							case (T2)'2':
							case (T2)'3':
							case (T2)'4':
							case (T2)'5':
							case (T2)'6':
							case (T2)'7':
							case (T2)'8':
							case (T2)'9':
								if (((T0*)(GE_void(l1)))->id==17) {
									T17f39(l1, l5);
								} else {
									T949f58(l1, l5);
								}
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
								break;
							default:
								l6 = EIF_TRUE;
								break;
							}
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l6);
							}
						}
					}
					t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f23(l1):T949f35(l1)));
					if (t2) {
						l3 = (((((T0*)(GE_void(l1)))->id==17)?T17f16(l1):T949f36(l1)));
						t2 = (T86f4(GE_void(((T933*)(C))->a1), l3));
						if (t2) {
							t1 = (T933f4(C));
							t5 = (T86f5(GE_void(((T933*)(C))->a1), l3));
							R = (T26f8(GE_void(t1), R, t5));
						} else {
							t2 = ((l3)==((T6)(GE_int32(0))));
							if (t2) {
								t1 = (T933f4(C));
								t5 = (T933f6(C));
								t5 = (((T23*)(GE_void(t5)))->a1);
								R = (T26f8(GE_void(t1), R, t5));
							} else {
								if (((T0*)(GE_void(R)))->id==17) {
									T17f39(R, (T2)('$'));
								} else {
									T949f58(R, (T2)('$'));
								}
								if (l7) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('{'));
									} else {
										T949f58(R, (T2)('{'));
									}
								}
								t1 = (T933f4(C));
								R = (T26f8(GE_void(t1), R, l1));
								if (l8) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('}'));
									} else {
										T949f58(R, (T2)('}'));
									}
								}
							}
						}
					} else {
						if (((T0*)(GE_void(R)))->id==17) {
							T17f39(R, (T2)('$'));
						} else {
							T949f58(R, (T2)('$'));
						}
						if (l7) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('{'));
							} else {
								T949f58(R, (T2)('{'));
							}
						}
						t1 = (T933f4(C));
						R = (T26f8(GE_void(t1), R, l1));
						if (l8) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('}'));
							} else {
								T949f58(R, (T2)('}'));
							}
						}
					}
				}
			}
		}
		t2 = (T6f1(&l2, l4));
	}
	return R;
}

/* ET_XACE_MISSING_ELEMENT_ERROR.arguments */
T0* T933f6(T0* C)
{
	T0* R = 0;
	if (ge324os1721) {
		return ge324ov1721;
	} else {
		ge324os1721 = '\1';
	}
	R = T23c4();
	ge324ov1721 = R;
	return R;
}

/* ET_XACE_MISSING_ELEMENT_ERROR.string_ */
T0* T933f4(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* ET_XACE_UNKNOWN_ELEMENT_ERROR.default_message */
T0* T932f5(T0* C)
{
	T0* R = 0;
	R = (T932f3(C, ge1029ov4009));
	return R;
}

/* ET_XACE_UNKNOWN_ELEMENT_ERROR.message */
T0* T932f3(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T2 l5 = 0;
	T1 l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	T0* t5;
	l2 = (T6)(GE_int32(1));
	l4 = (((T17*)(a1))->a2);
	t1 = (T932f4(C));
	R = (T26f7(GE_void(t1), a1, l4));
	t2 = (T6f1(&l2, l4));
	while (!(t2)) {
		l5 = (T17f10(a1, l2));
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t2 = ((l5)!=((T2)('$')));
		if (t2) {
			t2 = ((l5)!=((T2)('\000')));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, l5);
				} else {
					T949f58(R, l5);
				}
			} else {
				t1 = (T932f4(C));
				t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
				t4 = ((T6)((l2)-((T6)(GE_int32(1)))));
				R = (T26f5(GE_void(t1), R, a1, t3, t4));
			}
		} else {
			t2 = (T6f1(&l2, l4));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, (T2)('$'));
				} else {
					T949f58(R, (T2)('$'));
				}
			} else {
				l5 = (T17f10(a1, l2));
				t2 = ((l5)==((T2)('$')));
				if (t2) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f39(R, (T2)('$'));
					} else {
						T949f58(R, (T2)('$'));
					}
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					t1 = (T932f4(C));
					l1 = (T26f7(GE_void(t1), a1, (T6)(GE_int32(5))));
					t2 = ((l5)==((T2)('{')));
					if (t2) {
						l7 = EIF_TRUE;
						l8 = EIF_FALSE;
						l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l8);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							t2 = ((l5)==((T2)('}')));
							if (t2) {
								l8 = EIF_TRUE;
							} else {
								t2 = ((l5)!=((T2)('\000')));
								if (t2) {
									if (((T0*)(GE_void(l1)))->id==17) {
										T17f39(l1, l5);
									} else {
										T949f58(l1, l5);
									}
								} else {
									t1 = (T932f4(C));
									T26f20(GE_void(t1), l1, a1, l2, l2);
								}
							}
							l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l8);
							}
						}
					} else {
						l7 = EIF_FALSE;
						l8 = EIF_FALSE;
						l6 = EIF_FALSE;
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l6);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							switch (l5) {
							case (T2)'0':
							case (T2)'1':
							case (T2)'2':
							case (T2)'3':
							case (T2)'4':
							case (T2)'5':
							case (T2)'6':
							case (T2)'7':
							case (T2)'8':
							case (T2)'9':
								if (((T0*)(GE_void(l1)))->id==17) {
									T17f39(l1, l5);
								} else {
									T949f58(l1, l5);
								}
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
								break;
							default:
								l6 = EIF_TRUE;
								break;
							}
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l6);
							}
						}
					}
					t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f23(l1):T949f35(l1)));
					if (t2) {
						l3 = (((((T0*)(GE_void(l1)))->id==17)?T17f16(l1):T949f36(l1)));
						t2 = (T86f4(GE_void(((T932*)(C))->a1), l3));
						if (t2) {
							t1 = (T932f4(C));
							t5 = (T86f5(GE_void(((T932*)(C))->a1), l3));
							R = (T26f8(GE_void(t1), R, t5));
						} else {
							t2 = ((l3)==((T6)(GE_int32(0))));
							if (t2) {
								t1 = (T932f4(C));
								t5 = (T932f6(C));
								t5 = (((T23*)(GE_void(t5)))->a1);
								R = (T26f8(GE_void(t1), R, t5));
							} else {
								if (((T0*)(GE_void(R)))->id==17) {
									T17f39(R, (T2)('$'));
								} else {
									T949f58(R, (T2)('$'));
								}
								if (l7) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('{'));
									} else {
										T949f58(R, (T2)('{'));
									}
								}
								t1 = (T932f4(C));
								R = (T26f8(GE_void(t1), R, l1));
								if (l8) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('}'));
									} else {
										T949f58(R, (T2)('}'));
									}
								}
							}
						}
					} else {
						if (((T0*)(GE_void(R)))->id==17) {
							T17f39(R, (T2)('$'));
						} else {
							T949f58(R, (T2)('$'));
						}
						if (l7) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('{'));
							} else {
								T949f58(R, (T2)('{'));
							}
						}
						t1 = (T932f4(C));
						R = (T26f8(GE_void(t1), R, l1));
						if (l8) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('}'));
							} else {
								T949f58(R, (T2)('}'));
							}
						}
					}
				}
			}
		}
		t2 = (T6f1(&l2, l4));
	}
	return R;
}

/* ET_XACE_UNKNOWN_ELEMENT_ERROR.arguments */
T0* T932f6(T0* C)
{
	T0* R = 0;
	if (ge324os1721) {
		return ge324ov1721;
	} else {
		ge324os1721 = '\1';
	}
	R = T23c4();
	ge324ov1721 = R;
	return R;
}

/* ET_XACE_UNKNOWN_ELEMENT_ERROR.string_ */
T0* T932f4(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* ET_XACE_MISSING_ATTRIBUTE_ERROR.default_message */
T0* T931f5(T0* C)
{
	T0* R = 0;
	R = (T931f3(C, ge1021ov4009));
	return R;
}

/* ET_XACE_MISSING_ATTRIBUTE_ERROR.message */
T0* T931f3(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T2 l5 = 0;
	T1 l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	T0* t5;
	l2 = (T6)(GE_int32(1));
	l4 = (((T17*)(a1))->a2);
	t1 = (T931f4(C));
	R = (T26f7(GE_void(t1), a1, l4));
	t2 = (T6f1(&l2, l4));
	while (!(t2)) {
		l5 = (T17f10(a1, l2));
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t2 = ((l5)!=((T2)('$')));
		if (t2) {
			t2 = ((l5)!=((T2)('\000')));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, l5);
				} else {
					T949f58(R, l5);
				}
			} else {
				t1 = (T931f4(C));
				t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
				t4 = ((T6)((l2)-((T6)(GE_int32(1)))));
				R = (T26f5(GE_void(t1), R, a1, t3, t4));
			}
		} else {
			t2 = (T6f1(&l2, l4));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, (T2)('$'));
				} else {
					T949f58(R, (T2)('$'));
				}
			} else {
				l5 = (T17f10(a1, l2));
				t2 = ((l5)==((T2)('$')));
				if (t2) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f39(R, (T2)('$'));
					} else {
						T949f58(R, (T2)('$'));
					}
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					t1 = (T931f4(C));
					l1 = (T26f7(GE_void(t1), a1, (T6)(GE_int32(5))));
					t2 = ((l5)==((T2)('{')));
					if (t2) {
						l7 = EIF_TRUE;
						l8 = EIF_FALSE;
						l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l8);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							t2 = ((l5)==((T2)('}')));
							if (t2) {
								l8 = EIF_TRUE;
							} else {
								t2 = ((l5)!=((T2)('\000')));
								if (t2) {
									if (((T0*)(GE_void(l1)))->id==17) {
										T17f39(l1, l5);
									} else {
										T949f58(l1, l5);
									}
								} else {
									t1 = (T931f4(C));
									T26f20(GE_void(t1), l1, a1, l2, l2);
								}
							}
							l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l8);
							}
						}
					} else {
						l7 = EIF_FALSE;
						l8 = EIF_FALSE;
						l6 = EIF_FALSE;
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l6);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							switch (l5) {
							case (T2)'0':
							case (T2)'1':
							case (T2)'2':
							case (T2)'3':
							case (T2)'4':
							case (T2)'5':
							case (T2)'6':
							case (T2)'7':
							case (T2)'8':
							case (T2)'9':
								if (((T0*)(GE_void(l1)))->id==17) {
									T17f39(l1, l5);
								} else {
									T949f58(l1, l5);
								}
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
								break;
							default:
								l6 = EIF_TRUE;
								break;
							}
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l6);
							}
						}
					}
					t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f23(l1):T949f35(l1)));
					if (t2) {
						l3 = (((((T0*)(GE_void(l1)))->id==17)?T17f16(l1):T949f36(l1)));
						t2 = (T86f4(GE_void(((T931*)(C))->a1), l3));
						if (t2) {
							t1 = (T931f4(C));
							t5 = (T86f5(GE_void(((T931*)(C))->a1), l3));
							R = (T26f8(GE_void(t1), R, t5));
						} else {
							t2 = ((l3)==((T6)(GE_int32(0))));
							if (t2) {
								t1 = (T931f4(C));
								t5 = (T931f6(C));
								t5 = (((T23*)(GE_void(t5)))->a1);
								R = (T26f8(GE_void(t1), R, t5));
							} else {
								if (((T0*)(GE_void(R)))->id==17) {
									T17f39(R, (T2)('$'));
								} else {
									T949f58(R, (T2)('$'));
								}
								if (l7) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('{'));
									} else {
										T949f58(R, (T2)('{'));
									}
								}
								t1 = (T931f4(C));
								R = (T26f8(GE_void(t1), R, l1));
								if (l8) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('}'));
									} else {
										T949f58(R, (T2)('}'));
									}
								}
							}
						}
					} else {
						if (((T0*)(GE_void(R)))->id==17) {
							T17f39(R, (T2)('$'));
						} else {
							T949f58(R, (T2)('$'));
						}
						if (l7) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('{'));
							} else {
								T949f58(R, (T2)('{'));
							}
						}
						t1 = (T931f4(C));
						R = (T26f8(GE_void(t1), R, l1));
						if (l8) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('}'));
							} else {
								T949f58(R, (T2)('}'));
							}
						}
					}
				}
			}
		}
		t2 = (T6f1(&l2, l4));
	}
	return R;
}

/* ET_XACE_MISSING_ATTRIBUTE_ERROR.arguments */
T0* T931f6(T0* C)
{
	T0* R = 0;
	if (ge324os1721) {
		return ge324ov1721;
	} else {
		ge324os1721 = '\1';
	}
	R = T23c4();
	ge324ov1721 = R;
	return R;
}

/* ET_XACE_MISSING_ATTRIBUTE_ERROR.string_ */
T0* T931f4(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* ET_XACE_WRONG_ROOT_ELEMENT_ERROR.default_message */
T0* T930f5(T0* C)
{
	T0* R = 0;
	R = (T930f3(C, ge1033ov4009));
	return R;
}

/* ET_XACE_WRONG_ROOT_ELEMENT_ERROR.message */
T0* T930f3(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T2 l5 = 0;
	T1 l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	T0* t5;
	l2 = (T6)(GE_int32(1));
	l4 = (((T17*)(a1))->a2);
	t1 = (T930f4(C));
	R = (T26f7(GE_void(t1), a1, l4));
	t2 = (T6f1(&l2, l4));
	while (!(t2)) {
		l5 = (T17f10(a1, l2));
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t2 = ((l5)!=((T2)('$')));
		if (t2) {
			t2 = ((l5)!=((T2)('\000')));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, l5);
				} else {
					T949f58(R, l5);
				}
			} else {
				t1 = (T930f4(C));
				t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
				t4 = ((T6)((l2)-((T6)(GE_int32(1)))));
				R = (T26f5(GE_void(t1), R, a1, t3, t4));
			}
		} else {
			t2 = (T6f1(&l2, l4));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, (T2)('$'));
				} else {
					T949f58(R, (T2)('$'));
				}
			} else {
				l5 = (T17f10(a1, l2));
				t2 = ((l5)==((T2)('$')));
				if (t2) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f39(R, (T2)('$'));
					} else {
						T949f58(R, (T2)('$'));
					}
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					t1 = (T930f4(C));
					l1 = (T26f7(GE_void(t1), a1, (T6)(GE_int32(5))));
					t2 = ((l5)==((T2)('{')));
					if (t2) {
						l7 = EIF_TRUE;
						l8 = EIF_FALSE;
						l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l8);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							t2 = ((l5)==((T2)('}')));
							if (t2) {
								l8 = EIF_TRUE;
							} else {
								t2 = ((l5)!=((T2)('\000')));
								if (t2) {
									if (((T0*)(GE_void(l1)))->id==17) {
										T17f39(l1, l5);
									} else {
										T949f58(l1, l5);
									}
								} else {
									t1 = (T930f4(C));
									T26f20(GE_void(t1), l1, a1, l2, l2);
								}
							}
							l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l8);
							}
						}
					} else {
						l7 = EIF_FALSE;
						l8 = EIF_FALSE;
						l6 = EIF_FALSE;
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l6);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							switch (l5) {
							case (T2)'0':
							case (T2)'1':
							case (T2)'2':
							case (T2)'3':
							case (T2)'4':
							case (T2)'5':
							case (T2)'6':
							case (T2)'7':
							case (T2)'8':
							case (T2)'9':
								if (((T0*)(GE_void(l1)))->id==17) {
									T17f39(l1, l5);
								} else {
									T949f58(l1, l5);
								}
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
								break;
							default:
								l6 = EIF_TRUE;
								break;
							}
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l6);
							}
						}
					}
					t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f23(l1):T949f35(l1)));
					if (t2) {
						l3 = (((((T0*)(GE_void(l1)))->id==17)?T17f16(l1):T949f36(l1)));
						t2 = (T86f4(GE_void(((T930*)(C))->a1), l3));
						if (t2) {
							t1 = (T930f4(C));
							t5 = (T86f5(GE_void(((T930*)(C))->a1), l3));
							R = (T26f8(GE_void(t1), R, t5));
						} else {
							t2 = ((l3)==((T6)(GE_int32(0))));
							if (t2) {
								t1 = (T930f4(C));
								t5 = (T930f6(C));
								t5 = (((T23*)(GE_void(t5)))->a1);
								R = (T26f8(GE_void(t1), R, t5));
							} else {
								if (((T0*)(GE_void(R)))->id==17) {
									T17f39(R, (T2)('$'));
								} else {
									T949f58(R, (T2)('$'));
								}
								if (l7) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('{'));
									} else {
										T949f58(R, (T2)('{'));
									}
								}
								t1 = (T930f4(C));
								R = (T26f8(GE_void(t1), R, l1));
								if (l8) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('}'));
									} else {
										T949f58(R, (T2)('}'));
									}
								}
							}
						}
					} else {
						if (((T0*)(GE_void(R)))->id==17) {
							T17f39(R, (T2)('$'));
						} else {
							T949f58(R, (T2)('$'));
						}
						if (l7) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('{'));
							} else {
								T949f58(R, (T2)('{'));
							}
						}
						t1 = (T930f4(C));
						R = (T26f8(GE_void(t1), R, l1));
						if (l8) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('}'));
							} else {
								T949f58(R, (T2)('}'));
							}
						}
					}
				}
			}
		}
		t2 = (T6f1(&l2, l4));
	}
	return R;
}

/* ET_XACE_WRONG_ROOT_ELEMENT_ERROR.arguments */
T0* T930f6(T0* C)
{
	T0* R = 0;
	if (ge324os1721) {
		return ge324ov1721;
	} else {
		ge324os1721 = '\1';
	}
	R = T23c4();
	ge324ov1721 = R;
	return R;
}

/* ET_XACE_WRONG_ROOT_ELEMENT_ERROR.string_ */
T0* T930f4(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* ET_SYNTAX_ERROR.default_message */
T0* T927f17(T0* C)
{
	T0* R = 0;
	R = (T927f19(C, ((T927*)(C))->a1));
	return R;
}

/* ET_SYNTAX_ERROR.message */
T0* T927f19(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T2 l5 = 0;
	T1 l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	T0* t5;
	l2 = (T6)(GE_int32(1));
	l4 = (((T17*)(GE_void(a1)))->a2);
	t1 = (T927f15(C));
	R = (T26f7(GE_void(t1), a1, l4));
	t2 = (T6f1(&l2, l4));
	while (!(t2)) {
		l5 = (T17f10(GE_void(a1), l2));
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t2 = ((l5)!=((T2)('$')));
		if (t2) {
			t2 = ((l5)!=((T2)('\000')));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, l5);
				} else {
					T949f58(R, l5);
				}
			} else {
				t1 = (T927f15(C));
				t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
				t4 = ((T6)((l2)-((T6)(GE_int32(1)))));
				R = (T26f5(GE_void(t1), R, a1, t3, t4));
			}
		} else {
			t2 = (T6f1(&l2, l4));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, (T2)('$'));
				} else {
					T949f58(R, (T2)('$'));
				}
			} else {
				l5 = (T17f10(GE_void(a1), l2));
				t2 = ((l5)==((T2)('$')));
				if (t2) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f39(R, (T2)('$'));
					} else {
						T949f58(R, (T2)('$'));
					}
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					t1 = (T927f15(C));
					l1 = (T26f7(GE_void(t1), a1, (T6)(GE_int32(5))));
					t2 = ((l5)==((T2)('{')));
					if (t2) {
						l7 = EIF_TRUE;
						l8 = EIF_FALSE;
						l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l8);
						}
						while (!(t2)) {
							l5 = (T17f10(GE_void(a1), l2));
							t2 = ((l5)==((T2)('}')));
							if (t2) {
								l8 = EIF_TRUE;
							} else {
								t2 = ((l5)!=((T2)('\000')));
								if (t2) {
									if (((T0*)(GE_void(l1)))->id==17) {
										T17f39(l1, l5);
									} else {
										T949f58(l1, l5);
									}
								} else {
									t1 = (T927f15(C));
									T26f20(GE_void(t1), l1, a1, l2, l2);
								}
							}
							l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l8);
							}
						}
					} else {
						l7 = EIF_FALSE;
						l8 = EIF_FALSE;
						l6 = EIF_FALSE;
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l6);
						}
						while (!(t2)) {
							l5 = (T17f10(GE_void(a1), l2));
							switch (l5) {
							case (T2)'0':
							case (T2)'1':
							case (T2)'2':
							case (T2)'3':
							case (T2)'4':
							case (T2)'5':
							case (T2)'6':
							case (T2)'7':
							case (T2)'8':
							case (T2)'9':
								if (((T0*)(GE_void(l1)))->id==17) {
									T17f39(l1, l5);
								} else {
									T949f58(l1, l5);
								}
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
								break;
							default:
								l6 = EIF_TRUE;
								break;
							}
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l6);
							}
						}
					}
					t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f23(l1):T949f35(l1)));
					if (t2) {
						l3 = (((((T0*)(GE_void(l1)))->id==17)?T17f16(l1):T949f36(l1)));
						t2 = (T86f4(GE_void(((T927*)(C))->a2), l3));
						if (t2) {
							t1 = (T927f15(C));
							t5 = (T86f5(GE_void(((T927*)(C))->a2), l3));
							R = (T26f8(GE_void(t1), R, t5));
						} else {
							t2 = ((l3)==((T6)(GE_int32(0))));
							if (t2) {
								t1 = (T927f15(C));
								t5 = (T927f18(C));
								t5 = (((T23*)(GE_void(t5)))->a1);
								R = (T26f8(GE_void(t1), R, t5));
							} else {
								if (((T0*)(GE_void(R)))->id==17) {
									T17f39(R, (T2)('$'));
								} else {
									T949f58(R, (T2)('$'));
								}
								if (l7) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('{'));
									} else {
										T949f58(R, (T2)('{'));
									}
								}
								t1 = (T927f15(C));
								R = (T26f8(GE_void(t1), R, l1));
								if (l8) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('}'));
									} else {
										T949f58(R, (T2)('}'));
									}
								}
							}
						}
					} else {
						if (((T0*)(GE_void(R)))->id==17) {
							T17f39(R, (T2)('$'));
						} else {
							T949f58(R, (T2)('$'));
						}
						if (l7) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('{'));
							} else {
								T949f58(R, (T2)('{'));
							}
						}
						t1 = (T927f15(C));
						R = (T26f8(GE_void(t1), R, l1));
						if (l8) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('}'));
							} else {
								T949f58(R, (T2)('}'));
							}
						}
					}
				}
			}
		}
		t2 = (T6f1(&l2, l4));
	}
	return R;
}

/* ET_SYNTAX_ERROR.arguments */
T0* T927f18(T0* C)
{
	T0* R = 0;
	if (ge324os1721) {
		return ge324ov1721;
	} else {
		ge324os1721 = '\1';
	}
	R = T23c4();
	ge324ov1721 = R;
	return R;
}

/* ET_SYNTAX_ERROR.string_ */
T0* T927f15(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* ET_CLUSTER_ERROR.default_message */
T0* T926f12(T0* C)
{
	T0* R = 0;
	R = (T926f7(C, ((T926*)(C))->a1));
	return R;
}

/* ET_CLUSTER_ERROR.message */
T0* T926f7(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T2 l5 = 0;
	T1 l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	T0* t5;
	l2 = (T6)(GE_int32(1));
	l4 = (((T17*)(GE_void(a1)))->a2);
	t1 = (T926f9(C));
	R = (T26f7(GE_void(t1), a1, l4));
	t2 = (T6f1(&l2, l4));
	while (!(t2)) {
		l5 = (T17f10(GE_void(a1), l2));
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t2 = ((l5)!=((T2)('$')));
		if (t2) {
			t2 = ((l5)!=((T2)('\000')));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, l5);
				} else {
					T949f58(R, l5);
				}
			} else {
				t1 = (T926f9(C));
				t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
				t4 = ((T6)((l2)-((T6)(GE_int32(1)))));
				R = (T26f5(GE_void(t1), R, a1, t3, t4));
			}
		} else {
			t2 = (T6f1(&l2, l4));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, (T2)('$'));
				} else {
					T949f58(R, (T2)('$'));
				}
			} else {
				l5 = (T17f10(GE_void(a1), l2));
				t2 = ((l5)==((T2)('$')));
				if (t2) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f39(R, (T2)('$'));
					} else {
						T949f58(R, (T2)('$'));
					}
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					t1 = (T926f9(C));
					l1 = (T26f7(GE_void(t1), a1, (T6)(GE_int32(5))));
					t2 = ((l5)==((T2)('{')));
					if (t2) {
						l7 = EIF_TRUE;
						l8 = EIF_FALSE;
						l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l8);
						}
						while (!(t2)) {
							l5 = (T17f10(GE_void(a1), l2));
							t2 = ((l5)==((T2)('}')));
							if (t2) {
								l8 = EIF_TRUE;
							} else {
								t2 = ((l5)!=((T2)('\000')));
								if (t2) {
									if (((T0*)(GE_void(l1)))->id==17) {
										T17f39(l1, l5);
									} else {
										T949f58(l1, l5);
									}
								} else {
									t1 = (T926f9(C));
									T26f20(GE_void(t1), l1, a1, l2, l2);
								}
							}
							l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l8);
							}
						}
					} else {
						l7 = EIF_FALSE;
						l8 = EIF_FALSE;
						l6 = EIF_FALSE;
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l6);
						}
						while (!(t2)) {
							l5 = (T17f10(GE_void(a1), l2));
							switch (l5) {
							case (T2)'0':
							case (T2)'1':
							case (T2)'2':
							case (T2)'3':
							case (T2)'4':
							case (T2)'5':
							case (T2)'6':
							case (T2)'7':
							case (T2)'8':
							case (T2)'9':
								if (((T0*)(GE_void(l1)))->id==17) {
									T17f39(l1, l5);
								} else {
									T949f58(l1, l5);
								}
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
								break;
							default:
								l6 = EIF_TRUE;
								break;
							}
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l6);
							}
						}
					}
					t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f23(l1):T949f35(l1)));
					if (t2) {
						l3 = (((((T0*)(GE_void(l1)))->id==17)?T17f16(l1):T949f36(l1)));
						t2 = (T86f4(GE_void(((T926*)(C))->a2), l3));
						if (t2) {
							t1 = (T926f9(C));
							t5 = (T86f5(GE_void(((T926*)(C))->a2), l3));
							R = (T26f8(GE_void(t1), R, t5));
						} else {
							t2 = ((l3)==((T6)(GE_int32(0))));
							if (t2) {
								t1 = (T926f9(C));
								t5 = (T926f6(C));
								t5 = (((T23*)(GE_void(t5)))->a1);
								R = (T26f8(GE_void(t1), R, t5));
							} else {
								if (((T0*)(GE_void(R)))->id==17) {
									T17f39(R, (T2)('$'));
								} else {
									T949f58(R, (T2)('$'));
								}
								if (l7) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('{'));
									} else {
										T949f58(R, (T2)('{'));
									}
								}
								t1 = (T926f9(C));
								R = (T26f8(GE_void(t1), R, l1));
								if (l8) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('}'));
									} else {
										T949f58(R, (T2)('}'));
									}
								}
							}
						}
					} else {
						if (((T0*)(GE_void(R)))->id==17) {
							T17f39(R, (T2)('$'));
						} else {
							T949f58(R, (T2)('$'));
						}
						if (l7) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('{'));
							} else {
								T949f58(R, (T2)('{'));
							}
						}
						t1 = (T926f9(C));
						R = (T26f8(GE_void(t1), R, l1));
						if (l8) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('}'));
							} else {
								T949f58(R, (T2)('}'));
							}
						}
					}
				}
			}
		}
		t2 = (T6f1(&l2, l4));
	}
	return R;
}

/* ET_CLUSTER_ERROR.arguments */
T0* T926f6(T0* C)
{
	T0* R = 0;
	if (ge324os1721) {
		return ge324ov1721;
	} else {
		ge324os1721 = '\1';
	}
	R = T23c4();
	ge324ov1721 = R;
	return R;
}

/* ET_CLUSTER_ERROR.string_ */
T0* T926f9(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* ET_VALIDITY_ERROR.default_message */
T0* T925f60(T0* C)
{
	T0* R = 0;
	R = (T925f18(C, ((T925*)(C))->a5));
	return R;
}

/* ET_VALIDITY_ERROR.message */
T0* T925f18(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T2 l5 = 0;
	T1 l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	T0* t5;
	l2 = (T6)(GE_int32(1));
	l4 = (((T17*)(GE_void(a1)))->a2);
	t1 = (T925f59(C));
	R = (T26f7(GE_void(t1), a1, l4));
	t2 = (T6f1(&l2, l4));
	while (!(t2)) {
		l5 = (T17f10(GE_void(a1), l2));
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t2 = ((l5)!=((T2)('$')));
		if (t2) {
			t2 = ((l5)!=((T2)('\000')));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, l5);
				} else {
					T949f58(R, l5);
				}
			} else {
				t1 = (T925f59(C));
				t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
				t4 = ((T6)((l2)-((T6)(GE_int32(1)))));
				R = (T26f5(GE_void(t1), R, a1, t3, t4));
			}
		} else {
			t2 = (T6f1(&l2, l4));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, (T2)('$'));
				} else {
					T949f58(R, (T2)('$'));
				}
			} else {
				l5 = (T17f10(GE_void(a1), l2));
				t2 = ((l5)==((T2)('$')));
				if (t2) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f39(R, (T2)('$'));
					} else {
						T949f58(R, (T2)('$'));
					}
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					t1 = (T925f59(C));
					l1 = (T26f7(GE_void(t1), a1, (T6)(GE_int32(5))));
					t2 = ((l5)==((T2)('{')));
					if (t2) {
						l7 = EIF_TRUE;
						l8 = EIF_FALSE;
						l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l8);
						}
						while (!(t2)) {
							l5 = (T17f10(GE_void(a1), l2));
							t2 = ((l5)==((T2)('}')));
							if (t2) {
								l8 = EIF_TRUE;
							} else {
								t2 = ((l5)!=((T2)('\000')));
								if (t2) {
									if (((T0*)(GE_void(l1)))->id==17) {
										T17f39(l1, l5);
									} else {
										T949f58(l1, l5);
									}
								} else {
									t1 = (T925f59(C));
									T26f20(GE_void(t1), l1, a1, l2, l2);
								}
							}
							l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l8);
							}
						}
					} else {
						l7 = EIF_FALSE;
						l8 = EIF_FALSE;
						l6 = EIF_FALSE;
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l6);
						}
						while (!(t2)) {
							l5 = (T17f10(GE_void(a1), l2));
							switch (l5) {
							case (T2)'0':
							case (T2)'1':
							case (T2)'2':
							case (T2)'3':
							case (T2)'4':
							case (T2)'5':
							case (T2)'6':
							case (T2)'7':
							case (T2)'8':
							case (T2)'9':
								if (((T0*)(GE_void(l1)))->id==17) {
									T17f39(l1, l5);
								} else {
									T949f58(l1, l5);
								}
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
								break;
							default:
								l6 = EIF_TRUE;
								break;
							}
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l6);
							}
						}
					}
					t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f23(l1):T949f35(l1)));
					if (t2) {
						l3 = (((((T0*)(GE_void(l1)))->id==17)?T17f16(l1):T949f36(l1)));
						t2 = (T86f4(GE_void(((T925*)(C))->a6), l3));
						if (t2) {
							t1 = (T925f59(C));
							t5 = (T86f5(GE_void(((T925*)(C))->a6), l3));
							R = (T26f8(GE_void(t1), R, t5));
						} else {
							t2 = ((l3)==((T6)(GE_int32(0))));
							if (t2) {
								t1 = (T925f59(C));
								t5 = (T925f62(C));
								t5 = (((T23*)(GE_void(t5)))->a1);
								R = (T26f8(GE_void(t1), R, t5));
							} else {
								if (((T0*)(GE_void(R)))->id==17) {
									T17f39(R, (T2)('$'));
								} else {
									T949f58(R, (T2)('$'));
								}
								if (l7) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('{'));
									} else {
										T949f58(R, (T2)('{'));
									}
								}
								t1 = (T925f59(C));
								R = (T26f8(GE_void(t1), R, l1));
								if (l8) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('}'));
									} else {
										T949f58(R, (T2)('}'));
									}
								}
							}
						}
					} else {
						if (((T0*)(GE_void(R)))->id==17) {
							T17f39(R, (T2)('$'));
						} else {
							T949f58(R, (T2)('$'));
						}
						if (l7) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('{'));
							} else {
								T949f58(R, (T2)('{'));
							}
						}
						t1 = (T925f59(C));
						R = (T26f8(GE_void(t1), R, l1));
						if (l8) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('}'));
							} else {
								T949f58(R, (T2)('}'));
							}
						}
					}
				}
			}
		}
		t2 = (T6f1(&l2, l4));
	}
	return R;
}

/* ET_VALIDITY_ERROR.arguments */
T0* T925f62(T0* C)
{
	T0* R = 0;
	if (ge324os1721) {
		return ge324ov1721;
	} else {
		ge324os1721 = '\1';
	}
	R = T23c4();
	ge324ov1721 = R;
	return R;
}

/* ET_VALIDITY_ERROR.string_ */
T0* T925f59(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* ET_INTERNAL_ERROR.default_message */
T0* T924f5(T0* C)
{
	T0* R = 0;
	R = (T924f7(C, ((T924*)(C))->a1));
	return R;
}

/* ET_INTERNAL_ERROR.message */
T0* T924f7(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T2 l5 = 0;
	T1 l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	T0* t5;
	l2 = (T6)(GE_int32(1));
	l4 = (((T17*)(GE_void(a1)))->a2);
	t1 = (T924f9(C));
	R = (T26f7(GE_void(t1), a1, l4));
	t2 = (T6f1(&l2, l4));
	while (!(t2)) {
		l5 = (T17f10(GE_void(a1), l2));
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t2 = ((l5)!=((T2)('$')));
		if (t2) {
			t2 = ((l5)!=((T2)('\000')));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, l5);
				} else {
					T949f58(R, l5);
				}
			} else {
				t1 = (T924f9(C));
				t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
				t4 = ((T6)((l2)-((T6)(GE_int32(1)))));
				R = (T26f5(GE_void(t1), R, a1, t3, t4));
			}
		} else {
			t2 = (T6f1(&l2, l4));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, (T2)('$'));
				} else {
					T949f58(R, (T2)('$'));
				}
			} else {
				l5 = (T17f10(GE_void(a1), l2));
				t2 = ((l5)==((T2)('$')));
				if (t2) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f39(R, (T2)('$'));
					} else {
						T949f58(R, (T2)('$'));
					}
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					t1 = (T924f9(C));
					l1 = (T26f7(GE_void(t1), a1, (T6)(GE_int32(5))));
					t2 = ((l5)==((T2)('{')));
					if (t2) {
						l7 = EIF_TRUE;
						l8 = EIF_FALSE;
						l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l8);
						}
						while (!(t2)) {
							l5 = (T17f10(GE_void(a1), l2));
							t2 = ((l5)==((T2)('}')));
							if (t2) {
								l8 = EIF_TRUE;
							} else {
								t2 = ((l5)!=((T2)('\000')));
								if (t2) {
									if (((T0*)(GE_void(l1)))->id==17) {
										T17f39(l1, l5);
									} else {
										T949f58(l1, l5);
									}
								} else {
									t1 = (T924f9(C));
									T26f20(GE_void(t1), l1, a1, l2, l2);
								}
							}
							l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l8);
							}
						}
					} else {
						l7 = EIF_FALSE;
						l8 = EIF_FALSE;
						l6 = EIF_FALSE;
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l6);
						}
						while (!(t2)) {
							l5 = (T17f10(GE_void(a1), l2));
							switch (l5) {
							case (T2)'0':
							case (T2)'1':
							case (T2)'2':
							case (T2)'3':
							case (T2)'4':
							case (T2)'5':
							case (T2)'6':
							case (T2)'7':
							case (T2)'8':
							case (T2)'9':
								if (((T0*)(GE_void(l1)))->id==17) {
									T17f39(l1, l5);
								} else {
									T949f58(l1, l5);
								}
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
								break;
							default:
								l6 = EIF_TRUE;
								break;
							}
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l6);
							}
						}
					}
					t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f23(l1):T949f35(l1)));
					if (t2) {
						l3 = (((((T0*)(GE_void(l1)))->id==17)?T17f16(l1):T949f36(l1)));
						t2 = (T86f4(GE_void(((T924*)(C))->a2), l3));
						if (t2) {
							t1 = (T924f9(C));
							t5 = (T86f5(GE_void(((T924*)(C))->a2), l3));
							R = (T26f8(GE_void(t1), R, t5));
						} else {
							t2 = ((l3)==((T6)(GE_int32(0))));
							if (t2) {
								t1 = (T924f9(C));
								t5 = (T924f6(C));
								t5 = (((T23*)(GE_void(t5)))->a1);
								R = (T26f8(GE_void(t1), R, t5));
							} else {
								if (((T0*)(GE_void(R)))->id==17) {
									T17f39(R, (T2)('$'));
								} else {
									T949f58(R, (T2)('$'));
								}
								if (l7) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('{'));
									} else {
										T949f58(R, (T2)('{'));
									}
								}
								t1 = (T924f9(C));
								R = (T26f8(GE_void(t1), R, l1));
								if (l8) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('}'));
									} else {
										T949f58(R, (T2)('}'));
									}
								}
							}
						}
					} else {
						if (((T0*)(GE_void(R)))->id==17) {
							T17f39(R, (T2)('$'));
						} else {
							T949f58(R, (T2)('$'));
						}
						if (l7) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('{'));
							} else {
								T949f58(R, (T2)('{'));
							}
						}
						t1 = (T924f9(C));
						R = (T26f8(GE_void(t1), R, l1));
						if (l8) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('}'));
							} else {
								T949f58(R, (T2)('}'));
							}
						}
					}
				}
			}
		}
		t2 = (T6f1(&l2, l4));
	}
	return R;
}

/* ET_INTERNAL_ERROR.arguments */
T0* T924f6(T0* C)
{
	T0* R = 0;
	if (ge324os1721) {
		return ge324ov1721;
	} else {
		ge324os1721 = '\1';
	}
	R = T23c4();
	ge324ov1721 = R;
	return R;
}

/* ET_INTERNAL_ERROR.string_ */
T0* T924f9(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* ET_SYSTEM_ERROR.default_message */
T0* T923f5(T0* C)
{
	T0* R = 0;
	R = (T923f7(C, ((T923*)(C))->a1));
	return R;
}

/* ET_SYSTEM_ERROR.message */
T0* T923f7(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T2 l5 = 0;
	T1 l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	T0* t5;
	l2 = (T6)(GE_int32(1));
	l4 = (((T17*)(GE_void(a1)))->a2);
	t1 = (T923f9(C));
	R = (T26f7(GE_void(t1), a1, l4));
	t2 = (T6f1(&l2, l4));
	while (!(t2)) {
		l5 = (T17f10(GE_void(a1), l2));
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t2 = ((l5)!=((T2)('$')));
		if (t2) {
			t2 = ((l5)!=((T2)('\000')));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, l5);
				} else {
					T949f58(R, l5);
				}
			} else {
				t1 = (T923f9(C));
				t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
				t4 = ((T6)((l2)-((T6)(GE_int32(1)))));
				R = (T26f5(GE_void(t1), R, a1, t3, t4));
			}
		} else {
			t2 = (T6f1(&l2, l4));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, (T2)('$'));
				} else {
					T949f58(R, (T2)('$'));
				}
			} else {
				l5 = (T17f10(GE_void(a1), l2));
				t2 = ((l5)==((T2)('$')));
				if (t2) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f39(R, (T2)('$'));
					} else {
						T949f58(R, (T2)('$'));
					}
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					t1 = (T923f9(C));
					l1 = (T26f7(GE_void(t1), a1, (T6)(GE_int32(5))));
					t2 = ((l5)==((T2)('{')));
					if (t2) {
						l7 = EIF_TRUE;
						l8 = EIF_FALSE;
						l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l8);
						}
						while (!(t2)) {
							l5 = (T17f10(GE_void(a1), l2));
							t2 = ((l5)==((T2)('}')));
							if (t2) {
								l8 = EIF_TRUE;
							} else {
								t2 = ((l5)!=((T2)('\000')));
								if (t2) {
									if (((T0*)(GE_void(l1)))->id==17) {
										T17f39(l1, l5);
									} else {
										T949f58(l1, l5);
									}
								} else {
									t1 = (T923f9(C));
									T26f20(GE_void(t1), l1, a1, l2, l2);
								}
							}
							l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l8);
							}
						}
					} else {
						l7 = EIF_FALSE;
						l8 = EIF_FALSE;
						l6 = EIF_FALSE;
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l6);
						}
						while (!(t2)) {
							l5 = (T17f10(GE_void(a1), l2));
							switch (l5) {
							case (T2)'0':
							case (T2)'1':
							case (T2)'2':
							case (T2)'3':
							case (T2)'4':
							case (T2)'5':
							case (T2)'6':
							case (T2)'7':
							case (T2)'8':
							case (T2)'9':
								if (((T0*)(GE_void(l1)))->id==17) {
									T17f39(l1, l5);
								} else {
									T949f58(l1, l5);
								}
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
								break;
							default:
								l6 = EIF_TRUE;
								break;
							}
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l6);
							}
						}
					}
					t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f23(l1):T949f35(l1)));
					if (t2) {
						l3 = (((((T0*)(GE_void(l1)))->id==17)?T17f16(l1):T949f36(l1)));
						t2 = (T86f4(GE_void(((T923*)(C))->a2), l3));
						if (t2) {
							t1 = (T923f9(C));
							t5 = (T86f5(GE_void(((T923*)(C))->a2), l3));
							R = (T26f8(GE_void(t1), R, t5));
						} else {
							t2 = ((l3)==((T6)(GE_int32(0))));
							if (t2) {
								t1 = (T923f9(C));
								t5 = (T923f6(C));
								t5 = (((T23*)(GE_void(t5)))->a1);
								R = (T26f8(GE_void(t1), R, t5));
							} else {
								if (((T0*)(GE_void(R)))->id==17) {
									T17f39(R, (T2)('$'));
								} else {
									T949f58(R, (T2)('$'));
								}
								if (l7) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('{'));
									} else {
										T949f58(R, (T2)('{'));
									}
								}
								t1 = (T923f9(C));
								R = (T26f8(GE_void(t1), R, l1));
								if (l8) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('}'));
									} else {
										T949f58(R, (T2)('}'));
									}
								}
							}
						}
					} else {
						if (((T0*)(GE_void(R)))->id==17) {
							T17f39(R, (T2)('$'));
						} else {
							T949f58(R, (T2)('$'));
						}
						if (l7) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('{'));
							} else {
								T949f58(R, (T2)('{'));
							}
						}
						t1 = (T923f9(C));
						R = (T26f8(GE_void(t1), R, l1));
						if (l8) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('}'));
							} else {
								T949f58(R, (T2)('}'));
							}
						}
					}
				}
			}
		}
		t2 = (T6f1(&l2, l4));
	}
	return R;
}

/* ET_SYSTEM_ERROR.arguments */
T0* T923f6(T0* C)
{
	T0* R = 0;
	if (ge324os1721) {
		return ge324ov1721;
	} else {
		ge324os1721 = '\1';
	}
	R = T23c4();
	ge324ov1721 = R;
	return R;
}

/* ET_SYSTEM_ERROR.string_ */
T0* T923f9(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* ET_XACE_ELEMENT_OBSOLETED_BY_ELEMENT_WARNING.default_message */
T0* T299f5(T0* C)
{
	T0* R = 0;
	R = (T299f3(C, ge1017ov4009));
	return R;
}

/* ET_XACE_ELEMENT_OBSOLETED_BY_ELEMENT_WARNING.message */
T0* T299f3(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T2 l5 = 0;
	T1 l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	T0* t5;
	l2 = (T6)(GE_int32(1));
	l4 = (((T17*)(a1))->a2);
	t1 = (T299f4(C));
	R = (T26f7(GE_void(t1), a1, l4));
	t2 = (T6f1(&l2, l4));
	while (!(t2)) {
		l5 = (T17f10(a1, l2));
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t2 = ((l5)!=((T2)('$')));
		if (t2) {
			t2 = ((l5)!=((T2)('\000')));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, l5);
				} else {
					T949f58(R, l5);
				}
			} else {
				t1 = (T299f4(C));
				t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
				t4 = ((T6)((l2)-((T6)(GE_int32(1)))));
				R = (T26f5(GE_void(t1), R, a1, t3, t4));
			}
		} else {
			t2 = (T6f1(&l2, l4));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, (T2)('$'));
				} else {
					T949f58(R, (T2)('$'));
				}
			} else {
				l5 = (T17f10(a1, l2));
				t2 = ((l5)==((T2)('$')));
				if (t2) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f39(R, (T2)('$'));
					} else {
						T949f58(R, (T2)('$'));
					}
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					t1 = (T299f4(C));
					l1 = (T26f7(GE_void(t1), a1, (T6)(GE_int32(5))));
					t2 = ((l5)==((T2)('{')));
					if (t2) {
						l7 = EIF_TRUE;
						l8 = EIF_FALSE;
						l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l8);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							t2 = ((l5)==((T2)('}')));
							if (t2) {
								l8 = EIF_TRUE;
							} else {
								t2 = ((l5)!=((T2)('\000')));
								if (t2) {
									if (((T0*)(GE_void(l1)))->id==17) {
										T17f39(l1, l5);
									} else {
										T949f58(l1, l5);
									}
								} else {
									t1 = (T299f4(C));
									T26f20(GE_void(t1), l1, a1, l2, l2);
								}
							}
							l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l8);
							}
						}
					} else {
						l7 = EIF_FALSE;
						l8 = EIF_FALSE;
						l6 = EIF_FALSE;
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l6);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							switch (l5) {
							case (T2)'0':
							case (T2)'1':
							case (T2)'2':
							case (T2)'3':
							case (T2)'4':
							case (T2)'5':
							case (T2)'6':
							case (T2)'7':
							case (T2)'8':
							case (T2)'9':
								if (((T0*)(GE_void(l1)))->id==17) {
									T17f39(l1, l5);
								} else {
									T949f58(l1, l5);
								}
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
								break;
							default:
								l6 = EIF_TRUE;
								break;
							}
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l6);
							}
						}
					}
					t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f23(l1):T949f35(l1)));
					if (t2) {
						l3 = (((((T0*)(GE_void(l1)))->id==17)?T17f16(l1):T949f36(l1)));
						t2 = (T86f4(GE_void(((T299*)(C))->a1), l3));
						if (t2) {
							t1 = (T299f4(C));
							t5 = (T86f5(GE_void(((T299*)(C))->a1), l3));
							R = (T26f8(GE_void(t1), R, t5));
						} else {
							t2 = ((l3)==((T6)(GE_int32(0))));
							if (t2) {
								t1 = (T299f4(C));
								t5 = (T299f6(C));
								t5 = (((T23*)(GE_void(t5)))->a1);
								R = (T26f8(GE_void(t1), R, t5));
							} else {
								if (((T0*)(GE_void(R)))->id==17) {
									T17f39(R, (T2)('$'));
								} else {
									T949f58(R, (T2)('$'));
								}
								if (l7) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('{'));
									} else {
										T949f58(R, (T2)('{'));
									}
								}
								t1 = (T299f4(C));
								R = (T26f8(GE_void(t1), R, l1));
								if (l8) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('}'));
									} else {
										T949f58(R, (T2)('}'));
									}
								}
							}
						}
					} else {
						if (((T0*)(GE_void(R)))->id==17) {
							T17f39(R, (T2)('$'));
						} else {
							T949f58(R, (T2)('$'));
						}
						if (l7) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('{'));
							} else {
								T949f58(R, (T2)('{'));
							}
						}
						t1 = (T299f4(C));
						R = (T26f8(GE_void(t1), R, l1));
						if (l8) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('}'));
							} else {
								T949f58(R, (T2)('}'));
							}
						}
					}
				}
			}
		}
		t2 = (T6f1(&l2, l4));
	}
	return R;
}

/* ET_XACE_ELEMENT_OBSOLETED_BY_ELEMENT_WARNING.arguments */
T0* T299f6(T0* C)
{
	T0* R = 0;
	if (ge324os1721) {
		return ge324ov1721;
	} else {
		ge324os1721 = '\1';
	}
	R = T23c4();
	ge324ov1721 = R;
	return R;
}

/* ET_XACE_ELEMENT_OBSOLETED_BY_ELEMENT_WARNING.string_ */
T0* T299f4(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* ET_XACE_POSITIVE_INTEGER_EXPECTED_ERROR.default_message */
T0* T298f5(T0* C)
{
	T0* R = 0;
	R = (T298f3(C, ge1028ov4009));
	return R;
}

/* ET_XACE_POSITIVE_INTEGER_EXPECTED_ERROR.message */
T0* T298f3(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T2 l5 = 0;
	T1 l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	T0* t5;
	l2 = (T6)(GE_int32(1));
	l4 = (((T17*)(a1))->a2);
	t1 = (T298f4(C));
	R = (T26f7(GE_void(t1), a1, l4));
	t2 = (T6f1(&l2, l4));
	while (!(t2)) {
		l5 = (T17f10(a1, l2));
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t2 = ((l5)!=((T2)('$')));
		if (t2) {
			t2 = ((l5)!=((T2)('\000')));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, l5);
				} else {
					T949f58(R, l5);
				}
			} else {
				t1 = (T298f4(C));
				t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
				t4 = ((T6)((l2)-((T6)(GE_int32(1)))));
				R = (T26f5(GE_void(t1), R, a1, t3, t4));
			}
		} else {
			t2 = (T6f1(&l2, l4));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, (T2)('$'));
				} else {
					T949f58(R, (T2)('$'));
				}
			} else {
				l5 = (T17f10(a1, l2));
				t2 = ((l5)==((T2)('$')));
				if (t2) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f39(R, (T2)('$'));
					} else {
						T949f58(R, (T2)('$'));
					}
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					t1 = (T298f4(C));
					l1 = (T26f7(GE_void(t1), a1, (T6)(GE_int32(5))));
					t2 = ((l5)==((T2)('{')));
					if (t2) {
						l7 = EIF_TRUE;
						l8 = EIF_FALSE;
						l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l8);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							t2 = ((l5)==((T2)('}')));
							if (t2) {
								l8 = EIF_TRUE;
							} else {
								t2 = ((l5)!=((T2)('\000')));
								if (t2) {
									if (((T0*)(GE_void(l1)))->id==17) {
										T17f39(l1, l5);
									} else {
										T949f58(l1, l5);
									}
								} else {
									t1 = (T298f4(C));
									T26f20(GE_void(t1), l1, a1, l2, l2);
								}
							}
							l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l8);
							}
						}
					} else {
						l7 = EIF_FALSE;
						l8 = EIF_FALSE;
						l6 = EIF_FALSE;
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l6);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							switch (l5) {
							case (T2)'0':
							case (T2)'1':
							case (T2)'2':
							case (T2)'3':
							case (T2)'4':
							case (T2)'5':
							case (T2)'6':
							case (T2)'7':
							case (T2)'8':
							case (T2)'9':
								if (((T0*)(GE_void(l1)))->id==17) {
									T17f39(l1, l5);
								} else {
									T949f58(l1, l5);
								}
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
								break;
							default:
								l6 = EIF_TRUE;
								break;
							}
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l6);
							}
						}
					}
					t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f23(l1):T949f35(l1)));
					if (t2) {
						l3 = (((((T0*)(GE_void(l1)))->id==17)?T17f16(l1):T949f36(l1)));
						t2 = (T86f4(GE_void(((T298*)(C))->a1), l3));
						if (t2) {
							t1 = (T298f4(C));
							t5 = (T86f5(GE_void(((T298*)(C))->a1), l3));
							R = (T26f8(GE_void(t1), R, t5));
						} else {
							t2 = ((l3)==((T6)(GE_int32(0))));
							if (t2) {
								t1 = (T298f4(C));
								t5 = (T298f6(C));
								t5 = (((T23*)(GE_void(t5)))->a1);
								R = (T26f8(GE_void(t1), R, t5));
							} else {
								if (((T0*)(GE_void(R)))->id==17) {
									T17f39(R, (T2)('$'));
								} else {
									T949f58(R, (T2)('$'));
								}
								if (l7) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('{'));
									} else {
										T949f58(R, (T2)('{'));
									}
								}
								t1 = (T298f4(C));
								R = (T26f8(GE_void(t1), R, l1));
								if (l8) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('}'));
									} else {
										T949f58(R, (T2)('}'));
									}
								}
							}
						}
					} else {
						if (((T0*)(GE_void(R)))->id==17) {
							T17f39(R, (T2)('$'));
						} else {
							T949f58(R, (T2)('$'));
						}
						if (l7) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('{'));
							} else {
								T949f58(R, (T2)('{'));
							}
						}
						t1 = (T298f4(C));
						R = (T26f8(GE_void(t1), R, l1));
						if (l8) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('}'));
							} else {
								T949f58(R, (T2)('}'));
							}
						}
					}
				}
			}
		}
		t2 = (T6f1(&l2, l4));
	}
	return R;
}

/* ET_XACE_POSITIVE_INTEGER_EXPECTED_ERROR.arguments */
T0* T298f6(T0* C)
{
	T0* R = 0;
	if (ge324os1721) {
		return ge324ov1721;
	} else {
		ge324os1721 = '\1';
	}
	R = T23c4();
	ge324ov1721 = R;
	return R;
}

/* ET_XACE_POSITIVE_INTEGER_EXPECTED_ERROR.string_ */
T0* T298f4(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* ET_XACE_WRONG_ATTRIBUTE_VALUE_ERROR.default_message */
T0* T297f5(T0* C)
{
	T0* R = 0;
	R = (T297f3(C, ge1032ov4009));
	return R;
}

/* ET_XACE_WRONG_ATTRIBUTE_VALUE_ERROR.message */
T0* T297f3(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T2 l5 = 0;
	T1 l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	T0* t5;
	l2 = (T6)(GE_int32(1));
	l4 = (((T17*)(a1))->a2);
	t1 = (T297f4(C));
	R = (T26f7(GE_void(t1), a1, l4));
	t2 = (T6f1(&l2, l4));
	while (!(t2)) {
		l5 = (T17f10(a1, l2));
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t2 = ((l5)!=((T2)('$')));
		if (t2) {
			t2 = ((l5)!=((T2)('\000')));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, l5);
				} else {
					T949f58(R, l5);
				}
			} else {
				t1 = (T297f4(C));
				t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
				t4 = ((T6)((l2)-((T6)(GE_int32(1)))));
				R = (T26f5(GE_void(t1), R, a1, t3, t4));
			}
		} else {
			t2 = (T6f1(&l2, l4));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, (T2)('$'));
				} else {
					T949f58(R, (T2)('$'));
				}
			} else {
				l5 = (T17f10(a1, l2));
				t2 = ((l5)==((T2)('$')));
				if (t2) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f39(R, (T2)('$'));
					} else {
						T949f58(R, (T2)('$'));
					}
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					t1 = (T297f4(C));
					l1 = (T26f7(GE_void(t1), a1, (T6)(GE_int32(5))));
					t2 = ((l5)==((T2)('{')));
					if (t2) {
						l7 = EIF_TRUE;
						l8 = EIF_FALSE;
						l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l8);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							t2 = ((l5)==((T2)('}')));
							if (t2) {
								l8 = EIF_TRUE;
							} else {
								t2 = ((l5)!=((T2)('\000')));
								if (t2) {
									if (((T0*)(GE_void(l1)))->id==17) {
										T17f39(l1, l5);
									} else {
										T949f58(l1, l5);
									}
								} else {
									t1 = (T297f4(C));
									T26f20(GE_void(t1), l1, a1, l2, l2);
								}
							}
							l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l8);
							}
						}
					} else {
						l7 = EIF_FALSE;
						l8 = EIF_FALSE;
						l6 = EIF_FALSE;
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l6);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							switch (l5) {
							case (T2)'0':
							case (T2)'1':
							case (T2)'2':
							case (T2)'3':
							case (T2)'4':
							case (T2)'5':
							case (T2)'6':
							case (T2)'7':
							case (T2)'8':
							case (T2)'9':
								if (((T0*)(GE_void(l1)))->id==17) {
									T17f39(l1, l5);
								} else {
									T949f58(l1, l5);
								}
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
								break;
							default:
								l6 = EIF_TRUE;
								break;
							}
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l6);
							}
						}
					}
					t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f23(l1):T949f35(l1)));
					if (t2) {
						l3 = (((((T0*)(GE_void(l1)))->id==17)?T17f16(l1):T949f36(l1)));
						t2 = (T86f4(GE_void(((T297*)(C))->a1), l3));
						if (t2) {
							t1 = (T297f4(C));
							t5 = (T86f5(GE_void(((T297*)(C))->a1), l3));
							R = (T26f8(GE_void(t1), R, t5));
						} else {
							t2 = ((l3)==((T6)(GE_int32(0))));
							if (t2) {
								t1 = (T297f4(C));
								t5 = (T297f6(C));
								t5 = (((T23*)(GE_void(t5)))->a1);
								R = (T26f8(GE_void(t1), R, t5));
							} else {
								if (((T0*)(GE_void(R)))->id==17) {
									T17f39(R, (T2)('$'));
								} else {
									T949f58(R, (T2)('$'));
								}
								if (l7) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('{'));
									} else {
										T949f58(R, (T2)('{'));
									}
								}
								t1 = (T297f4(C));
								R = (T26f8(GE_void(t1), R, l1));
								if (l8) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('}'));
									} else {
										T949f58(R, (T2)('}'));
									}
								}
							}
						}
					} else {
						if (((T0*)(GE_void(R)))->id==17) {
							T17f39(R, (T2)('$'));
						} else {
							T949f58(R, (T2)('$'));
						}
						if (l7) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('{'));
							} else {
								T949f58(R, (T2)('{'));
							}
						}
						t1 = (T297f4(C));
						R = (T26f8(GE_void(t1), R, l1));
						if (l8) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('}'));
							} else {
								T949f58(R, (T2)('}'));
							}
						}
					}
				}
			}
		}
		t2 = (T6f1(&l2, l4));
	}
	return R;
}

/* ET_XACE_WRONG_ATTRIBUTE_VALUE_ERROR.arguments */
T0* T297f6(T0* C)
{
	T0* R = 0;
	if (ge324os1721) {
		return ge324ov1721;
	} else {
		ge324os1721 = '\1';
	}
	R = T23c4();
	ge324ov1721 = R;
	return R;
}

/* ET_XACE_NON_EMPTY_ATTRIBUTE_EXPECTED_ERROR.default_message */
T0* T296f5(T0* C)
{
	T0* R = 0;
	R = (T296f3(C, ge1024ov4009));
	return R;
}

/* ET_XACE_NON_EMPTY_ATTRIBUTE_EXPECTED_ERROR.message */
T0* T296f3(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T2 l5 = 0;
	T1 l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	T0* t5;
	l2 = (T6)(GE_int32(1));
	l4 = (((T17*)(a1))->a2);
	t1 = (T296f4(C));
	R = (T26f7(GE_void(t1), a1, l4));
	t2 = (T6f1(&l2, l4));
	while (!(t2)) {
		l5 = (T17f10(a1, l2));
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t2 = ((l5)!=((T2)('$')));
		if (t2) {
			t2 = ((l5)!=((T2)('\000')));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, l5);
				} else {
					T949f58(R, l5);
				}
			} else {
				t1 = (T296f4(C));
				t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
				t4 = ((T6)((l2)-((T6)(GE_int32(1)))));
				R = (T26f5(GE_void(t1), R, a1, t3, t4));
			}
		} else {
			t2 = (T6f1(&l2, l4));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, (T2)('$'));
				} else {
					T949f58(R, (T2)('$'));
				}
			} else {
				l5 = (T17f10(a1, l2));
				t2 = ((l5)==((T2)('$')));
				if (t2) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f39(R, (T2)('$'));
					} else {
						T949f58(R, (T2)('$'));
					}
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					t1 = (T296f4(C));
					l1 = (T26f7(GE_void(t1), a1, (T6)(GE_int32(5))));
					t2 = ((l5)==((T2)('{')));
					if (t2) {
						l7 = EIF_TRUE;
						l8 = EIF_FALSE;
						l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l8);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							t2 = ((l5)==((T2)('}')));
							if (t2) {
								l8 = EIF_TRUE;
							} else {
								t2 = ((l5)!=((T2)('\000')));
								if (t2) {
									if (((T0*)(GE_void(l1)))->id==17) {
										T17f39(l1, l5);
									} else {
										T949f58(l1, l5);
									}
								} else {
									t1 = (T296f4(C));
									T26f20(GE_void(t1), l1, a1, l2, l2);
								}
							}
							l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l8);
							}
						}
					} else {
						l7 = EIF_FALSE;
						l8 = EIF_FALSE;
						l6 = EIF_FALSE;
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l6);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							switch (l5) {
							case (T2)'0':
							case (T2)'1':
							case (T2)'2':
							case (T2)'3':
							case (T2)'4':
							case (T2)'5':
							case (T2)'6':
							case (T2)'7':
							case (T2)'8':
							case (T2)'9':
								if (((T0*)(GE_void(l1)))->id==17) {
									T17f39(l1, l5);
								} else {
									T949f58(l1, l5);
								}
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
								break;
							default:
								l6 = EIF_TRUE;
								break;
							}
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l6);
							}
						}
					}
					t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f23(l1):T949f35(l1)));
					if (t2) {
						l3 = (((((T0*)(GE_void(l1)))->id==17)?T17f16(l1):T949f36(l1)));
						t2 = (T86f4(GE_void(((T296*)(C))->a1), l3));
						if (t2) {
							t1 = (T296f4(C));
							t5 = (T86f5(GE_void(((T296*)(C))->a1), l3));
							R = (T26f8(GE_void(t1), R, t5));
						} else {
							t2 = ((l3)==((T6)(GE_int32(0))));
							if (t2) {
								t1 = (T296f4(C));
								t5 = (T296f6(C));
								t5 = (((T23*)(GE_void(t5)))->a1);
								R = (T26f8(GE_void(t1), R, t5));
							} else {
								if (((T0*)(GE_void(R)))->id==17) {
									T17f39(R, (T2)('$'));
								} else {
									T949f58(R, (T2)('$'));
								}
								if (l7) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('{'));
									} else {
										T949f58(R, (T2)('{'));
									}
								}
								t1 = (T296f4(C));
								R = (T26f8(GE_void(t1), R, l1));
								if (l8) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('}'));
									} else {
										T949f58(R, (T2)('}'));
									}
								}
							}
						}
					} else {
						if (((T0*)(GE_void(R)))->id==17) {
							T17f39(R, (T2)('$'));
						} else {
							T949f58(R, (T2)('$'));
						}
						if (l7) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('{'));
							} else {
								T949f58(R, (T2)('{'));
							}
						}
						t1 = (T296f4(C));
						R = (T26f8(GE_void(t1), R, l1));
						if (l8) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('}'));
							} else {
								T949f58(R, (T2)('}'));
							}
						}
					}
				}
			}
		}
		t2 = (T6f1(&l2, l4));
	}
	return R;
}

/* ET_XACE_NON_EMPTY_ATTRIBUTE_EXPECTED_ERROR.arguments */
T0* T296f6(T0* C)
{
	T0* R = 0;
	if (ge324os1721) {
		return ge324ov1721;
	} else {
		ge324os1721 = '\1';
	}
	R = T23c4();
	ge324ov1721 = R;
	return R;
}

/* ET_XACE_NON_EMPTY_ATTRIBUTE_EXPECTED_ERROR.string_ */
T0* T296f4(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* ET_XACE_BOOLEAN_EXPECTED_ERROR.default_message */
T0* T295f5(T0* C)
{
	T0* R = 0;
	R = (T295f3(C, ge1015ov4009));
	return R;
}

/* ET_XACE_BOOLEAN_EXPECTED_ERROR.message */
T0* T295f3(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T2 l5 = 0;
	T1 l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	T0* t5;
	l2 = (T6)(GE_int32(1));
	l4 = (((T17*)(a1))->a2);
	t1 = (T295f4(C));
	R = (T26f7(GE_void(t1), a1, l4));
	t2 = (T6f1(&l2, l4));
	while (!(t2)) {
		l5 = (T17f10(a1, l2));
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t2 = ((l5)!=((T2)('$')));
		if (t2) {
			t2 = ((l5)!=((T2)('\000')));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, l5);
				} else {
					T949f58(R, l5);
				}
			} else {
				t1 = (T295f4(C));
				t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
				t4 = ((T6)((l2)-((T6)(GE_int32(1)))));
				R = (T26f5(GE_void(t1), R, a1, t3, t4));
			}
		} else {
			t2 = (T6f1(&l2, l4));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, (T2)('$'));
				} else {
					T949f58(R, (T2)('$'));
				}
			} else {
				l5 = (T17f10(a1, l2));
				t2 = ((l5)==((T2)('$')));
				if (t2) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f39(R, (T2)('$'));
					} else {
						T949f58(R, (T2)('$'));
					}
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					t1 = (T295f4(C));
					l1 = (T26f7(GE_void(t1), a1, (T6)(GE_int32(5))));
					t2 = ((l5)==((T2)('{')));
					if (t2) {
						l7 = EIF_TRUE;
						l8 = EIF_FALSE;
						l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l8);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							t2 = ((l5)==((T2)('}')));
							if (t2) {
								l8 = EIF_TRUE;
							} else {
								t2 = ((l5)!=((T2)('\000')));
								if (t2) {
									if (((T0*)(GE_void(l1)))->id==17) {
										T17f39(l1, l5);
									} else {
										T949f58(l1, l5);
									}
								} else {
									t1 = (T295f4(C));
									T26f20(GE_void(t1), l1, a1, l2, l2);
								}
							}
							l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l8);
							}
						}
					} else {
						l7 = EIF_FALSE;
						l8 = EIF_FALSE;
						l6 = EIF_FALSE;
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l6);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							switch (l5) {
							case (T2)'0':
							case (T2)'1':
							case (T2)'2':
							case (T2)'3':
							case (T2)'4':
							case (T2)'5':
							case (T2)'6':
							case (T2)'7':
							case (T2)'8':
							case (T2)'9':
								if (((T0*)(GE_void(l1)))->id==17) {
									T17f39(l1, l5);
								} else {
									T949f58(l1, l5);
								}
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
								break;
							default:
								l6 = EIF_TRUE;
								break;
							}
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l6);
							}
						}
					}
					t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f23(l1):T949f35(l1)));
					if (t2) {
						l3 = (((((T0*)(GE_void(l1)))->id==17)?T17f16(l1):T949f36(l1)));
						t2 = (T86f4(GE_void(((T295*)(C))->a1), l3));
						if (t2) {
							t1 = (T295f4(C));
							t5 = (T86f5(GE_void(((T295*)(C))->a1), l3));
							R = (T26f8(GE_void(t1), R, t5));
						} else {
							t2 = ((l3)==((T6)(GE_int32(0))));
							if (t2) {
								t1 = (T295f4(C));
								t5 = (T295f6(C));
								t5 = (((T23*)(GE_void(t5)))->a1);
								R = (T26f8(GE_void(t1), R, t5));
							} else {
								if (((T0*)(GE_void(R)))->id==17) {
									T17f39(R, (T2)('$'));
								} else {
									T949f58(R, (T2)('$'));
								}
								if (l7) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('{'));
									} else {
										T949f58(R, (T2)('{'));
									}
								}
								t1 = (T295f4(C));
								R = (T26f8(GE_void(t1), R, l1));
								if (l8) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('}'));
									} else {
										T949f58(R, (T2)('}'));
									}
								}
							}
						}
					} else {
						if (((T0*)(GE_void(R)))->id==17) {
							T17f39(R, (T2)('$'));
						} else {
							T949f58(R, (T2)('$'));
						}
						if (l7) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('{'));
							} else {
								T949f58(R, (T2)('{'));
							}
						}
						t1 = (T295f4(C));
						R = (T26f8(GE_void(t1), R, l1));
						if (l8) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('}'));
							} else {
								T949f58(R, (T2)('}'));
							}
						}
					}
				}
			}
		}
		t2 = (T6f1(&l2, l4));
	}
	return R;
}

/* ET_XACE_BOOLEAN_EXPECTED_ERROR.arguments */
T0* T295f6(T0* C)
{
	T0* R = 0;
	if (ge324os1721) {
		return ge324ov1721;
	} else {
		ge324os1721 = '\1';
	}
	R = T23c4();
	ge324ov1721 = R;
	return R;
}

/* ET_XACE_BOOLEAN_EXPECTED_ERROR.string_ */
T0* T295f4(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* UT_CANNOT_WRITE_TO_FILE_ERROR.default_message */
T0* T217f2(T0* C)
{
	T0* R = 0;
	R = (T217f4(C, ge225ov4009));
	return R;
}

/* UT_CANNOT_WRITE_TO_FILE_ERROR.message */
T0* T217f4(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T2 l5 = 0;
	T1 l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	T0* t5;
	l2 = (T6)(GE_int32(1));
	l4 = (((T17*)(a1))->a2);
	t1 = (T217f5(C));
	R = (T26f7(GE_void(t1), a1, l4));
	t2 = (T6f1(&l2, l4));
	while (!(t2)) {
		l5 = (T17f10(a1, l2));
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t2 = ((l5)!=((T2)('$')));
		if (t2) {
			t2 = ((l5)!=((T2)('\000')));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, l5);
				} else {
					T949f58(R, l5);
				}
			} else {
				t1 = (T217f5(C));
				t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
				t4 = ((T6)((l2)-((T6)(GE_int32(1)))));
				R = (T26f5(GE_void(t1), R, a1, t3, t4));
			}
		} else {
			t2 = (T6f1(&l2, l4));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, (T2)('$'));
				} else {
					T949f58(R, (T2)('$'));
				}
			} else {
				l5 = (T17f10(a1, l2));
				t2 = ((l5)==((T2)('$')));
				if (t2) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f39(R, (T2)('$'));
					} else {
						T949f58(R, (T2)('$'));
					}
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					t1 = (T217f5(C));
					l1 = (T26f7(GE_void(t1), a1, (T6)(GE_int32(5))));
					t2 = ((l5)==((T2)('{')));
					if (t2) {
						l7 = EIF_TRUE;
						l8 = EIF_FALSE;
						l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l8);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							t2 = ((l5)==((T2)('}')));
							if (t2) {
								l8 = EIF_TRUE;
							} else {
								t2 = ((l5)!=((T2)('\000')));
								if (t2) {
									if (((T0*)(GE_void(l1)))->id==17) {
										T17f39(l1, l5);
									} else {
										T949f58(l1, l5);
									}
								} else {
									t1 = (T217f5(C));
									T26f20(GE_void(t1), l1, a1, l2, l2);
								}
							}
							l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l8);
							}
						}
					} else {
						l7 = EIF_FALSE;
						l8 = EIF_FALSE;
						l6 = EIF_FALSE;
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l6);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							switch (l5) {
							case (T2)'0':
							case (T2)'1':
							case (T2)'2':
							case (T2)'3':
							case (T2)'4':
							case (T2)'5':
							case (T2)'6':
							case (T2)'7':
							case (T2)'8':
							case (T2)'9':
								if (((T0*)(GE_void(l1)))->id==17) {
									T17f39(l1, l5);
								} else {
									T949f58(l1, l5);
								}
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
								break;
							default:
								l6 = EIF_TRUE;
								break;
							}
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l6);
							}
						}
					}
					t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f23(l1):T949f35(l1)));
					if (t2) {
						l3 = (((((T0*)(GE_void(l1)))->id==17)?T17f16(l1):T949f36(l1)));
						t2 = (T86f4(GE_void(((T217*)(C))->a1), l3));
						if (t2) {
							t1 = (T217f5(C));
							t5 = (T86f5(GE_void(((T217*)(C))->a1), l3));
							R = (T26f8(GE_void(t1), R, t5));
						} else {
							t2 = ((l3)==((T6)(GE_int32(0))));
							if (t2) {
								t1 = (T217f5(C));
								t5 = (T217f6(C));
								t5 = (((T23*)(GE_void(t5)))->a1);
								R = (T26f8(GE_void(t1), R, t5));
							} else {
								if (((T0*)(GE_void(R)))->id==17) {
									T17f39(R, (T2)('$'));
								} else {
									T949f58(R, (T2)('$'));
								}
								if (l7) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('{'));
									} else {
										T949f58(R, (T2)('{'));
									}
								}
								t1 = (T217f5(C));
								R = (T26f8(GE_void(t1), R, l1));
								if (l8) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('}'));
									} else {
										T949f58(R, (T2)('}'));
									}
								}
							}
						}
					} else {
						if (((T0*)(GE_void(R)))->id==17) {
							T17f39(R, (T2)('$'));
						} else {
							T949f58(R, (T2)('$'));
						}
						if (l7) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('{'));
							} else {
								T949f58(R, (T2)('{'));
							}
						}
						t1 = (T217f5(C));
						R = (T26f8(GE_void(t1), R, l1));
						if (l8) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('}'));
							} else {
								T949f58(R, (T2)('}'));
							}
						}
					}
				}
			}
		}
		t2 = (T6f1(&l2, l4));
	}
	return R;
}

/* UT_CANNOT_WRITE_TO_FILE_ERROR.arguments */
T0* T217f6(T0* C)
{
	T0* R = 0;
	if (ge324os1721) {
		return ge324ov1721;
	} else {
		ge324os1721 = '\1';
	}
	R = T23c4();
	ge324ov1721 = R;
	return R;
}

/* UT_CANNOT_WRITE_TO_FILE_ERROR.string_ */
T0* T217f5(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* UT_MESSAGE.default_message */
T0* T114f5(T0* C)
{
	T0* R = 0;
	R = (T114f3(C, ge228ov4009));
	return R;
}

/* UT_MESSAGE.message */
T0* T114f3(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T2 l5 = 0;
	T1 l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	T0* t5;
	l2 = (T6)(GE_int32(1));
	l4 = (((T17*)(a1))->a2);
	t1 = (T114f4(C));
	R = (T26f7(GE_void(t1), a1, l4));
	t2 = (T6f1(&l2, l4));
	while (!(t2)) {
		l5 = (T17f10(a1, l2));
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t2 = ((l5)!=((T2)('$')));
		if (t2) {
			t2 = ((l5)!=((T2)('\000')));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, l5);
				} else {
					T949f58(R, l5);
				}
			} else {
				t1 = (T114f4(C));
				t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
				t4 = ((T6)((l2)-((T6)(GE_int32(1)))));
				R = (T26f5(GE_void(t1), R, a1, t3, t4));
			}
		} else {
			t2 = (T6f1(&l2, l4));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, (T2)('$'));
				} else {
					T949f58(R, (T2)('$'));
				}
			} else {
				l5 = (T17f10(a1, l2));
				t2 = ((l5)==((T2)('$')));
				if (t2) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f39(R, (T2)('$'));
					} else {
						T949f58(R, (T2)('$'));
					}
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					t1 = (T114f4(C));
					l1 = (T26f7(GE_void(t1), a1, (T6)(GE_int32(5))));
					t2 = ((l5)==((T2)('{')));
					if (t2) {
						l7 = EIF_TRUE;
						l8 = EIF_FALSE;
						l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l8);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							t2 = ((l5)==((T2)('}')));
							if (t2) {
								l8 = EIF_TRUE;
							} else {
								t2 = ((l5)!=((T2)('\000')));
								if (t2) {
									if (((T0*)(GE_void(l1)))->id==17) {
										T17f39(l1, l5);
									} else {
										T949f58(l1, l5);
									}
								} else {
									t1 = (T114f4(C));
									T26f20(GE_void(t1), l1, a1, l2, l2);
								}
							}
							l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l8);
							}
						}
					} else {
						l7 = EIF_FALSE;
						l8 = EIF_FALSE;
						l6 = EIF_FALSE;
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l6);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							switch (l5) {
							case (T2)'0':
							case (T2)'1':
							case (T2)'2':
							case (T2)'3':
							case (T2)'4':
							case (T2)'5':
							case (T2)'6':
							case (T2)'7':
							case (T2)'8':
							case (T2)'9':
								if (((T0*)(GE_void(l1)))->id==17) {
									T17f39(l1, l5);
								} else {
									T949f58(l1, l5);
								}
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
								break;
							default:
								l6 = EIF_TRUE;
								break;
							}
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l6);
							}
						}
					}
					t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f23(l1):T949f35(l1)));
					if (t2) {
						l3 = (((((T0*)(GE_void(l1)))->id==17)?T17f16(l1):T949f36(l1)));
						t2 = (T86f4(GE_void(((T114*)(C))->a1), l3));
						if (t2) {
							t1 = (T114f4(C));
							t5 = (T86f5(GE_void(((T114*)(C))->a1), l3));
							R = (T26f8(GE_void(t1), R, t5));
						} else {
							t2 = ((l3)==((T6)(GE_int32(0))));
							if (t2) {
								t1 = (T114f4(C));
								t5 = (T114f6(C));
								t5 = (((T23*)(GE_void(t5)))->a1);
								R = (T26f8(GE_void(t1), R, t5));
							} else {
								if (((T0*)(GE_void(R)))->id==17) {
									T17f39(R, (T2)('$'));
								} else {
									T949f58(R, (T2)('$'));
								}
								if (l7) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('{'));
									} else {
										T949f58(R, (T2)('{'));
									}
								}
								t1 = (T114f4(C));
								R = (T26f8(GE_void(t1), R, l1));
								if (l8) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('}'));
									} else {
										T949f58(R, (T2)('}'));
									}
								}
							}
						}
					} else {
						if (((T0*)(GE_void(R)))->id==17) {
							T17f39(R, (T2)('$'));
						} else {
							T949f58(R, (T2)('$'));
						}
						if (l7) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('{'));
							} else {
								T949f58(R, (T2)('{'));
							}
						}
						t1 = (T114f4(C));
						R = (T26f8(GE_void(t1), R, l1));
						if (l8) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('}'));
							} else {
								T949f58(R, (T2)('}'));
							}
						}
					}
				}
			}
		}
		t2 = (T6f1(&l2, l4));
	}
	return R;
}

/* UT_MESSAGE.arguments */
T0* T114f6(T0* C)
{
	T0* R = 0;
	if (ge324os1721) {
		return ge324ov1721;
	} else {
		ge324os1721 = '\1';
	}
	R = T23c4();
	ge324ov1721 = R;
	return R;
}

/* UT_MESSAGE.string_ */
T0* T114f4(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* UT_VERSION_NUMBER.default_message */
T0* T69f2(T0* C)
{
	T0* R = 0;
	R = (T69f4(C, ge235ov4009));
	return R;
}

/* UT_VERSION_NUMBER.message */
T0* T69f4(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T2 l5 = 0;
	T1 l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	T0* t5;
	l2 = (T6)(GE_int32(1));
	l4 = (((T17*)(a1))->a2);
	t1 = (T69f5(C));
	R = (T26f7(GE_void(t1), a1, l4));
	t2 = (T6f1(&l2, l4));
	while (!(t2)) {
		l5 = (T17f10(a1, l2));
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t2 = ((l5)!=((T2)('$')));
		if (t2) {
			t2 = ((l5)!=((T2)('\000')));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, l5);
				} else {
					T949f58(R, l5);
				}
			} else {
				t1 = (T69f5(C));
				t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
				t4 = ((T6)((l2)-((T6)(GE_int32(1)))));
				R = (T26f5(GE_void(t1), R, a1, t3, t4));
			}
		} else {
			t2 = (T6f1(&l2, l4));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, (T2)('$'));
				} else {
					T949f58(R, (T2)('$'));
				}
			} else {
				l5 = (T17f10(a1, l2));
				t2 = ((l5)==((T2)('$')));
				if (t2) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f39(R, (T2)('$'));
					} else {
						T949f58(R, (T2)('$'));
					}
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					t1 = (T69f5(C));
					l1 = (T26f7(GE_void(t1), a1, (T6)(GE_int32(5))));
					t2 = ((l5)==((T2)('{')));
					if (t2) {
						l7 = EIF_TRUE;
						l8 = EIF_FALSE;
						l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l8);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							t2 = ((l5)==((T2)('}')));
							if (t2) {
								l8 = EIF_TRUE;
							} else {
								t2 = ((l5)!=((T2)('\000')));
								if (t2) {
									if (((T0*)(GE_void(l1)))->id==17) {
										T17f39(l1, l5);
									} else {
										T949f58(l1, l5);
									}
								} else {
									t1 = (T69f5(C));
									T26f20(GE_void(t1), l1, a1, l2, l2);
								}
							}
							l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l8);
							}
						}
					} else {
						l7 = EIF_FALSE;
						l8 = EIF_FALSE;
						l6 = EIF_FALSE;
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l6);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							switch (l5) {
							case (T2)'0':
							case (T2)'1':
							case (T2)'2':
							case (T2)'3':
							case (T2)'4':
							case (T2)'5':
							case (T2)'6':
							case (T2)'7':
							case (T2)'8':
							case (T2)'9':
								if (((T0*)(GE_void(l1)))->id==17) {
									T17f39(l1, l5);
								} else {
									T949f58(l1, l5);
								}
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
								break;
							default:
								l6 = EIF_TRUE;
								break;
							}
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l6);
							}
						}
					}
					t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f23(l1):T949f35(l1)));
					if (t2) {
						l3 = (((((T0*)(GE_void(l1)))->id==17)?T17f16(l1):T949f36(l1)));
						t2 = (T86f4(GE_void(((T69*)(C))->a1), l3));
						if (t2) {
							t1 = (T69f5(C));
							t5 = (T86f5(GE_void(((T69*)(C))->a1), l3));
							R = (T26f8(GE_void(t1), R, t5));
						} else {
							t2 = ((l3)==((T6)(GE_int32(0))));
							if (t2) {
								t1 = (T69f5(C));
								t5 = (T69f6(C));
								t5 = (((T23*)(GE_void(t5)))->a1);
								R = (T26f8(GE_void(t1), R, t5));
							} else {
								if (((T0*)(GE_void(R)))->id==17) {
									T17f39(R, (T2)('$'));
								} else {
									T949f58(R, (T2)('$'));
								}
								if (l7) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('{'));
									} else {
										T949f58(R, (T2)('{'));
									}
								}
								t1 = (T69f5(C));
								R = (T26f8(GE_void(t1), R, l1));
								if (l8) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('}'));
									} else {
										T949f58(R, (T2)('}'));
									}
								}
							}
						}
					} else {
						if (((T0*)(GE_void(R)))->id==17) {
							T17f39(R, (T2)('$'));
						} else {
							T949f58(R, (T2)('$'));
						}
						if (l7) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('{'));
							} else {
								T949f58(R, (T2)('{'));
							}
						}
						t1 = (T69f5(C));
						R = (T26f8(GE_void(t1), R, l1));
						if (l8) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('}'));
							} else {
								T949f58(R, (T2)('}'));
							}
						}
					}
				}
			}
		}
		t2 = (T6f1(&l2, l4));
	}
	return R;
}

/* UT_VERSION_NUMBER.arguments */
T0* T69f6(T0* C)
{
	T0* R = 0;
	if (ge324os1721) {
		return ge324ov1721;
	} else {
		ge324os1721 = '\1';
	}
	R = T23c4();
	ge324ov1721 = R;
	return R;
}

/* UT_VERSION_NUMBER.string_ */
T0* T69f5(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* UT_CANNOT_READ_FILE_ERROR.default_message */
T0* T68f2(T0* C)
{
	T0* R = 0;
	R = (T68f4(C, ge224ov4009));
	return R;
}

/* UT_CANNOT_READ_FILE_ERROR.message */
T0* T68f4(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T2 l5 = 0;
	T1 l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	T0* t5;
	l2 = (T6)(GE_int32(1));
	l4 = (((T17*)(a1))->a2);
	t1 = (T68f5(C));
	R = (T26f7(GE_void(t1), a1, l4));
	t2 = (T6f1(&l2, l4));
	while (!(t2)) {
		l5 = (T17f10(a1, l2));
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t2 = ((l5)!=((T2)('$')));
		if (t2) {
			t2 = ((l5)!=((T2)('\000')));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, l5);
				} else {
					T949f58(R, l5);
				}
			} else {
				t1 = (T68f5(C));
				t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
				t4 = ((T6)((l2)-((T6)(GE_int32(1)))));
				R = (T26f5(GE_void(t1), R, a1, t3, t4));
			}
		} else {
			t2 = (T6f1(&l2, l4));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, (T2)('$'));
				} else {
					T949f58(R, (T2)('$'));
				}
			} else {
				l5 = (T17f10(a1, l2));
				t2 = ((l5)==((T2)('$')));
				if (t2) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f39(R, (T2)('$'));
					} else {
						T949f58(R, (T2)('$'));
					}
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					t1 = (T68f5(C));
					l1 = (T26f7(GE_void(t1), a1, (T6)(GE_int32(5))));
					t2 = ((l5)==((T2)('{')));
					if (t2) {
						l7 = EIF_TRUE;
						l8 = EIF_FALSE;
						l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l8);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							t2 = ((l5)==((T2)('}')));
							if (t2) {
								l8 = EIF_TRUE;
							} else {
								t2 = ((l5)!=((T2)('\000')));
								if (t2) {
									if (((T0*)(GE_void(l1)))->id==17) {
										T17f39(l1, l5);
									} else {
										T949f58(l1, l5);
									}
								} else {
									t1 = (T68f5(C));
									T26f20(GE_void(t1), l1, a1, l2, l2);
								}
							}
							l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l8);
							}
						}
					} else {
						l7 = EIF_FALSE;
						l8 = EIF_FALSE;
						l6 = EIF_FALSE;
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l6);
						}
						while (!(t2)) {
							l5 = (T17f10(a1, l2));
							switch (l5) {
							case (T2)'0':
							case (T2)'1':
							case (T2)'2':
							case (T2)'3':
							case (T2)'4':
							case (T2)'5':
							case (T2)'6':
							case (T2)'7':
							case (T2)'8':
							case (T2)'9':
								if (((T0*)(GE_void(l1)))->id==17) {
									T17f39(l1, l5);
								} else {
									T949f58(l1, l5);
								}
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
								break;
							default:
								l6 = EIF_TRUE;
								break;
							}
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l6);
							}
						}
					}
					t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f23(l1):T949f35(l1)));
					if (t2) {
						l3 = (((((T0*)(GE_void(l1)))->id==17)?T17f16(l1):T949f36(l1)));
						t2 = (T86f4(GE_void(((T68*)(C))->a1), l3));
						if (t2) {
							t1 = (T68f5(C));
							t5 = (T86f5(GE_void(((T68*)(C))->a1), l3));
							R = (T26f8(GE_void(t1), R, t5));
						} else {
							t2 = ((l3)==((T6)(GE_int32(0))));
							if (t2) {
								t1 = (T68f5(C));
								t5 = (T68f6(C));
								t5 = (((T23*)(GE_void(t5)))->a1);
								R = (T26f8(GE_void(t1), R, t5));
							} else {
								if (((T0*)(GE_void(R)))->id==17) {
									T17f39(R, (T2)('$'));
								} else {
									T949f58(R, (T2)('$'));
								}
								if (l7) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('{'));
									} else {
										T949f58(R, (T2)('{'));
									}
								}
								t1 = (T68f5(C));
								R = (T26f8(GE_void(t1), R, l1));
								if (l8) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('}'));
									} else {
										T949f58(R, (T2)('}'));
									}
								}
							}
						}
					} else {
						if (((T0*)(GE_void(R)))->id==17) {
							T17f39(R, (T2)('$'));
						} else {
							T949f58(R, (T2)('$'));
						}
						if (l7) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('{'));
							} else {
								T949f58(R, (T2)('{'));
							}
						}
						t1 = (T68f5(C));
						R = (T26f8(GE_void(t1), R, l1));
						if (l8) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('}'));
							} else {
								T949f58(R, (T2)('}'));
							}
						}
					}
				}
			}
		}
		t2 = (T6f1(&l2, l4));
	}
	return R;
}

/* UT_CANNOT_READ_FILE_ERROR.arguments */
T0* T68f6(T0* C)
{
	T0* R = 0;
	if (ge324os1721) {
		return ge324ov1721;
	} else {
		ge324os1721 = '\1';
	}
	R = T23c4();
	ge324ov1721 = R;
	return R;
}

/* UT_CANNOT_READ_FILE_ERROR.string_ */
T0* T68f5(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* AP_ERROR.default_message */
T0* T32f16(T0* C)
{
	T0* R = 0;
	R = (T32f17(C, ((T32*)(C))->a2));
	return R;
}

/* AP_ERROR.message */
T0* T32f17(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T2 l5 = 0;
	T1 l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	T0* t5;
	l2 = (T6)(GE_int32(1));
	l4 = (((T17*)(GE_void(a1)))->a2);
	t1 = (T32f18(C));
	R = (T26f7(GE_void(t1), a1, l4));
	t2 = (T6f1(&l2, l4));
	while (!(t2)) {
		l5 = (T17f10(GE_void(a1), l2));
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t2 = ((l5)!=((T2)('$')));
		if (t2) {
			t2 = ((l5)!=((T2)('\000')));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, l5);
				} else {
					T949f58(R, l5);
				}
			} else {
				t1 = (T32f18(C));
				t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
				t4 = ((T6)((l2)-((T6)(GE_int32(1)))));
				R = (T26f5(GE_void(t1), R, a1, t3, t4));
			}
		} else {
			t2 = (T6f1(&l2, l4));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f39(R, (T2)('$'));
				} else {
					T949f58(R, (T2)('$'));
				}
			} else {
				l5 = (T17f10(GE_void(a1), l2));
				t2 = ((l5)==((T2)('$')));
				if (t2) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f39(R, (T2)('$'));
					} else {
						T949f58(R, (T2)('$'));
					}
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					t1 = (T32f18(C));
					l1 = (T26f7(GE_void(t1), a1, (T6)(GE_int32(5))));
					t2 = ((l5)==((T2)('{')));
					if (t2) {
						l7 = EIF_TRUE;
						l8 = EIF_FALSE;
						l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l8);
						}
						while (!(t2)) {
							l5 = (T17f10(GE_void(a1), l2));
							t2 = ((l5)==((T2)('}')));
							if (t2) {
								l8 = EIF_TRUE;
							} else {
								t2 = ((l5)!=((T2)('\000')));
								if (t2) {
									if (((T0*)(GE_void(l1)))->id==17) {
										T17f39(l1, l5);
									} else {
										T949f58(l1, l5);
									}
								} else {
									t1 = (T32f18(C));
									T26f20(GE_void(t1), l1, a1, l2, l2);
								}
							}
							l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l8);
							}
						}
					} else {
						l7 = EIF_FALSE;
						l8 = EIF_FALSE;
						l6 = EIF_FALSE;
						t2 = (T6f1(&l2, l4));
						if (!(t2)) {
							t2 = (l6);
						}
						while (!(t2)) {
							l5 = (T17f10(GE_void(a1), l2));
							switch (l5) {
							case (T2)'0':
							case (T2)'1':
							case (T2)'2':
							case (T2)'3':
							case (T2)'4':
							case (T2)'5':
							case (T2)'6':
							case (T2)'7':
							case (T2)'8':
							case (T2)'9':
								if (((T0*)(GE_void(l1)))->id==17) {
									T17f39(l1, l5);
								} else {
									T949f58(l1, l5);
								}
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
								break;
							default:
								l6 = EIF_TRUE;
								break;
							}
							t2 = (T6f1(&l2, l4));
							if (!(t2)) {
								t2 = (l6);
							}
						}
					}
					t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f23(l1):T949f35(l1)));
					if (t2) {
						l3 = (((((T0*)(GE_void(l1)))->id==17)?T17f16(l1):T949f36(l1)));
						t2 = (T86f4(GE_void(((T32*)(C))->a1), l3));
						if (t2) {
							t1 = (T32f18(C));
							t5 = (T86f5(GE_void(((T32*)(C))->a1), l3));
							R = (T26f8(GE_void(t1), R, t5));
						} else {
							t2 = ((l3)==((T6)(GE_int32(0))));
							if (t2) {
								t1 = (T32f18(C));
								t5 = (T32f19(C));
								t5 = (((T23*)(GE_void(t5)))->a1);
								R = (T26f8(GE_void(t1), R, t5));
							} else {
								if (((T0*)(GE_void(R)))->id==17) {
									T17f39(R, (T2)('$'));
								} else {
									T949f58(R, (T2)('$'));
								}
								if (l7) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('{'));
									} else {
										T949f58(R, (T2)('{'));
									}
								}
								t1 = (T32f18(C));
								R = (T26f8(GE_void(t1), R, l1));
								if (l8) {
									if (((T0*)(GE_void(R)))->id==17) {
										T17f39(R, (T2)('}'));
									} else {
										T949f58(R, (T2)('}'));
									}
								}
							}
						}
					} else {
						if (((T0*)(GE_void(R)))->id==17) {
							T17f39(R, (T2)('$'));
						} else {
							T949f58(R, (T2)('$'));
						}
						if (l7) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('{'));
							} else {
								T949f58(R, (T2)('{'));
							}
						}
						t1 = (T32f18(C));
						R = (T26f8(GE_void(t1), R, l1));
						if (l8) {
							if (((T0*)(GE_void(R)))->id==17) {
								T17f39(R, (T2)('}'));
							} else {
								T949f58(R, (T2)('}'));
							}
						}
					}
				}
			}
		}
		t2 = (T6f1(&l2, l4));
	}
	return R;
}

/* AP_ERROR.arguments */
T0* T32f19(T0* C)
{
	T0* R = 0;
	if (ge324os1721) {
		return ge324ov1721;
	} else {
		ge324os1721 = '\1';
	}
	R = T23c4();
	ge324ov1721 = R;
	return R;
}

/* AP_ERROR.string_ */
T0* T32f18(T0* C)
{
	T0* R = 0;
	if (ge278os1729) {
		return ge278ov1729;
	} else {
		ge278os1729 = '\1';
	}
	R = T26c19();
	ge278ov1729 = R;
	return R;
}

/* AP_DISPLAY_HELP_FLAG.was_found */
T1 T41f24(T0* C)
{
	T1 R = 0;
	R = (T6f1(&(((T41*)(C))->a5), (T6)(GE_int32(0))));
	return R;
}

/* AP_INTEGER_OPTION.was_found */
T1 T37f12(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T37f11(C));
	R = (T6f1(&t1, (T6)(GE_int32(0))));
	return R;
}

/* AP_BOOLEAN_OPTION.was_found */
T1 T36f14(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T36f10(C));
	R = (T6f1(&t1, (T6)(GE_int32(0))));
	return R;
}

/* AP_ENUMERATION_OPTION.was_found */
T1 T35f18(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = (T35f17(C));
	R = (T6f1(&t1, (T6)(GE_int32(0))));
	return R;
}

/* AP_FLAG.was_found */
T1 T33f9(T0* C)
{
	T1 R = 0;
	R = (T6f1(&(((T33*)(C))->a1), (T6)(GE_int32(0))));
	return R;
}

/* AP_INTEGER_OPTION.occurrences */
T6 T37f11(T0* C)
{
	T6 R = 0;
	R = (((T96*)(GE_void(((T37*)(C))->a1)))->a1);
	return R;
}

/* AP_BOOLEAN_OPTION.occurrences */
T6 T36f10(T0* C)
{
	T6 R = 0;
	R = (((T93*)(GE_void(((T36*)(C))->a1)))->a1);
	return R;
}

/* AP_ENUMERATION_OPTION.occurrences */
T6 T35f17(T0* C)
{
	T6 R = 0;
	R = (((T80*)(GE_void(((T35*)(C))->a1)))->a1);
	return R;
}

/* AP_DISPLAY_HELP_FLAG.allows_parameter */
T1 T41f21(T0* C)
{
	T1 R = 0;
	R = EIF_FALSE;
	return R;
}

/* AP_INTEGER_OPTION.allows_parameter */
T1 T37f16(T0* C)
{
	T1 R = 0;
	R = EIF_TRUE;
	return R;
}

/* AP_BOOLEAN_OPTION.allows_parameter */
T1 T36f13(T0* C)
{
	T1 R = 0;
	R = EIF_TRUE;
	return R;
}

/* AP_ENUMERATION_OPTION.allows_parameter */
T1 T35f15(T0* C)
{
	T1 R = 0;
	R = EIF_TRUE;
	return R;
}

/* AP_FLAG.allows_parameter */
T1 T33f12(T0* C)
{
	T1 R = 0;
	R = EIF_FALSE;
	return R;
}

/* AP_DISPLAY_HELP_FLAG.needs_parameter */
T1 T41f19(T0* C)
{
	T1 R = 0;
	R = EIF_FALSE;
	return R;
}

/* AP_INTEGER_OPTION.needs_parameter */
T1 T37f15(T0* C)
{
	T1 R = 0;
	R = EIF_TRUE;
	return R;
}

/* AP_BOOLEAN_OPTION.needs_parameter */
T1 T36f12(T0* C)
{
	T1 R = 0;
	R = EIF_TRUE;
	return R;
}

/* AP_FLAG.needs_parameter */
T1 T33f11(T0* C)
{
	T1 R = 0;
	R = EIF_FALSE;
	return R;
}

/* AP_DISPLAY_HELP_FLAG.name */
T0* T41f20(T0* C)
{
	T0* R = 0;
	T1 t1;
	T2 t2;
	T0* t3;
	T0* t4;
	t1 = (T41f18(C));
	if (t1) {
		t2 = (T2)('-');
		t3 = (T2f1(&t2));
		t2 = (T2)('-');
		t4 = (T2f1(&t2));
		t3 = (T17f9(GE_void(t3), t4));
		R = (T17f9(GE_void(t3), ((T41*)(C))->a4));
	} else {
		t2 = (T2)('-');
		t3 = (T2f1(&t2));
		t4 = (T2f1(&(((T41*)(C))->a2)));
		R = (T17f9(GE_void(t3), t4));
	}
	return R;
}

/* AP_INTEGER_OPTION.name */
T0* T37f10(T0* C)
{
	T0* R = 0;
	T1 t1;
	T2 t2;
	T0* t3;
	T0* t4;
	t1 = (T37f13(C));
	if (t1) {
		t2 = (T2)('-');
		t3 = (T2f1(&t2));
		t2 = (T2)('-');
		t4 = (T2f1(&t2));
		t3 = (T17f9(GE_void(t3), t4));
		R = (T17f9(GE_void(t3), ((T37*)(C))->a2));
	} else {
		t2 = (T2)('-');
		t3 = (T2f1(&t2));
		t4 = (T2f1(&(((T37*)(C))->a3)));
		R = (T17f9(GE_void(t3), t4));
	}
	return R;
}

/* AP_BOOLEAN_OPTION.name */
T0* T36f16(T0* C)
{
	T0* R = 0;
	T1 t1;
	T2 t2;
	T0* t3;
	T0* t4;
	t1 = (T36f11(C));
	if (t1) {
		t2 = (T2)('-');
		t3 = (T2f1(&t2));
		t2 = (T2)('-');
		t4 = (T2f1(&t2));
		t3 = (T17f9(GE_void(t3), t4));
		R = (T17f9(GE_void(t3), ((T36*)(C))->a4));
	} else {
		t2 = (T2)('-');
		t3 = (T2f1(&t2));
		t4 = (T2f1(&(((T36*)(C))->a8)));
		R = (T17f9(GE_void(t3), t4));
	}
	return R;
}

/* AP_ENUMERATION_OPTION.name */
T0* T35f12(T0* C)
{
	T0* R = 0;
	T1 t1;
	T2 t2;
	T0* t3;
	T0* t4;
	t1 = (T35f14(C));
	if (t1) {
		t2 = (T2)('-');
		t3 = (T2f1(&t2));
		t2 = (T2)('-');
		t4 = (T2f1(&t2));
		t3 = (T17f9(GE_void(t3), t4));
		R = (T17f9(GE_void(t3), ((T35*)(C))->a6));
	} else {
		t2 = (T2)('-');
		t3 = (T2f1(&t2));
		t4 = (T2f1(&(((T35*)(C))->a10)));
		R = (T17f9(GE_void(t3), t4));
	}
	return R;
}

/* AP_FLAG.name */
T0* T33f13(T0* C)
{
	T0* R = 0;
	T1 t1;
	T2 t2;
	T0* t3;
	T0* t4;
	t1 = (T33f10(C));
	if (t1) {
		t2 = (T2)('-');
		t3 = (T2f1(&t2));
		t2 = (T2)('-');
		t4 = (T2f1(&t2));
		t3 = (T17f9(GE_void(t3), t4));
		R = (T17f9(GE_void(t3), ((T33*)(C))->a3));
	} else {
		t2 = (T2)('-');
		t3 = (T2f1(&t2));
		t4 = (T2f1(&(((T33*)(C))->a4)));
		R = (T17f9(GE_void(t3), t4));
	}
	return R;
}

/* AP_DISPLAY_HELP_FLAG.example */
T0* T41f26(T0* C)
{
	T0* R = 0;
	T1 t1;
	T0* t2;
	R = T17c36((T6)(GE_int32(20)));
	t1 = ((T1)(!(((T41*)(C))->a7)));
	if (t1) {
		T17f39(GE_void(R), (T2)('['));
	}
	T17f39(GE_void(R), (T2)('-'));
	if (((T41*)(C))->a3) {
		t2 = (T2f1(&(((T41*)(C))->a2)));
		T17f41(GE_void(R), t2);
	} else {
		T17f39(GE_void(R), (T2)('-'));
		T17f41(GE_void(R), ((T41*)(C))->a4);
	}
	t1 = ((T1)(!(((T41*)(C))->a7)));
	if (t1) {
		T17f39(GE_void(R), (T2)(']'));
	}
	return R;
}

/* AP_INTEGER_OPTION.example */
T0* T37f19(T0* C)
{
	T0* R = 0;
	T1 t1;
	R = T17c36((T6)(GE_int32(20)));
	t1 = ((T1)(!(((T37*)(C))->a6)));
	if (t1) {
		T17f39(GE_void(R), (T2)('['));
	}
	T17f39(GE_void(R), (T2)('-'));
	if (((T37*)(C))->a8) {
		T17f39(GE_void(R), ((T37*)(C))->a3);
		T17f39(GE_void(R), (T2)(' '));
		T17f41(GE_void(R), ((T37*)(C))->a5);
	} else {
		T17f39(GE_void(R), (T2)('-'));
		T17f41(GE_void(R), ((T37*)(C))->a2);
		t1 = (T37f15(C));
		t1 = ((T1)(!(t1)));
		if (t1) {
			T17f39(GE_void(R), (T2)('['));
		}
		T17f39(GE_void(R), (T2)('='));
		T17f41(GE_void(R), ((T37*)(C))->a5);
		t1 = (T37f15(C));
		t1 = ((T1)(!(t1)));
		if (t1) {
			T17f39(GE_void(R), (T2)(']'));
		}
	}
	t1 = ((T1)(!(((T37*)(C))->a6)));
	if (t1) {
		T17f39(GE_void(R), (T2)(']'));
	}
	return R;
}

/* AP_BOOLEAN_OPTION.example */
T0* T36f17(T0* C)
{
	T0* R = 0;
	T1 t1;
	R = T17c36((T6)(GE_int32(20)));
	t1 = ((T1)(!(((T36*)(C))->a5)));
	if (t1) {
		T17f39(GE_void(R), (T2)('['));
	}
	T17f39(GE_void(R), (T2)('-'));
	if (((T36*)(C))->a7) {
		T17f39(GE_void(R), ((T36*)(C))->a8);
		T17f39(GE_void(R), (T2)(' '));
		T17f41(GE_void(R), ((T36*)(C))->a3);
	} else {
		T17f39(GE_void(R), (T2)('-'));
		T17f41(GE_void(R), ((T36*)(C))->a4);
		t1 = (T36f12(C));
		t1 = ((T1)(!(t1)));
		if (t1) {
			T17f39(GE_void(R), (T2)('['));
		}
		T17f39(GE_void(R), (T2)('='));
		T17f41(GE_void(R), ((T36*)(C))->a3);
		t1 = (T36f12(C));
		t1 = ((T1)(!(t1)));
		if (t1) {
			T17f39(GE_void(R), (T2)(']'));
		}
	}
	t1 = ((T1)(!(((T36*)(C))->a5)));
	if (t1) {
		T17f39(GE_void(R), (T2)(']'));
	}
	return R;
}

/* AP_ENUMERATION_OPTION.example */
T0* T35f19(T0* C)
{
	T0* R = 0;
	T1 t1;
	R = T17c36((T6)(GE_int32(20)));
	t1 = ((T1)(!(((T35*)(C))->a7)));
	if (t1) {
		T17f39(GE_void(R), (T2)('['));
	}
	T17f39(GE_void(R), (T2)('-'));
	if (((T35*)(C))->a9) {
		T17f39(GE_void(R), ((T35*)(C))->a10);
		T17f39(GE_void(R), (T2)(' '));
		T17f41(GE_void(R), ((T35*)(C))->a4);
	} else {
		T17f39(GE_void(R), (T2)('-'));
		T17f41(GE_void(R), ((T35*)(C))->a6);
		t1 = ((T1)(!(((T35*)(C))->a5)));
		if (t1) {
			T17f39(GE_void(R), (T2)('['));
		}
		T17f39(GE_void(R), (T2)('='));
		T17f41(GE_void(R), ((T35*)(C))->a4);
		t1 = ((T1)(!(((T35*)(C))->a5)));
		if (t1) {
			T17f39(GE_void(R), (T2)(']'));
		}
	}
	t1 = ((T1)(!(((T35*)(C))->a7)));
	if (t1) {
		T17f39(GE_void(R), (T2)(']'));
	}
	return R;
}

/* AP_FLAG.example */
T0* T33f14(T0* C)
{
	T0* R = 0;
	T1 t1;
	T0* t2;
	R = T17c36((T6)(GE_int32(20)));
	t1 = ((T1)(!(((T33*)(C))->a6)));
	if (t1) {
		T17f39(GE_void(R), (T2)('['));
	}
	T17f39(GE_void(R), (T2)('-'));
	if (((T33*)(C))->a5) {
		t2 = (T2f1(&(((T33*)(C))->a4)));
		T17f41(GE_void(R), t2);
	} else {
		T17f39(GE_void(R), (T2)('-'));
		T17f41(GE_void(R), ((T33*)(C))->a3);
	}
	t1 = ((T1)(!(((T33*)(C))->a6)));
	if (t1) {
		T17f39(GE_void(R), (T2)(']'));
	}
	return R;
}

/* AP_DISPLAY_HELP_FLAG.names */
T0* T41f34(T0* C)
{
	T0* R = 0;
	T2 t1;
	T1 t2;
	if (((T41*)(C))->a3) {
		t1 = (T2)('-');
		R = (T2f1(&t1));
		T17f39(GE_void(R), ((T41*)(C))->a2);
	}
	t2 = (T41f18(C));
	if (t2) {
		t2 = ((R)==(EIF_VOID));
		if (t2) {
			R = GE_ms("    ", 4);
		} else {
			T17f41(GE_void(R), GE_ms(", ", 2));
		}
		T17f39(GE_void(R), (T2)('-'));
		T17f39(GE_void(R), (T2)('-'));
		T17f41(GE_void(R), ((T41*)(C))->a4);
	}
	return R;
}

/* AP_INTEGER_OPTION.names */
T0* T37f21(T0* C)
{
	T0* R = 0;
	T1 t1;
	T2 t2;
	T0* t3;
	R = (T37f21p1(C));
	t1 = (T37f13(C));
	if (t1) {
		t1 = (T37f15(C));
		t1 = ((T1)(!(t1)));
		if (t1) {
			T17f39(GE_void(R), (T2)('['));
		}
		t2 = (T2)('=');
		t3 = (T2f1(&t2));
		T17f41(GE_void(R), t3);
		T17f41(GE_void(R), ((T37*)(C))->a5);
		t1 = (T37f15(C));
		t1 = ((T1)(!(t1)));
		if (t1) {
			T17f39(GE_void(R), (T2)(']'));
		}
	} else {
		T17f39(GE_void(R), (T2)(' '));
		T17f41(GE_void(R), ((T37*)(C))->a5);
	}
	return R;
}

/* AP_INTEGER_OPTION.names */
T0* T37f21p1(T0* C)
{
	T0* R = 0;
	T2 t1;
	T1 t2;
	if (((T37*)(C))->a8) {
		t1 = (T2)('-');
		R = (T2f1(&t1));
		T17f39(GE_void(R), ((T37*)(C))->a3);
	}
	t2 = (T37f13(C));
	if (t2) {
		t2 = ((R)==(EIF_VOID));
		if (t2) {
			R = GE_ms("    ", 4);
		} else {
			T17f41(GE_void(R), GE_ms(", ", 2));
		}
		T17f39(GE_void(R), (T2)('-'));
		T17f39(GE_void(R), (T2)('-'));
		T17f41(GE_void(R), ((T37*)(C))->a2);
	}
	return R;
}

/* AP_BOOLEAN_OPTION.names */
T0* T36f24(T0* C)
{
	T0* R = 0;
	T1 t1;
	T2 t2;
	T0* t3;
	R = (T36f24p1(C));
	t1 = (T36f11(C));
	if (t1) {
		t1 = (T36f12(C));
		t1 = ((T1)(!(t1)));
		if (t1) {
			T17f39(GE_void(R), (T2)('['));
		}
		t2 = (T2)('=');
		t3 = (T2f1(&t2));
		T17f41(GE_void(R), t3);
		T17f41(GE_void(R), ((T36*)(C))->a3);
		t1 = (T36f12(C));
		t1 = ((T1)(!(t1)));
		if (t1) {
			T17f39(GE_void(R), (T2)(']'));
		}
	} else {
		T17f39(GE_void(R), (T2)(' '));
		T17f41(GE_void(R), ((T36*)(C))->a3);
	}
	return R;
}

/* AP_BOOLEAN_OPTION.names */
T0* T36f24p1(T0* C)
{
	T0* R = 0;
	T2 t1;
	T1 t2;
	if (((T36*)(C))->a7) {
		t1 = (T2)('-');
		R = (T2f1(&t1));
		T17f39(GE_void(R), ((T36*)(C))->a8);
	}
	t2 = (T36f11(C));
	if (t2) {
		t2 = ((R)==(EIF_VOID));
		if (t2) {
			R = GE_ms("    ", 4);
		} else {
			T17f41(GE_void(R), GE_ms(", ", 2));
		}
		T17f39(GE_void(R), (T2)('-'));
		T17f39(GE_void(R), (T2)('-'));
		T17f41(GE_void(R), ((T36*)(C))->a4);
	}
	return R;
}

/* AP_ENUMERATION_OPTION.names */
T0* T35f23(T0* C)
{
	T0* R = 0;
	T1 t1;
	T2 t2;
	T0* t3;
	R = (T35f23p1(C));
	t1 = (T35f14(C));
	if (t1) {
		t1 = ((T1)(!(((T35*)(C))->a5)));
		if (t1) {
			T17f39(GE_void(R), (T2)('['));
		}
		t2 = (T2)('=');
		t3 = (T2f1(&t2));
		T17f41(GE_void(R), t3);
		T17f41(GE_void(R), ((T35*)(C))->a4);
		t1 = ((T1)(!(((T35*)(C))->a5)));
		if (t1) {
			T17f39(GE_void(R), (T2)(']'));
		}
	} else {
		T17f39(GE_void(R), (T2)(' '));
		T17f41(GE_void(R), ((T35*)(C))->a4);
	}
	return R;
}

/* AP_ENUMERATION_OPTION.names */
T0* T35f23p1(T0* C)
{
	T0* R = 0;
	T2 t1;
	T1 t2;
	if (((T35*)(C))->a9) {
		t1 = (T2)('-');
		R = (T2f1(&t1));
		T17f39(GE_void(R), ((T35*)(C))->a10);
	}
	t2 = (T35f14(C));
	if (t2) {
		t2 = ((R)==(EIF_VOID));
		if (t2) {
			R = GE_ms("    ", 4);
		} else {
			T17f41(GE_void(R), GE_ms(", ", 2));
		}
		T17f39(GE_void(R), (T2)('-'));
		T17f39(GE_void(R), (T2)('-'));
		T17f41(GE_void(R), ((T35*)(C))->a6);
	}
	return R;
}

/* AP_FLAG.names */
T0* T33f17(T0* C)
{
	T0* R = 0;
	T2 t1;
	T1 t2;
	if (((T33*)(C))->a5) {
		t1 = (T2)('-');
		R = (T2f1(&t1));
		T17f39(GE_void(R), ((T33*)(C))->a4);
	}
	t2 = (T33f10(C));
	if (t2) {
		t2 = ((R)==(EIF_VOID));
		if (t2) {
			R = GE_ms("    ", 4);
		} else {
			T17f41(GE_void(R), GE_ms(", ", 2));
		}
		T17f39(GE_void(R), (T2)('-'));
		T17f39(GE_void(R), (T2)('-'));
		T17f41(GE_void(R), ((T33*)(C))->a3);
	}
	return R;
}

/* AP_DISPLAY_HELP_FLAG.has_long_form */
T1 T41f18(T0* C)
{
	T1 R = 0;
	R = ((((T41*)(C))->a4)!=(EIF_VOID));
	return R;
}

/* AP_INTEGER_OPTION.has_long_form */
T1 T37f13(T0* C)
{
	T1 R = 0;
	R = ((((T37*)(C))->a2)!=(EIF_VOID));
	return R;
}

/* AP_BOOLEAN_OPTION.has_long_form */
T1 T36f11(T0* C)
{
	T1 R = 0;
	R = ((((T36*)(C))->a4)!=(EIF_VOID));
	return R;
}

/* AP_ENUMERATION_OPTION.has_long_form */
T1 T35f14(T0* C)
{
	T1 R = 0;
	R = ((((T35*)(C))->a6)!=(EIF_VOID));
	return R;
}

/* AP_FLAG.has_long_form */
T1 T33f10(T0* C)
{
	T1 R = 0;
	R = ((((T33*)(C))->a3)!=(EIF_VOID));
	return R;
}

/* XM_EIFFEL_INPUT_STREAM.last_character */
T2 T950f6(T0* C)
{
	T2 R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T1233*)(GE_void(((T950*)(C))->a3)))->a1);
	t2 = (T6f1(&t1, (T6)(GE_int32(0))));
	if (t2) {
		R = (T1233f5(GE_void(((T950*)(C))->a3)));
	} else {
		R = (((((T0*)(GE_void(((T950*)(C))->a4)))->id==22)?((T22*)(((T950*)(C))->a4))->a9:((T1416*)(((T950*)(C))->a4))->a2));
	}
	return R;
}

/* DS_LINKED_QUEUE [CHARACTER_8].item */
T2 T1233f5(T0* C)
{
	T2 R = 0;
	R = (((T1339*)(GE_void(((T1233*)(C))->a2)))->a1);
	return R;
}

/* XM_EIFFEL_INPUT_STREAM.end_of_input */
T1 T950f21(T0* C)
{
	T1 R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T1233*)(GE_void(((T950*)(C))->a3)))->a1);
	t2 = ((t1)==((T6)(GE_int32(0))));
	if (t2) {
		R = (((((T0*)(GE_void(((T950*)(C))->a4)))->id==22)?T22f25(((T950*)(C))->a4):((T1416*)(((T950*)(C))->a4))->a1));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* KL_TEXT_INPUT_FILE.end_of_input */
T1 T22f25(T0* C)
{
	T1 R = 0;
	R = ((T22*)(C))->a5;
	return R;
}

/* KL_STDIN_FILE.is_closable */
T1 T956f16(T0* C)
{
	T1 R = 0;
	R = EIF_FALSE;
	return R;
}

/* XM_EIFFEL_INPUT_STREAM.is_closable */
T1 T950f7(T0* C)
{
	T1 R = 0;
	R = EIF_FALSE;
	return R;
}

/* KL_TEXT_INPUT_FILE.is_closable */
T1 T22f32(T0* C)
{
	T1 R = 0;
	R = (T22f10(C));
	return R;
}

/* KL_STDIN_FILE.read_to_string */
T6 T956f11(T0* C, T0* a1, T6 a2, T6 a3)
{
	T6 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T0* l5 = 0;
	T1 t1;
	T2 t2;
	T0* t3;
	T6 t4;
	l2 = a2;
	t1 = ((l1)==(a3));
	if (!(t1)) {
		t1 = ((((T956*)(C))->a4)==(EIF_VOID));
	}
	while (!(t1)) {
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t2 = ((GE_void(((T956*)(C))->a4), (T2)0));
		T17f53(GE_void(a1), t2, l2);
		((T956*)(C))->a4 = ((GE_void(((T956*)(C))->a4), (T0*)0));
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(a3));
		if (!(t1)) {
			t1 = ((((T956*)(C))->a4)==(EIF_VOID));
		}
	}
	t1 = ((T1)((l1)<(a3)));
	if (t1) {
		t1 = (T956f7(C));
		t1 = ((T1)(!(t1)));
		if (t1) {
			t3 = (T956f8(C));
			t1 = (T79f1(GE_void(t3), a1, ge409ov25397));
			if (t1) {
				t4 = ((T6)((a3)-(l1)));
				t4 = (T956f10(C, a1, l2, t4));
				R = ((T6)((l1)+(t4)));
			} else {
				l4 = ((T6)((a3)-(l1)));
				l5 = T17c36(l4);
				T17f48(GE_void(l5), l4);
				l4 = (T956f10(C, l5, (T6)(GE_int32(1)), l4));
				l3 = (T6)(GE_int32(1));
				t1 = (T6f1(&l3, l4));
				while (!(t1)) {
					t2 = (T17f10(GE_void(l5), l3));
					T17f53(GE_void(a1), t2, l2);
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
					l3 = ((T6)((l3)+((T6)(GE_int32(1)))));
					t1 = (T6f1(&l3, l4));
				}
				R = ((T6)((l1)+(l4)));
			}
		} else {
			R = l1;
		}
		((T956*)(C))->a1 = (T956f7(C));
	} else {
		R = l1;
	}
	return R;
}

/* KL_STDIN_FILE.old_read_to_string */
T6 T956f10(T0* C, T0* a1, T6 a2, T6 a3)
{
	T6 R = 0;
	T0* t1;
	T6 t2;
	T14 t3;
	t1 = (((T17*)(GE_void(a1)))->a1);
	t2 = ((T6)((a2)-((T6)(GE_int32(1)))));
	t3 = (T15f5(GE_void(t1), t2));
	R = (T956f13(C, ((T956*)(C))->a5, t3, a3));
	return R;
}

/* KL_STDIN_FILE.file_gss */
T6 T956f13(T0* C, T14 a1, T14 a2, T6 a3)
{
	T6 R = 0;
	R = (T6)(EIF_INTEGER )file_gss((FILE *)a1,( char *)a2,( EIF_INTEGER)a3);
	return R;
}

/* KL_STDIN_FILE.any_ */
T0* T956f8(T0* C)
{
	T0* R = 0;
	if (ge270os1804) {
		return ge270ov1804;
	} else {
		ge270os1804 = '\1';
	}
	R = T79c5();
	ge270ov1804 = R;
	return R;
}

/* XM_EIFFEL_INPUT_STREAM.read_to_string */
T6 T950f28(T0* C, T0* a1, T6 a2, T6 a3)
{
	T6 R = 0;
	T1 t1;
	T6 t2;
	T2 t3;
	t1 = ((((T950*)(C))->a2)==((T6)(GE_int32(6))));
	if (!(t1)) {
		t1 = ((((T950*)(C))->a2)==((T6)(GE_int32(2))));
	}
	if (!(t1)) {
		t2 = (((T1233*)(GE_void(((T950*)(C))->a3)))->a1);
		t1 = (T6f1(&t2, (T6)(GE_int32(0))));
	}
	if (t1) {
		T950f32(C);
		t1 = (T950f21(C));
		t1 = ((T1)(!(t1)));
		if (t1) {
			t3 = (T950f6(C));
			T17f53(GE_void(a1), t3, a2);
			R = (T6)(GE_int32(1));
		} else {
			R = (T6)(GE_int32(0));
		}
	} else {
		t1 = ((((T950*)(C))->a2)==((T6)(GE_int32(1))));
		if (t1) {
			R = (((((T0*)(GE_void(((T950*)(C))->a4)))->id==22)?T22f29(((T950*)(C))->a4, a1, a2, a3):T1416f7(((T950*)(C))->a4, a1, a2, a3)));
		} else {
			R = (T950f28p1(C, a1, a2, a3));
		}
	}
	return R;
}

/* XM_EIFFEL_INPUT_STREAM.read_to_string */
T6 T950f28p1(T0* C, T0* a1, T6 a2, T6 a3)
{
	T6 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 t1;
	T1 t2;
	T2 t3;
	t1 = ((T6)((a2)+(a3)));
	l2 = ((T6)((t1)-((T6)(GE_int32(1)))));
	l1 = a2;
	t2 = (T6f1(&l1, l2));
	while (!(t2)) {
		T950f32(C);
		t2 = (T950f21(C));
		t2 = ((T1)(!(t2)));
		if (t2) {
			t3 = (T950f6(C));
			T17f53(GE_void(a1), t3, l1);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		} else {
			t1 = ((T6)((l1)-(a2)));
			R = ((T6)((t1)-(a3)));
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		}
		t2 = (T6f1(&l1, l2));
	}
	t1 = ((T6)((R)+(l1)));
	R = ((T6)((t1)-(a2)));
	return R;
}

/* KL_STRING_INPUT_STREAM.read_to_string */
T6 T1416f7(T0* C, T0* a1, T6 a2, T6 a3)
{
	T6 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 t1;
	T1 t2;
	t1 = ((T6)((a2)+(a3)));
	l2 = ((T6)((t1)-((T6)(GE_int32(1)))));
	l1 = a2;
	t2 = (T6f1(&l1, l2));
	while (!(t2)) {
		T1416f9(C);
		t2 = ((T1)(!(((T1416*)(C))->a1)));
		if (t2) {
			T17f53(GE_void(a1), ((T1416*)(C))->a2, l1);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		} else {
			t1 = ((T6)((l1)-(a2)));
			R = ((T6)((t1)-(a3)));
			l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
		}
		t2 = (T6f1(&l1, l2));
	}
	t1 = ((T6)((R)+(l1)));
	R = ((T6)((t1)-(a2)));
	return R;
}

/* KL_TEXT_INPUT_FILE.read_to_string */
T6 T22f29(T0* C, T0* a1, T6 a2, T6 a3)
{
	T6 R = 0;
	T6 l1 = 0;
	T0* l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T2 t2;
	T0* t3;
	T6 t4;
	T0* t5;
	l1 = a2;
	t1 = ((l5)==(a3));
	if (!(t1)) {
		t1 = ((((T22*)(C))->a4)==(EIF_VOID));
	}
	while (!(t1)) {
		l5 = ((T6)((l5)+((T6)(GE_int32(1)))));
		t2 = (((T72*)(GE_void(((T22*)(C))->a4)))->a1);
		T17f53(GE_void(a1), t2, l1);
		((T22*)(C))->a4 = (((T72*)(GE_void(((T22*)(C))->a4)))->a2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l5)==(a3));
		if (!(t1)) {
			t1 = ((((T22*)(C))->a4)==(EIF_VOID));
		}
	}
	t1 = ((T1)((l5)<(a3)));
	if (t1) {
		t1 = (T22f27(C));
		t1 = ((T1)(!(t1)));
		if (t1) {
			t3 = (T22f35(C));
			t1 = (T79f1(GE_void(t3), a1, ge396ov1824));
			if (t1) {
				t4 = ((T6)((a3)-(l5)));
				t4 = (T22f28(C, a1, l1, t4));
				l5 = ((T6)((l5)+(t4)));
			} else {
				t3 = (T22f35(C));
				t5 = (T22f37(C));
				t1 = (T79f1(GE_void(t3), a1, t5));
				if (t1) {
					t4 = ((T6)((a3)-(l5)));
					t4 = (T22f28(C, a1, l1, t4));
					l5 = ((T6)((l5)+(t4)));
				} else {
					l4 = ((T6)((a3)-(l5)));
					l2 = T17c36(l4);
					T17f48(GE_void(l2), l4);
					l4 = (T22f28(C, l2, (T6)(GE_int32(1)), l4));
					l3 = (T6)(GE_int32(1));
					t1 = (T6f1(&l3, l4));
					while (!(t1)) {
						t2 = (T17f10(GE_void(l2), l3));
						T17f53(GE_void(a1), t2, l1);
						l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
						l3 = ((T6)((l3)+((T6)(GE_int32(1)))));
						t1 = (T6f1(&l3, l4));
					}
					l5 = ((T6)((l5)+(l4)));
				}
			}
		}
		((T22*)(C))->a5 = (T22f27(C));
	}
	R = l5;
	return R;
}

/* KL_TEXT_INPUT_FILE.dummy_kl_character_buffer */
unsigned char ge396os1825 = '\0';
T0* ge396ov1825;
T0* T22f37(T0* C)
{
	T0* R = 0;
	if (ge396os1825) {
		return ge396ov1825;
	} else {
		ge396os1825 = '\1';
	}
	R = T951c10((T6)(GE_int32(0)));
	ge396ov1825 = R;
	return R;
}

/* KL_TEXT_INPUT_FILE.any_ */
T0* T22f35(T0* C)
{
	T0* R = 0;
	if (ge270os1804) {
		return ge270ov1804;
	} else {
		ge270os1804 = '\1';
	}
	R = T79c5();
	ge270ov1804 = R;
	return R;
}

/* XM_EIFFEL_INPUT_STREAM.name */
T0* T950f5(T0* C)
{
	T0* R = 0;
	R = (((((T0*)(GE_void(((T950*)(C))->a4)))->id==22)?((T22*)(((T950*)(C))->a4))->a2:T1416f6(((T950*)(C))->a4)));
	return R;
}

/* KL_STRING_INPUT_STREAM.name */
unsigned char ge311os1800 = '\0';
T0* ge311ov1800;
T0* T1416f6(T0* C)
{
	T0* R = 0;
	if (ge311os1800) {
		return ge311ov1800;
	} else {
		ge311os1800 = '\1';
	}
	R = GE_ms("STRING", 6);
	ge311ov1800 = R;
	return R;
}

/* XM_NAMESPACE.is_equal */
T1 T1307f4(T0* C, T0* a1)
{
	T1 R = 0;
	T0* t1;
	T1 t2;
	T0* t3;
	t1 = (((T1307*)(GE_void(a1)))->a1);
	t2 = ((((T1307*)(C))->a1)==(t1));
	if (!(t2)) {
		t2 = ((((T1307*)(C))->a1)!=(EIF_VOID));
		if (t2) {
			t1 = (T1307f3(C));
			t3 = (((T1307*)(GE_void(a1)))->a1);
			R = (T26f1(GE_void(t1), ((T1307*)(C))->a1, t3));
		} else {
			R = EIF_FALSE;
		}
	} else {
		R = EIF_TRUE;
	}
	return R;
}

/* XM_EIFFEL_PARSER_NAME.is_equal */
T1 T365f10(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	T0* t4;
	t1 = (((T365*)(GE_void(a1)))->a2);
	t2 = ((((T365*)(C))->a2)==(t1));
	if (t2) {
		t2 = ((((T365*)(C))->a2)==((T6)(GE_int32(0))));
		if (t2) {
			R = EIF_TRUE;
		} else {
			t2 = ((((T365*)(C))->a2)==((T6)(GE_int32(1))));
			if (t2) {
				t3 = (((T365*)(GE_void(a1)))->a3);
				R = (T365f15(C, ((T365*)(C))->a3, t3));
			} else {
				t2 = ((((T365*)(C))->a2)==((T6)(GE_int32(2))));
				if (t2) {
					t3 = (((T365*)(GE_void(a1)))->a3);
					t2 = (T365f15(C, ((T365*)(C))->a3, t3));
					if (t2) {
						t3 = (((T365*)(GE_void(a1)))->a4);
						R = (T365f15(C, ((T365*)(C))->a4, t3));
					} else {
						R = EIF_FALSE;
					}
				} else {
					t3 = (((T365*)(GE_void(a1)))->a3);
					t2 = (T365f15(C, ((T365*)(C))->a3, t3));
					if (t2) {
						t3 = (((T365*)(GE_void(a1)))->a4);
						R = (T365f15(C, ((T365*)(C))->a4, t3));
					} else {
						R = EIF_FALSE;
					}
					l1 = (T372f6(GE_void(((T365*)(C))->a5)));
					T1035f8(GE_void(l1));
					t3 = (((T365*)(GE_void(a1)))->a5);
					l2 = (T372f6(GE_void(t3)));
					T1035f8(GE_void(l2));
					t2 = (((T1035*)(GE_void(l1)))->a3);
					if (!(t2)) {
						t2 = ((T1)(!(R)));
					}
					while (!(t2)) {
						t3 = (T1035f6(GE_void(l1)));
						t4 = (T1035f6(GE_void(l2)));
						R = (T365f15(C, t3, t4));
						T1035f9(GE_void(l1));
						T1035f9(GE_void(l2));
						t2 = (((T1035*)(GE_void(l1)))->a3);
						if (!(t2)) {
							t2 = ((T1)(!(R)));
						}
					}
				}
			}
		}
	}
	return R;
}

/* XM_EIFFEL_PARSER_NAME.same_string */
T1 T365f15(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* t1;
	t1 = (T365f8(C));
	R = (T48f1(GE_void(t1), a1, a2));
	return R;
}

/* ET_IDENTIFIER.is_equal */
T1 T129f33(T0* C, T0* a1)
{
	T1 R = 0;
	T0* t1;
	T1 t2;
	t1 = (T129f46(C));
	t2 = (T79f1(GE_void(t1), C, a1));
	if (t2) {
		R = (T129f35(C, a1));
	}
	return R;
}

/* STRING_8.is_equal */
T1 T17f19(T0* C, T0* a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		l1 = ((T17*)(C))->a2;
		t2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T949*)(a1))->a1));
		t1 = ((l1)==(t2));
		if (t1) {
			t3 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a1:((T949*)(a1))->a2));
			t2 = (T17f21(C, ((T17*)(C))->a1, t3, l1));
			R = ((t2)==((T6)(GE_int32(0))));
		}
	}
	return R;
}

/* STRING_8.str_strict_cmp */
T6 T17f21(T0* C, T0* a1, T0* a2, T6 a3)
{
	T6 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T2 t2;
	t1 = ((l1)==(a3));
	while (!(t1)) {
		t2 = (((T15*)(GE_void(a1)))->z2[l1]);
		l2 = ((T6)(t2));
		t2 = (((T15*)(GE_void(a2)))->z2[l1]);
		l3 = ((T6)(t2));
		t1 = ((l2)!=(l3));
		if (t1) {
			R = ((T6)((l2)-(l3)));
			l1 = ((T6)((a3)-((T6)(GE_int32(1)))));
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(a3));
	}
	return R;
}

T0* GE_ma902(T6 c, ...)
{
	T0* R;
	T0* t1;
	t1 = (T0*)GE_alloc(sizeof(T901)+c*sizeof(T0*));
	((T0*)(t1))->id = 901;
	((T901*)(t1))->z1 = c;
	if (c!=0) {
		va_list v;
		T6 n = c;
		T0* *i = ((T901*)(t1))->z2;
		va_start(v, c);
		while (n--) {
			*(i++) = va_arg(v, T0*);
		}
		va_end(v);
	}
	R = (T0*)GE_alloc(sizeof(T902));
	((T0*)(R))->id = 902;
	((T902*)(R))->a1 = t1;
	((T902*)(R))->a2 = 1;
	((T902*)(R))->a3 = (T6)c;
	return R;
}

T0* GE_ma86(T6 c, ...)
{
	T0* R;
	T0* t1;
	t1 = (T0*)GE_alloc(sizeof(T85)+c*sizeof(T0*));
	((T0*)(t1))->id = 85;
	((T85*)(t1))->z1 = c;
	if (c!=0) {
		va_list v;
		T6 n = c;
		T0* *i = ((T85*)(t1))->z2;
		va_start(v, c);
		while (n--) {
			*(i++) = va_arg(v, T0*);
		}
		va_end(v);
	}
	R = (T0*)GE_alloc(sizeof(T86));
	((T0*)(R))->id = 86;
	((T86*)(R))->a1 = t1;
	((T86*)(R))->a2 = 1;
	((T86*)(R))->a3 = (T6)c;
	return R;
}

T0* GE_ma323(T6 c, ...)
{
	T0* R;
	T0* t1;
	t1 = (T0*)GE_alloc(sizeof(T117)+c*sizeof(T6));
	((T0*)(t1))->id = 117;
	((T117*)(t1))->z1 = c;
	if (c!=0) {
		va_list v;
		T6 n = c;
		T6 *i = ((T117*)(t1))->z2;
		va_start(v, c);
		while (n--) {
			*(i++) = va_arg(v, T6);
		}
		va_end(v);
	}
	R = (T0*)GE_alloc(sizeof(T323));
	((T0*)(R))->id = 323;
	((T323*)(R))->a1 = t1;
	((T323*)(R))->a2 = 1;
	((T323*)(R))->a3 = (T6)c;
	return R;
}

T0* GE_ma959(T6 c, ...)
{
	T0* R;
	T0* t1;
	t1 = (T0*)GE_alloc(sizeof(T639)+c*sizeof(T0*));
	((T0*)(t1))->id = 639;
	((T639*)(t1))->z1 = c;
	if (c!=0) {
		va_list v;
		T6 n = c;
		T0* *i = ((T639*)(t1))->z2;
		va_start(v, c);
		while (n--) {
			*(i++) = va_arg(v, T0*);
		}
		va_end(v);
	}
	R = (T0*)GE_alloc(sizeof(T959));
	((T0*)(R))->id = 959;
	((T959*)(R))->a1 = t1;
	((T959*)(R))->a2 = 1;
	((T959*)(R))->a3 = (T6)c;
	return R;
}

T0* GE_ma347(T6 c, ...)
{
	T0* R;
	T0* t1;
	t1 = (T0*)GE_alloc(sizeof(T346)+c*sizeof(T0*));
	((T0*)(t1))->id = 346;
	((T346*)(t1))->z1 = c;
	if (c!=0) {
		va_list v;
		T6 n = c;
		T0* *i = ((T346*)(t1))->z2;
		va_start(v, c);
		while (n--) {
			*(i++) = va_arg(v, T0*);
		}
		va_end(v);
	}
	R = (T0*)GE_alloc(sizeof(T347));
	((T0*)(R))->id = 347;
	((T347*)(R))->a1 = t1;
	((T347*)(R))->a2 = 1;
	((T347*)(R))->a3 = (T6)c;
	return R;
}

T0* ge408ov9304;
T0* ge412ov2926;
T0* ge351ov25311;
T0* ge418ov10090;
T0* ge410ov9304;
T0* ge956ov7314;
T0* ge956ov7319;
T0* ge385ov1844;
T0* ge1155ov17101;
T0* ge1155ov17086;
T0* ge1155ov17079;
T0* ge1155ov17064;
T0* ge1155ov17089;
T0* ge1155ov17082;
T0* ge1155ov17090;
T0* ge1155ov17099;
T0* ge1155ov17092;
T0* ge1155ov17088;
T0* ge1155ov17076;
T0* ge1155ov17077;
T0* ge1155ov17091;
T0* ge1155ov17078;
T0* ge1155ov17065;
T0* ge1155ov17066;
T0* ge1155ov17067;
T0* ge1155ov17073;
T0* ge1155ov17075;
T0* ge1155ov17070;
T0* ge1155ov17095;
T0* ge1155ov17094;
T0* ge1155ov17071;
T0* ge1155ov17072;
T0* ge1155ov17069;
T0* ge1155ov17068;
T0* ge1151ov16859;
T0* ge956ov7316;
T0* ge956ov7318;
T0* ge956ov7210;
T0* ge956ov7240;
T0* ge956ov7214;
T0* ge956ov7291;
T0* ge774ov14086;
T0* ge774ov14049;
T0* ge774ov13985;
T0* ge774ov14171;
T0* ge956ov7290;
T0* ge956ov7245;
T0* ge956ov7247;
T0* ge956ov7300;
T0* ge956ov7263;
T0* ge956ov7257;
T0* ge956ov7205;
T0* ge956ov7286;
T0* ge956ov7255;
T0* ge774ov14066;
T0* ge774ov14002;
T0* ge951ov24271;
T0* ge951ov24270;
T0* ge951ov24269;
T0* ge774ov14145;
T0* ge956ov7284;
T0* ge956ov7248;
T0* ge956ov7242;
T0* ge956ov7285;
T0* ge956ov7219;
T0* ge956ov7241;
T0* ge956ov7292;
T0* ge956ov7311;
T0* ge956ov7259;
T0* ge956ov7261;
T0* ge956ov7260;
T0* ge956ov7304;
T0* ge956ov7207;
T0* ge956ov7262;
T0* ge956ov7289;
T0* ge956ov7246;
T0* ge956ov7288;
T0* ge956ov7252;
T0* ge956ov7301;
T0* ge956ov7299;
T0* ge956ov7250;
T0* ge774ov14148;
T0* ge956ov7272;
T0* ge956ov7270;
T0* ge956ov7256;
T0* ge956ov7204;
T0* ge956ov7206;
T0* ge956ov7209;
T0* ge956ov7278;
T0* ge956ov7251;
T0* ge956ov7302;
T0* ge956ov7307;
T0* ge956ov7271;
T0* ge956ov7279;
T0* ge956ov7211;
T0* ge956ov7264;
T0* ge956ov7258;
T0* ge956ov7208;
T0* ge956ov7244;
T0* ge956ov7235;
T0* ge956ov7234;
T0* ge956ov7227;
T0* ge956ov7226;
T0* ge956ov7225;
T0* ge956ov7220;
T0* ge956ov7215;
T0* ge956ov7213;
T0* ge956ov7277;
T0* ge956ov7265;
T0* ge956ov7253;
T0* ge956ov7298;
T0* ge774ov14081;
T0* ge774ov14024;
T0* ge956ov7243;
T0* ge956ov7315;
T0* ge956ov7212;
T0* ge956ov7308;
T0* ge956ov7303;
T0* ge956ov7297;
T0* ge956ov7237;
T0* ge956ov7236;
T0* ge956ov7228;
T0* ge956ov7232;
T0* ge956ov7231;
T0* ge956ov7230;
T0* ge956ov7229;
T0* ge956ov7224;
T0* ge956ov7223;
T0* ge956ov7222;
T0* ge956ov7221;
T0* ge956ov7217;
T0* ge956ov7216;
T0* ge956ov7218;
T0* ge774ov13993;
T0* ge774ov14014;
T0* ge774ov14004;
T0* ge774ov13997;
T0* ge774ov14027;
T0* ge774ov13990;
T0* ge774ov14167;
T0* ge954ov24259;
T0* ge954ov24253;
T0* ge954ov24247;
T0* ge954ov24255;
T0* ge954ov24249;
T0* ge954ov24243;
T0* ge954ov24258;
T0* ge954ov24252;
T0* ge954ov24246;
T0* ge954ov24260;
T0* ge954ov24254;
T0* ge954ov24248;
T0* ge774ov14061;
T0* ge954ov24257;
T0* ge954ov24251;
T0* ge954ov24245;
T0* ge774ov14055;
T0* ge774ov14134;
T0* ge774ov14100;
T0* ge774ov14143;
T0* ge774ov14089;
T0* ge774ov14059;
T0* ge955ov25133;
T0* ge955ov24891;
T0* ge955ov24755;
T0* ge955ov25131;
T0* ge955ov24889;
T0* ge955ov24753;
T0* ge955ov25132;
T0* ge955ov24890;
T0* ge955ov24754;
T0* ge774ov14030;
T0* ge954ov24256;
T0* ge954ov24250;
T0* ge954ov24244;
T0* ge947ov26476;
T0* ge947ov26474;
T0* ge947ov26472;
T0* ge1079ov5043;
T0* ge946ov25186;
T0* ge946ov25182;
T0* ge946ov25178;
T0* ge1002ov19211;
T0* ge386ov9357;
T0* ge584ov12094;
T0* ge584ov12095;
T0* ge946ov25187;
T0* ge946ov25183;
T0* ge946ov25179;
T0* ge953ov25195;
T0* ge953ov25194;
T0* ge955ov25088;
T0* ge955ov24862;
T0* ge955ov24710;
T0* ge955ov25090;
T0* ge955ov24712;
T0* ge955ov25083;
T0* ge955ov24705;
T0* ge955ov25086;
T0* ge955ov24708;
T0* ge955ov25082;
T0* ge955ov24704;
T0* ge955ov25081;
T0* ge955ov24703;
T0* ge774ov14161;
T0* ge774ov14028;
T0* ge774ov14254;
T0* ge774ov14255;
T0* ge774ov14256;
T0* ge774ov14257;
T0* ge774ov14258;
T0* ge774ov14259;
T0* ge774ov14260;
T0* ge774ov14261;
T0* ge774ov14262;
T0* ge774ov14263;
T0* ge774ov14264;
T0* ge774ov14265;
T0* ge774ov14266;
T0* ge774ov14267;
T0* ge774ov14268;
T0* ge774ov14269;
T0* ge774ov14270;
T0* ge774ov14271;
T0* ge774ov14272;
T0* ge774ov14273;
T0* ge774ov14274;
T0* ge774ov14275;
T0* ge774ov14276;
T0* ge774ov14277;
T0* ge774ov14319;
T0* ge774ov14320;
T0* ge774ov14321;
T0* ge774ov13986;
T0* ge774ov13987;
T0* ge774ov13988;
T0* ge774ov13989;
T0* ge774ov13991;
T0* ge774ov13992;
T0* ge774ov13994;
T0* ge774ov13995;
T0* ge774ov13996;
T0* ge774ov13998;
T0* ge774ov13999;
T0* ge774ov14000;
T0* ge774ov14001;
T0* ge774ov14003;
T0* ge774ov14005;
T0* ge774ov14006;
T0* ge774ov14007;
T0* ge774ov14008;
T0* ge774ov14009;
T0* ge774ov14010;
T0* ge774ov14011;
T0* ge774ov14012;
T0* ge774ov14013;
T0* ge774ov14015;
T0* ge774ov14016;
T0* ge774ov14017;
T0* ge774ov14018;
T0* ge774ov14019;
T0* ge774ov14020;
T0* ge774ov14021;
T0* ge774ov14022;
T0* ge774ov14023;
T0* ge774ov14025;
T0* ge774ov14026;
T0* ge774ov14029;
T0* ge774ov14031;
T0* ge774ov14032;
T0* ge774ov14037;
T0* ge774ov14038;
T0* ge774ov14039;
T0* ge774ov14040;
T0* ge774ov14033;
T0* ge774ov14034;
T0* ge774ov14035;
T0* ge774ov14036;
T0* ge774ov14041;
T0* ge774ov14042;
T0* ge774ov14043;
T0* ge774ov14044;
T0* ge774ov14045;
T0* ge774ov14046;
T0* ge774ov14047;
T0* ge774ov14048;
T0* ge774ov14050;
T0* ge774ov14051;
T0* ge774ov14052;
T0* ge774ov14053;
T0* ge774ov14054;
T0* ge774ov14056;
T0* ge774ov14057;
T0* ge774ov14058;
T0* ge774ov14060;
T0* ge774ov14062;
T0* ge774ov14063;
T0* ge774ov14064;
T0* ge774ov14065;
T0* ge774ov14067;
T0* ge774ov14068;
T0* ge774ov14069;
T0* ge774ov14070;
T0* ge774ov14071;
T0* ge774ov14072;
T0* ge774ov14073;
T0* ge774ov14074;
T0* ge774ov14075;
T0* ge774ov14076;
T0* ge774ov14077;
T0* ge774ov14078;
T0* ge774ov14079;
T0* ge774ov14080;
T0* ge774ov14082;
T0* ge774ov14083;
T0* ge774ov14084;
T0* ge774ov14085;
T0* ge774ov14087;
T0* ge774ov14088;
T0* ge774ov14090;
T0* ge774ov14091;
T0* ge774ov14092;
T0* ge774ov14093;
T0* ge774ov14094;
T0* ge774ov14095;
T0* ge774ov14096;
T0* ge774ov14097;
T0* ge774ov14098;
T0* ge774ov14099;
T0* ge774ov14101;
T0* ge774ov14102;
T0* ge774ov14103;
T0* ge774ov14104;
T0* ge774ov14105;
T0* ge774ov14106;
T0* ge774ov14107;
T0* ge774ov14108;
T0* ge774ov14109;
T0* ge774ov14110;
T0* ge774ov14111;
T0* ge774ov14112;
T0* ge774ov14113;
T0* ge774ov14114;
T0* ge774ov14115;
T0* ge774ov14116;
T0* ge774ov14117;
T0* ge774ov14118;
T0* ge774ov14119;
T0* ge774ov14120;
T0* ge774ov14121;
T0* ge774ov14122;
T0* ge774ov14123;
T0* ge774ov14124;
T0* ge774ov14125;
T0* ge774ov14126;
T0* ge774ov14127;
T0* ge774ov14128;
T0* ge774ov14129;
T0* ge774ov14130;
T0* ge774ov14131;
T0* ge774ov14132;
T0* ge774ov14133;
T0* ge774ov14135;
T0* ge774ov14136;
T0* ge774ov14137;
T0* ge774ov14138;
T0* ge774ov14139;
T0* ge774ov14140;
T0* ge774ov14141;
T0* ge774ov14142;
T0* ge774ov14144;
T0* ge774ov14146;
T0* ge774ov14147;
T0* ge774ov14149;
T0* ge774ov14150;
T0* ge774ov14151;
T0* ge774ov14152;
T0* ge774ov14153;
T0* ge774ov14154;
T0* ge774ov14155;
T0* ge774ov14157;
T0* ge774ov14158;
T0* ge774ov14159;
T0* ge774ov14160;
T0* ge774ov14162;
T0* ge774ov14163;
T0* ge774ov14164;
T0* ge774ov14165;
T0* ge774ov14166;
T0* ge774ov14168;
T0* ge774ov14169;
T0* ge774ov14170;
T0* ge774ov14172;
T0* ge774ov14173;
T0* ge774ov14174;
T0* ge774ov14175;
T0* ge774ov14176;
T0* ge774ov14177;
T0* ge774ov14178;
T0* ge774ov14179;
T0* ge774ov14180;
T0* ge774ov14181;
T0* ge774ov14182;
T0* ge774ov14183;
T0* ge774ov14184;
T0* ge774ov14185;
T0* ge774ov14186;
T0* ge774ov14187;
T0* ge774ov14188;
T0* ge774ov14189;
T0* ge774ov14190;
T0* ge774ov14191;
T0* ge774ov14192;
T0* ge774ov14193;
T0* ge774ov14194;
T0* ge774ov14195;
T0* ge774ov14197;
T0* ge774ov14198;
T0* ge774ov14199;
T0* ge774ov14200;
T0* ge774ov14201;
T0* ge774ov14202;
T0* ge774ov14203;
T0* ge774ov14204;
T0* ge774ov14205;
T0* ge774ov14206;
T0* ge774ov14207;
T0* ge774ov14208;
T0* ge774ov14209;
T0* ge774ov14210;
T0* ge774ov14211;
T0* ge774ov14212;
T0* ge774ov14213;
T0* ge774ov14214;
T0* ge774ov14215;
T0* ge774ov14216;
T0* ge774ov14217;
T0* ge774ov14218;
T0* ge774ov14219;
T0* ge774ov14220;
T0* ge774ov14221;
T0* ge774ov14222;
T0* ge774ov14223;
T0* ge774ov14224;
T0* ge774ov14225;
T0* ge774ov14226;
T0* ge774ov14227;
T0* ge774ov14228;
T0* ge774ov14229;
T0* ge774ov14230;
T0* ge774ov14231;
T0* ge774ov14232;
T0* ge774ov14233;
T0* ge774ov14234;
T0* ge774ov14235;
T0* ge774ov14236;
T0* ge774ov14237;
T0* ge774ov14238;
T0* ge774ov14239;
T0* ge774ov14240;
T0* ge774ov14241;
T0* ge774ov14242;
T0* ge774ov14243;
T0* ge774ov14244;
T0* ge774ov14245;
T0* ge774ov14246;
T0* ge774ov14247;
T0* ge774ov14248;
T0* ge774ov14249;
T0* ge774ov14250;
T0* ge774ov14251;
T0* ge774ov14252;
T0* ge287ov12020;
T0* ge383ov20886;
T0* ge383ov20883;
T0* ge967ov15826;
T0* ge381ov20782;
T0* ge955ov25099;
T0* ge955ov24865;
T0* ge955ov24721;
T0* ge955ov25098;
T0* ge955ov24720;
T0* ge955ov25130;
T0* ge955ov24888;
T0* ge955ov24752;
T0* ge955ov25129;
T0* ge955ov24887;
T0* ge955ov24751;
T0* ge774ov14196;
T0* ge774ov14156;
T0* ge955ov25135;
T0* ge955ov24893;
T0* ge955ov24757;
T0* ge955ov25134;
T0* ge955ov24892;
T0* ge955ov24756;
T0* ge1269ov10732;
T0* ge1269ov10731;
T0* ge1012ov4339;
T0* ge1012ov4340;
T0* ge1012ov4341;
T0* ge1012ov4342;
T0* ge1012ov4343;
T0* ge1012ov4344;
T0* ge1012ov4345;
T0* ge1012ov4346;
T0* ge1012ov4347;
T0* ge1012ov4348;
T0* ge1012ov4349;
T0* ge1012ov4350;
T0* ge1012ov4351;
T0* ge1012ov4352;
T0* ge1012ov4353;
T0* ge1012ov4354;
T0* ge1012ov4355;
T0* ge1012ov4356;
T0* ge1012ov4357;
T0* ge1012ov4358;
T0* ge1012ov4359;
T0* ge1012ov4360;
T0* ge1012ov4361;
T0* ge1012ov4362;
T0* ge1012ov4363;
T0* ge1012ov4364;
T0* ge1012ov4365;
T0* ge1012ov4366;
T0* ge1012ov4367;
T0* ge1012ov4368;
T0* ge1012ov4369;
T0* ge1012ov4370;
T0* ge1012ov4371;
T0* ge1012ov4372;
T0* ge1012ov4373;
T0* ge1012ov4374;
T0* ge1012ov4375;
T0* ge1012ov4376;
T0* ge1012ov4377;
T0* ge1012ov4378;
T0* ge1012ov4379;
T0* ge1012ov4380;
T0* ge1012ov4381;
T0* ge1012ov4382;
T0* ge1012ov4383;
T0* ge1012ov4384;
T0* ge1012ov4385;
T0* ge1012ov4386;
T0* ge1012ov4387;
T0* ge1012ov4388;
T0* ge1012ov4389;
T0* ge1012ov4390;
T0* ge1012ov4391;
T0* ge1012ov4392;
T0* ge1012ov4393;
T0* ge1012ov4394;
T0* ge1012ov4395;
T0* ge1012ov4396;
T0* ge1012ov4397;
T0* ge1012ov4398;
T0* ge1012ov4399;
T0* ge1012ov4400;
T0* ge1012ov4401;
T0* ge1012ov4402;
T0* ge1012ov4403;
T0* ge1012ov4404;
T0* ge1012ov4405;
T0* ge1012ov4406;
T0* ge1012ov4407;
T0* ge1012ov4408;
T0* ge1012ov4409;
T0* ge1012ov4410;
T0* ge1012ov4411;
T0* ge1012ov4412;
T0* ge1012ov4413;
T0* ge1012ov4414;
T0* ge1012ov4415;
T0* ge1012ov4416;
T0* ge1012ov4417;
T0* ge1012ov4418;
T0* ge1012ov4419;
T0* ge1045ov4306;
T0* ge1012ov4525;
T0* ge1012ov4512;
T0* ge1012ov4517;
T0* ge1012ov4518;
T0* ge1012ov4519;
T0* ge1012ov4506;
T0* ge1012ov4523;
T0* ge1012ov4527;
T0* ge1012ov4510;
T0* ge1012ov4502;
T0* ge1012ov4513;
T0* ge1012ov4511;
T0* ge1012ov4508;
T0* ge1012ov4522;
T0* ge1012ov4521;
T0* ge1012ov4504;
T0* ge1012ov4526;
T0* ge1012ov4503;
T0* ge1012ov4509;
T0* ge1012ov4524;
T0* ge1012ov4516;
T0* ge1012ov4505;
T0* ge1012ov4520;
T0* ge1012ov4514;
T0* ge1012ov4507;
T0* ge1012ov4529;
T0* ge1012ov4515;
T0* ge1045ov4305;
T0* ge1045ov4304;
T0* ge1008ov18339;
T0* ge1276ov11269;
T0* ge1276ov11231;
T0* ge1276ov11229;
T0* ge1276ov11270;
T0* ge1276ov11242;
T0* ge1276ov11241;
T0* ge1276ov11252;
T0* ge1276ov11246;
T0* ge1276ov11245;
T0* ge1276ov11244;
T0* ge1276ov11250;
T0* ge1276ov11249;
T0* ge1276ov11251;
T0* ge1276ov11228;
T0* ge1276ov11254;
T0* ge1276ov11263;
T0* ge1279ov11084;
T0* ge1279ov11082;
T0* ge1279ov11083;
T0* ge1276ov11264;
T0* ge1276ov11265;
T0* ge1276ov11268;
T0* ge1276ov11266;
T0* ge1276ov11267;
T0* ge1276ov11261;
T0* ge1272ov20448;
T0* ge1272ov20449;
T0* ge1276ov11234;
T0* ge1276ov11257;
T0* ge1276ov11277;
T0* ge1276ov11278;
T0* ge1276ov11279;
T0* ge1276ov11272;
T0* ge1276ov11255;
T0* ge1276ov11256;
T0* ge1276ov11258;
T0* ge1276ov11262;
T0* ge62ov3993;
T0* ge62ov4000;
T0* ge60ov4241;
T0* ge321ov1718;
T0* ge59ov3476;
T0* ge62ov3996;
T0* ge62ov4003;
T0* ge62ov3994;
T0* ge62ov4001;
T0* ge62ov3995;
T0* ge62ov4002;
T0* ge62ov3997;
T0* ge62ov4004;
T0* ge62ov3998;
T0* ge62ov4005;
T0* ge59ov3471;
T0* ge59ov3470;
T0* ge59ov3478;
T0* ge59ov3477;
T0* ge1283ov20158;
T0* ge1283ov20159;
T0* ge1274ov25319;
T0* ge1274ov25321;
T0* ge955ov25113;
T0* ge955ov24873;
T0* ge955ov24735;
T0* ge955ov25112;
T0* ge955ov24734;
T0* ge955ov24936;
T0* ge955ov24785;
T0* ge955ov24558;
T0* ge955ov25110;
T0* ge955ov24872;
T0* ge955ov24732;
T0* ge955ov25109;
T0* ge955ov24731;
T0* ge955ov24935;
T0* ge955ov24784;
T0* ge955ov24557;
T0* ge955ov24903;
T0* ge955ov24770;
T0* ge955ov24525;
T0* ge955ov24902;
T0* ge955ov24524;
T0* ge955ov25115;
T0* ge955ov24875;
T0* ge955ov24737;
T0* ge955ov25140;
T0* ge955ov24896;
T0* ge955ov24762;
T0* ge955ov25141;
T0* ge955ov24763;
T0* ge955ov25138;
T0* ge955ov24895;
T0* ge955ov24760;
T0* ge955ov25139;
T0* ge955ov24761;
T0* ge955ov25031;
T0* ge955ov24830;
T0* ge955ov24653;
T0* ge955ov25144;
T0* ge955ov24898;
T0* ge955ov24766;
T0* ge955ov25145;
T0* ge955ov24767;
T0* ge955ov25142;
T0* ge955ov24897;
T0* ge955ov24764;
T0* ge955ov25143;
T0* ge955ov24765;
T0* ge955ov25029;
T0* ge955ov24829;
T0* ge955ov24651;
T0* ge955ov24967;
T0* ge955ov24801;
T0* ge955ov24589;
T0* ge955ov24969;
T0* ge955ov24591;
T0* ge955ov24905;
T0* ge955ov24527;
T0* ge955ov24904;
T0* ge955ov24526;
T0* ge955ov25117;
T0* ge955ov24876;
T0* ge955ov24739;
T0* ge955ov25111;
T0* ge955ov24733;
T0* ge955ov25116;
T0* ge955ov24738;
T0* ge955ov25030;
T0* ge955ov24652;
T0* ge955ov24965;
T0* ge955ov24587;
T0* ge955ov24971;
T0* ge955ov24593;
T0* ge955ov24968;
T0* ge955ov24590;
T0* ge955ov24966;
T0* ge955ov24588;
T0* ge955ov25011;
T0* ge955ov24812;
T0* ge955ov24633;
T0* ge955ov24921;
T0* ge955ov24778;
T0* ge955ov24543;
T0* ge955ov24919;
T0* ge955ov24541;
T0* ge955ov24913;
T0* ge955ov24777;
T0* ge955ov24535;
T0* ge955ov24912;
T0* ge955ov24776;
T0* ge955ov24534;
T0* ge955ov25124;
T0* ge955ov24882;
T0* ge955ov24746;
T0* ge955ov25128;
T0* ge955ov24886;
T0* ge955ov24750;
T0* ge955ov25103;
T0* ge955ov24868;
T0* ge955ov24725;
T0* ge955ov25127;
T0* ge955ov24885;
T0* ge955ov24749;
T0* ge955ov25010;
T0* ge955ov24820;
T0* ge955ov24632;
T0* ge955ov25012;
T0* ge955ov24634;
T0* ge955ov25118;
T0* ge955ov24877;
T0* ge955ov24740;
T0* ge955ov25105;
T0* ge955ov24869;
T0* ge955ov24727;
T0* ge955ov25106;
T0* ge955ov24728;
T0* ge955ov25009;
T0* ge955ov24819;
T0* ge955ov24631;
T0* ge955ov25005;
T0* ge955ov24818;
T0* ge955ov24627;
T0* ge955ov25006;
T0* ge955ov24628;
T0* ge955ov24997;
T0* ge955ov24815;
T0* ge955ov24619;
T0* ge955ov25008;
T0* ge955ov24630;
T0* ge955ov25007;
T0* ge955ov24629;
T0* ge955ov25004;
T0* ge955ov24817;
T0* ge955ov24626;
T0* ge955ov24976;
T0* ge955ov24805;
T0* ge955ov24598;
T0* ge955ov24975;
T0* ge955ov24804;
T0* ge955ov24597;
T0* ge955ov24974;
T0* ge955ov24803;
T0* ge955ov24596;
T0* ge955ov24973;
T0* ge955ov24802;
T0* ge955ov24595;
T0* ge955ov24972;
T0* ge955ov24594;
T0* ge955ov24911;
T0* ge955ov24775;
T0* ge955ov24533;
T0* ge955ov24909;
T0* ge955ov24774;
T0* ge955ov24531;
T0* ge955ov24939;
T0* ge955ov24786;
T0* ge955ov24561;
T0* ge955ov24940;
T0* ge955ov24562;
T0* ge955ov24923;
T0* ge955ov24779;
T0* ge955ov24545;
T0* ge955ov24922;
T0* ge955ov24544;
T0* ge955ov24924;
T0* ge955ov24546;
T0* ge955ov24948;
T0* ge955ov24790;
T0* ge955ov24570;
T0* ge955ov24937;
T0* ge955ov24559;
T0* ge955ov24938;
T0* ge955ov24560;
T0* ge955ov24982;
T0* ge955ov24806;
T0* ge955ov24604;
T0* ge955ov24979;
T0* ge955ov24601;
T0* ge955ov24986;
T0* ge955ov24807;
T0* ge955ov24608;
T0* ge955ov24983;
T0* ge955ov24605;
T0* ge955ov24980;
T0* ge955ov24602;
T0* ge955ov24987;
T0* ge955ov24609;
T0* ge955ov24984;
T0* ge955ov24606;
T0* ge955ov24981;
T0* ge955ov24603;
T0* ge955ov24988;
T0* ge955ov24610;
T0* ge955ov25095;
T0* ge955ov24864;
T0* ge955ov24717;
T0* ge955ov24993;
T0* ge955ov24811;
T0* ge955ov24615;
T0* ge955ov24992;
T0* ge955ov24614;
T0* ge955ov24978;
T0* ge955ov24600;
T0* ge955ov24977;
T0* ge955ov24599;
T0* ge955ov24985;
T0* ge955ov24607;
T0* ge955ov24991;
T0* ge955ov24810;
T0* ge955ov24613;
T0* ge955ov24990;
T0* ge955ov24809;
T0* ge955ov24612;
T0* ge955ov24989;
T0* ge955ov24808;
T0* ge955ov24611;
T0* ge955ov25073;
T0* ge955ov24857;
T0* ge955ov24695;
T0* ge955ov25071;
T0* ge955ov24856;
T0* ge955ov24693;
T0* ge955ov24926;
T0* ge955ov24780;
T0* ge955ov24548;
T0* ge955ov25039;
T0* ge955ov24835;
T0* ge955ov24661;
T0* ge955ov24925;
T0* ge955ov24547;
T0* ge955ov25038;
T0* ge955ov24660;
T0* ge955ov25037;
T0* ge955ov24834;
T0* ge955ov24659;
T0* ge955ov24956;
T0* ge955ov24795;
T0* ge955ov24578;
T0* ge955ov24954;
T0* ge955ov24793;
T0* ge955ov24576;
T0* ge955ov24953;
T0* ge955ov24575;
T0* ge955ov24960;
T0* ge955ov24797;
T0* ge955ov24582;
T0* ge955ov24959;
T0* ge955ov24581;
T0* ge955ov24961;
T0* ge955ov24798;
T0* ge955ov24583;
T0* ge955ov25021;
T0* ge955ov24824;
T0* ge955ov24643;
T0* ge955ov25020;
T0* ge955ov24642;
T0* ge955ov25019;
T0* ge955ov24641;
T0* ge955ov25018;
T0* ge955ov24640;
T0* ge955ov25022;
T0* ge955ov24825;
T0* ge955ov24644;
T0* ge955ov24942;
T0* ge955ov24787;
T0* ge955ov24564;
T0* ge955ov24941;
T0* ge955ov24563;
T0* ge955ov24947;
T0* ge955ov24569;
T0* ge955ov24944;
T0* ge955ov24788;
T0* ge955ov24566;
T0* ge955ov24945;
T0* ge955ov24567;
T0* ge955ov25036;
T0* ge955ov24658;
T0* ge955ov24943;
T0* ge955ov24565;
T0* ge955ov24957;
T0* ge955ov24579;
T0* ge955ov24946;
T0* ge955ov24789;
T0* ge955ov24568;
T0* ge955ov24951;
T0* ge955ov24791;
T0* ge955ov24573;
T0* ge955ov24949;
T0* ge955ov24571;
T0* ge955ov24950;
T0* ge955ov24572;
T0* ge955ov25044;
T0* ge955ov24839;
T0* ge955ov24666;
T0* ge955ov25040;
T0* ge955ov24836;
T0* ge955ov24662;
T0* ge955ov25042;
T0* ge955ov24837;
T0* ge955ov24664;
T0* ge955ov24952;
T0* ge955ov24792;
T0* ge955ov24574;
T0* ge955ov24958;
T0* ge955ov24796;
T0* ge955ov24580;
T0* ge955ov25033;
T0* ge955ov24832;
T0* ge955ov24655;
T0* ge955ov25016;
T0* ge955ov24822;
T0* ge955ov24638;
T0* ge955ov25043;
T0* ge955ov24838;
T0* ge955ov24665;
T0* ge955ov24955;
T0* ge955ov24794;
T0* ge955ov24577;
T0* ge955ov24962;
T0* ge955ov24799;
T0* ge955ov24584;
T0* ge955ov25034;
T0* ge955ov24833;
T0* ge955ov24656;
T0* ge955ov25032;
T0* ge955ov24831;
T0* ge955ov24654;
T0* ge955ov25017;
T0* ge955ov24823;
T0* ge955ov24639;
T0* ge955ov25035;
T0* ge955ov24657;
T0* ge955ov25136;
T0* ge955ov24894;
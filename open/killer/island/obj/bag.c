inherit ITEM;
void create()
{
object obj;
set_name("����", ({ "bag" }) );
set_weight(500);
set_max_encumbrance(8000);
if( clonep() )
set_default_object(__FILE__);
else {
set("unit", "��");
set("long", "����һ��Ѱ���Ĳ�������������װһЩ���\n");
set("value", 1);
add_object("/u/u/urd/obj/pecloth");
}
setup();
}

int is_container() { return 1; }

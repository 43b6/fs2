//ʧ������....����study
inherit ITEM;
void create()
{
	set_name("ʧ������", ({ "book" }));
	set_weight(100);
	if( clonep() )
	  set_default_object(__FILE__);
	else 
	{
	  set("unit", "��");
	  set("long","�����ʧ�������, ��ϧ����ȫ��������\n");
          set("value", 0);
	  set("material", "paper");
	}
}
int valid_learn(object me)
{
	return -1;
}                          



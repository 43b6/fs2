// һ���ķ�����...ѧһ���ķ��е� exert ��ʽ������...���� study..:P 

inherit ITEM;

void create()
{
	set_name("һ���ķ�����", ({ "sunforce note","note" }));
	set_weight(100);
	if( clonep() )
	  set_default_object(__FILE__);
	else 
	{
	  set("unit", "��");
	  set("long","�������������Ѱ�ص�, ��ͷ������һ���ķ�������, ��ϧ����ȫ��������\n");
          set("value", 0);
	  set("material", "paper");
	  set("skill", ([
	  "name" : "sunforce",
	  "sen_cost" : 100,
          "max_skill": 1
	  ]) );
	}
}

int valid_learn(object me)
{
	return -1;
}                          
inherit ITEM;
void create()
{
set_name("��ʿɽ�ز�",({"herb"}));
set_weight(20);
if( clonep() )
set_default_object(__FILE__);
else {
  set("long","һ�겻�����۵��Ӳݣ����㲻���붪������\n");
  set("unit","��");
  set("no_sell",1);
  set("ʳ��", ([
                        "ʣ" : 1,       // ���ԳԼ���
                        "��Ӧ": 10,     // ÿһ������ӵ���
          ]) );
}
setup();
}
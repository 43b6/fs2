#include <ansi.h>
inherit EQUIP;
void create()
{
set_name("��ڤħ��ս��",({"ghost cloth","cloth"}) );
set_weight(5000);
if( clonep() )
set_default_object(__FILE__);
else{
set("meterial","silk");
set("unit","��");
set("value", 20000);
set("armor_type","cloth");
set("armor_prop/armor", 18);
set("armor_prop/dodge", 7);
set("armor_prop/parry", 7);
set("armor_prop/throwing", 4);
set("long","�����������еĺ����ܲ�����--�����ɡ����еĳ���ս��
�ഫ�������۷���Ҷ��ɱ�ĸ����书�������¸���Ҷ��ɱ\n");
}
setup();
}
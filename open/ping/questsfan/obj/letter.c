//����ͷ����------by dhk 2000.4.22
#include <ansi.h>
inherit ITEM;

void create()
{
    set_name("����ͷ����", ({ "leader_letter","letter" }) );
    set_weight(10);
 if( clonep() )
    set_default_object(__FILE__);
 else {
       set("long", "����һ�������ͷ���š�\n");
       set("unit", "��");
       set("value", 150);
       set("no_sell",1);
       set("no_auc",1);
       set("no_get",1);      
      }
    setup();
}


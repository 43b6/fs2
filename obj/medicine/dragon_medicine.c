// made by Daniel  .......������....
#include <ansi.h>
inherit COMBINED_ITEM;
void create()
{
set_name("����������",({"dragon pill","pill"}));
set("long","�����������ҽ�������Ƶ���,���ú����ǿ�ھ���������\n");
set("unit","��");
set("base_unit","��");
set("value",10000);
set("base_weight",100);
set("medicine_times",8);
     set_amount(1);
}
void init()
{
      if( this_player()==environment() )
          add_action("do_eat","eat");
}
int do_eat(string arg)
{
   object me;
    me = this_player();
if(!arg||arg!="dragon pill")return notify_fail("��Ҫ��ɶ?\n");
        message_vision(
  "$N�ó�һ��$n������ȥ��\n"
        ,me, this_object());
 me->apply_condition("strong",10);
 me->set_temp("strong",1);
 if((int)me->query_temp("strong")<2) {
 write("�����֮��ȫ����������һ�¡�\n"
      "�㷢���ھ��ƺ����Ӳ���...\n");
 write("��������������ã�������������ʳ�ã�����....!!\n");
 me->set("force_factor",29);
 me->set("enforceup",1);
       }else{
 message_vision(HIR
 "$NͻȻ������������һ���ʹ����Ѫ�����Ͽ��������\n"NOR, me);
 me->die();
 }
   add_amount(-1);
    return 1;
}



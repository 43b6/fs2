#include <ansi.h>
#include "/open/open.h"
inherit NPC;

void create()
{
        set("name","����");
        setup();
}
void heart_beat()
{
        if(!this_object()->is_fighting()){
      message_vision(HIY"$N��Ӱ����ģ������,����ʼ��ʧ��!\n"NOR,this_object());  
           destruct(this_object());}
::heart_beat();           
}

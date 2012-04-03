//castle by roger
inherit ROOM;
#include <ansi.h>
void create () {
set ("short", HIC"��ħ�ű����"NOR);
        set ("long","������Ƿ���˼�ǧ�����ħ�ű�,���߲߰�����֪�����˶��ٵ�
�ȷ�Ѫ��,�����ṹ�ϵ�������̵ġ�ħ�Ƶ��ܲ���ӳ�Źű����������,
����ʹ�˲�������������(door)���ɺ���ľ������,���Թ�����������
���ҡҷ����������,��˨�Ѿ���ʴ�ú����ܿ��ˡ���ϸһ���ƺ���մ
�Ű߰�Ѫ��...������һ��ľ��(plate)������������ƺ��쿴������...��
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([ /* sizeof() == 3 */
    "west" : __DIR__"a",      
      ]));


       set("item_desc", ([ /* sizeof() == 2 */
  "door" : "���ſ����������,�ƺ�Ҫ������ײ��(collide)���С�\n",

 "plate" :
"      ������Լ�ɼ�:
 ����...����..,..Ⱥ..ħ..����,��...��..�ӽ�..�Ա� 
 ��...�����...����..����..,����...һ��...�����ӳ�
 ����...��֮...��֮...�в���....�������
 
                             ��...��...��          

  ",]));

        set("objects",([ /* sizeof() == 1 */
   //__DIR__"mob" : 1,
      ]));

        setup();
}
void init()
{
        add_action("do_collide", "collide");
}

int do_collide(string str){

   object me;
        me = this_player();

        if(!str || str != "door"){
                return notify_fail("����ײ���\n");
                           return 1;
                                 }
        if(me->query("force",1) < 2000){
             
             message_vision("$N����ȫ������һײ,������������,�����Ʒ粻����\n",me);


                           return 1;
                                        }
        
            me->add("force",-2000);
            message_vision(HIY"$N����ȫ������һײ����¡һ����������Ա�ײ��!!\n",me);
            tell_object(me,HIR"\n��ľ�ȫ������,�������ѡ�\n"NOR);
            set("exits/enter",__DIR__"room1");
                  set_temp("have_open",1);
                  remove_call_out("do_closed");
                  call_out("do_closed",15);
                  return 1;

            
}
void do_closed()
{

        delete_temp("have_open");
        delete("exits/enter");
        tell_room(this_object(),"��������һ���ֹ�������\n");
}

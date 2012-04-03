// room7.c by roger
inherit ROOM;
#include <ansi.h>
void create () {
set ("short", "�ű���¥");
        set ("long","
ǽ���ϵ�������ɫ�Ĺ����ϸһ������\��\��\��\��\��\����\��\�ɵ�������
���\��\��\��\��\��\ֻ\��\����\��\��\��\��\��\��\͸\��\��\��\��\��\Ϣ������Ҳ���ź�
��ĵ�̺�����˲�������ض������������ܵ���ħ�ƺ�Ҳ�����������
����Ҳ�º͵Ķ࣬��һ�����տ�������¥�µ����й�֮���޲������㲻
�������Լ�������ħ�磿������ȴ��һ�ȴ��ţ�д��"HIW"���׻��ҡ���
"NOR);

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([ /* sizeof() == 1 */
            
        "west" : __DIR__"room43",   
            
      ]));
        set("objects",([ /* sizeof() == 1 */
   __DIR__"npc/tiger-guard.c" : 1,
      ]));

        setup();
}
void init()
{
        add_action("do_unlock", "unlock");
}

int do_unlock(string str){
   object me,obj;
   object key;
   string tigerkey;
   me = this_player();
   
        if(!str || str != "door with tigerkey"){
                return notify_fail("���뿪ʲô��\n");
                return 0;
                                 }
        else{
        if(present("tigerkey",me)){
          if(present("guard",environment(me))){
           message_vision(HIY"�׻�����������һ��\n"NOR,me);
           return 0;
                                            }              
        message_vision(HIC"$N�ð׻�֮Կ�򿪰׻�����\n"NOR,me);                                
            set("exits/enter",__DIR__"room45");
                  set_temp("have_open",1);
        if (!key) key = present("tigerkey", me);
        if (!key) key = present("tigerkey", environment(me));
        if (!key) key = find_object( resolve_path(me->query("cwd"), tigerkey) );
                  destruct(key);
                  remove_call_out("do_closed");
                  call_out("do_closed",15);
                  return 1;
                                  }
        else write("��û���ⶫ��\n");
           }
}
void do_closed()
{
        delete_temp("have_open");
        delete("exits/enter");
        tell_room(this_object(),"��������һ���ֹ�������\n");
}

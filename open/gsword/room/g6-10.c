#include <room.h>

 inherit ROOM;
 void receive_hit();
 int done=0;
 void create()
{
        set("short", "�ɽ��ɽ���");
        set("long", @LONG
��ǰ��һ��ټ���ɽ�����ſ��Ծ���դ����ס�����ں����ݵ�һƬ��
��ȫ����֪̽����˵�����Ĺ������գ�ʱ����������ҽе�������ʱ����
��Ũ���Ѫ��ζ�����㲻�����������ڵ�����и�����(level)��
 
LONG
        );

             
        set("item_desc",(["level":
 "���������������꣬�ƺ�����������դ���õģ������������(pull)������\n",
 ]));
                                        
       set("exits",([
                     "east":__DIR__"g6-9",
                     ]));
                    
           setup();
        }

void init()
{
add_action("pull_level","pull");
}

int pull_level(string str)
{
   if( done==1)
     return notify_fail("�����Ѿ�����\n");
   if(str!="level")
     {
         return notify_fail("��Ҫ��ʲô??\n");
         }
     write(" ����һ��������������\n
            դ�Ž���������.\n");
     write("\n");
    done=1;
    receive_hit();
    return 1;
 }
 
 void receive_hit()
 {
 object ob;
 object hitter;
 write("ͻȻһλ����Ю�����֮�ƴ������,���г����û������������������\n");
 message_vision(sprintf("���ߺȵ�:[1m�ô��ɽ�������,��!!![0m\n"),this_player());
 ob=new("/open/gsword/npc/guard");
 hitter=this_player();
 ob->move(environment(this_player()));
 ob->invocation(this_object());
 ob->kill_ob(hitter);
 set("exits",([
     "east":__DIR__"g6-9",
    "north":__DIR__"g6-11"
    ]));
  }
int valid_leave(object me,string dir)
{
  if (dir=="north" && present ("oldman", environment(me)))
      return notify_fail ("���ߵ�����˵��: �봳����,�����������ϵ���ѽ��ɡ�\n");
        return ::valid_leave(me, dir);
}     
     
     
     
        

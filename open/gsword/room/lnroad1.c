#include <room.h>

 inherit ROOM;
void receive_hit();
 void create()
{
        set("short", "�ɽ��ɽ���");
        set("long", @LONG
�����ɽ��ɵĽ���,���Ƿ�����ȥ,�����һ�����ʯƽ̨ûɶ����,
����Ҳ��ϡ��ƽ���ú�,����Ϊʲô������ɽ�����Ϊ����,�Ͻ���
�Ӽ��ÿͽӽ�,����Ҫ˵��������֮���Ļ�,���Ҳֻ���������һ
���ϰ����Ҫʮ�˲���Χ����ľ(Gaint tree)��!!


LONG
        );

        
        set("item_desc",(["Gaint tree":
 "����һ�ð�����Ĺ���,������������������,��������һ��,һ����ӡ(hand_print)Ƕ��
 ����,���Ǹ�����Ϊ,����֮��,�����Ҳ������ӡ����һ��(hit hand_print)����������ǰ
 ����λ����.\n",
 "hand_print" :
 "�����ӡ���������������,��ֱ���˷�����˼\n"
 ]));
                                        
       set("exits",([
                     "south": "/u/b/bigcat/room/rroad4.c"
                     ]));
                    
                    
           setup();
        }

void init()
{
add_action("hit_hand_print","hit");
}

int hit_hand_print(string str)
{
   if(str!="hand_print")
     {
         return 0;
         }
     write(" ����һ��������������,�㱾���ԵĽ�������,����ͻ����������\n
           ����������\n");
     write("\n");
    receive_hit();
    return 1;
 }
 
 void receive_hit()
 {
 object ob;
 object hitter;
 write("ͻȻһλ����Ю�����֮�ƴ������,���г����û������������������\n");
 message_vision(sprintf("���ߺȵ�:[1m�ô��ɽ�������,��!!![0m\n"),this_player());
 ob=new("/u/b/bigcat/mob/guard");
 hitter=this_player();
 ob->move(environment(this_player()));
 ob->invocation(this_object());
 ob->kill_ob(hitter);
 set("exits",([
"enter": "/u/b/bigcat/room/tree",
"south": "/u/b/bigcat/room/rroad4"
   ]));
  }
int valid_leave(object me,string dir)
{
  if (dir=="enter" && present ("oldman", environment(me)))
      return notify_fail ("���ߵ�����˵��: �봳����,�����������ϵ���ѽ��ɡ�\n");
        return ::valid_leave(me, dir);
}     

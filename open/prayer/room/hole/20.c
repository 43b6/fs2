///open/prayer/room/hole/20.c

#include <ansi.h>
inherit ROOM;
void create ()
{
  seteuid(getuid());    
  set ("short", "������");
  set ("long", @LONG
        �����ǰ��һ���ȳ��ޱȵ�Ѫ�أ����Ҵ��������а��!!Ѫ����
        ��һֻҰ�������﷭�����������£�������������������������
        ����ҧ������ģ���������ŷŠ�����(free)!!����������İ�
        ȫ���⣬�ɾ�û���˱�֤��.....
LONG);
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"18",
  "south" : __DIR__"19",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/kylin-statue" : 1,
]));

        set("evil",1);
        set("no_auc",1);
        set("no_transmit",1);
  setup();
}
void init()
{
 add_action("free_kylin","free");
 add_action("search_here", "search");
}

int search_here(string str)
{
    if( (this_player()->query("combat_exp",1) > 100000)  )
    {
    write("�㳶�˳�����֮��.���������ǿ���˳�ض��µ�.����Ѫ����������Ү!!\n");
      set("exits/down",__DIR__"21");
      call_out("do_close",10);
   }
    else
    {
    write("Ҳ�����㾭�鲻��,��ʲôҲû����...\n");
    }    
return 1;
}

void do_close()
{
        if(!query("exits/down"))
                return;
        delete("exits/down");
        tell_room(this_object(),"������Ѫ����������������·����\�ˡ�\n");
}

int free_kylin(string str)
{
  object ob,ob1;
  ob=this_player();
  if(!present("kylin",environment(ob)))
    return notify_fail("Ѫ���붼��������, ����Ҫ������??\n");
  if( str!="kylin")
    return notify_fail("��~~~~~~~~~~!!!!\n");
  message_vision("[36m���˾��������ϵ��������...[0m",ob);
  write("\n\n\n");
     ob1=present("kylin",this_object());
  destruct(ob1);
  call_out("msg1",3,ob);
  return 1;
}   

int msg1(object ob)
{
 message_vision("\n",ob);
 message_vision("Ѫ���뿪ʼ��Ѫ���о��ҵķ���....\n",ob);
  call_out("msg2",3,ob);
  return 1;
}

int msg2(object ob)
{
  message("mud","[33mѪ���뱻�ų�����........���С��ѽ!![0m\n",users());
  call_out("msg3",3,ob);
  return 1;
}

int msg3(object ob)
{
  new("/open/prayer/npc/kylin")->move("/open/gsword/room/su3");

  call_out("msg4",3,ob);
  return 1;
 }
int msg4(object ob)
{
  message("mud","[36mѪ������һ������\n

     [5m[33m"+ ob->query("name")+"[0m[36mЦ����\n\n


     �ǺǺǺ�....���ҰѠ��ų�����!!���Ҫ�������\n\n"NOR,users());
  
  return 1;
}                      

// Room: /open/gsword/room/wghouse.c
inherit ROOM;

void create ()
{
    set ("short", "�ɽ����ؽ���");
  set ("long", @LONG
�������ɽ�ʦ�ֵ���Ϊ���츣��loginûEQ��������ر𿪱ٵķ��� ,
���ŵ��϶�����EQ ,�㲻�����ĸ�л��ʦ�ֵܵ�����.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "down" :"/open/gsword/room/g5-1.c",
]));

  set("light_up", 1);
  set ( "no_transmit", 1 );
  set("no_clean_up",1);
set("no_fight",1);
  setup();
  call_other("/obj/board/swordsman_b2","????");
}

void init()
{
//  add_action("do_sword","gift");
  add_action("do_pass","pass");
  add_action("do_verify","verify");
}

int do_pass()
{
   object me=this_player();
   me->move("/open/ping/room/road3");
   return 1;
} 

int do_verify(string arg)
{
 object me,ob;
 me=this_player();
 ob=new("/data/autoload/swordsman/sun_sword_book");
 if( arg!="sun_sword_book")
{
    write("��Ҫ����ʲô\n");
    return 1;
   }
if(me->query("quest/sun_fire_sword",1)!=1)
  {
    write("�������ⶫ��Ҳû��\n");
    return 1;
  }

 if( present(ob,me) )
  {
    write("���Ѿ���һ����\n");
    return 1;
   }
   else
    {
     write("�úñ��ܴ���, ����Ū����.\n");
     ob->move(me);
     return 1;
    }
}
/*
int do_sword(string arg)
{
 object me,ob;
 me=this_player();
 ob=new("/data/autoload/swordsman/sunsword-gift");
 if( arg!="sword")
{
    write("��Ҫ����ʲô\n");
    return 1;
   }
if(me->query("id",)!=("rocken"))
  {
    write("��������...�Ŷ�û��\n");
    return 1;
  }

 if(me->query("get_appogift1")==1)
  {
    write("���Ѿ��õ�������...��Ҫʲô?\n");
    return 1;
   }
   else
    {
    write("[1;37m˲��~һ����ɫ�ʺ绯������ǰ,˲����������϶���һ������[0m\n");
   me->set("get_appogift1",1);
     ob->move(me);
     return 1;
    }
}
*/

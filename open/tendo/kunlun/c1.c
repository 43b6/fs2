#include <ansi.h>
inherit ROOM;

void create()
{
	set( "short", "��������-"HIW"����"NOR );
	set( "long", @long

    �����������ƣ�һƬ��ãã�ľ�ɫ����ȫ�޷���������ܵľ���ƺ�������
��������ڴˣ���ֹ�������⾭�����Ա߻���һ����ֵ�ʯͷ(stone)��

long );
	set("item_desc", ([ /* sizeof() == 1 */
	"stone" : "�������:       \n"+
		  "\n��������ߣ�����(touch)ʯ������\n\n",
	]));
	set("light_up",1);
	setup();
}

void init()
{
	object ob;

	ob = this_player();
	remove_call_out("greeting");
	call_out( "greeting", 0, ob );
	add_action( "do_touch", "touch" );
}

int do_touch()
{
	object who = this_player();
	tell_room( this_object(), who->query("name") + "����һ����ʧ�����ˡ�\n", who );
	who->move(__DIR__"m8");
	if( who->query("food") > 200 )
		who->add( "food", -10 );
	return 1;
}

int greeting(object who)
{
  object room = this_object();
  object mob;
  int i;
  int edir=1+random(2);
  int wdir=1+random(2);
//  int ndir=1+random(2);
  int sdir=1+random(2);

  if(wdir!=2&&edir!=2&&sdir!=2)
    wdir=2;

  room->set("exits/west",__DIR__"c"+wdir);
  room->set("exits/east",__DIR__"c"+edir);
	room->set("exits/north",__DIR__"c0");
  room->set("exits/south",__DIR__"c"+sdir);

  if(!who) return 1;
  if( who->query("bellicosity") > 500 ) {
    message_vision("	���������е�а���ƽ���˲���۳���...\n",who);
    message_vision(HIR"\n\n	һ����������񱩵��������ڶ�������$N����������\n"NOR,who);
    seteuid(getuid());
    i=random(3)+1;
    while(i--) {
      mob=new(__DIR__"npc/cl_dragon");
      mob->move(room);
      mob->callset(who);
      mob->kill_ob(who);
    }
  }

  return 1;

}
//open/prayer/room/2elder1

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "ִ�����Ϸ�");
  set ("long", @LONG

            ʥ����ܶ���λ���̳���֮һ��ִ������
	��ר���İ칫������������Ϊ�������˽̹��
	��ͽ���Խ

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/lawyer-elder" : 1,		//ִ������
]));
  set("exits", ([ /* sizeof() ==  1*/
	"east" : "/open/prayer/room/2elder3",		//`���Ϸ�
]));
 set("light_up", 1);
  set("valid_startroom", 2);

  setup();
}
 
void init()
{
 add_action("search_here", "search");
}

int search_here(string str)
{
    if( (this_player()->query("combat_exp",1) > 100000)  )
    {
    write("���䱳����һ������!!\n");
      set("exits/west",__DIR__"bottle-room");
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
	if(!query("exits/west"))
		return;
	delete("exits/west");
	tell_room(this_object(),"�����Զ��ع����ˡ�\n");
}


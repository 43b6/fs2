// Room: /open/badman/room/forest01.c
// written by powell 96.4.26@FS

#include </open/open.h>

inherit ROOM;
string search_skeleton();

void create ()
{
  set ("short", "����ɭ��");
  set ("long", @LONG
���߽���һ��Ƭɭ��֮�У�����������ŷ������ܵľ����ƺ�
һֱ��û�����������ȫʧȥ�˷���ԭ��������������Ķ���ɭ
�֣���˵ֻ�ж��˹ȵ���֪�����˳��ͨ����Ƭɭ�֡�

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "����" : "�������п����ر���֣����񳣳��ܵ��ݲе����ӣ�"+
           "���벻��Ҳ��(push)��һ�°���\n",
]));

  set("outdoors", "/open/badman");

  set("exits", ([ /* sizeof() == 4 */
  "west"  : __DIR__"forest01",
  "south" : __DIR__"forest01",
  "north" : __DIR__"forest01",
  "east"  : __DIR__"forest01",
]));

  set("search_desc", ([ /* sizeof() == 3 */
  "�׹�" : (: search_skeleton :),
  "����" : "�㷢�������еĽ����ƺ��е����, ��������Ѱ������?\n",
  "����" : "���߽�����һ������Ȼ����һ�Ѱ׹ǣ�\n"+
               "��������˹ȿ����е���¡�\n",
]));

  setup();
}


int valid_leave(object who, string dir)
{
        if( random(10)<1 ) {
                who->move(__DIR__"forest02");
                return notify_fail("");
        }
        return 1;
}

void init()
{
        add_action("do_push_tree","push");
}

string search_skeleton()
{ 
        int i ;
        i = this_player()->query_temp("search_skeleton");
     
        if (this_player()->query_temp("b_bottle") == 1)
                return
                "�㲻���Ѿ��ҵ��˸���ɫƿ��??\n";
        else if ( i > 1) {
                new(BAD_OBJ"b_bottle")->move(this_player());
                this_player()->set_temp("b_bottle",1); 
                return 
        "������ϸ����Ѱ����Щ�׹Ǻ������ڰ׹Ƕ����ҵ��˸���ɫСƿ�ӡ�\n";
        }       
        else {
              this_player()->set_temp("search_skeleton",++i);
              return "�������ң������Ҳû�ҵ���\n";
        } 
}

int do_push_tree(string arg)
{
        if( arg == "tree" ) {
  		new(BAD_NPC"snake-npc")->move(__DIR__"forest02");
                this_player()->move(__DIR__"forest02");
                tell_object(this_player(),
          "\n ����������������ֵ�����ȥ....\n"+
            " ������! û�뵽����ֻ�Ǹ����ӣ�����ǵ�������˹��е��������ˡ�\n"+
            " �ɵ�С��һ��Ӧ������...\n");
        }
        else
		tell_object(this_player(),"������....��..��Ҫ����?\n");
        return 1;
}

// Room: /open/badman/room/r2

#include <room.h>
#include </open/open.h>

inherit ROOM;

string search_bottle();

void create ()
{
  set ("short", "��������");
  set ("long", @LONG
����һ��СС������������ֻ��һ���ƾɵ����Ӻ���������ƿ
ƿ�޹޵ĳ���(cupboard)��һ��Ѳ�֪����ҩ�Ķѷ��ڷ������ܵ�
�ذ��ϣ���ʶ�����˻���Ϊ�����Ǹ����ء��㿴�������Ϸ��ź�
���һ���ʼ�(note)���������ҽ������ʲô�о��˰ɡ�
    ǽ�Ϲ���һ��Ӫҵ��Ŀ��(list)��
    ��ע�⵽������һ��ľ�Ƶ��š�

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"r4",
  "north" : __DIR__"r3",
  "south" : __DIR__"b10",
]));

  set("item_desc", ([ /* sizeof() == 2 */
  "note" : "�ʼ���д��������������ֺ�һ����ֵķ��ţ�����������ҽ�����о�\n�ĳɹ��ɣ�ֻ��ϧ�㶼��������\n",
  "cupboard" : "������ɾɵĹ����Ϸ���һЩ��������ҩ�����⻹�������СС�Ĺ���(bottle)��\n",
  "list" : "\n\tӪҵ��Ŀ      �շѱ�׼\n\n\t����(����)    һ������/ÿ����\n\tֹѪ          ��������/ÿ�غ�\n\t�ⶾ          ��������/ÿ�غ�(�߶�)\n\t              ��������/ÿ�غ�(����涾)\n\n",
]));

  set("search_desc", ([ /* sizeof() == 1 */
  "bottle" : (: search_bottle :),
]));

  set("objects", ([ /* sizeof() == 1 */
  "/open/badman/npc/one" : 1,
]));

  set("light_up", 1);

  create_door("west", "ľ��", "east", DOOR_CLOSED);
  setup();
}

string search_bottle()
{
	object who = this_player();

	if( who->query_temp("get_pill") )
		return "��������͵��һ�ŵ�ʱ��ͻȻ�о��������ƺ���˫�۾��ڶ����㣬\n���ǸϿ�������˻�ȥ��\n";
	who->set_temp("get_pill", 1);
	if( random(2) )
		new(BAD_OBJ"s_pill")->move(who);
	else
		new(BAD_OBJ"f_pill")->move(who);
	return "����Ŵ�Ҳ�ע�⣬�Ͻ�͵͵�ӹ��������˿�ҩ����������ڿڴ��\n";
}

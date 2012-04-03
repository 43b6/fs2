#include </open/open.h>
inherit ROOM;

void create ()
{
set("short", "�Ľ�");
set("long", @LONG
   ��������������ȥ������һ��Ƭ�߼��������Ӳݣ���һ���ɽ�ڣ�wall)
   ��ɽ�ڸ����ƺ��������ʯ���ţ�����ȴû�����ҳ����ƺ��в����˾��������ӡ�
   ���㿴�˰��컹�ǿ�����������������������˰ɡ�����������
   �ף��ղ��ƺ���һ����Ӱ�������ǲ������۾��������أ���������
LONG 
);
  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/main/room/r17.c",
]) );
  set("outdoors", "/open/main" );
  set("item_desc", ([ /* sizeof() == 2 */
  "wall" : "һ��޴��ǽ���ƺ�����ʯ����һ���ѷ죨road)�����ɡ�����\n",
  "road" : "һ����ʯ��ס���ѷ죬�����ƺ������е���֣�����һ�£�rock)��\n",
]));
  set("search_desc", ([ /* sizeof() == 1 */
  "rock" : "����̶�����ĵ���֮�£���Ȼ���㷢����һ����ť(button)��\n",
  "button" : "������ϸ�����˰�ť֮��������ƺ�Ӧ����������pull)��\n",
]));
  setup();
}
void init()
{
	add_action("do_pull","pull");
	add_action("do_push","push");
}

int do_pull(string str)
{
  object me;

  me=this_player();
  if( str != "button" )
    return notify_fail("��ʲô?����Ҫ�����˺ò��ã�\n");
  tell_room(this_object(),"$n�����İѰ�ť��������\n",me);
  message_vision("$n����ɽ��ͻȻ¶��һ��ͨ����$n��æ����һ�塣\n",me,me);
  me->move(__DIR__"outr0.c");
  return 1;
}

int do_push(string str)
{
	object me=this_player();
        
        if( str != "button" )
           return notify_fail("ѹʲô?����Ҫ�丽�۾��𣿣�\n");
	message_vision("��С�Ĵ������أ�һ֧��������$N��\n",me);
	me->add("kee",-50);
	return 0;
}
// Room: /d/oldpine/epath2.c

inherit ROOM;

void create ()
{
	set ("short", "��·");
	set( "build", 21 );
  set ("long", @LONG
�ߵ�����,���ѽ���Զ���˼�,���ڿ������������,ȴ��
����һ�ֲ�ã�ĸо�,��·�ڴ�ͨ�򱱷����Ϸ����Ϸ������г�
�����������ǵ��ҵķ�Դ�����ء�
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/obj/torch" : 1,
]));

  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 2 */
"north" : "/open/tendo/m2",
"south" : "/open/gsword/room/froad3",
]));

  setup();
}

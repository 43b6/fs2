inherit ROOM;

void create ()
{
  set ("short","����");
  set ("long", @LONG
���Ǿ����ŵ���Ҫͨ·�������ǻ�԰������һֱ�ߵ��ף��㽫��
����һ��������ɱ���ķ��ӣ�����������Ҫ��ͷ�ĸо�����Ϊ��
�����ǲ��ܻ�ӭ���ˣ����е��˶���Ҫ���������أ����������
ͷ����̫�٣���ҪΪ���ѵ��Դ󸶳����ۡ�
LONG);
  set("objects", ([ /* sizeof() == 1 */
"/open/love/npc/hero":2,
"/open/love/npc/6.c":1,
  ]));
  set("exits", ([ /* sizeof() == 4 */
"enter" :__DIR__"room33",
  "east" : __DIR__"room2-15",
  "west" : __DIR__"room2-14",
  "south" : __DIR__"room1-2",
  ]));
  set("light_up", 1);

  setup();
}


// Room: /open/center/room/car.c

inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
������ϰ���ű�����˵��������ĵ����������ѩ���ɵĵ�
�ӣ����괳��������ʱ�򣬱�ʮ�����׷ɱ����������һ�������С
��ʦ--�Զ���--��ȣ����˴Ӵ˳�ΪĪ��֮��������Ϊ������ŵ�
���ܶ���������������Ļ�����λ����ľ������ˡ����Ⱦ���
֮������ʮ����Ͻ��飬��ϧһֱû�б���Ļ��ᡣ�����˵���ȱ
�ٳ������֣���˸����ϰ�Ҳ���ڴ˶����ˡ�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"road3",
]));

  set("objects", ([ /* sizeof() == 2 */
  "/open/ping/questsfan/npc/lee" : 1,
  "/open/center/npc/brownhorse" : 2,
  "/open/center/npc/blackhorse.c" : 1,
]));

  set("light_up", 1);

  setup();
}

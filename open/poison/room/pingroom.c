inherit ROOM;

void create ()
{
  set ("short", "ħ�̷�̳");
  set ("long", @LONG
ǽ�ϼ���һ�߾����۵Ļ�ѣ��м��򹩷���һ�����˷��ߵ�ħ��
ͼ�ڣ����ֺ�ƽ�ϳǸ��������װ�Σ�����ڤ��ħ�̴���ƽ�ϳ�
�ĸ��ݵ��ˡ�

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/ping/room/road1.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/elder3.c" : 1,
]));

  setup();
}

// Room: /open/gsword/room/lake0.c

inherit ROOM;

void create ()
{
  set ("short", "��������");
  set ("long", @LONG
΢΢�ķ紵�u�Ű��ߵ�����,���ݵĽ����ˮ������˸,��ֻ��
�ѷ����ں���,ϸ���Ŵ����б��,ʫ��: 
        
      ��������������  �ļ��紺����Ϣ     ��������������...             
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/visitor1" : 1,
]));

  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 4 */
  "northeast" : "/open/gsword/room/lake1.c",
  "southeast" : "/open/gsword/room/lake3.c",
  "west" : "/open/gsword/room/mroom0.c",
  "east" : "/open/gsword/room/lakeroom0.c",
]));


  set ("��Դ/Һ��", ([
       "����" : "ˮ",
       "����" : "��ˮ",
       "ֹ��" : 30
  ]) );

  setup();
}

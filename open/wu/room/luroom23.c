// Room: /open/wu/room/luroom23.c
// ��ɽ��ݵĽ���
inherit ROOM;
void create ()
{
  set ("short", "����");
  set ("long", @LONG
��������ɽ����ڵĽ����ſ�,���»���ͨ����ɽ���������ֹ�Ľ���
���صĿ���������ɽ�ɵ����������о����ĵ���---�����졢���---
������������ɢ������ζ�Ϳ���֪�����Ǿ�����һ���ĸ���,����������
����ɽ�Ľ���,����������һʧ����������ͨ����ɽ��ݵ���Ժ��
LONG);
  set("exits", ([ /* sizeof() == 5 */
  "north" : "/open/wu/room/luroom20",
  "down" : "/open/wu/room/gen1",
  ]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
        "/open/wu/npc/sky_yan_jen" : 1,
      "/open/wu/npc/yan_din_lee" : 1,
]));
  setup();
}
int valid_leave(object me, string dir)
{
 if( dir == "down")
{
if(me->query("title")=="��ɽ���崫��")
return 1;
if((me->query("family/family_name") == "��ɽ��") && (me->query("title") != "��ɽ��ѧ����"))
      return notify_fail("ֻ����ɽ��ѧ���˲��ܽ�����!!\n");
else
if(!me->query("go_ya"))
      return notify_fail("ֻ�ж���ɽ���ж����˲���ͨ������!!\n");
return ::valid_leave(me,dir);
}
   return ::valid_leave(me,dir);
}

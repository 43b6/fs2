inherit ROOM;

void create()
{  
   
   set("short","������");
   set ("long", @LONG
���������ɵ�����ˣ��ɴ˵���ȥ��ֻ������
һɫ�������ĺ���׺�ŵ���Թ⣬ż���м�ֻ��Ÿ��
Ȼ�Ĵ����ϻ�����������ζ�ĺ��磬������������
�����������Ŀ�������                     
LONG);
   set("light_up", 1);
        set_heart_beat(1);
 set("exits", ([ /* sizeof() == 4 */

   "southwest" : "/open/island/room/i1",
    "south" : "/open/island/room/i3",
  "southeast" : "/open/island/room/i15",
]));
   set("outdoors", "/open/main");

 setup();
}



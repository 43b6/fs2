
inherit ROOM;
void create()
{
  set ("short", "大厅");
  set ("long","
    你踏进来这里，这里显的金壁辉煌灯火通明，在两边
各有一根柱子上面刻\了\许多\洋文，你心想～这组织怎么会
有这种文化呢..在上面还刻了一些字。。。

              天        唯
              地        我
              之        独
              人        尊

 ");
   set("exits", ([
   "east"       : __DIR__"r17.c",
   "west"       : __DIR__"r19.c",   
  ]));      
  set("light_up", 1);
  setup();
} 



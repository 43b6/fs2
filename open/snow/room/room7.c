#include <room.h>

inherit ROOM;

void create()
{
             set("short","藏经阁");
          set("long",@LONG
这里是雪苍派的藏经阁，里面所放的都是雪苍的秘笈，但是
一般的弟子，没经过掌门准许，是不得动里面的书的，在门口有
一张藏经阁的藏书表(list)，只有经过掌门准许的人才能在此研
读里面的藏书。
LONG);
        set("exits", ([
                "west":__DIR__"room6",
        ]) );
        set("light_up",1);
        set("objects",([
        "/open/snow/obj/book":1,
        ]));
        setup();
}
void init()
{
      add_action("do_list","list");
     add_action("do_study","read");
}
int do_list()
{
    object me=this_player();
    tell_object(me,@LONG
  这里的藏书有：
      雪苍秘录 (Snow book)
      狂风鬼影脚秘笈 (feet book)
      枯叶残风录 (star book)
      雪影幻指(ice-fingers)
      凌霜奇诀(snow-powerup)
LONG);
   return 1;
}
int do_study(string str)
{
   object me=this_player();
   string in_skill;
   int amount;
   if(this_player()->query("allow_study")!=1)
          return notify_fail("你不能乱动这里的书。\n");
   if(str=="snow book") { in_skill="quests/read_snow"; amount=1; }
   if(str=="feet book") { in_skill="quests/read_snow"; amount=2; }
   if(str=="star book") { in_skill="quests/read_snow"; amount=3; }
   if(str=="ice-finger") {
      tell_object(me,@LONG
雪影幻指乃是雪苍武学的最高境界，练成雪影幻指者，身形如风
可控制体内气流，转化成强劲之寒气，雪苍派历代练成者只有八人，
此八人皆扬名武林，成为一代高手，全书手撰此书之意，仅在言明雪
苍武学精奥之处。
 
  
                                      雪苍派第四代  刘全书
LONG);
            return 1;
      }
     if(str=="snow-powerup")
       {
          tell_object(me,@LONG
凌霜奇诀乃我雪苍护身气劲之绝学，武功高者可将内力凝结，转而
发出数倍内劲，是我派至高之绝学，也是武学中之一大突破，此为
刘全书在玄天圣谷中苦思一年所创，配合雪影幻指便成为武林中首
屈一指的绝学。
   
                                雪苍派第四代  刘全书
LONG); 
        return 1;
       }
     if(me->query("quests/read_snow")>=1)
    {
        tell_object(me,"你已经研读过三本秘笈中的一本，已不准再读。\n");
        return 1;
    }
    tell_object(me,"你研读之后，使你对武学更有所领悟。\n");
    if(in_skill)
    {
    me->set(in_skill,amount);
    me->set("title","雪苍绝学传人");
    }
   return 1;
}

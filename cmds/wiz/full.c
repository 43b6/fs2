inherit F_CLEAN_UP;
#include <ansi.h>

int main(object me, string arg)
{
          object ob,obj;
        int max;
          string objname, func, param, euid,name1,name2;
        if (!arg)
           ob=this_player();
        else {
           ob = present(arg, environment(this_player()));
           if (!ob) ob = find_living(arg);
        if( obj=find_player(arg) ) {
               if( obj != me ) log_file("static/full_player",
             sprintf("%s(%s) full %s(%s) on %s\n",
                me->name(1), geteuid(me), obj->name(1), geteuid(obj),
ctime(time()) ) );
          }
           if (!ob) return notify_fail("他不在喔!.\n"); }
        name1 = (string)me->query("name");
        name2 = (string)ob->query("name");
     tell_object(ob, HIW+name1+" 口念咒语, 突然间天上的一道月光射中了你,
你感觉到全身充满了力量.\n"NOR);
        write(HIW"你喃喃念着咒语, 将 "+name2+" 恢复了全部的力量.\n"NOR);
        max = ob -> query("max_gin");
        ob->set("eff_gin",max);
        ob->set("gin",max);
        max = ob->query("max_kee");
        ob->set("eff_kee",max);
        ob->set("kee",max);
        max = ob->query("max_sen");
        ob->set("eff_sen",max);
        ob->set("sen",max);
        max = ob->query("max_mana");
        ob->set("mana",max);
        max = ob->query("max_force");
        ob->set("force",max);
        max = ob->query("max_atman");
        ob->set("atman",max);
        max = ob->max_food_capacity();
        ob->set("food",max);
        max = ob->max_water_capacity();
        ob->set("water",max);
        ob->clear_condition();
        ob->verive();
       if (ob->is_ghost()
) {
            ob->reincarnate();
            ob->move("/open/common/room/inn");
          }
        return 1;
}

int help(object me)
{
   write(@HELP
指令格式: full <生物>

 恢复所有的属性....ya

HELP
   );
   return 1;
}

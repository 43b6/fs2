// unhold.c
// By LinaSi-Inverse-( 1999 )
#include <ansi.h>
inherit F_CLEAN_UP;

int main(object me, string arg)
{
   object ob, obj;
   string Narrows, Nbow;

   if(!arg) return notify_fail("[用法]: unhold <弓箭> with <弓>\n");
   if(sscanf(arg, "%s with %s",Narrows, Nbow)!=2)
      return notify_fail("[用法]: unhold <弓箭> with <弓>\n");

   if( !ob = present(Nbow, me) )
      return notify_fail("你身上没有这把弓 ...。\n");

   if( me->query("family/family_name") != "射日派")
   return notify_fail("你不是射日派的人。\n");

   if( ob->query("skill_type") != "archery" )
      return notify_fail("这并不是弓啊！\n");
   if( ob->query("arrow/id") == "none" )
      return notify_fail("弓上没装任何东西啊！！\n");
   if( ob->query("arrow/id") != Narrows )
      return notify_fail("弓上并没有那种东东。\n");
       seteuid(getuid(me));
       obj = new(ob->query("arrow/path"));
       obj->set_amount(ob->query("arrow/amount"));
       obj->move(me);

       ob->set("arrow/id","none");
       ob->set("arrow/amount",0);
       ob->set("arrow/name","空的");
       ob->set("weapon_prop/damage",ob->query("bow/attack"));

       if( me->query_temp("weapon") == ob )
       me->set_temp("apply/damage",ob->query("bow/attack"));

       ob->delete("bow/attack");
       message_vision("$N小心地卸下"+obj->query("name")+"，收进箭袋里。\n",me);
       return 1;
}
int help(object me)
{
  write(@HELP
指令格式：unhold <arrows> with <bow>

相关指令：holdup, bcheck
HELP
    );
    return 1;
}


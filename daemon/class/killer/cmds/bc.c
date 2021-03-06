// Bellicosity_Change.c
#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;

int main(object me, string arg)
{
        int i;
        int be=me->query("bellicosity");
        int F=me->query("force"); 
        int k=me->query("kar");
        if( !arg ||  !sscanf(arg, "%d", i) )
             return notify_fail("指令格式：cmd bc <加减杀气>\n");
  
         
        if( i > me->query("force") )
                return notify_fail("你的内力不够。\n");
        if( i < k && i >= 0 )
                return notify_fail("你最少要升"+chinese_number(k)+"点。\n");
        if( i > k && i < 0 )
                return notify_fail("你最少要降"+chinese_number(k)+"点。\n");

        if( (i+be)/2 >  me->query("max_force") )
                return notify_fail("你放出的杀气太多,将无法控制。\n");
        if( (i+be) < 0 )
                return notify_fail("你降太多杀气了。\n");
        if( me->query_temp("BC")=="USED")
                return notify_fail("你正在运功中。\n");
        if ( i >=0 ) {
        me->add("force",-i);
        } else { me->add("force",i); }
        message_vision(HIC"$N运起功力企图改变杀意。\n"NOR,me);
        me->start_call_out((:call_other, __FILE__, "bell_change",me,i:),2);
        me->set_temp("BC","USED");
        return 1;
}
void bell_change(object me,int i)
{
        int b=random(me->query("kar"));
        if( random(me->query("kar")) + 3 >
            random(me->query("cor")) +
            random(me->query("str")) ){
            message_vision(YEL"$N的转换失败 内力流失了。\n"NOR,me); }
        else {
   
    if ( i >= 0 ) {
    me->add("bellicosity",i-b);
    message_vision(YEL"$N的杀气提升约"+chinese_number(i)+"点。\n"NOR,me);
         }
    else { 
    me->add("bellicosity",i+b);
    message_vision(YEL"$N的杀气下降约"+chinese_number(-i)+"点。\n"NOR,me);
        }
            
   }
      me->delete_temp("BC","USED");
          return ;
}

int help(object me)
{
    write(@HELP
 
指令格式： cmd bc <杀气>□
 
说明：这个指令让你可以用内力转杀气,但以最大基本内力两倍为上限。
      加: cmd bc 10  加十点
      减: cmd bc -10 减十点
 
HELP
);
     return 1;
}

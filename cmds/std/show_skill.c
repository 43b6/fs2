// show_skill.c
//
//                                              Created by Chan
int main(object me, string arg)
{
        int limit,number;
        string message;
        if( me->query("combat_exp") < 3000000)
                return notify_fail("你的武学修为未达到自创成招的境界!!\n");
        if( !arg )
                return notify_fail("指令格式：shown_skill <数字(1~8)>\n");
        number=atoi(arg);
        limit=me->query("hero/limit");
        if(number < 1)
                return notify_fail("招式名称输入错误哦!!\n");
        if(number > limit)
                return notify_fail("你输入的数值超过你能力的范围了!!!\n");
        if(!me->query("hero/action"+arg))
                return notify_fail("你尚未设计自己的招式,请先用design_skill!!设计!!!\n");
        message=me->query("hero/action"+arg);
        write("----------------你所设计的招式叙述如下-------------------\n");
        printf("%s\n",message);
        write("----------------      显示完成        -------------------\n");
        return 1;
}
int help( object me )
{
        write(@HELP

格式说明:show_skill <数字(1~8)>

此指令用来让观看大侠所设计的招式,并且看一下是不是有讯息上的问题!!!
例如:
     show_skill 1
     此时就会显示出你所设计的第一招skills的叙述!!!!
HELP    );
        return 1;
}

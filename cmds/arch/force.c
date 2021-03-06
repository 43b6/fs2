// force.c

inherit F_CLEAN_UP;

void create() { seteuid(getuid()); }

int main(object me, string arg)
{
        string dest, cmd;
        object ob;

        if( me != this_player(1) ) return 0;

        if( !arg || sscanf(arg, "%s to %s", dest, cmd) != 2 )
                return notify_fail("指令格式：force <某人> to <指令>\n");
        if( !(ob = present(dest, environment(me))) )
                return notify_fail("这里没有 " + dest + "。\n");
        if( !living(ob) )
                return notify_fail("这个物件不能执行命令。\n");
         if(wiz_level(me) <= wiz_level(ob) && wiz_level(me)<7)
                return notify_fail("你没有强制" + ob->name() + "执行指令的权力。\n");
        if( userp(ob) )
                log_file("FORCE_PLAYER", sprintf("[%s] %s forces %s to %s\n",  
                        ctime(time()), geteuid(me), geteuid(ob), cmd));
        message_vision("$N强制$n去做"+cmd+"这个指令。\n",me,ob);
        return ob->force_me(cmd);
}

int help(object me)
{
        write(@Help
指令格式：force <某人> to <指令>

强迫某人做某事, 但你的巫师等级必须比对方高, 而且必须是在同一个房间里。
Help
        );
        return 1;
}

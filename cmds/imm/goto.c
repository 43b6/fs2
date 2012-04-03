// goto.c

inherit F_CLEAN_UP;

int main(object me, string arg)
{
        int goto_inventory = 0;
        object obj, env;
        string msg;

        if( !arg )
          if (me->query("last_location"))
            return me->move(me->query("last_location"));
          else
            return notify_fail("�÷�: goto [-i] ��|����\n����: goto wade �� goto /u/w/wade/workroom\n");

        if( sscanf(arg, "-i %s", arg) ) goto_inventory = 1;

        obj = find_player(arg);
        if(!obj) obj = find_living(arg);
        if (!obj) obj=LOGIN_D->find_body(arg);
if(obj&&wizardp(obj)&&obj->query("env/����") && wiz_level(me) < wiz_level(obj))
           return notify_fail("û�������ҡ������ط���\n");
        if(!obj) {
                arg = resolve_path(me->query("cwd"), arg);
                if( !sscanf(arg, "%*s.c") ) arg += ".c";
                if( !(obj = find_object(arg)) ) {
                        if( file_size(arg)>0 ) {
                                return me->move(arg);
                        }
                        return notify_fail("û�������ҡ������ط���\n");
                }
        }

        if(!goto_inventory && environment(obj))
                obj = environment(obj);

        if( !obj ) return notify_fail("������û�л������� goto��\n");

        if( stringp(msg = me->query("msg_mout")) )
                message_vision(msg, me);
        else
                message_vision("ֻ��һ���������$N����Ӱ�Ѿ������ˡ�\n", me);

        env = environment(me);
        me->move(obj);
        if( !sizeof(all_inventory(env)) && ( !env->query("objects")
         || !sizeof(env->query("objects")) ) ) destruct(env);

        if( stringp(msg = me->query("msg_min")) )
                message_vision(msg, me);
        else
                message_vision("$N����ӰͻȻ������һ������֮�С�\n", me);

        return 1;
}

int help(object me)
{
write(@HELP
ָ���ʽ : goto [-i] <Ŀ��>
 
���ָ��Ὣ�㴫�͵�ָ����Ŀ��. Ŀ�������һ��living �򷿼�
�ĵ���. ���Ŀ����living , ��ᱻ�Ƶ����Ǹ���ͬ���Ļ���.
����м��� -i ������Ŀ���� living, ����ᱻ�Ƶ��� living ��
�� inventory ��.
 
HELP
    );
    return 1;
}

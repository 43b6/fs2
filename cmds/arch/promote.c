// promote.c

inherit F_CLEAN_UP;

int main(object me, string arg)
{
        object ob;
        string old_status, new_status, my_id;
        int my_level, ob_level, level;

        if( !arg || sscanf(arg, "%s %s", arg, new_status)!=2 )
                return notify_fail("ָ���ʽ��promote <ʹ����> <�ȼ�>\n");

        if( (level=SECURITY_D->query_valid_level(new_status))==-1 )
                return notify_fail("û�����ֵȼ���\n");

        ob = find_player(arg);
        if (!ob) {
          if (!ob = FINGER_D->acquire_login_ob(arg))
            return notify_fail ("û�������ҡ�\n");
        }

        my_level = wiz_level(me);

        old_status = SECURITY_D->get_status(arg);
        ob_level = wiz_level(arg);

        my_id = me->query("id");
           if (my_id == arg)
                   return notify_fail("�㲻���Ը����Լ��ĵȼ���\n");
           if( (my_level <= ob_level && wizhood(me) != "(manager)" ) )
                   return notify_fail("�㲻�ܸ�������ְλ��\n");
// ����һ����  By Swy
        if(my_level<SECURITY_D->query_valid_level(new_status))
        return notify_fail("�㲻�ܸ����ɱ��Լ��ߵ�ְλ��\n");
        seteuid(getuid());

        if( !(SECURITY_D->set_status(me, arg, new_status)) )
                return notify_fail("�޸�ʧ�ܡ�\n");

        CHANNEL_D->do_channel( me, "sys",
          sprintf ("��%s(%s)��Ȩ�޴�%s��Ϊ%s��\n",
            ob->query("name"), arg, old_status, new_status));
        tell_object (ob, sprintf ("%s(%s)����ĵȼ����%s\n",
                     me->name(), my_id, new_status));
       ob->save_autoload();
        ob->save();

        if( interactive(ob) ) {
          CHANNEL_D->do_channel( me, "sys", ob->short()+"�뿪��������ˡ�\n");
          tell_object (ob, @LONG
    ������ʦ�漰������ȡȨ�����⣬Ҳǣ�浽�ܶ�����ϵͳ�ϵ�
δ֪���̫�࣬�޷�һһ�������ʱ����ǿ�����뿪�ķ�ʽ�����
���� quit ֮���ٽ������ٶȽ���ʱ����ĵȼ��Ѿ��ı��ˣ����
���ǵ�һ�ε���ʦ�������� help wiz_init  �鿴����������顣
LONG);
        }
        destruct (ob);

        return 1;
}

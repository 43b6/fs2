//get_rest.c by bss ����ҴӼ��ηų���
#include <ansi.h>
#include <login.h>
#define SYNTAX  "ָ���ʽ��unget_rest ʹ��������\n"
inherit F_CLEAN_UP;

int main(object me, string arg)
{
        object player,ob;
        string name,reason;

        if(!arg) return notify_fail(SYNTAX);

        name=arg;
        seteuid(getuid());
        player=find_player(name);
        if(player)
        {
                if(!player->query("have_get_rest"))
                        return notify_fail("����û���������ﰢ!!\n");
                player->set("have_get_rest",0);
                player->set("startroom",STARTROOM);
                tell_room(environment(player),HIM"
��Ȼ�������񽫳�����������ǰ��������˵��:��ȷ����ͷ�
"+HIY+player->query("name")+HIM+"�������ͻ��˼�!!\n"NOR);
                player->move(STARTROOM);
                player->save();
        }
        else
        {
                if(!FINGER_D->acquire_login_ob(name))
                        return notify_fail("û��������!!\n");

                ob="/adm/daemons/cappointd.c"->get_user_ob(name);
                player="/adm/daemons/cappointd.c"->get_user_body(ob);
                player->set_temp("link_ob",ob);
                player->setup();
                if(!player->query("have_get_rest"))
                        return notify_fail("����û���������ﰢ!!\n");
                player->set("have_get_rest",0);
                player->set("startroom",STARTROOM);
                player->save();
        }
        write(name+"��������Ѿ����ͷ���!!\n");
        log_file("static/UNGET_REST",sprintf("%s �� %s �ų����� at %s\n"
                 ,name,me->query("id"),ctime(time())));
        return 1;
}


//get_rest.c by bss �ѷ���������ץ����������ȥ
#include <ansi.h>
#define SYNTAX  "ָ���ʽ��get_rest ʹ�������� because ԭ��\n"
#define GUILTY_ROOM "/open/wiz/guilty_room"
inherit F_CLEAN_UP;

int main(object me, string arg)
{
        object player,ob;
        string name,reason;

        if(!arg) return notify_fail(SYNTAX);

        if(sscanf(arg,"%s because %s",name,reason)!=2)
                return notify_fail(SYNTAX);

        seteuid(getuid());
        player=find_player(name);
        if(player)
        {
                if(player->is_fighting())
                        return notify_fail(name+"����ս���У��޷�����!!\n");
                player->set("have_get_rest",1);
                player->set("startroom",GUILTY_ROOM);
                tell_room(environment(player),HIM"
��Ȼ�������񽫳�����������ǰ��������˵��:
"+HIY+player->query("name")+HIM+"��������������ȷ�������ץ������֮�У���������!!\n"NOR);
                player->move(GUILTY_ROOM);
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
                player->set("have_get_rest",1);
                player->set("startroom",GUILTY_ROOM);
                player->save();
        }
        log_file("static/GET_REST",sprintf("%s �� %s ץ������because %s\n"
                 ,name,me->query("id"),reason));
        write(name+"��������Ѿ���ץ��������!!\n");
        return 1;
}


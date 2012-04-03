// modify purge.c by ice..

#include <ansi.h>
#define SYNTAX  "ָ���ʽ��purgewiz [<δ��������><����ʮ��>] | <��ʦ����> because <ԭ��> \n       | look [<δ��������>] <�ۿ����ܣ���ɱ��>\n"

inherit F_CLEAN_UP;

int do_purge_wizards(int day, int flag);

int main(object me, string arg)
{
        string name, reason;
        int day;
        object ob;

        if( me!=this_player(1) )
                return notify_fail("��û��Ȩ��ʹ�����ָ�\n");

        if( !arg ) return notify_fail(SYNTAX);

        if( sscanf(arg, "%d", day) && day >= 10) return do_purge_wizards(day, 1);

        if( sscanf(arg, "look %d", day) ) return do_purge_wizards(day, 0);
        
        if( sscanf(arg, "%s because %s", name, reason)!=2 )
                return notify_fail(SYNTAX);

        seteuid(getuid());
        if( file_size(DATA_DIR + "login/" + name[0..0] + "/" + name + __SAVE_EXTENSION__)<0 )
                return notify_fail("û����λʹ���ߡ�\n");

        if(SECURITY_D->get_status(name) == "(player)")
                return notify_fail("���ָ��ֻ�� purge ��ʦ��\n");

        if(SECURITY_D->get_status(name) == "(admin)"
           || SECURITY_D->get_status(name) == "(guest)"
           || SECURITY_D->get_status(name) == "(manager)")
                return notify_fail("���ָ��� purge ADMIN ���ϵ���ʦ��\n");

        if(ob=find_player(name))
                destruct(ob);

        SECURITY_D->set_player(name);
        rm(DATA_DIR + "login/" + name[0..0] + "/" + name + __SAVE_EXTENSION__);
        rm(DATA_DIR + "user/" + name[0..0] + "/" + name + __SAVE_EXTENSION__);
        write( "ʹ���� " + capitalize(name) + " ɾ�����ˡ�\n");
        log_file("static/PURGE_WIZ", sprintf("[%s] %s purged %s because %s.\n",
                ctime(time())[0..15], geteuid(this_player(1)), name, reason));

        return 1;
}

int do_purge_wizards(int day, int flag)
{
        int i, wiz_cnt, count;
        string *wiz;
        mixed info;

        wiz = sort_array(SECURITY_D->query_wizlist(), 1);
        seteuid(getuid());
        write("\n*** ������ʦ���浵�У����Ժ�.... ***\n");
        count=0;
        wiz_cnt=0;
        for(i=0; i<sizeof(wiz); i++)
        {
                wiz_cnt++;
                if(file_size(DATA_DIR + "login/" + wiz[i][0..0] + "/" + wiz[i] + __SAVE_EXTENSION__)<0 )
                {
                        if(flag)
                                SECURITY_D->set_player(wiz[i]);
                        count++;
                        write(wiz[i]+" : "+SECURITY_D->get_status(wiz[i])+" ���Ѳ����ڡ�\n");
                                continue;
                }

                if(SECURITY_D->get_status(wiz[i])=="(manager)" || SECURITY_D->get_status(wiz[i])=="(guest)" || SECURITY_D->get_status(wiz[i])=="(admin)" || SECURITY_D->get_status(wiz[i])=="(arch)")
                                continue;

                info = stat(DATA_DIR + "login/" + wiz[i][0..0] + "/" + wiz[i] + __SAVE_EXTENSION__);
                if( (time()-(int)info[1])/86400 >= day ) {
                        count ++;
                        write(wiz[i]+" : "+SECURITY_D->get_status(wiz[i])+" �Ѿ��� "+(time()-(int)info[1])/86400+" ��û���ߡ�\n");
                        if(flag)
                        {
                                SECURITY_D->set_player(wiz[i]);
                                rm(DATA_DIR + "login/" + wiz[i][0..0] + "/" + wiz[i] + __SAVE_EXTENSION__);
                                rm(DATA_DIR + "user/" + wiz[i][0..0] + "/" + wiz[i] + __SAVE_EXTENSION__);
                        }
                }
        }
        write("\n\nԭ���ܹ��� " + wiz_cnt + " λ��ʦ��\n");
        write( count + " ������ " + day + " ��δ���ߵ���ʦ��������ˡ�\n");
        write("�����ܹ��� " + (wiz_cnt - count) + " λ��ʦ��\n");
        if(flag)
        log_file("static/PURGE_WIZ", sprintf("[%s] %s cleaned up %d wizards\n
        \t\t who didn't login for more than %d days\n
        \t\t Resulting statistics: %d wizards remaining.\n",
                ctime(time())[0..15], geteuid(this_player(1)), count, day, wiz_cnt - count));


        return 1;
}

int help()
{
        write(SYNTAX + @TEXT

���һ����ʦ���������һ������(����ʮ��)�������ߵ���ʦ��
TEXT
        );
}

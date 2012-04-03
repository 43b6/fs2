// reboot.c

#include <login.h>
#include <obj.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
        string wiz_status;
        object npc;
        int     t;

        if( me != this_player(1) ) return 0;
        
        wiz_status = SECURITY_D->get_status(me);
if( wiz_status!="(manager)" && wiz_status != "(admin)" && wiz_status != "(arch)" && wiz_status !="(guest)")
                return notify_fail("ֻ�� (arch) ���ϵ���ʦ������������" + MUD_NAME + "\n");

        seteuid(getuid());

        npc = new(NPC_DEMOGORGON);
        npc->move(REBOOT_PLACE);
        if (!arg)
          npc->start_shutdown(15);
        else {
          sscanf (arg, "%d", t);
          npc->start_shutdown(t);
        }
/*
      if (npc = new(NPC_KAWALI)) {
            npc->move("/u/w/wade/workroom");
            npc->do_reboot();

        write("Ok��\n");
      }
      else write ("�Ҳ��� " + NPC_KAWALI + "\n");
*/

        return 1;
}

int help(object me)
{
  write(@HELP
ָ���ʽ : reboot [������]
ָ��˵�� :
    ���������ϵͳ����ֹͣһ�ж���, ��Ȼ, �����������
    ��������һ��, �����Ƚ���ҵ����ϴ浵, Ȼ���ٹػ�.
    �������������Ӹ�������, ���С�� 15 ����, ��ô
    ��ÿ������ʾѶϢ֪ͨ������׼���ùػ�����, ��������
    ��浵�ȵ�.
�����ο� :
    shutdown
HELP
  );
  return 1;
}

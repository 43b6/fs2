// pklist.c
// ʹ����pk����ʱ,��������ɱ�˼��˵�ָ�� by Chan

#include <command.h>
inherit F_CLEAN_UP;
int main(object me)
{
 object *user;
 string desc = "";
 int i, sam = 0;
 user = users();
 desc += "    ��    ��  ��ɱ    ¾    ��    ��    ��    ��    һ    ��    ��\n\n";
 for(i=0; i<sizeof(user); i++) {
  if( !wizardp(user[i]) ) {
        desc += sprintf("  %10s%6s��ɱ��:%-3d�����",
                        user[i]->name(), "("+user[i]->query("id")+")",
                        user[i]->query("pkgame"));
        if( sam % 2 == 1 ) desc += "\n";
        sam += 1;
    }
 }
 desc += "\n";
 me->start_more(desc);
 return 1;
}

int help(object me)
{
        write(@HELP
ָ���ʽ : pklist
ָ��˵�� :
           ���������ۿ�����PK����ʱ��ɱ�˶����˵�ָ�
HELP);
        return 1;
}

// /mudinfo.c
 
inherit F_CLEAN_UP;
 
#define SCALE   (1.0/10.0)
#define STATUS  "系统函数库改写中"
 
string memory_expression(int m);
 
void create() { seteuid(getuid(this_object())); }
 
int main() {
        float value;
        mapping r;
 
        r = rusage();
        value = SCALE * (r["utime"] + r["stime"]) / uptime();
 
        write("        .__________ 系 统 资 讯 __________.\n");
        write("──────────────────────────\n");
//      write(" Mud 的识别名称：  " + mud_name() + ".\n");
//      write(" Mud 的网路名字：  " + intermud_mud_name() + ".\n");
//      write(" 工作站作业平台：  " + arch() + " \n");
        printf(" CPU 使用百分比：  %f %% 被这个 Mud 使用中.\n", value );
        write(" CPU 的负担状况：  " + query_load_average() + ".\n");
        printf(" 共使用的记忆体：  %s bytes.\n", memory_expression(memory_info()
) );
        write(" 线上使用者总数：  " + sizeof( users() ) + "  个人在线上.\n");
        write(" 载入的物件总数：  " + sizeof( objects() ) + " 个物件.\n");
        write(" 连续执行的时间：  " + CHINESE_D->chinese_period(uptime()) + "\n"
);
        write(" Mud 现在的状态：  " + STATUS + ".\n");
        return 1;
}
 
string memory_expression(int m)
{
        float mem;
 
        mem = m;
        if( mem<1024 ) return m + "";
        if( mem<1024*1024 )
                return sprintf("%.2f K", (float)mem / 1024);
        return sprintf("%.3f M", (float)mem / (1024*1024));
}
 
int help() {
 
   write(@HELP
指令格式：mudinfo
 
这个指令将会显示有关这个 Mud 的一些系统资讯。
 
HELP
        );
         return 1;
}

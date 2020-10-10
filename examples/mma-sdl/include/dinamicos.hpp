#pragma once

class Dinamicos{
    private:
        float tmp, pos, vel, accel;
    public:
        Dinamicos();
        void set_dynamic(float tmp, float pos, float vel, float accel);
        float get_tmp();
        float get_pos();
        float get_vel();
        float get_accel();
};
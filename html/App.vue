<template>
  <main class="container mx-auto text-center">
    <div>
      <ArrowSmallDownIcon />
    </div>
    <div class="grid grid-cols-5 space-x-10 py-12">
      <div v-for="(day, index) in days" :key="index" class="shadow-xl bg-white">
          <div class="text-lg font-bold p-2 border-b">{{ day }}</div>

      </div>
    </div>

    <div class="grid grid-cols-5 space-x-10 py-12">
      <div v-for="(date, index) in dates" :key="index">
              <div class="p-2">{{ date }}</div>
              <div class="bg-blue-100 space-y-2">
              <div v-for="(timeSlot, index) in timeSlots" :key="index" class="p-8 rounded-lg">
                <div class="text-2xl py-2 rounded-lg">{{ timeSlot }}</div>
              </div>
        </div>
      </div>
    </div>


  </main>
</template>



<script setup>
import { ref } from "vue";
import { ArrowSmallUpIcon, ArrowSmallDownIcon } from '@heroicons/vue/24/solid';

const days = ref(["Pondělí", "Úterý", "Středa", "Čtvrtek", "Pátek"]);
const timeSlots = ref(["8:00", "9:00", "10:00", "11:00"]);
const dates = ref(["6.jul", "7.jul", "8.jul", "9.jul", "10.jul"]);



</script>
